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

    //for TLB flush 
    //when satp has been modified flush iTLB and dTLB
    val satp_modified = WireInit(false.B)
    BoringUtils.addSink(satp_modified,"satp_tlb_flush")

    val dec_is_sfencevma = WireInit(false.B)
    val mem_is_sfencevma = WireInit(false.B)
    BoringUtils.addSink(dec_is_sfencevma,"dec_is_sfencevma")
    BoringUtils.addSink(mem_is_sfencevma,"mem_is_sfencevma")

    val iTLB_flush_req = dec_is_sfencevma || satp_modified
    val dTLB_flush_req = mem_is_sfencevma || satp_modified

    val bus_bridge_mem = Module(new Sramlike2AXI4)
    bus_bridge_mem.io.exe_stall := exe_stall
    val bus_bridge_mmio = Module(new Sramlike2AXI4)
    bus_bridge_mmio.io.exe_stall := exe_stall

    val icache = Module(new cache("icache"))
    icache.io.exe_stall := exe_stall
    val dcache = Module(new cache("dcache"))
    dcache.io.exe_stall := exe_stall

    val cache_flush = WireInit(false.B)
    BoringUtils.addSink(cache_flush,"cache_flush")

    icache.io.flush_req := cache_flush
    dcache.io.flush_req := cache_flush

    icache.io.dcache_flush_stall := false.B
    dcache.io.dcache_flush_stall := cpath.io.c2d.cp_pipeline_stall

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
    dmmu.io.info.flush_req := dTLB_flush_req
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
    immu.io.info.flush_req := iTLB_flush_req
    //pf
    cpath.io.imem.valid := immu.io.pf.valid
    cpath.io.imem.instrPageFault := immu.io.pf.instrPageFault
    // -------       mmu end            -------    
    // ------- ------------------------ -------    

    val icache_cross_bar = Module(new cross_bar(false))
    icache_cross_bar.io.exe_stall := exe_stall
    val dcache_cross_bar = Module(new cross_bar(true))
    dcache_cross_bar.io.exe_stall := exe_stall

    val djtu = Module(new DJTU)

    djtu.io.req_IMMU <> immu.io.translate
    djtu.io.req_DMMU <> dcache_cross_bar.io.cache_req
    dmmu.io.translate := DontCare

    dpath.io.c2d := cpath.io.c2d
    cpath.io.d2c := dpath.io.d2c


    // icache_cross_bar.io.cpu_req <> dpath.io.imem
    // icache_cross_bar.io.data_got := !cpath.io.c2d.cp_pipeline_stall
    icache_cross_bar.io.cpu_req <> immu.io.out

    // dcache_cross_bar.io.cpu_req <> dpath.io.dmem
    // dcache_cross_bar.io.data_got := !cpath.io.c2d.cp_pipeline_stall
    dcache_cross_bar.io.cpu_req <> dmmu.io.out

    icache.io.cpu_req <> icache_cross_bar.io.cache_req
    // dcache.io.cpu_req <> dcache_cross_bar.io.cache_req
    dcache.io.cpu_req <> djtu.io.req_Dcache

    icache.io.ram_req <> bus_bridge_mem.io.ports(INTR)
    dcache.io.ram_req <> bus_bridge_mem.io.ports(DATA)

    connect(io.axi4_mem,bus_bridge_mem.io.axi4)

    icache_cross_bar.io.mmio_req <> bus_bridge_mmio.io.ports(INTR)
    dcache_cross_bar.io.mmio_req <> bus_bridge_mmio.io.ports(DATA)

    connect(io.axi4_mmio,bus_bridge_mmio.io.axi4)


    cpath.io.imem.data_valid := immu.io.in.data_valid

    cpath.io.dmem.data_valid := dmmu.io.in.data_valid




}

