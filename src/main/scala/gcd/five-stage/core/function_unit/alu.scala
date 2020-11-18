package mycore

import chisel3._
import chisel3.util._
import chisel3.experimental._
import chisel3.experimental.BundleLiterals._
import chisel3.tester._
import chisel3.tester.RawTester.test
import chisel3.util.experimental.BoringUtils


import constants.Constraints._

class alu_io extends Bundle
{
    val input1 = Input(UInt(64.W))
    val input2 = Input(UInt(64.W))

    val op = Input(UInt(5.W))
    val res_ext_op = Input(UInt(3.W))
    val pipeline_stall = Input(Bool())

    val res = Output(UInt(64.W))
}

class alu_module extends Module {
    val io = IO(new alu_io)

    val res_temp = Wire(UInt(64.W))
    val add_res = Wire(UInt(64.W))
    add_res := io.input1 + io.input2

    val sham = io.input2(5,0).asUInt()

    val mdu = Module(new MDU)

    //do the operation of op

    val sub_res = Wire(UInt(64.W))
    val and_res = Wire(UInt(64.W))
    val or_res = Wire(UInt(64.W))
    val xor_res = Wire(UInt(64.W))
    val sll_res = Wire(UInt(64.W))
    val sllw_res = Wire(UInt(64.W))
    val slt_res = Wire(UInt(64.W))
    val sltu_res = Wire(UInt(64.W))
    val sra_res = Wire(UInt(64.W))
    val sraw_res = Wire(UInt(64.W))
    val srl_res = Wire(UInt(64.W))
    val srlw_res = Wire(UInt(64.W))
    val cp1_res = Wire(UInt(64.W))

    sub_res := (io.input1 - io.input2)
    and_res := (io.input1 & io.input2)
    or_res := (io.input1 | io.input2)
    xor_res := (io.input1 ^ io.input2)
    sll_res := ((io.input1 << sham)(63,0).asUInt())
    sllw_res := ((io.input1 << sham(4,0))(63,0).asUInt())
    slt_res := (io.input1.asSInt() < io.input2.asSInt())
    sltu_res := (io.input1.asUInt() < io.input2.asUInt())
    sra_res := ((io.input1.asSInt() >> sham).asUInt())
    sraw_res := ((io.input1(31,0).asSInt() >> sham(4,0)).asUInt())
    srl_res := ((io.input1.asUInt() >> sham).asUInt())
    srlw_res := ((io.input1(31,0).asUInt() >> sham(4,0)).asUInt())
    cp1_res := (io.input1)

    val is_mdu_op = WireInit(false.B)

    is_mdu_op := (io.op === ALU_MUL || io.op === ALU_MULH || io.op === ALU_MULHSU || io.op === ALU_MULHU || io.op === ALU_REM || io.op === ALU_REMU || io.op === ALU_REMUW || io.op === ALU_REMW || io.op === ALU_DIV || io.op === ALU_DIVU || io.op === ALU_DIVUW || io.op === ALU_DIVW)

    mdu.io.op1 := io.input1
    mdu.io.op2 := io.input2
    mdu.io.op  := io.op
    mdu.io.en  := is_mdu_op
    BoringUtils.addSource(mdu.io.exe_stall,"exe_stall")
    // BoringUtils.addSource(mdu.io.exe_stall,"exe_stall_cache")
    // BoringUtils.addSource(mdu.io.exe_stall,"exe_stall_cross_bar")
    // BoringUtils.addSource(mdu.io.exe_stall,"exe_stall2")

    mdu.io.result_got := mdu.io.en && mdu.io.finish && !io.pipeline_stall

    res_temp := MuxCase(add_res,Array(
        (io.op === ALU_ADD) -> add_res,
        (io.op === ALU_SUB) -> sub_res ,
        (io.op === ALU_AND) -> and_res,
        (io.op === ALU_OR) -> or_res,
        (io.op === ALU_XOR) -> xor_res,
        (io.op === ALU_SLL) -> sll_res,
        (io.op === ALU_SLLW) -> sllw_res,
        (io.op === ALU_SLT) -> slt_res,
        (io.op === ALU_SLTU) -> sltu_res,
        (io.op === ALU_SRA) -> sra_res,
        (io.op === ALU_SRAW) -> sraw_res,
        (io.op === ALU_SRL) -> srl_res,
        (io.op === ALU_SRLW) -> srlw_res,
        (io.op === ALU_CP1) -> cp1_res,
        (io.op === ALU_MUL) -> mdu.io.result,
        (io.op === ALU_MULH) -> mdu.io.result,
        (io.op === ALU_MULHSU) -> mdu.io.result,
        (io.op === ALU_MULHU) -> mdu.io.result,
        (io.op === ALU_REM) -> mdu.io.result,
        (io.op === ALU_REMU) -> mdu.io.result,
        (io.op === ALU_REMUW) -> mdu.io.result,
        (io.op === ALU_REMW) -> mdu.io.result,
        (io.op === ALU_DIV) -> mdu.io.result,
        (io.op === ALU_DIVU) -> mdu.io.result,
        (io.op === ALU_DIVUW) -> mdu.io.result,
        (io.op === ALU_DIVW) -> mdu.io.result
    ))

    //extend the result using arg res_ext_op
    io.res := MuxCase(res_temp,Array(
        (io.res_ext_op === alu_res_noext) -> res_temp,
        (io.res_ext_op === alu_res_bs) -> Cat(Fill(56,res_temp(7)),res_temp(7,0)),
        (io.res_ext_op === alu_res_bu) -> Cat(Fill(56,0.U(1.W)),res_temp(7,0)),
        (io.res_ext_op === alu_res_hbs) -> Cat(Fill(48,res_temp(15)),res_temp(15,0)),
        (io.res_ext_op === alu_res_hbu) -> Cat(Fill(48,0.U(1.W)),res_temp(15,0)),
        (io.res_ext_op === alu_res_ws) -> Cat(Fill(32,res_temp(31)),res_temp(31,0)),
        (io.res_ext_op === alu_res_wu) -> Cat(Fill(32,0.U(1.W)),res_temp(31,0))
    ))
    

}



