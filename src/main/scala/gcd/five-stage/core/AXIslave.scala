package mycore

import chisel3._
import chisel3.util._
import chisel3.experimental._
import chisel3.experimental.BundleLiterals._
import chisel3.util.experimental.BoringUtils

import constants.RV64I._
import constants.RV64M._
import constants.Constraints._

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
    val awuser = Input(Bool())

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
    val aruser = Input(Bool())

    val arvalid = Input(Bool())
    val arready = Output(Bool())

    //read channel's read data
    val rid = Output(UInt(4.W))
    val rdata = Output(UInt(AXI_data_len.W))
    val rresp = Output(UInt(2.W))
    val rlast = Output(Bool())
    val ruser = Output(Bool())

    val rvalid = Output(Bool())
    val rready = Input(Bool())

    //write channel's write data 
    val wdata = Input(UInt(AXI_data_len.W))
    val wstrb = Input(UInt(AXI_wstrb_len.W))
    val wlast = Input(Bool())
    
    val wvalid = Input(Bool())
    val wready = Output(Bool())

    //write channel's write response 
    val bid = Output(UInt(4.W))
    val bresp = Output(UInt(2.W))
    val buser = Output(Bool())
    
    val bvalid = Output(Bool())
    val bready = Input(Bool())
}

class AXIslave_io extends Bundle
{
    val axi4_in = new AXI4IO
    val axi4_mem = Flipped(new AXI4IO)
    val axi4_mmio = Flipped(new AXI4IO)

    val time_interrupt = Output(Bool())
}

object shutdownAXI
{
    def apply(axi : AXI4IO) = {
        axi.awid := 0.U
        axi.awaddr := 0.U
        axi.awlen := 0.U
        axi.awsize := 0.U
        axi.awburst := 0.U
        axi.awlock := 0.U
        axi.awcache := 0.U
        axi.awprot := 0.U
        axi.awqos := 0.U
        axi.awregion := 0.U
        axi.awvalid := 0.U
        axi.awuser := 0.U
        axi.arid := 0.U
        axi.araddr := 0.U
        axi.arlen := 0.U
        axi.arsize := 0.U
        axi.arburst := 0.U
        axi.arlock := 0.U
        axi.arcache := 0.U
        axi.arprot := 0.U
        axi.arqos := 0.U
        axi.arregion := 0.U
        axi.arvalid := 0.U
        axi.aruser := 0.U
        axi.rready := 0.U
        axi.wdata := 0.U
        axi.wstrb := 0.U
        axi.wlast := 0.U
        axi.wvalid := 0.U
        axi.bready := 0.U
    }
}

class AXIslave extends Module
{
    val io = IO(new AXIslave_io)

    io := DontCare

    //mtimecmp mtime initializa
    //TODO:use mask when write
    val reg_mtimecmp = RegInit(0.U(64.W))
    val reg_mtime = RegInit(0.U(64.W))

    //make mtime to incline 
    val freq = RegInit(40.U(16.W))
    val inc = RegInit(1.U(16.W))

    val cnt = RegInit(0.U(16.W))
    val nextcnt = cnt + 1.U
    val has_time_interrupt = WireInit(false.B)

    cnt := Mux(nextcnt === freq,0.U,nextcnt)

    when(nextcnt === freq)
    {
        reg_mtime := reg_mtime + inc
    }

    has_time_interrupt := Mux(reg_mtime >= reg_mtimecmp , true.B , false.B)

    // BoringUtils.addSource(has_time_interrupt,"time_interrupt")
    io.time_interrupt := has_time_interrupt

    val (read_idle : UInt) :: (read_burst : UInt) :: (read_resp : UInt) :: Nil = Enum(3)

    val (write_idle : UInt) :: (write_burst : UInt) :: (write_resp : UInt) :: Nil = Enum(3)

    val read_state = RegInit(read_idle)
    val write_state = RegInit(write_idle)

    //we need to define some registers to hold on infomation from master
    val reg_awaddr = RegInit(0.U(AXI_paddr_len.W))
    val reg_araddr = RegInit(0.U(AXI_paddr_len.W))
    // val reg_wdata  = RegInit(0.U(AXI_data_len.W))
    val wire_wstrb  = WireInit(0.U(AXI_wstrb_len.W))

    val temp_read_data = Reg(UInt(64.W))

    when(io.axi4_in.araddr === mtimecmp_addr.U || io.axi4_in.araddr === mtime_addr.U || io.axi4_in.awaddr === mtimecmp_addr.U || io.axi4_in.awaddr === mtime_addr.U)
    {
        //read and write mtime and mtimecmp
        io.axi4_mem := DontCare
        io.axi4_mmio := DontCare

        switch(read_state)
        {
            is(read_idle)
            {
                io.axi4_in.arready := true.B
                io.axi4_in.rvalid := false.B
                when(io.axi4_in.arvalid)
                {
                    //detect a request 
                    reg_araddr := io.axi4_in.araddr
                    read_state := read_burst
                }
            }
            is(read_burst)
            {
                io.axi4_in.arready := false.B
                io.axi4_in.rvalid  := false.B
                
                when(reg_araddr === mtimecmp_addr.U)
                {
                    //read mtimecmp
                    temp_read_data := reg_mtimecmp
                }.elsewhen(reg_araddr === mtime_addr.U)
                {
                    //read mtime   
                    temp_read_data := reg_mtime
                }
                read_state := read_resp
                
            }
            is(read_resp)
            {
                io.axi4_in.arready := false.B
                io.axi4_in.rdata := temp_read_data
                when(io.axi4_in.rready)
                {
                    io.axi4_in.rvalid  := true.B
                    read_state := read_idle
                }.otherwise
                {
                    io.axi4_in.rvalid  := false.B
                    read_state := read_resp
                }
            }
        }

        switch(write_state)
        {
            is(write_idle)
            {
                io.axi4_in.wready  := false.B
                io.axi4_in.awready := true.B
                io.axi4_in.bvalid := false.B
                when(io.axi4_in.awvalid)
                {
                    reg_awaddr := io.axi4_in.awaddr
                    write_state:= write_burst
                }
            }
            is(write_burst)
            {
                io.axi4_in.wready  := true.B
                io.axi4_in.awready := false.B
                io.axi4_in.bvalid := false.B
                when(io.axi4_in.wvalid)
                {
                    wire_wstrb := io.axi4_in.wstrb

                    val wstrb_bools = VecInit.tabulate(8){i => (wire_wstrb(i) === 1.U)}
                    val write_data = (VecInit.tabulate(8){i => io.axi4_in.wdata(i*8+7,i*8)})
                    
                    when(reg_awaddr === mtimecmp_addr.U)
                    {
                        //wtire mtimecmp
                        reg_mtimecmp := io.axi4_in.wdata
                    }.elsewhen(reg_awaddr === mtime_addr.U)
                    {
                        //write mtime   
                        reg_mtime := io.axi4_in.wdata
                    }

                    write_state := write_resp 
                }
            }
            is(write_resp)
            {
                io.axi4_in.wready  := false.B
                io.axi4_in.awready := false.B

                when(io.axi4_in.bready)
                {
                    io.axi4_in.bvalid := true.B
                    write_state := write_idle
                }.otherwise
                {
                    io.axi4_in.bvalid := false.B
                    write_state := write_resp
                }
            }
        }

    }.elsewhen(io.axi4_in.araddr >= 0x80000000L.U(64.W))
    {
        //mem
        // io.axi4_mmio := DontCare
        shutdownAXI(io.axi4_mmio)

        io.axi4_in <> io.axi4_mem

    }.otherwise
    {
        //mmio
        // io.axi4_mem := DontCare
        shutdownAXI(io.axi4_mem)

        io.axi4_in <> io.axi4_mmio
    }
    
}
