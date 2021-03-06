package mycore

import chisel3._
import chisel3.util._
import chisel3.experimental._
import chisel3.experimental.BundleLiterals._
import chisel3.util.experimental.BoringUtils

import constants.RV64I._
import constants.RV64M._
import constants.Constraints._



/**
  *@input    : mmu recieve the sram-like req from cpu
  *@function : 1.translate the va to pa
  *            2.when translation fails we have to judge the type of exception 
  *@output   : mmu give the pa-access sram-like req to crossbar 
*/  
class MMU_IO extends Bundle
{
    val in = Flipped(new sram_like_io{
        val data_got = Output(Bool())
    })
    
    val info = new Bundle{
        val isWrite = Input(Bool())
        val satp = Input(UInt(64.W))
        val mmu_en = Input(Bool())
        val flush_req = Input(Bool())
    }
    
    val pf = new Bundle
    {
        val valid = Output(Bool())
        val instrPageFault = Output(Bool())
        val loadPageFault  = Output(Bool())
        val storePageFault = Output(Bool())
    }

    val out = new cache_req_io
    val translate = new cache_req_io
}

class MMU(name : String) extends Module
{
    val io = IO(new MMU_IO)

    io := DontCare

    val pa = RegInit(0.U(64.W))
    val instrPageFault = WireInit(false.B)
    val loadPageFault = WireInit(false.B)
    val storePageFault = WireInit(false.B)

    io.pf.instrPageFault := instrPageFault
    io.pf.loadPageFault  := loadPageFault
    io.pf.storePageFault := storePageFault

    //connect wire of input req to output req
    // io.out.data_got := io.in.data_got
    // io.out.addr     := pa
    // io.out.mask     := io.in.mask
    // io.out.op       := io.in.op
    // io.out.wdata    := io.in.wdata
    // io.out.memen    := io.in.memen
    // io.out.wen      := io.in.wen

    // io.in.rdata     := io.out.rdata
    // io.in.data_valid:= io.out.data_valid

    //now we just need to focus on va -> pa process 

    val tlb = if(name == "immu") Module(new TLB("itlb")) else Module(new TLB("dtlb"))
    tlb.io := DontCare
    tlb.io.flush_req := io.info.flush_req

    //state machine to control the whole mem access process 
    val s_idle :: s_translate :: s_access :: s_IPF :: s_LPF :: s_SPF :: Nil = Enum(6)
    val mmu_stage = RegInit(s_idle)

    if(name == "dmmu")
    {
        BoringUtils.addSource(mmu_stage,"dmmu_stage")
    }

    switch(mmu_stage)
    {
        is(s_idle)
        {
            //wait for memory access reqest 
            tlb.io.tlb_en := false.B
            io.out.memen := false.B
            io.in.data_valid := false.B
            io.pf.valid := false.B
            if(name == "immu")
            {
                io.translate.memen := false.B
            }

            when(io.info.mmu_en){mmu_stage := s_translate}
            .otherwise{mmu_stage := s_idle}
        }
        is(s_translate)
        {
            //now we use TLB to do the work of translation
            io.in.data_valid := false.B

            tlb.io.isWrite := io.info.isWrite
            tlb.io.va := io.in.addr
            tlb.io.tlb_en := true.B
            tlb.io.satp := io.info.satp
            if(name == "immu")
            {
                cache_req_connet(sink=io.translate,source=tlb.io.tlb_cache_req)
            }else
            {
                cache_req_connet(sink=io.out,source=tlb.io.tlb_cache_req)
            }

            when(tlb.io.tlb_valid)
            {
                //translation down
                when(tlb.io.page_fault)
                {
                    //error happens so no need to access memory any more
                    //also we should specify the page fault reason
                    io.pf.valid := true.B
                    if(name == "immu")
                    {
                        //instruction page falut 
                        instrPageFault := true.B
                        loadPageFault  := false.B
                        storePageFault := false.B

                        io.in.data_valid := false.B
                        //page fault happens nothing can be read 
                        //so treat it as a NOP instruction
                        io.in.rdata := NOP
                        mmu_stage := s_IPF

                    }else if(name == "dmmu")
                    {
                        when(io.info.isWrite)
                        {
                            //store page fault
                            instrPageFault := false.B
                            loadPageFault  := false.B
                            storePageFault := true.B
                            mmu_stage := s_SPF
                        }.otherwise
                        {
                            //load page fault
                            instrPageFault := false.B
                            loadPageFault  := true.B
                            storePageFault := false.B
                            mmu_stage := s_LPF
                        }
                        io.in.data_valid := false.B
                        //nothing will be read 
                        io.in.rdata := 0xdead.U(64.W)
                        // mmu_stage := s_idle
                    }
                }.otherwise
                {
                    //everything is fine , we got the right PA and now we can access memory
                    io.pf.valid := false.B
                    pa := tlb.io.pa
                    mmu_stage := s_access
                }
            }.otherwise{mmu_stage := s_translate}

        }
        is(s_access)
        {
            //we access memory($) here 
            tlb.io.tlb_en := false.B
            io.pf.valid := false.B
            if(name == "immu")
            {
                io.translate.memen := false.B
            }

            // io.in <> io.out 
            io.out.addr := pa
            io.out.mask := io.in.mask
            io.out.op := io.in.op
            io.out.wdata := io.in.wdata
            io.out.memen := io.in.memen
            io.out.wen := io.in.wen
            io.out.data_got := io.in.data_got
            io.in.rdata := io.out.rdata
            io.in.data_valid := io.out.data_valid

            when(io.in.data_got)
            {
                //the pipeline has accept data from $ 
                mmu_stage := s_idle
            }
            
        }
        //the aim of the fllowing three stage is to hold the page fault signal
        //until IF and MEM are not stalled , so that the exception can be process 
        //otherwise when IF and MEM are not stalled,the exception signal may disappear
        is(s_IPF)
        {
            io.in.data_valid := true.B
            io.in.rdata := NOP
            io.pf.valid := true.B
            instrPageFault := true.B
            loadPageFault  := false.B
            storePageFault := false.B
            tlb.io.tlb_en := false.B
            io.out.memen := false.B
            if(name == "immu")
            {
                io.translate.memen := false.B
            }
            when(io.in.data_got)
            {
                mmu_stage := s_idle
            }.otherwise
            {
                mmu_stage := s_IPF
            }
        }
        is(s_LPF)
        {
            io.in.data_valid := true.B
            io.in.rdata := NOP
            io.pf.valid := true.B
            instrPageFault := false.B
            loadPageFault  := true.B
            storePageFault := false.B
            tlb.io.tlb_en := false.B
            io.out.memen := false.B
            if(name == "immu")
            {
                io.translate.memen := false.B
            }
            when(io.in.data_got)
            {
                mmu_stage := s_idle
            }.otherwise
            {
                mmu_stage := s_LPF
            }
        }
        is(s_SPF)
        {

            io.in.data_valid := true.B
            io.in.rdata := NOP
            io.pf.valid := true.B
            instrPageFault := false.B
            loadPageFault  := false.B
            storePageFault := true.B
            tlb.io.tlb_en := false.B
            io.out.memen := false.B
            if(name == "immu")
            {
                io.translate.memen := false.B
            }
            when(io.in.data_got)
            {
                mmu_stage := s_idle
            }.otherwise
            {
                mmu_stage := s_SPF
            }
        }
    }
    when(mmu_stage === s_access)
    {
        io.out.addr := pa
        io.out.mask := io.in.mask
        io.out.op := io.in.op
        io.out.wdata := io.in.wdata
        io.out.memen := io.in.memen
        io.out.wen := io.in.wen
        io.out.data_got := io.in.data_got
        io.in.rdata := io.out.rdata
        io.in.data_valid := io.out.data_valid
    }

}

