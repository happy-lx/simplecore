package simplecore

import chisel3._
import chisel3.util._

// class coreIO extends Bundle
// {
//     val imem = new memory_port_io()
//     val dmem = new memory_port_io()
// }

class core extends Module {
    val io = IO(new Bundle{
        val result = Output(Bool())
    })

    io := DontCare

    val dpath = Module(new Dpath())
    val cpath = Module(new Cpath())
    val mymem = Module(new memorymodule())

    dpath.io.c2d <> cpath.io.c2d
    dpath.io.d2c <> cpath.io.d2c
    
    mymem.io.ports(0).req <> dpath.io.imem.req
    mymem.io.ports(0).resp <> dpath.io.imem.resp
    mymem.io.ports(0).req <> cpath.io.imem.req
    mymem.io.ports(0).resp <> cpath.io.imem.resp

    mymem.io.ports(1).req <> dpath.io.dmem.req
    mymem.io.ports(1).resp <> dpath.io.dmem.resp
    mymem.io.ports(1).req <> cpath.io.dmem.req
    mymem.io.ports(1).resp <> cpath.io.dmem.resp

    // mymem.io.ports(0) <> dpath.io.imem
    // mymem.io.ports(0) <> cpath.io.imem

    // mymem.io.ports(1) <> dpath.io.dmem
    // mymem.io.ports(1) <> cpath.io.dmem

    io.result := true.B

    printf("core has been built!")

    // io.imem.req.valid := dpath.io.imem.req.valid
    // io.imem.req.bits.addr := dpath.io.imem.req.bits.addr
    // io.imem.req.bits.op := dpath.io.imem.req.bits.op
    // io.imem.req.bits.memen := dpath.io.imem.req.bits.memen
    // io.imem.req.bits.wen := dpath.io.imem.req.bits.wen

    // dpath.io.imem.resp.valid := io.imem.resp.valid
    // cpath.io.imem.resp.valid := io.imem.resp.valid
    // dpath.io.imem.resp.bits.rdata := io.imem.resp.bits.rdata

    // io.dmem.req.valid := dpath.io.dmem.req.valid
    // io.dmem.req.bits.addr := dpath.io.dmem.req.bits.addr
    // io.dmem.req.bits.mask := dpath.io.dmem.req.bits.mask
    // io.dmem.req.bits.op := dpath.io.dmem.req.bits.op
    // io.dmem.req.bits.wdata := dpath.io.dmem.req.bits.wdata
    // io.dmem.req.bits.memen := dpath.io.dmem.req.bits.memen
    // io.dmem.req.bits.wen := dpath.io.dmem.req.bits.wen

    // dpath.io.dmem.resp.valid := io.dmem.resp.valid
    // cpath.io.dmem.resp.valid := io.dmem.resp.valid
    // dpath.io.dmem.resp.bits.rdata := io.dmem.resp.bits.rdata

}

// object start 
// {
//     def main(args: Array[String]): Unit = {
//         chisel3.Driver.execute(args, () => new memorymodule)
//     }
// }