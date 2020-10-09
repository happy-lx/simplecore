package mycore

import chisel3._
import chisel3.util._
import chisel3.experimental._
import chisel3.experimental.BundleLiterals._
import chisel3.util.experimental.loadMemoryFromFile

import constants.Constraints._

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
    val rresp = Output(UInt(2.W))
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

//might be a problem
class word extends Bundle
{
    val bytes = Vec(8,UInt(8.W))
}

//a simple version 
class AXI4_Ram(memdir : String = "") extends Module
{
    val io = IO(new AXI4IO)

    io := DontCare

    val mem = Mem(1 << AXI_real_addr_len ,UInt(8.W))

    if(memdir != "")
    {
        loadMemoryFromFile(mem,memdir)
    }

    //address in memmory

    //define the stage of read and write
    val (read_idle : UInt) :: (read_burst : UInt) :: Nil = Enum(2)

    val (write_idle : UInt) :: (write_burst : UInt) :: (write_resp : UInt) :: Nil = Enum(3)

    val read_state = RegInit(read_idle)
    val write_state = RegInit(write_idle)

    //we need to define some registers to hold on infomation from master
    val reg_awaddr = RegInit(0.U(AXI_real_addr_len.W))
    val reg_araddr = RegInit(0.U(AXI_real_addr_len.W))
    // val reg_wdata  = RegInit(0.U(AXI_data_len.W))
    val wire_wstrb  = WireInit(0.U(AXI_wstrb_len.W))

    val wire_word = WireInit(0.U(64.W).asTypeOf(new word))

    //define the action of each state
    switch(read_state)
    {
        is(read_idle)
        {
            io.arready := true.B
            when(io.arvalid)
            {
                //detect a request 
                reg_araddr := io.araddr
                read_state := read_burst
            }
        }
        is(read_burst)
        {
            io.arready := false.B
            when(io.rready)
            {
                io.rdata := Cat((VecInit.tabulate(8){i => mem(reg_araddr + i.U)}).reverse)
                io.rvalid := true.B
                read_state := read_idle
            }
        }
    }

    switch(write_state)
    {
        is(write_idle)
        {
            io.wready  := false.B
            io.awready := true.B
            io.bvalid := false.B
            when(io.awvalid)
            {
                reg_awaddr := io.awaddr
                write_state:= write_burst
            }
        }
        is(write_burst)
        {
            io.wready  := true.B
            io.awready := false.B
            io.bvalid := false.B
            when(io.wvalid)
            {
                //write mem via info of axi4 bus 
                // wire_wstrb := MuxCase(io.wstrb,Array(
                //     (io.wstrb === mask_dw) -> io.wstrb,
                //     (io.wstrb =/= mask_dw) -> (io.wstrb << reg_awaddr(bits_ignore,0))
                // ))
                wire_wstrb := io.wstrb

                val wstrb_bools = wire_wstrb.asBools()
                val write_data = (VecInit.tabulate(8){i => io.wdata(i*8+7,i*8)})
                // wire_word := mem(reg_awaddr >> bits_ignore).asTypeOf(new word)

                // for(i <- (0 until 8))
                // {
                //     when(wstrb_bools(i))
                //     {
                //         //or wire_word.bytes(8-i) 
                //         wire_word.bytes(i) := io.wdata(i*AXI_byte_len+7 , i*AXI_byte_len)
                //     }
                // }
                
                // mem(reg_awaddr >> bits_ignore) := wire_word.asUInt()


                for(i <- (0 until 8))
                {
                    when(wstrb_bools(i))
                    {
                        mem(reg_awaddr + i.U) := write_data(i)
                    }
                }

                write_state := write_resp 
            }
        }
        is(write_resp)
        {
            io.wready  := false.B
            io.awready := false.B
            io.bvalid := true.B

            when(io.bready)
            {
                write_state := write_idle
            }
        }
    }



}