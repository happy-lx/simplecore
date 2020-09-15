package simplecore

import chisel3._
import chisel3.util._
import chisel3.util.experimental.BoringUtils

class difftestIO extends Bundle
{
    val r = Output(Vec(32,UInt(64.W)))
    val pc_data = Output(UInt(64.W))
}

class top extends Module {
    val io = IO(new Bundle {
        val diff = new difftestIO
    })

    val mycore = Module(new core)

    val difftestwire = WireInit(0.U.asTypeOf(new difftestIO))

    BoringUtils.addSink(difftestwire.r,"regs")
    BoringUtils.addSink(difftestwire.pc_data,"pc_data")

    io.diff := difftestwire

    // io.pc_data := mycore.dpath.reg_pc

}

object start 
{
    def main(args: Array[String]): Unit = {
        chisel3.Driver.execute(args, () => new top)
    }
}