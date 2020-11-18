package mycore

import chisel3._
import chisel3.util._
import chisel3.experimental._
import chisel3.experimental.BundleLiterals._
import chisel3.util.experimental.BoringUtils

import constants.RV64I._
import constants.RV64M._
import constants.Constraints._

class VA extends Bundle
{
    val dontcare = UInt((37-offset_len).W)
    val VPN_2 = UInt(9.W)
    val VPN_1 = UInt(9.W)
    val VPN_0 = UInt(9.W)
    val offset = UInt(offset_len.W)
}

class PA extends Bundle
{
    val dontcare = UInt((20-offset_len).W)
    val PPN_2 = UInt(26.W)
    val PPN_1 = UInt(9.W)
    val PPN_0 = UInt(9.W)
    val offset = UInt(offset_len.W)
}

class PTE extends Bundle
{
    val reserved = UInt(10.W)
    val PPN_2 = UInt(26.W)
    val PPN_1 = UInt(9.W)
    val PPN_0 = UInt(9.W)
    
    val RSW =  UInt(2.W)

    //dirty
    val D = Bool()
    //access
    val A = Bool()
    //global
    val G = Bool()
    //user mode
    val U = Bool()
    //executable
    val X = Bool()
    //write
    val W = Bool()
    //read
    val R = Bool()
    //valid
    val V = Bool()
}

class TLB_entry extends Bundle
{
    val valid = Bool()

    val VPN_0 = UInt(9.W)
    val VPN_1 = UInt(9.W)
    val VPN_2 = UInt(9.W)

    val pte = new PTE
}

class PTW_IO extends Bundle
{
    val va = Input(UInt(64.W))
    val ptw_en = Input(Bool())
    val satp = Input(UInt(64.W))

    val pa = Output(UInt(64.W))
    val addr_valid = Output(Bool())
    val page_fault = Output(Bool())

    val cache_req = new cache_req_io
}

class PTW extends Moudle
{
    val io = IO(new PTW_IO)

    io := DontCare

    /******** page table walker *********
    ***[input]  : the virtual addr and the enable signal , also the satp
    ***[output] : the physical addr and whether it's valid and page fault signal 
    ***(MMU can manage the pipeline stall signal)
    ***use FSM to declare the behavior 
    *********       end        *********/

    //FSM 
    //assume that pa will be fetch in just one cycle , no ready signal
    val ptw_idle :: ptw_vpn2 :: ptw_vpn1 :: ptw_vpn0 :: Nil = Enum(4)

    val ptw_stage = RegInit(ptw_idle)
    
    val ptw_va = io.va.asTypeOf(new VA)
    val ptw_pte = RegInit(0.U.also(new PTE))

    //we just have sv39 0:off 8:sv39
    val sv39_on = !(io.satp(63,60) === 0.U())

    switch(ptw_stage)
    {
        is(ptw_idle)
        {
            io.cache_req.memen = false.B

            when(!io.sv39_on && io.ptw_en)
            {
                //no translation
                io.pa := io.va
                io.addr_valid := true.B
                page_fault := false.B
                ptw_stage := ptw_idle
            }.elsewhen(io.sv39_on && io.ptw_en)
            {
                //detect a translation req
                io.addr_valid := false.B
                ptw_stage := ptw_vpn2
            }
        }
        is(ptw_vpn2)
        {
            //now we have a translation req and we need to find 
            //the root page table

            //first check the upper 63-39 bits equal to bit 38
            io.page_fault := false.B
            io.addr_valid := false.B

            for(i <- (39 until 64))
            {
                when(io.va(i) =/= io.va(38))
                {
                    io.page_fault := true.B
                }
            }

            when(io.page_fault)
            {
                io.cache_req.memen := false.B
                io.addr_valid := true.B
                ptw_stage := ptw_idle
            }.otherwise
            {
                //now the va is valid 
                //so we have to fetch pte from cache
                io.cache_req.memen := true.B
                io.cache_req.op := op_d
                io.cache_req.wen := false.B
                io.cache_req.addr := Cat(0.U((20-offset_len).W),io.satp(43,0),0.U(offset_len.W)) + (ptw_va.VPN_2 << 3)

                when(io.cache_req.data_vaild)
                {
                    //let cache stage change to idle and wait for another req
                    io.cache_req.data_got := true.B

                    val temp_pte = (io.cache_req.rdata).asTypeOf(new PTE)
                    ptw_pte := temp_pte

                    when(!temp_pte.V || (!temp_pte.R && temp_pte.W))
                    {
                        //pte is not valid so raise a page fault and over
                        io.page_fault := true.B
                        io.addr_valid := true.B
                        ptw_stage := ptw_idle
                    }.otherwise
                    {
                        //pte is valid 
                        //check whether it is a leaf pte 
                        when(temp_pte.R || temp_pte.X)
                        {
                            //it is a leaf pte
                            //now we should check whether vpn_1 and vpn_0 is zero
                            when(ptw_va.VPN_1 === 0.U && ptw_va.VPN_0 === 0.U)
                            {
                                //valid 
                                //the physical addr is ppn_2 vpn1 vpn0 offset
                                //TODO : X R W U A D
                                //determine the request is allowed or not 
                                io.pa := Cat(0.U((20-offset_len).W),temp_pte.PPN_2,ptw_va.VPN_1,ptw_va.VPN_0,ptw_va.offset)
                                io.page_fault := false.B
                                io.addr_valid := true.B
                                ptw_stage := ptw_idle
                            }.otherwise
                            {
                                //not aligned 
                                io.page_fault := true.B
                                io.addr_valid := true.B
                                ptw_stage := ptw_idle
                            }

                        }.otherwise
                        {
                            //pointer to next pte
                            io.addr_valid := false.B
                            ptw_stage := ptw_vpn1
                        }
                    }


                }.otherwise
                {
                    //hold on 
                    io.addr_valid := false.B
                    ptw_stage := ptw_vpn2
                }
            }

            

        }
        is(ptw_vpn1)
        {
            //we need to find the second layer of page table
            io.cache_req.memen := true.B
            io.cache_req.op := op_d
            io.cache_req.wen := false.B
            io.cache_req.addr := Cat(0.U((20-offset_len).W),Cat(ptw_pte.PPN_2,ptw_pte.PPN_1,ptw_pte.PPN_0),0.U(offset_len.W)) + (ptw_va.VPN_1 << 3)

            when(io.cache_req.data_vaild)
            {
                    //let cache stage change to idle and wait for another req
                    io.cache_req.data_got := true.B
                
                    val temp_pte = (io.cache_req.rdata).asTypeOf(new PTE)
                    ptw_pte := temp_pte

                    when(!temp_pte.V || (!temp_pte.R && temp_pte.W))
                    {
                        //pte is not valid so raise a page fault and over
                        io.page_fault := true.B
                        io.addr_valid := true.B
                        ptw_stage := ptw_idle
                    }.otherwise
                    {
                        //pte is valid 
                        //check whether it is a leaf pte 
                        when(temp_pte.R || temp_pte.X)
                        {
                            //it is a leaf pte
                            //now we should check whether vpn_0 is zero
                            when(ptw_va.VPN_0 === 0.U)
                            {
                                //valid 
                                //the physical addr is ppn_2 ppn_1 vpn0 offset
                                //TODO : X R W U A D
                                //determine the request is allowed or not 
                                io.pa := Cat(0.U((20-offset_len).W),temp_pte.PPN_2,temp_pte.PPN_1,ptw_va.VPN_0,ptw_va.offset)
                                io.page_fault := false.B
                                io.addr_valid := true.B
                                ptw_stage := ptw_idle
                            }.otherwise
                            {
                                //not aligned 
                                io.page_fault := true.B
                                io.addr_valid := true.B
                                ptw_stage := ptw_idle
                            }

                        }.otherwise
                        {
                            //pointer to next pte
                            io.addr_valid := false.B
                            ptw_stage := ptw_vpn0
                        }
                    }
            }.otherwise
            {
                //hold on 
                io.addr_valid := false.B
                ptw_stage := ptw_vpn1
            }

        }
        is(ptw_vpn0)
        {
            //we need to find the third layer of page table
            io.cache_req.memen := true.B
            io.cache_req.op := op_d
            io.cache_req.wen := false.B
            io.cache_req.addr := Cat(0.U((20-offset_len).W),Cat(ptw_pte.PPN_2,ptw_pte.PPN_1,ptw_pte.PPN_0),0.U(offset_len.W)) + (ptw_va.VPN_0 << 3)

            when(io.cache_req.data_vaild)
            {
                    //let cache stage change to idle and wait for another req
                    io.cache_req.data_got := true.B

                    val temp_pte = (io.cache_req.rdata).asTypeOf(new PTE)
                    ptw_pte := temp_pte

                    when(!temp_pte.V || (!temp_pte.R && temp_pte.W))
                    {
                        //pte is not valid so raise a page fault and over
                        io.page_fault := true.B
                        io.addr_valid := true.B
                        ptw_stage := ptw_idle
                    }.otherwise
                    {
                        //pte is valid 
                        //check whether it is a leaf pte 
                        when(temp_pte.R || temp_pte.X)
                        {
                            //it is a leaf pte
                            
                            //valid 
                            //the physical addr is ppn_2 ppn_1 ppn_0 offset
                            //TODO : X R W U A D
                            //determine the request is allowed or not 
                            io.pa := Cat(0.U((20-offset_len).W),temp_pte.PPN_2,temp_pte.PPN_1,temp_pte.PPN_0,ptw_va.offset)
                            io.page_fault := false.B
                            io.addr_valid := true.B
                            ptw_stage := ptw_idle
                            

                        }.otherwise
                        {
                            //pointer to next pte
                            //but not valid 
                            io.page_fault := true.B
                            io.addr_valid := true.B
                            ptw_stage := ptw_idle
                        }
                    }
            }.otherwise
            {
                //hold on 
                io.addr_valid := false.B
                ptw_stage := ptw_vpn0
            }
        }
    }
}