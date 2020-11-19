package mycore

import chisel3._
import chisel3.util._
import chisel3.experimental._
import chisel3.experimental.BundleLiterals._
import chisel3.util.experimental.BoringUtils

import constants.RV64I._
import constants.RV64M._
import constants.Constraints._


object cache_req_connet 
{
    def apply(source : cache_req_io , sink : cache_req_io)
    {
        sink.addr := source.addr
        sink.mask := source.mask
        sink.op := source.op
        sink.wdata := source.wdata
        sink.memen := source.memen
        sink.wen := source.wen
        source.rdata := sink.rdata
        source.data_valid := sink.data_valid
        sink.data_got := source.data_got
    }
}

class TLB_IO extends Bundle
{
    val va = Input(UInt(64.W))
    val tlb_en = Input(Bool())
    val satp = Input(UInt(64.W))

    val pa = Output(UInt(64.W))
    val tlb_valid = Output(Bool())
    val page_fault = Output(Bool())

    // val ptw_cache_req = new cache_req_io
    val tlb_cache_req = new cache_req_io

}

class TLB extends Moudle
{
    val io = IO(new TLB_IO)

    io := DontCare

    //we just have sv39 0:off 8:sv39
    val sv39_on = !(io.satp(63,60) === 0.U())

    val tlb_idle :: tlb_find_tlb :: tlb_find_entry :: tlb_write_back  :: tlb_find_ptw :: Nil = Enum(5)

    val tlb_stage = RegInit(tlb_idle)

    val ptw = Moudle(new PTW)
    val tlb = Mem(tlb_entry_number,new TLB_entry)

    val tlb_hit = WireInit(false.B)
    val tlb_hit_index = WireInit(0.U(log2Ceil(tlb_entry_number).W))
    val tlb_replace_index = RegInit(0.U(log2Ceil(tlb_entry_number).W))
    val tlb_va = io.va.asTypeOf(new VA)

    //for replace 
    val tlb_victim = RegInit(0.U(log2Ceil(tlb_entry_number).W))

    val tlb_not_valid = WireInit(false.B)
    val tlb_not_valid_index = WireInit(0.U(log2Ceil(tlb_entry_number).W))

    //just like a ramdon choose 
    tlb_victim := tlb_victim + 1.U

    // cache_req_connet(ptw.io.cache_req_io,io.ptw_cache_req)

    switch(tlb_stage)
    {
        is(tlb_idle)
        {
            ptw.io.ptw_en := false.B
            io.tlb_cache_req.memen := false.B
            
            val temp_correct_va = (io.va(63,39) === Fill(25,io.va(38)))
            
            when(!sv39_on && io.tlb_en)
            {
                //no translation 
                io.pa := io.va
                io.tlb_valid := true.B
                io.page_fault := false.B
                ptw_stage := ptw_idle
            }.elsewhen(sv39_on && io.tlb_en)
            {
                //detect a translation req
                //first check the upper 63-39 bits equal to bit 38
                when(temp_correct_va)
                {
                    io.tlb_valid := false.B
                    ptw_stage := tlb_find_tlb
                }.otherwise
                {
                    //the virtual addr is not valid 
                    io.tlb_valid := true.B
                    io.page_fault := true.B
                    ptw_stage := tlb_idle

                }
            }.otherwise
            {
                ptw_stage := tlb_idle
            }
        }
        is(tlb_find_tlb)
        {
            ptw.io.ptw_en := false.B
            io.tlb_cache_req.memen := false.B
            tlb_hit := false.B
            //now we should find TLB entry 
            for(i <- (0 until tlb_entry_number))
            {
                when(tlb(i).valid && tlb(i).VPN_0 === tlb_va.VPN_0 && tlb(i).VPN_1 === tlb_va.VPN_1 && tlb(i).VPN_2 === tlb_va.VPN_2)
                {
                    //TLB HIT
                    tlb_hit := true.B
                    tlb_hit_index := i.U
                }
            }

            when(tlb_hit)
            {
                //do the translation just now 
                when(tlb(tlb_hit_index).level === 0.U)
                {
                    //top
                    //the physical addr is ppn2 vpn1 vpn0 offset 
                    io.pa := Cat(0.U((20-offset_len).W),tlb(tlb_hit_index).pte.PPN_2,tlb_va.VPN_1,tlb_va.VPN_0,tlb_va.offset)

                }.elsewhen(tlb(tlb_hit_index).level === 1.U)
                {
                    //second 
                    //the physical addr is ppn2 ppn1 vpn0 offset 
                    io.pa := Cat(0.U((20-offset_len).W),tlb(tlb_hit_index).pte.PPN_2,tlb(tlb_hit_index).pte.PPN_1,tlb_va.VPN_0,tlb_va.offset)

                }.elsewhen(tlb(tlb_hit_index).level === 2.U)
                {
                    //third 
                    //the physical addr is ppn2 ppn1 ppn0 offset 
                    io.pa := Cat(0.U((20-offset_len).W),tlb(tlb_hit_index).pte.PPN_2,tlb(tlb_hit_index).pte.PPN_1,tlb(tlb_hit_index).pte.PPN_0,tlb_va.offset)

                }
                io.tlb_valid := true.B
                io.page_fault := false.B
                tlb_stage := tlb_idle
            }.otherwise
            {
                //tlb miss 
                //so next we have to determine a entry index to store the entry from ptw
                io.tlb_valid := false.B
                tlb_stage := tlb_find_entry
            }
            
        }
        is(tlb_find_entry)
        {
            //first we should check if there exists one not valid entry
            tlb_not_valid := false.B
            io.tlb_valid := false.B
            ptw.io.ptw_en := false.B
            io.tlb_cache_req.memen := false.B

            for(i <-(0 until tlb_entry_number))
            {
                when(!tlb(i).valid)
                {
                    tlb_not_valid := true.B
                    tlb_not_valid_index := i.U
                }
            }

            when(tlb_not_valid)
            {
                //we have a not valid entry
                //so we just use this entry
                //becasue it's not valid so no need to write back to ram
                tlb_replace_index := tlb_not_valid_index
                tlb_stage := tlb_find_ptw

            }.otherwise
            {
                //now all the entry has a copy from page table 
                //so we should pick a victim and replace it 
                //also if the entry has been modified , write back it to ram 
                tlb_replace_index := tlb_victim
                when(tlb(tlb_victim).modified)
                {
                    tlb_stage := tlb_write_back
                }.otherwise
                {
                    tlb_stage := tlb_find_ptw
                }

            }

        }
        is(tlb_write_back)
        {
            //now we have a entry which has been modified before
            //but now it will be replace so we have to write it back to ram
            //to ensure the coherence 
            ptw.io.ptw_en := false.B
            io.tlb_valid := false.B
            
            io.tlb_cache_req.memen := true.B
            io.tlb_cache_req.wen := true.B
            io.tlb_cache_req.addr := tlb(tlb_replace_index).pte_paddr
            io.tlb_cache_req.mask := mask_dw
            io.tlb_cache_req.wdata := tlb(tlb_replace_index).pte.asUInt

            when(io.tlb_cache_req.data_valid)
            {
                io.tlb_cache_req.data_got := true.B
                tlb(tlb_replace_index).valid := false.B
                tlb_stage := tlb_find_ptw

            }.otherwise
            {
                tlb_stage := tlb_write_back
            }


        }
        is(tlb_find_ptw)
        {
            ptw.io.ptw_en := true.B
            ptw.io.va := io.va 
            ptw.io.satp := io.satp

            cache_req_connet(ptw.io.cache_req_io,io.tlb_cache_req)

            when(ptw.io.addr_valid)
            {
                when(ptw.io.page_fault)
                {
                    io.tlb_valid := true.B
                    io.page_fault := true.B
                    tlb_stage := tlb_idle
                }.otherwise
                {
                    //no page fault
                    //use the replace_index to replace the tlb entry 

                    tlb(tlb_replace_index).VPN_0 := tlb_va.VPN_0
                    tlb(tlb_replace_index).VPN_1 := tlb_va.VPN_1
                    tlb(tlb_replace_index).VPN_2 := tlb_va.VPN_2

                    tlb(tlb_replace_index).valid := true.B
                    tlb(tlb_replace_index).modify := false.B
                    tlb(tlb_replace_index).level := ptw.ptw2tlb.level
                    tlb(tlb_replace_index).pte := ptw.ptw2tlb.pte
                    tlb(tlb_replace_index).pte_paddr := ptw.ptw2tlb.pte_paddr

                    io.tlb_valid := true.B
                    io.page_fault := false.B
                    io.pa := ptw.io.pa

                    tlb_stage := tlb_idle

                }
            }.otherwise
            {
                tlb_stage := tlb_find_ptw
            }
        }
    }
}