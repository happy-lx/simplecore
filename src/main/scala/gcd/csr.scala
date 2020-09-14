package simpleshell

import chisel3._
import chisel3.util._

import constants.(CSRConstants,Constraints)._
import constants.Cause._

class MIP extends Bundle
{
    //可以处理的中断
    val zero = Bool()
    val ssi = Bool()
    val msi = Bool()
    val sti = Bool()
    val mti = Bool()
    val sei = Bool()
    val mei = Bool()
}

class Mstatus extends Bundle
{
    val sd = Bool()
    val zero1 = UInt(40.W)
    val tsr = Bool()
    val tw = Bool()
    val tvm = Bool()
    val mxr = Bool()
    val sum = Bool()
    val mprv = Bool()
    val xs = UInt(2.W) 
    val fs = UInt(2.W) 
    val mpp = UInt(2.W) 
    val zero2 = UInt(2.W) 
    val spp = Bool()
    val mpie = Bool()
    val zero3 = Bool()
    val spie = Bool()
    val upie = Bool()
    val mie = Bool()
    val zero4 = Bool()
    val sie = Bool()
    val uie = Bool()
}

class CSRIO extends Bundle
{
    val instruction = Input(32.W)
    val csr_op = Input(csr_op_sz)
    val data_in = Input(64.W)
    val hasException = Input(Bool())
    val hasStall = Input(Bool())
    val in_pc = Input(64.W)

    val redir_target = Output(64.W)
    val csr_info = Output(64.W)
    val isredir = Output(Bool())
}

class CSRfile extends Module
{
    val io = IO(new CSRIO)

    //当是特定的操作，并且没有异常发生，也没有阻塞的时候，才可以写
    val wen = WireInit((io.csr_op === csr_w || io.csr_op === csr_s || io.csr_op === csr_c) && !io.hasException && !io.hasStall)

    val mtvec = RegInit(UInt(64.W),0.U)
    val mepc = RegInit(UInt(64.W),0.U)
    val mcause = RegInit(UInt(64.W),0x8000000000000000L.U)
    val mie = RegInit(0.U.asTypeOf(new MIP()))
    val mip = RegInit(0.U.asTypeOf(new MIP()))
    val mtval = RegInit(0.U(64.W))
    val mscratch = RegInit(0.U(64.W))
    val mstatus = RegInit(0.U.asTypeOf(new Mstatus()))
    val mtimecmp = RegInit(64.W)
    val mtime = RegInit(64.W)//??

    val prv_now = WireInit(PRV_M)


}

