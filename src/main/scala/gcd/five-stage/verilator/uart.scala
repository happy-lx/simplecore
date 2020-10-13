package mycore

import chisel3._
import chisel3.util._
import chisel3.experimental._
import chisel3.experimental.BundleLiterals._
import chisel3.util.experimental.loadMemoryFromFile
import chisel3.util.experimental.BoringUtils

import constants.Constraints._

class UARTHelper extends BlackBox with HasBlackBoxInline
{
    val io = IO(new Bundle
    {
        val clk = Input(Bool())
        val getc = Input(Bool())
        val putc = Input(Bool())
        val ch_put = Input(UInt(8.W))
        val ch_get = Output(UInt(8.W))
    })

    setInline( "UARTHelper.v",
    s"""
      |import "DPI-C" function void uart_getchar(
      |     output byte ch    
      |);
      |import "DPI-C" function void uart_putchar(
      |     input  byte ch    
      |);
      |
      |module UARTHelper(
      |  input clk,
      |  input getc,
      |  input putc,
      |  input [7:0] ch_put,
      |  output reg [7:0] ch_get
      |);
      |
      |  always@(posedge clk) begin
      |      if(getc) uart_getchar(ch_get);
      |      if(putc) uart_putchar(ch_put);
      |  end 
      |
      |endmodule
     """.stripMargin
    )
}

class UART extends Module
{
    val io = IO(new Bundle{
        val state_out = Output(UInt(32.W))
        val state_in  = Input(UInt(32.W))
        val control_out = Output(UInt(32.W))
        val control_in  = Input(UInt(32.W))
        val ch_get    = Output(UInt(8.W))
        val ch_put    = Input(UInt(8.W))
        val getc      = Input(Bool())
        val putc      = Input(Bool())
    })

    io := DontCare

    val uart_helper = Module(new UARTHelper)
    val uart_control = RegInit(0.U(32.W))
    val uart_state = RegInit(1.U(32.W))

    uart_helper.io.clk := clock.asBool
    uart_helper.io.getc := io.getc
    uart_helper.io.putc := io.putc
    uart_helper.io.ch_put := io.ch_put
    io.ch_get := uart_helper.io.ch_get

    io.control_out := uart_control
    uart_control := io.control_in
    io.state_out := uart_state
    uart_state := io.state_in

}