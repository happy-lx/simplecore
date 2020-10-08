package mycore

import chisel3._
import chisel3.util._
import chisel3.experimental._
import chisel3.experimental.BundleLiterals._
import chisel3.util.experimental.loadMemoryFromFile

import constants.Constraints

class AXI4IO extends Bundle
{   
    //write channel's write address
    val awid = Input(UInt(4.W))
    val awaddr = Input(UInt(AXI_paddr_len.W))
    val awlen = Input(UInt(8.W))
    val awsize = Input(UInt(3.W))
    val awburst = Input(UInt(2.W))
    val awlock = Input(Bool())
    val awcache = Input(UInt(4.W))
    val awprot = Input(UInt(3.W))
    val awqos = Input(UInt(4.W))
    val awregion = Input(UInt(4.W))

    val awvalid = Input(Bool())
    val awready = Output(Bool())

    //read channel's read address
    val arid = Input(UInt(4.W))
    val araddr = Input(UInt(AXI_paddr_len.W))
    val arlen = Input(UInt(8.W))
    val arsize = Input(UInt(3.W))
    val arburst = Input(UInt(2.W))
    val arlock = Input(Bool())
    val arcache = Input(UInt(4.W))
    val arprot = Input(UInt(3.W))
    val arqos = Input(UInt(4.W))
    val arregion = Input(UInt(4.W))

    val arvalid = Input(Bool())
    val arready = Output(Bool())

    //read channel's read data
    val rid = Output(UInt(4.W))
    val rdata = Output(UInt(AXI_data_len.W))
    val rresp = Output(UInt(UInt(2.W)))
    val rlast = Output(Bool())

    val rvalid = Output(Bool())
    val rready = Input(Bool())

    //write channel's write data 
    val wdata = Input(UInt(AXI_data_len.W))
    val wstrb = Input(UInt(AXI_wstrb_len.W))
    val wlast = Input(Bool())
    
    val wvalid = Input(Bool())
    val wready = Output(Bool())

    //write channel's write response 
    val bid = Output(Bool())
    val bresp = Output(UInt(2.W))
    
    val bvalid = Output(Bool())
    val bready = Input(Bool())
}

//a simple version 
class AXI4_Ram(memdir : String = "") extends Bundle
{
    val io = new AXI4IO

    io := DontCare

    val mem = Mem(1 << AXI_ram_len , Vec(8,UInt(8.W)))

    if(memdir != "")
    {
        loadMemoryFromFile(mem,memdir)
    }

    //address in memmory
    val mem_addr = Wire(UInt(AXI_ram_len.W))

    //define the stage of read and write
    val READ_IDLE :: READ_BURST :: Nil = Enum(UInt(),2)

    val WRITE_IDLE :: WRITE_BURST :: WRITE_RESP :: Nil = Enum(UInt(),3)

    val read_state = RegInit(READ_IDLE)
    val write_state = RegInit(WRITE_IDLE)

    //we need to define some registers to hold on infomation from master
    val reg_awaddr = RegInit(0.U(AXI_paddr_len.W))
    val reg_araddr = RegInit(0.U(AXI_paddr_len.W))
    // val reg_wdata  = RegInit(0.U(AXI_data_len.W))
    val wire_wstrb  = WireInit(0.U(AXI_wstrb_len.W))

    //define the action of each state
    switch(read_state)
    {
        is(READ_IDLE)
        {
            io.arready := true.B
            when(io.arvalid)
            {
                //detect a request 
                reg_araddr := io.araddr
                read_state := READ_BURST
            }
        }
        is(READ_BURST)
        {
            io.arready := false.B
            when(io.rready)
            {
                io.rdata := Cat(mem(reg_araddr >> bits_ignore))
                io.rvalid := true.B
                read_state := READ_IDLE
            }
        }
    }

    switch(write_state)
    {
        is(WRITE_IDLE)
        {
            io.wready  := false.B
            io.awready := true.B
            when(io.awvalid)
            {
                reg_awaddr := io.awaddr
                write_state:= WRITE_BURST
            }
        }
        is(WRITE_BURST)
        {
            io.wready  := true.B
            io.awready := false.B
            when(io.wvalid)
            {
                //write mem via info of axi4 bus 
                wire_wstrb := MuxCase(io.wstrb,Array(
                    (io.wstrb === mask_dw) -> io.wstrb,
                    (io.wstrb =\= mask_dw) -> (io.wstrb << reg_awaddr(bits_ignore,0))
                ))

                val wstrb_bools = wire_wstrb.toBools()

                for(i < (0 until 8))
                {
                    when(wstrb_bools(i))
                    {
                        mem(reg_awaddr >> bits_ignore)(i) := io.wdata(i*AXI_byte_len+7 , i*AXI_byte_len)
                    }
                }
                write_state := WRITE_RESP 
            }
        }
        is(WRITE_RESP)
        {
            io.wready  := false.B
            io.awready := false.B

            io.bvalid := true.B
            write_state := WRITE_IDLE
        }
    }



}