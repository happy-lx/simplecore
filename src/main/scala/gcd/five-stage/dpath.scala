package mycore

import chisel3._
import chisel3.util._
import chisel3.util.experimental.BoringUtils


import constants.RV64I._
import constants.RV64M._
import constants.Constraints._

class D2CIO extends Bundle
{
    val instr = Output(UInt(32.W))
    val islt = Output(Bool())
    val isltu = Output(Bool())
    val iseq = Output(Bool())
    val isredir =  Output(Bool())
}

class DpathIO extends Bundle
{
    val c2d = Flipped(new C2DIO()) 
    val d2c = new D2CIO()
    val imem = Flipped(new memory_port_io)
    val dmem = Flipped(new memory_port_io)
}

class Dpath extends Module {
    val io = IO(new DpathIO)

    io := DontCare

    //instruction fetch stage
    val reg_if_pc = RegInit(STARTADDR)
    val wire_pc_next = Wire(UInt(64.W))
    val wire_pc_next_4 = Wire(UInt(64.W))
    
    //the following target is generated in exe stage
    val wire_pc_jump_target = Wire(UInt(64.W))
    val wire_pc_jr_target = Wire(UInt(64.W))
    val wire_pc_branch_target = Wire(UInt(64.W))
    val wire_pc_redirect_target = Wire(UInt(64.W))

    io.imem.req.valid := true.B
    io.imem.req.bits.addr := reg_if_pc(31,0)
    io.imem.req.bits.op := op_wu
    io.imem.req.bits.memen := true.B
    io.imem.req.bits.wen := false.B

    wire_pc_next_4 := reg_if_pc + 4.U

    //the pc_sel from cpath is always for if stage
    wire_pc_next := MuxCase(wire_pc_next_4,Array(
        (io.c2d.cp_pc_sel === pc_4) -> wire_pc_next_4,
        (io.c2d.cp_pc_sel === pc_redir) -> wire_pc_redirect_target,
        (io.c2d.cp_pc_sel === pc_j)     -> wire_pc_jump_target,
        (io.c2d.cp_pc_sel === pc_jr)    -> wire_pc_jr_target,
        (io.c2d.cp_pc_sel === pc_branch)-> wire_pc_branch_target
    ))


    val dp_instr = WireInit(io.imem.resp.bits.rdata(31,0))

    //the instruction register in decode stage init to nop in case the cpath generates a 
    //excepiton in the init cycle for the first instruction is zero
    val reg_dec_instr = RegInit(NOP)
    // reg_dec_instr := dp_instr

    //update pc 
    //pipeline kill and stall will not happen together
    when(io.c2d.cp_pipeline_kill)
    {
        reg_dec_instr := NOP
        reg_if_pc := wire_pc_next

    }.elsewhen(io.c2d.cp_pipeline_stall)
    {
        reg_dec_instr := reg_dec_instr
        reg_if_pc := reg_if_pc

    }.otherwise
    {
        when(io.c2d.cp_data_hazard)
        {
            reg_dec_instr := reg_dec_instr
            reg_if_pc := reg_if_pc
        }.elsewhen(io.c2d.cp_if_kill)
        {
            reg_dec_instr := NOP
            reg_if_pc := reg_if_pc
        }.otherwise
        {
            reg_dec_instr := dp_instr
            reg_if_pc := wire_pc_next
        }
    }


    //send instruction to cpath to decode 
    io.c2d.instr := reg_dec_instr

    //signal decoded from cpath is accessed in dec stage
    

    

    
}
