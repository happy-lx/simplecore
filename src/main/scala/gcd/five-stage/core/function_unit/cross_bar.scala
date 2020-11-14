package mycore

import chisel3._
import chisel3.util._
import chisel3.experimental._
import chisel3.experimental.BundleLiterals._
import chisel3.util.experimental.BoringUtils

import constants.RV64I._
import constants.RV64M._
import constants.Constraints._

//cross bar is to split the req to mem channel and mmio channel
class cross_bar_io extends Bundle
{
    //input to cross_bar 
    val cpu_req = Flipped(new sram_like_io)
    val data_got = Input(Bool())

    //output of cross bar
    val cache_req = new cache_req_io
    val mmio_req = new sram_like_io

    val exe_stall = Input(Bool())
}

class cross_bar(isdata : Boolean) extends Module
{
    val io = IO(new cross_bar_io)

    io := DontCare

    //TODO:IF stage's cross bar do not need mtime and mtimecmp

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
    val exe_stall = WireInit(io.exe_stall)


    cnt := Mux(nextcnt === freq,0.U,nextcnt)

    when(nextcnt === freq)
    {
        reg_mtime := reg_mtime + inc
    }

    has_time_interrupt := Mux(reg_mtime >= reg_mtimecmp , true.B , false.B)

    if(isdata)
    {
        BoringUtils.addSource(has_time_interrupt,"time_interrupt")
    }

    
    val write_idle :: write_burst :: write_resp :: Nil = Enum(3)
    val read_idle :: read_burst :: read_resp :: Nil = Enum(3)
    val write_state = RegInit(write_idle)
    val read_state = RegInit(read_idle)

    val reg_addr = RegInit(0.U(64.W))

    val temp_read_data = Reg(UInt(64.W))

    val rdata_valid = WireInit(false.B)
    val wdata_valid = WireInit(false.B)

    when(io.cpu_req.addr === mtimecmp_addr.U || io.cpu_req.addr === mtime_addr.U)
    {
        //read or write memory mapped csrs

        //shut down cache and mmio req
        io.cache_req.memen := false.B
        io.mmio_req.memen := false.B

        switch(read_state)
        {
            is(read_idle)
            {
                rdata_valid := false.B
                when(io.cpu_req.memen && !io.cpu_req.wen)
                {
                    //detect a request 
                    reg_addr := io.cpu_req.addr
                    read_state := read_burst
                }.otherwise
                {
                    read_state := read_idle
                }
            }
            is(read_burst)
            {
                rdata_valid := false.B
                
                when(reg_addr === mtimecmp_addr.U)
                {
                    //read mtimecmp
                    temp_read_data := reg_mtimecmp
                }.elsewhen(reg_addr === mtime_addr.U)
                {
                    //read mtime   
                    temp_read_data := reg_mtime
                }
                read_state := read_resp
                
            }
            is(read_resp)
            {
                io.cpu_req.rdata := temp_read_data
                rdata_valid := !exe_stall

                when(io.data_got)
                {
                    read_state := read_idle
                }.otherwise
                {
                    read_state := read_resp
                }
            }
        }

        switch(write_state)
        {
            is(write_idle)
            {
                wdata_valid := false.B
                when(io.cpu_req.memen && io.cpu_req.wen)
                {
                    reg_addr := io.cpu_req.addr
                    write_state:= write_burst
                }.otherwise
                {
                    write_state := write_idle
                }
            }
            is(write_burst)
            {
                wdata_valid := false.B
                when(reg_addr === mtimecmp_addr.U)
                {
                    //wtire mtimecmp
                    reg_mtimecmp := io.cpu_req.wdata
                }.elsewhen(reg_addr === mtime_addr.U)
                {
                    //write mtime   
                    reg_mtime := io.cpu_req.wdata
                }

                write_state := write_resp 
            }
            
            is(write_resp)
            {
                wdata_valid := !exe_stall

                when(io.data_got)
                {
                    write_state := write_idle
                }.otherwise
                {
                    write_state := write_resp
                }
            }
        }

        io.cpu_req.data_valid := rdata_valid || wdata_valid

        // //write
        // switch(write_state)
        // {
        //     is(write_idle)
        //     {
        //         when(io.cpu_req.memen && io.cpu_req.wen)
        //         {
        //             //do the write operation 
        //             when(io.cpu_req.addr === mtimecmp_addr.U)
        //             {
        //                 //write mtimecmp
        //                 reg_mtimecmp := io.cpu_req.rdata
        //                 write_state := write_resp
        //             }.elsewhen(io.cpu_req.addr === mtime_addr.U)
        //             {
        //                 //write mtime   
        //                 reg_mtime := io.cpu_req.rdata
        //                 write_state := write_resp
        //             }
                    
        //         }.otherwise
        //         {
        //             //WARNING : might be a problem
        //             //when addr = mtime or mtimecmp but not op is read
        //             //the signal will be place as false,so nothing will
        //             //be read(now I just move the read code below,but I am not sure whether it is a problem)
        //             io.cpu_req.data_valid := false.B
        //             write_state := write_idle
        //         }
        //     }
        //     is(write_resp)
        //     {
        //         io.cpu_req.data_valid := !exe_stall
        //         when(io.data_got)
        //         {
        //             write_state := write_idle
        //         }
        //     }
        // }
        // //read 
        // when(io.cpu_req.memen && !io.cpu_req.wen)
        // {
        //     //read can be down in just one cycle
        //     when(io.cpu_req.addr === mtimecmp_addr.U)
        //     {
        //         //read mtimecmp
        //         io.cpu_req.rdata := reg_mtimecmp
        //     }.elsewhen(io.cpu_req.addr === mtime_addr.U)
        //     {
        //         //read mtime   
        //         io.cpu_req.rdata := reg_mtime
        //     }

        //     io.cpu_req.data_valid := !exe_stall

        // }
        
    }.elsewhen(io.cpu_req.addr >= 0x80000000L.U(64.W))
    {
        //cache
        io.mmio_req.memen := false.B

        io.cache_req.addr := io.cpu_req.addr
        io.cache_req.mask := io.cpu_req.mask
        io.cache_req.op := io.cpu_req.op
        io.cache_req.wdata := io.cpu_req.wdata
        io.cache_req.memen := io.cpu_req.memen
        io.cache_req.wen := io.cpu_req.wen
        io.cache_req.data_got := io.data_got

        io.cpu_req.rdata := io.cache_req.rdata
        io.cpu_req.data_valid := io.cache_req.data_valid

    }.otherwise
    {
        //mmio
        io.cache_req.memen := false.B

        io.mmio_req.addr := io.cpu_req.addr
        io.mmio_req.mask := io.cpu_req.mask
        io.mmio_req.op := io.cpu_req.op
        io.mmio_req.wdata := io.cpu_req.wdata
        io.mmio_req.memen := io.cpu_req.memen
        io.mmio_req.wen := io.cpu_req.wen

        io.cpu_req.rdata := io.mmio_req.rdata
        io.cpu_req.data_valid := io.mmio_req.data_valid
    }

    
}