package mycore

import chisel3._
import chisel3.util._
import chisel3.experimental._
import chisel3.experimental.BundleLiterals._
import chisel3.util.experimental.BoringUtils

import constants.RV64I._
import constants.RV64M._
import constants.Constraints._


object Util 
{
    def wdata_shift(wdata : UInt , sham : UInt) : UInt = {
        wdata << (sham << 3)  
    }
    def rdata_shift(rdata : UInt , sham : UInt) : UInt = {
        rdata >> (sham << 3)  
    }
    def strobe_shift(strobe : UInt , sham : UInt) : UInt = {
        strobe << sham 
    }
}


class cache_req_io extends sram_like_io 
{
    val data_got = Output(Bool())
    
    // from sram_like_io
    // val addr = Output(UInt(AXI_paddr_len.W))
    // val mask = Output(UInt(8.W))//写memory时候的掩码
    // val op = Output(UInt(3.W))//读memory时候的操作码
    // val wdata = Output(UInt(64.W))
    // val memen = Output(Bool())//是否需要启动mem
    // val wen = Output(Bool())
    // val rdata = Input(UInt(64.W))
    
    // val data_valid = Input(Bool())
}

class cache_io extends Bundle
{
    val cpu_req = Flipped(new cache_req_io)
    val ram_req = new sram_like_io
    val exe_stall = Input(Bool())
    val flush_req = Input(Bool())
    val dcache_flush_stall = Input(Bool())
}

class cache_block_struct extends Bundle
{
    val data = Vec(4,UInt(64.W))
}

class cache_tag_struct extends Bundle
{
    val valid = Bool()
    val dirty = Bool()

    val tag = UInt(tag_len.W)
}

object disable_mem_req 
{
    def apply(memreq : sram_like_io) = {
            memreq.memen := false.B
    }
}

//a simple direct map cache
class cache(name : String) extends Module
{
    val io = IO(new cache_io)

    io := DontCare

    val cache_blocks = Mem(1L<<index_len,new cache_block_struct)
    val cache_tags   = Mem(1L<<index_len,new cache_tag_struct)


    val cache_idle :: cache_find_index :: cache_resp :: cache_write_back :: cache_write_allocate :: cache_do_flush :: cache_flush_block :: icache_flush :: cache_flush_finish :: Nil = Enum(9)

    val cache_stage = RegInit(cache_idle)
    val cache_miss = WireInit(false.B)

    val write_time = RegInit(4.U(3.W))
    val read_time = RegInit(4.U(3.W))

    val temp_tag = WireInit(0.U(tag_len.W))
    val temp_index = WireInit(0.U(index_len.W))
    val temp_offset = WireInit(0.U(offset_len.W))

    val temp_rdata_from_cache = WireInit(0.U(64.W))
    val temp_shift_data = WireInit(0.U(64.W))
    //when we use cache , make sure the mdu has down it's work
    val exe_stall = WireInit(io.exe_stall)

    //for dcache flush
    val flush_total = (1 << index_len)
    val flush_now   = RegInit(0.U(64.W))
    val flush_write_time = RegInit(4.U(3.W))
    //indicate that dcache is doing the flush operation
    //and IF stage should not access cache now  
    val dcache_doing_flush = WireInit(false.B)

    //for icache flush 
    val icache_flush_now = RegInit(0.U(64.W))
    if(name == "dcache")
    {
        BoringUtils.addSource(dcache_doing_flush,"dcache_doing_flush")
    }

    //for dcache flush finish
    val dcache_flush_stall = WireInit(io.dcache_flush_stall)

    temp_tag := io.cpu_req.addr(tag_MSB,tag_LSB)
    temp_index := io.cpu_req.addr(index_MSB,index_LSB)
    temp_offset := io.cpu_req.addr(offset_MSB,offset_LSB)


    // def flush_Icache() = {
    //     for(i <- (0 until (1 << index_len)))
    //     {
    //         cache_tags(i).valid := false.B
    //     }
    // }
    

    //stage function 
    switch(cache_stage)
    {
        is(cache_idle)
        {
            //if there is a request 
            //jump into next stage

            //in case of dead lock
            disable_mem_req(io.ram_req)
            dcache_doing_flush := false.B

            if(name == "icache")
            {
                //icache's flush does not need to write dirty block to ram
                //just set tag's valid bit to zero
                when(io.flush_req)
                {
                    // flush_Icache()
                    cache_stage := icache_flush
                    icache_flush_now := 0.U
                }
            }else
            {
                //dcache should write all dirty blocks to ram
                //and set these blocks's valid to zero
                when(io.flush_req)
                {
                    cache_stage := cache_do_flush
                    flush_now   := 0.U
                    dcache_doing_flush := true.B
                }
            }

            when(io.cpu_req.memen)
            {
                cache_stage := cache_find_index
            }


            cache_miss := false.B

            io.cpu_req.data_valid := false.B
        }
        is(cache_find_index)
        {
            //we use the addr 
            //and we just split it into three parts

            //in case of dead lock 
            //make sure I$ and D$ can both send message to bus
            //but D$ first
            disable_mem_req(io.ram_req)
            dcache_doing_flush := false.B

            //judge if the access to cache is hit or miss 
            cache_miss := !cache_tags(temp_index).valid || temp_tag =/= cache_tags(temp_index).tag

            when(!cache_miss)
            {
                //cache_hit
                //so we can find data in cache immediately

                //TODO:cache read and write

                when(io.cpu_req.memen && !io.cpu_req.wen)
                {
                    //********* read ************
                    //pick the corrcect data in block
                    //and make some change based on read op 
                    //and the last 3 bits of offset 
                    //set data valid signal
                    //after data fetched jump to idle stage
                    //***************************
                    temp_rdata_from_cache := cache_blocks(temp_index).data(temp_offset(4,3))

                    temp_shift_data := Util.rdata_shift(temp_rdata_from_cache,temp_offset(2,0))

                    io.cpu_req.rdata := MuxCase(temp_shift_data,Array(
                    (io.cpu_req.op === op_b) -> Cat(Fill(56,temp_shift_data(7)),temp_shift_data(7,0)),
                    (io.cpu_req.op === op_bu) -> Cat(Fill(56,0.U(1.W)),temp_shift_data(7,0)),
                    (io.cpu_req.op === op_hb) -> Cat(Fill(48,temp_shift_data(15)),temp_shift_data(15,0)),
                    (io.cpu_req.op === op_hbu) -> Cat(Fill(48,0.U(1.W)),temp_shift_data(15,0)),
                    (io.cpu_req.op === op_w) -> Cat(Fill(32,temp_shift_data(31)),temp_shift_data(31,0)),
                    (io.cpu_req.op === op_wu) -> Cat(Fill(32,0.U(1.W)),temp_shift_data(31,0))
                    ))

                    // io.cpu_req.data_valid := true.B
                    io.cpu_req.data_valid := !exe_stall

                    when(io.cpu_req.data_got)
                    {
                        cache_stage := cache_idle
                    }

                }.elsewhen(io.cpu_req.memen && io.cpu_req.wen)
                {
                    //********* write ***********
                    //choose the corrcect data in block
                    //and make some change based on mask 
                    //and the last 3 bits of offset 
                    //set data valid signal(in next cycle)
                    //set dirty signal
                    //after data fetched jump to idle stage
                    //***************************
                    val temp_wdata_from_cache = cache_blocks(temp_index).data(temp_offset(4,3))

                    val temp_write_strobe = Util.strobe_shift(io.cpu_req.mask,temp_offset(2,0))
                    val temp_wdata = Cat(VecInit.tabulate(8){i => {
                        Mux(temp_write_strobe(i) === 1.U,io.cpu_req.wdata(i*8+7,i*8),temp_wdata_from_cache(i*8+7,i*8))
                                                                    // when(temp_write_strobe(i) === 1.U)
                                                                    //     io.cpu_req.wdata(i*8+7,i*8)
                                                                    // .otherwise
                                                                    //     temp_wdata_from_cache(i*8+7,i*8)
                                                                  } }.reverse)

                    cache_blocks(temp_index).data(temp_offset(4,3)) := temp_wdata

                    cache_tags(temp_index).dirty := true.B

                    io.cpu_req.data_valid := false.B

                    cache_stage := cache_resp
                    

                }

            }.otherwise
            {
                //cache miss 
                //if the block is dirty then we should write the whole block
                //to ram
                io.cpu_req.data_valid := false.B

                when(cache_tags(temp_index).dirty)
                {
                    cache_stage := cache_write_back
                    write_time  := 4.U(3.W)
                }.otherwise
                {
                    //on the other hand , nothing has been written into this block
                    //we just need to replace it  
                    cache_stage := cache_write_allocate
                    read_time := 4.U(3.W)
                }

            }

        }
        is(cache_resp)
        {

            disable_mem_req(io.ram_req)
            dcache_doing_flush := false.B
            
            io.cpu_req.data_valid := !exe_stall

            when(io.cpu_req.data_got)
            {
                cache_stage := cache_idle
            }
        }
        is(cache_write_back)
        {
            //use cache2_axi_bus send signals to ram to write
            //send four times 

            io.cpu_req.data_valid := false.B
            dcache_doing_flush := false.B

            when(write_time === 0.U(3.W))
            {
                io.ram_req.memen := false.B
            }.otherwise
            {
                io.ram_req.memen := true.B
            }
            io.ram_req.mask  := mask_dw
            io.ram_req.op  := op_x
            io.ram_req.wdata  := cache_blocks(temp_index).data(4.U(3.W) - write_time)
            io.ram_req.wen   := true.B
            io.ram_req.addr := Cat(cache_tags(temp_index).tag,temp_index,(4.U(3.W) - write_time)(1,0),0.U(3.W))

            when(io.ram_req.data_valid)
            {
                write_time := write_time - 1.U(3.W)
            }

            when(write_time === 0.U(3.W))
            {
                //the block has been written back to ram
                cache_stage := cache_write_allocate
                read_time := 4.U(3.W)
            }

        }
        is(cache_write_allocate)
        {
            //read a block from ram 
            //read four times 

            io.cpu_req.data_valid := false.B
            dcache_doing_flush := false.B

            when(read_time === 0.U(3.W))
            {
                io.ram_req.memen := false.B
            }.otherwise
            {
                io.ram_req.memen := true.B
            }
            io.ram_req.mask  := mask_x
            io.ram_req.op  := op_d
            io.ram_req.wen   := false.B
            io.ram_req.addr := Cat(temp_tag,temp_index,(4.U(3.W) - read_time)(1,0),0.U(3.W))

            when(io.ram_req.data_valid)
            {
                read_time := read_time - 1.U(3.W)
                cache_blocks(temp_index).data(4.U(3.W) - read_time) := io.ram_req.rdata
            }
            when(read_time === 0.U(3.W))
            {
                //the block has been updated
                //clear the dirty bit and rewrite the tag bits 
                //alse we should set valid bit 

                cache_tags(temp_index).dirty := false.B
                cache_tags(temp_index).valid := true.B
                cache_tags(temp_index).tag   := temp_tag

                cache_stage := cache_find_index
            }

        }
        is(cache_do_flush)
        {
            //loop according to the number of blocks 
            //first check valid :
            //invalid -> skip this block
            //valid   -> check dirty:
            //                       clean ->skip this block
            //                       dirty ->flush this block to ram
            disable_mem_req(io.ram_req)
            dcache_doing_flush := true.B
            when(flush_now === flush_total.U)
            {
                cache_stage := cache_flush_finish
            }.otherwise
            {
                when(!cache_tags(flush_now).valid)
                {
                    flush_now := flush_now + 1.U
                }.otherwise
                {
                    when(!cache_tags(flush_now).dirty)
                    {
                        flush_now := flush_now + 1.U
                    }.otherwise
                    {
                        cache_stage := cache_flush_block
                        flush_write_time := 4.U(3.W)
                    }
                }
            }
        }
        is(cache_flush_block)
        {
            dcache_doing_flush := true.B
            when(flush_write_time === 0.U(3.W))
            {
                io.ram_req.memen := false.B
            }.otherwise
            {
                io.ram_req.memen := true.B
            }
            io.ram_req.mask  := mask_dw
            io.ram_req.op  := op_x
            io.ram_req.wdata  := cache_blocks(flush_now).data(4.U(3.W) - flush_write_time)
            io.ram_req.wen   := true.B
            io.ram_req.addr := Cat(cache_tags(flush_now).tag,flush_now(index_len-1,0),(4.U(3.W) - flush_write_time)(1,0),0.U(3.W))

            when(io.ram_req.data_valid)
            {
                flush_write_time := flush_write_time - 1.U(3.W)
            }

            when(flush_write_time === 0.U(3.W))
            {
                //the block has been written back to ram
                flush_now := flush_now + 1.U
                cache_tags(flush_now).dirty := false.B
                cache_stage := cache_do_flush
            }
        }
        is(icache_flush)
        {
            disable_mem_req(io.ram_req)
            dcache_doing_flush := false.B
            io.cpu_req.data_valid := false.B

            when(icache_flush_now === flush_total.U)
            {
                cache_stage := cache_idle
            }.otherwise
            {
                cache_tags(icache_flush_now).valid := false.B
                icache_flush_now := icache_flush_now + 1.U
            }

        }
        is(cache_flush_finish)
        {
            disable_mem_req(io.ram_req)
            dcache_doing_flush := false.B

            when(!dcache_flush_stall)
            {
                cache_stage := cache_idle
            }
        }
        
    }

}