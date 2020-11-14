package mycore

import chisel3._
import chisel3.util._
import chisel3.experimental._
import chisel3.experimental.BundleLiterals._
import chisel3.util.experimental.loadMemoryFromFile
import chisel3.util.experimental.BoringUtils

import constants.Constraints._

class AXI4_UART extends Module
{
    val io = IO(new AXI4IO)

    io := DontCare

    val uart = Module(new UART())

    uart.io := DontCare
    uart.io.putc := false.B

    val uart_control = RegInit(0.U(32.W))
    val uart_state = RegInit(1.U(32.W))

    val (read_idle : UInt) :: (read_burst : UInt) :: (read_resp : UInt) :: Nil = Enum(3)

    val (write_idle : UInt) :: (write_burst : UInt) :: (write_resp : UInt) :: Nil = Enum(3)

    val read_state = RegInit(read_idle)
    val write_state = RegInit(write_idle)

    //we need to define some registers to hold on infomation from master
    val reg_awaddr = RegInit(0.U(AXI_paddr_len.W))
    val reg_araddr = RegInit(0.U(AXI_paddr_len.W))
    // val reg_wdata  = RegInit(0.U(AXI_data_len.W))
    val wire_wstrb  = WireInit(0.U(AXI_wstrb_len.W))
    val temp_read_data = Reg(UInt(64.W))

    //define the action of each state
    switch(read_state)
    {
        is(read_idle)
        {
            io.arready := true.B
            io.rvalid := false.B
            uart.io.getc := false.B
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
            io.rvalid  := false.B
            
            // io.rdata := Cat((VecInit.tabulate(8){i => mem(reg_araddr + i.U)}).reverse)
            when(reg_araddr === uart_read_addr.U)
            {
                //uart read
                uart.io.getc := true.B
                temp_read_data := Cat(Fill(56,0.U(1.W)),uart.io.ch_get)
            }.otherwise
            {
                uart.io.getc := false.B
                when(reg_araddr === uart_state_addr.U)
                {
                     //read state
                    temp_read_data := Cat(Fill(32,0.U(1.W)),uart_state)
                 }.elsewhen(reg_araddr === uart_contr_addr.U)
                 {
                     //read control
                     temp_read_data := Cat(Fill(32,0.U(1.W)),uart_control)
                 }
            }
                read_state := read_resp
            
        }
        is(read_resp)
        {
            io.arready := false.B
            uart.io.getc := false.B
            io.rdata := temp_read_data
            when(io.rready)
            {
                io.rvalid  := true.B
                read_state := read_idle
            }.otherwise
            {
                io.rvalid  := false.B
                read_state := read_resp
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
            uart.io.putc := false.B
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
                
                wire_wstrb := io.wstrb

                
                val wstrb_bools = VecInit.tabulate(8){i => (wire_wstrb(i) === 1.U)}
                val write_data = (VecInit.tabulate(8){i => io.wdata(i*8+7,i*8)})
                
                when(reg_awaddr === uart_write_addr.U)
                {
                    //uart write
                    uart.io.ch_put := io.wdata(7,0)
                    uart.io.putc := true.B
                }.otherwise
                {
                    uart.io.putc := false.B
                    when(reg_awaddr === uart_state_addr.U)
                    {
                        //write state
                        uart_state := io.wdata(31,0)
                    }.elsewhen(reg_awaddr === uart_contr_addr.U)
                    {
                        //write control
                        uart_control := io.wdata(31,0)
                    }
                }

                write_state := write_resp 
            }
        }
        is(write_resp)
        {
            io.wready  := false.B
            io.awready := false.B
            uart.io.putc := false.B

            when(io.bready)
            {
                io.bvalid := true.B
                write_state := write_idle
            }.otherwise
            {
                io.bvalid := false.B
                write_state := write_resp
            }
        }
    }
}