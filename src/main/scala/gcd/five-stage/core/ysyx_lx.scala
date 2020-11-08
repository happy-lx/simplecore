package mycore

import chisel3._
import chisel3.util._
import chisel3.experimental._
import chisel3.experimental.BundleLiterals._
import chisel3.util.experimental.loadMemoryFromFile
import chisel3.util.experimental.BoringUtils

import constants.Constraints._

object connect
{
    def apply(top : AXI4IO, slave : AXI4IO) = {
        top.awid := slave.awid
        top.awaddr := slave.awaddr
        top.awlen := slave.awlen
        top.awsize := slave.awsize
        top.awburst := slave.awburst
        top.awlock := slave.awlock
        top.awcache := slave.awcache
        top.awprot := slave.awprot
        top.awqos := slave.awqos
        top.awregion := slave.awregion
        top.awuser := slave.awuser

        top.awvalid := slave.awvalid
        slave.awready := top.awready

        top.arid := slave.arid
        top.araddr := slave.araddr
        top.arlen := slave.arlen
        top.arsize := slave.arsize
        top.arburst := slave.arburst
        top.arlock := slave.arlock
        top.arcache := slave.arcache
        top.arprot := slave.arprot
        top.arqos := slave.arqos
        top.arregion := slave.arregion
        top.aruser := slave.aruser

        top.arvalid := slave.arvalid
        slave.arready := top.arready

        slave.rid := top.rid
        slave.rdata := top.rdata
        slave.rresp := top.rresp
        slave.rlast := top.rlast

        slave.rvalid := top.rvalid
        top.rready := slave.rready

        top.wdata := slave.wdata
        top.wstrb := slave.wstrb
        top.wlast := slave.wlast

        top.wvalid := slave.wvalid
        slave.wready := top.wready

        slave.bid := top.bid
        slave.bresp := top.bresp

        slave.bvalid := top.bvalid
        top.bready := slave.bready

    }
    
}

class ysyx_lx extends Module
{
    val io = IO(new Bundle
    {
        val mem = Flipped(new AXI4IO)
        val mmio = Flipped(new AXI4IO)
    })

    val core = Module(new core)
    val slave = Module(new AXIslave)

    core.io.axi4 <> slave.io.axi4_in

    connect(io.mem,slave.io.axi4_mem)
    connect(io.mmio,slave.io.axi4_mmio)
}



