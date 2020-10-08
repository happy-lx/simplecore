package mycore

import chisel3._
import chisel3.util._
import chisel3.experimental._
import chisel3.experimental.BundleLiterals._

import constants.RV64I._
import constants.RV64M._
import constants.Constraints._

class Sramlike2AXI4 extends Module
{
    val io = IO(new Bundle
    {
        val ports = Vec(2,Flipped(new sram_like_io))

        val axi4 = Flipped(new AXI4IO)
    })

    io := DontCare
    //code that change sram-like interface to AXI4 interface

    //to detect if there is a request from sram-like ports
    val has_request = RegInit(false.B)
    val has_data_request = WireInit(false.B)
    val has_inst_request = WireInit(false.B)

    val do_data_request = RegInit(false.B)
    val do_inst_request = RegInit(false.B)

    //addr for read or write has been recieved
    val addr_recv = RegInit(false.B)
    //data for write has been recieved
    val data_recv = RegInit(false.B)

    //write or read infomation register
    val info_addr = Reg(UInt(AXI_paddr_len.W))
    val info_mask = Reg(UInt(8.W))
    val info_op   = Reg(UInt(3.W))
    val info_wdata= Reg(UInt(64.W))
    val info_wen  = Reg(Bool())

    //indicate whether this burst has down or not 
    //for read : read data has been fetched
    //for write : write data has been written
    val data_back = WireInit(false.B)

    io.ports(DATA).data_valid := data_back && do_data_request
    io.ports(INTR).data_valid := data_back && do_inst_request

    when(!has_request)
    {
        when(io.ports(DATA).memen | io.ports(INTR).memen)
        {
            has_request := true.B
        }.otherwise
        {
            has_request := false.B
        }
    }.otherwise
    {
        when(data_back)
        {
            has_request := false.B
        }.otherwise
        {
            has_request := has_request
        }
    }
    //to check whether it's a read request or a write request
    //the signal should hold until the burst has down
    
    has_data_request := io.ports(DATA).memen
    has_inst_request := io.ports(INTR).memen && !io.ports(DATA).memen

    //to judge we process which request from IF or from MEM ?
    //we process DATA request first and delay INTR request
    when(!has_request)
    {
        do_data_request := has_data_request
        do_inst_request := has_inst_request
    }.otherwise
    {
        when(data_back)
        {
            do_data_request := false.B
            do_inst_request := false.B
        }.otherwise
        {
            do_data_request := do_data_request
            do_inst_request := do_inst_request
        }
        
    }

    //if there is a request , we should put the infomation into registers
    when(!has_request)
    {
        when(has_data_request)
        {
            info_addr := io.ports(DATA).addr
            info_mask := io.ports(DATA).mask
            info_op   := io.ports(DATA).op
            info_wdata:= io.ports(DATA).wdata
            info_wen  := io.ports(DATA).wen  

        }.elsewhen(has_inst_request)
        {
            info_addr := io.ports(INTR).addr
            info_mask := io.ports(INTR).mask
            info_op   := io.ports(INTR).op
            info_wdata:= io.ports(INTR).wdata
            info_wen  := io.ports(INTR).wen  
        }
    }.otherwise
    {
        //hold on
        info_addr := info_addr
        info_mask := info_mask
        info_op   := info_op
        info_wdata:= info_wdata
        info_wen  := info_wen
    }

    //so first to check whether we will make a hand shake of the addr channel
    when(!data_back)
    {
        when( (io.axi4.awvalid && io.axi4.awready) || (io.axi4.arvalid && io.axi4.arready) )
        {
            addr_recv := true.B
        }.otherwise
        {
            addr_recv := addr_recv
        }

        when( (io.axi4.wvalid && io.axi4.wready) )
        {
            data_recv := true.B
        }.otherwise
        {
            data_recv := data_recv
        }

    }.otherwise
    {
        //data is back os the addr hand shake is useless
        addr_recv := false.B
        data_recv := false.B
    }
    //if the hand shake has been made , we should convert sram-like signals to AXI4 signals

    //aw channel
    io.axi4.awid := 0.U(4.W)
    io.axi4.awaddr := info_addr
    io.axi4.awlen := 0.U(8.W)
    io.axi4.awsize := 3.U(3.W)//?
    io.axi4.awburst := 0.U(2.W)
    io.axi4.awlock := false.B
    io.axi4.awcache := 0.U(4.W)
    io.axi4.awprot := 0.U(3.W)
    io.axi4.awqos := 0.U(4.W)
    io.axi4.awregion := 0.U(4.W)

    io.axi4.awvalid := (has_request && info_wen && !addr_recv)

    //ar channel
    io.axi4.arid := 0.U(4.W)
    io.axi4.araddr := info_addr
    io.axi4.arlen := 0.U(8.W)
    io.axi4.arsize := 3.U(3.W)//?
    io.axi4.arburst := 0.U(2.W)
    io.axi4.arlock := false.B
    io.axi4.arcache := 0.U(4.W)
    io.axi4.arprot := 0.U(3.W)
    io.axi4.arqos := 0.U(4.W)
    io.axi4.arregion := 0.U(4.W)

    io.axi4.arvalid := (has_request && !info_wen && !addr_recv)

    //r channel
    io.axi4.rready := true.B

    //w channel
    io.axi4.wdata := info_wdata
    io.axi4.wstrb := info_mask
    io.axi4.wvalid := (has_request && info_wen && !data_recv)
    io.axi4.wlast := true.B

    //b channel
    io.axi4.bready := true.B

    //get read result from r channel
    when(do_data_request && data_back && !info_wen)
    {
        io.ports(DATA).rdata := MuxCase(io.axi4.rdata,Array(
                (info_op === op_b) -> Cat(Fill(56,io.axi4.rdata(7)),io.axi4.rdata(7,0)),
                (info_op === op_bu) -> Cat(Fill(56,0.U(1.W)),io.axi4.rdata(7,0)),
                (info_op === op_hb) -> Cat(Fill(48,io.axi4.rdata(15)),io.axi4.rdata(15,0)),
                (info_op === op_hbu) -> Cat(Fill(48,0.U(1.W)),io.axi4.rdata(15,0)),
                (info_op === op_w) -> Cat(Fill(32,io.axi4.rdata(31)),io.axi4.rdata(31,0)),
                (info_op === op_wu) -> Cat(Fill(32,0.U(1.W)),io.axi4.rdata(31,0))
                ))
    }.elsewhen(do_inst_request && data_back && !info_wen)
    {
        io.ports(INTR).rdata := MuxCase(io.axi4.rdata,Array(
                (info_op === op_b) -> Cat(Fill(56,io.axi4.rdata(7)),io.axi4.rdata(7,0)),
                (info_op === op_bu) -> Cat(Fill(56,0.U(1.W)),io.axi4.rdata(7,0)),
                (info_op === op_hb) -> Cat(Fill(48,io.axi4.rdata(15)),io.axi4.rdata(15,0)),
                (info_op === op_hbu) -> Cat(Fill(48,0.U(1.W)),io.axi4.rdata(15,0)),
                (info_op === op_w) -> Cat(Fill(32,io.axi4.rdata(31)),io.axi4.rdata(31,0)),
                (info_op === op_wu) -> Cat(Fill(32,0.U(1.W)),io.axi4.rdata(31,0))
                ))
    }.otherwise
    {
        io.ports(DATA).rdata := DontCare
        io.ports(INTR).rdata := DontCare
    }

    //check if the burst is down 
    data_back := has_request && addr_recv && ( (io.axi4.rvalid && io.axi4.rready) || (io.axi4.bvalid && io.axi4.bready) )
}
