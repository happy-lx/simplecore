package mycore

import chisel3._
import chisel3.util._
import chisel3.util.experimental.BoringUtils

class difftestIO extends Bundle
{
    val r = Output(Vec(32,UInt(64.W)))
    val pc_data = Output(UInt(64.W))
    val mstatus = Output(UInt(64.W))
    val isredir = Output(Bool())
    val is_retire = Output(Bool())
    val instr_in_wb = Output(UInt(32.W))
    val is_valid = Output(Bool())
    // val pc_sel = Output(Bool())
}

class top extends Module {
    val io = IO(new Bundle {
        val diff = new difftestIO
    })

    val mycore = Module(new core)
    val mymem  = Module(new AXI4_Ram("./test1"))

    mycore.io.axi4 <> mymem.io.axi4

    val difftestwire = WireInit(0.U.asTypeOf(new difftestIO))

    BoringUtils.addSink(difftestwire.r,"regs")
    BoringUtils.addSink(difftestwire.pc_data,"pc_data")
    BoringUtils.addSink(difftestwire.mstatus,"mstatus")
    BoringUtils.addSink(difftestwire.isredir,"isredir")
    BoringUtils.addSink(difftestwire.is_retire,"is_retire")
    // BoringUtils.addSink(difftestwire.pc_sel,"pc_sel")
    BoringUtils.addSink(difftestwire.instr_in_wb,"dp_wb_reg_instr")
    BoringUtils.addSink(difftestwire.is_valid,"cs_valid_inst")

    io.diff := difftestwire

    // io.pc_data := mycore.dpath.reg_pc

}

object start 
{
    def main(args: Array[String]): Unit = {
        chisel3.Driver.execute(args, () => {new top
        })
    }
}