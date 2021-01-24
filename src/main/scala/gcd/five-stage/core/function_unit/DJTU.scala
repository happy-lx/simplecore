package mycore

import chisel3._
import chisel3.util._
import chisel3.experimental._
import chisel3.experimental.BundleLiterals._
import chisel3.util.experimental.BoringUtils

import constants.RV64I._
import constants.RV64M._
import constants.Constraints._

//DJTU means Dcache Judgement for TLB Request Unit

//Translate request coming from IPTW and DPTW
//IPTW                    DPTW
// |                       |
// |                       |
//ITLB                    DTLB
// |                       |
// |                       |
//IMMU                    DMMU
// |                       |
// |                       |
// =======    DJTU    ======
//             |
//             |
// =======   Dcache   ======

//function:make sure the mem request from MEM stage will be served first
//after that if there is a request from IF's IPTW then process it 
//make sure the behavior of DPTW , DTLB , DMMU is normal during the process

class DJTU_IO extends Bundle
{
    val req_IMMU = Flipped(new cache_req_io)
    val req_DMMU = Flipped(new cache_req_io)

    val req_Dcache = new cache_req_io
}

class DJTU extends Module
{
    val io = IO(new DJTU_IO)

    io := DontCare

    //get DMMU's stage information 
    val s_idle :: s_translate :: s_access :: s_IPF :: s_LPF :: s_SPF :: Nil = Enum(6)
    val mmu_stage = WireInit(s_idle)

    //now we know the stage of DMMU
    BoringUtils.addSink(mmu_stage,"dmmu_stage")

    //DJTU's stage define
    val s_dmmu :: s_immu :: Nil = Enum(2)
    val djtu_stage = RegInit(s_dmmu)

    val rdata_from_dcache = RegInit(0.U(64.W))

    switch(djtu_stage)
    {
        is(s_dmmu)
        {
            //dmmu is connected to dcache
            io.req_Dcache <> io.req_DMMU
            io.req_IMMU.data_valid := false.B
        }
        is(s_immu)
        {
            //immu is connected to dcache
            io.req_Dcache <> io.req_IMMU
            io.req_DMMU.rdata := rdata_from_dcache
            io.req_DMMU.data_valid := true.B
        }
    }

    when(djtu_stage === s_dmmu)
    {
        when(  (mmu_stage === s_idle)//do not access memory
            || (mmu_stage === s_access && io.req_Dcache.data_valid)//memory accessing successfully
            || (mmu_stage === s_IPF)//memory accessing failed instruction page fault
            || (mmu_stage === s_LPF)//memory accessing failed load page fault
            || (mmu_stage === s_SPF)//memory accessing failed store page fault
            )
        {
            when(io.req_IMMU.memen)
            {
                //make dcache switch to idle stage
                io.req_Dcache.data_got := true.B
                //store the rdata from dcache 
                rdata_from_dcache := io.req_Dcache.rdata
                djtu_stage := s_immu
            }
        }
    }

    when(djtu_stage === s_immu)
    {
        when(!io.req_IMMU.memen)
        {
            djtu_stage := s_dmmu
        }
    }

    
}
