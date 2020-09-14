package simplecore

import chisel3._
import chisel3.util._

class top extends Module {
    val io = IO(new Bundle {
        val result = Output(Bool())
    })

    val mycore = Module(new core())
    val mymem = Module(new memorymodule())

    mycore.io.imem <> mymem.io.ports(0)//??
    mycore.io.dmem <> mymem.io.ports(1)//??

    io.result := true.B

    printf("core has been built successfully!")
}

object start 
{
    def main(args: Array[String]): Unit = {
        chisel3.Driver.execute(args, () => new top)
    }
}