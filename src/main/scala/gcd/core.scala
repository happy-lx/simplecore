package simplecore

import chisel3._
import chisel3.util._

class coreIO extends Bundle
{
    val imem = new memory_port_io()
    val dmem = new memory_port_io()
}

class core extends Module {
    val io = IO(new coreIO)

    val dpath = Module(new Dpath())
    val cpath = Module(new Cpath())

    dpath.io.c2d <> cpath.io.c2d
    dpath.io.d2c <> cpath.io.d2c

    io.imem.req.valid := dpath.imem.req.valid
    io.imem.req.bits.addr := dpath.imem.req.bits.addr
    io.imem.req.bits.op := dpath.imem.req.bits.op
    io.imem.req.bits.memen := dpath.imem.req.bits.memen
    io.imem.req.bits.wen := dpath.imem.req.bits.wen

    dpath.imem.resp.valid := io.imem.resp.valid
    cpath.imem.resp.valid := io.imem.resp.valid
    dpath.imem.resp.bits.rdata := io.imem.resp.bits.rdata

    io.dmem.req.valid := dpath.dmem.req.valid
    io.dmem.req.bits.addr := dpath.dmem.req.bits.addr
    io.dmem.req.bits.mask := dpath.dmem.req.bits.mask
    io.dmem.req.bits.op := dpath.dmem.req.bits.op
    io.dmem.req.bits.wdata := dpath.dmem.req.bits.wdata
    io.dmem.req.bits.memen := dpath.dmem.req.bits.memen
    io.dmem.req.bits.wen := dpath.dmem.req.bits.wen

    dpath.dmem.resp.valid := io.dmem.resp.valid
    cpath.dmem.resp.valid := io.dmem.resp.valid
    dpath.dmem.resp.bits.rdata := io.dmem.resp.bits.rdata

}