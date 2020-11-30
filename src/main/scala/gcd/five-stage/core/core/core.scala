package mycore

import chisel3._
import chisel3.util._
import chisel3.util.experimental.BoringUtils

import constants.Constraints._


class core extends Module {
    val io = IO(new Bundle{
        val axi4_mem  = Flipped(new AXI4IO)
        val axi4_mmio  = Flipped(new AXI4IO)
    })

    io := DontCare

    val dpath = Module(new Dpath())
    val cpath = Module(new Cpath())

    cpath.io.imem := DontCare
    cpath.io.dmem := DontCare

    dpath.io.imem := DontCare
    dpath.io.dmem := DontCare

    val exe_stall = WireInit(false.B)
    BoringUtils.addSink(exe_stall,"exe_stall")

    val satp = WireInit(0.U(64.W))
    BoringUtils.addSink(satp,"satp_val")

    val bus_bridge_mem = Module(new Sramlike2AXI4)
    bus_bridge_mem.io.exe_stall := exe_stall
    val bus_bridge_mmio = Module(new Sramlike2AXI4)
    bus_bridge_mmio.io.exe_stall := exe_stall

    val icache = Module(new cache())
    icache.io.exe_stall := exe_stall
    val dcache = Module(new cache())
    dcache.io.exe_stall := exe_stall

    // -------       mmu begin          -------    
    // ------- ------------------------ -------     
    val dmmu = Module(new MMU("dmmu"))
    //in
    dmmu.io.in.addr := dpath.io.dmem.addr
    dmmu.io.in.mask := dpath.io.dmem.mask
    dmmu.io.in.op := dpath.io.dmem.op
    dmmu.io.in.wdata := dpath.io.dmem.wdata
    dmmu.io.in.memen := dpath.io.dmem.memen
    dmmu.io.in.wen := dpath.io.dmem.wen
    dpath.io.dmem.rdata := dmmu.io.in.rdata
    dpath.io.dmem.data_valid := dmmu.io.in.data_valid
    dmmu.io.in.data_got := !cpath.io.c2d.cp_pipeline_stall
    //info
    dmmu.io.info.isWrite := dpath.io.dmem.isWrite
    dmmu.io.info.satp := satp
    dmmu.io.info.mmu_en := dpath.io.dmem.mmu_en
    //pf
    cpath.io.dmem.valid := dmmu.io.pf.valid
    cpath.io.dmem.loadPageFault := dmmu.io.pf.loadPageFault
    cpath.io.dmem.storePageFault := dmmu.io.pf.storePageFault
    val immu = Module(new MMU("immu"))
    //in
    immu.io.in.addr := dpath.io.imem.addr
    immu.io.in.mask := dpath.io.imem.mask
    immu.io.in.op := dpath.io.imem.op
    immu.io.in.wdata := dpath.io.imem.wdata
    immu.io.in.memen := dpath.io.imem.memen
    immu.io.in.wen := dpath.io.imem.wen
    dpath.io.imem.rdata := immu.io.in.rdata
    dpath.io.imem.data_valid := immu.io.in.data_valid
    immu.io.in.data_got := !cpath.io.c2d.cp_pipeline_stall
    //info
    immu.io.info.isWrite := dpath.io.imem.isWrite
    immu.io.info.satp := satp
    immu.io.info.mmu_en := dpath.io.imem.mmu_en
    //pf
    cpath.io.imem.valid := immu.io.pf.valid
    cpath.io.imem.instrPageFault := immu.io.pf.instrPageFault
    // -------       mmu end            -------    
    // ------- ------------------------ -------    

    val icache_cross_bar = Module(new cross_bar(false))
    icache_cross_bar.io.exe_stall := exe_stall
    val dcache_cross_bar = Module(new cross_bar(true))
    dcache_cross_bar.io.exe_stall := exe_stall

    dpath.io.c2d := cpath.io.c2d
    cpath.io.d2c := dpath.io.d2c


    // icache_cross_bar.io.cpu_req <> dpath.io.imem
    // icache_cross_bar.io.data_got := !cpath.io.c2d.cp_pipeline_stall
    icache_cross_bar.io.cpu_req <> immu.io.out

    // dcache_cross_bar.io.cpu_req <> dpath.io.dmem
    // dcache_cross_bar.io.data_got := !cpath.io.c2d.cp_pipeline_stall
    dcache_cross_bar.io.cpu_req <> dmmu.io.out

    icache.io.cpu_req <> icache_cross_bar.io.cache_req
    dcache.io.cpu_req <> dcache_cross_bar.io.cache_req

    icache.io.ram_req <> bus_bridge_mem.io.ports(INTR)
    dcache.io.ram_req <> bus_bridge_mem.io.ports(DATA)

    connect(io.axi4_mem,bus_bridge_mem.io.axi4)

    icache_cross_bar.io.mmio_req <> bus_bridge_mmio.io.ports(INTR)
    dcache_cross_bar.io.mmio_req <> bus_bridge_mmio.io.ports(DATA)

    connect(io.axi4_mmio,bus_bridge_mmio.io.axi4)


    cpath.io.imem.data_valid := immu.io.in.data_valid

    cpath.io.dmem.data_valid := dmmu.io.in.data_valid

    //axi4 interface
    // io.axi4.awid := bus_bridge.io.axi4.awid
    // io.axi4.awaddr := bus_bridge.io.axi4.awaddr
    // io.axi4.awlen := bus_bridge.io.axi4.awlen
    // io.axi4.awsize := bus_bridge.io.axi4.awsize
    // io.axi4.awburst := bus_bridge.io.axi4.awburst
    // io.axi4.awlock := bus_bridge.io.axi4.awlock
    // io.axi4.awcache := bus_bridge.io.axi4.awcache
    // io.axi4.awprot := bus_bridge.io.axi4.awprot
    // io.axi4.awqos := bus_bridge.io.axi4.awqos
    // io.axi4.awregion := bus_bridge.io.axi4.awregion
    // io.axi4.awvalid := bus_bridge.io.axi4.awvalid

    // bus_bridge.io.axi4.awready := io.axi4.awready

    // io.axi4.arid := bus_bridge.io.axi4.arid
    // io.axi4.araddr := bus_bridge.io.axi4.araddr
    // io.axi4.arlen := bus_bridge.io.axi4.arlen
    // io.axi4.arsize := bus_bridge.io.axi4.arsize
    // io.axi4.arburst := bus_bridge.io.axi4.arburst
    // io.axi4.arlock := bus_bridge.io.axi4.arlock
    // io.axi4.arcache := bus_bridge.io.axi4.arcache
    // io.axi4.arprot := bus_bridge.io.axi4.arprot
    // io.axi4.arqos := bus_bridge.io.axi4.arqos
    // io.axi4.arregion := bus_bridge.io.axi4.arregion
    // io.axi4.arvalid := bus_bridge.io.axi4.arvalid

    // bus_bridge.io.axi4.arready := io.axi4.arready

    // bus_bridge.io.axi4.rid := io.axi4.rid
    // bus_bridge.io.axi4.rdata := io.axi4.rdata
    // bus_bridge.io.axi4.rresp := io.axi4.rresp
    // bus_bridge.io.axi4.rlast := io.axi4.rlast
    // bus_bridge.io.axi4.rvalid := io.axi4.rvalid

    // io.axi4.rready := bus_bridge.io.axi4.rready

    // io.axi4.wdata := bus_bridge.io.axi4.wdata
    // io.axi4.wstrb := bus_bridge.io.axi4.wstrb
    // io.axi4.wlast := bus_bridge.io.axi4.wlast
    // io.axi4.wvalid := bus_bridge.io.axi4.wvalid
    
    // bus_bridge.io.axi4.wready := io.axi4.wready

    // bus_bridge.io.axi4.bid := io.axi4.bid
    // bus_bridge.io.axi4.bresp := io.axi4.bresp
    // bus_bridge.io.axi4.bvalid := io.axi4.bvalid

    // io.axi4.bready := bus_bridge.io.axi4.bready

    // connect(io.axi4,bus_bridge.io.axi4)




}

