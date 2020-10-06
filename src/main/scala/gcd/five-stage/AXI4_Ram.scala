package mycore

import chisel3._
import chisel3.util._
import chisel3.experimental._
import chisel3.experimental.BundleLiterals._

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