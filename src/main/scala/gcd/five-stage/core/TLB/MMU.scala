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
    val in = Flipped(new cache_req_io)
    
    val info = new Bundle{
        val isWrite = Output(Bool())
        val satp = Output(UInt(64.W))
        val mmu_en = Output(Bool())
    }
    
    val pf = new Bundle
    {
        val valid = Output(Bool())
        val instrPageFault = Output(Bool())
        val loadPageFault  = Output(Bool())
        val storePageFault = Output(Bool())
    }

    val out = new cache_req_io
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

    val tlb = Moudle(new TLB(name))

    //state machine to control the whole mem access process 
    val s_idle :: s_translate :: s_access :: Nil = Enum(3)
    val mmu_stage = RegInit(s_idle)

    switch(mmu_stage)
    {
        is(s_idle)
        {
            //wait for memory access reqest 
            tlb.io.tlb_en := false.B
            io.out.memen := false.B
            io.in.data_valid := false.B
            io.pf.valid := false.B

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
            cache_req_connet(sink=io.out,source=tlb.io.tlb_cache_req)

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

                        io.in.data_valid := true.B
                        //page fault happens nothing can be read 
                        //so treat it as a NOP instruction
                        io.in.rdata := NOP
                        mmu_stage := s_idle

                    }else if(name == "dmmu")
                    {
                        when(io.info.isWrite)
                        {
                            //store page fault
                            instrPageFault := false.B
                            loadPageFault  := false.B
                            storePageFault := true.B
                        }.otherwise
                        {
                            //load page fault
                            instrPageFault := false.B
                            loadPageFault  := true.B
                            storePageFault := false.B
                        }
                        io.in.data_valid := true.B
                        //nothing will be read 
                        io.in.rdata := 0xdead.U(64.W)
                        mmu_stage := s_idle
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

            io.in <> io.out 
            io.out.addr := pa

            when(io.in.data_got)
            {
                //the pipeline has accept data from $ 
                mmu_stage := s_idle
            }
            
        }
    }

}

