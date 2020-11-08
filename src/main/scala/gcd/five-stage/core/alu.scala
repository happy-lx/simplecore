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

class MDU_io extends Bundle
{
    val op1 = Input(UInt(64.W))
    val op2 = Input(UInt(64.W))

    val op = Input(UInt(5.W))
    val en = Input(Bool())
    val result_got = Input(Bool())

    val result = Output(UInt(64.W))
    val finish = Output(Bool())
    val exe_stall = Output(Bool())
}

class MDU extends Module
{
    val io = IO(new MDU_io)

    io := DontCare

    val is_mdu_op = (io.op === ALU_MUL || io.op === ALU_MULH || io.op === ALU_MULHSU || io.op === ALU_MULHU || io.op === ALU_REMW || io.op === ALU_REM || io.op === ALU_REMU || io.op === ALU_REMUW || io.op === ALU_DIV || io.op === ALU_DIVU || io.op === ALU_DIVUW || io.op === ALU_DIVW)
    //check whether op1 is a word
    val op1_is_word = (io.op === ALU_REMW || io.op === ALU_REMUW) || (io.op === ALU_DIVW || io.op === ALU_DIVUW)

    //check whether op2 is a word
    val op2_is_word = (io.op === ALU_REMW || io.op === ALU_REMUW) || (io.op === ALU_DIVW || io.op === ALU_DIVUW)

    //check whether op1 is signed
    val op1_is_signed = (io.op === ALU_MUL || io.op === ALU_MULH || io.op === ALU_MULHSU) || (io.op === ALU_REM || io.op === ALU_REMW) || (io.op === ALU_DIV || io.op === ALU_DIVW)

    //check whether op2 is signed
    val op2_is_signed = (io.op === ALU_MUL || io.op === ALU_MULH) || (io.op === ALU_REM || io.op === ALU_REMW) || (io.op === ALU_DIV || io.op === ALU_DIVW)

    //check whether op1 is negtive
    val op1_is_neg =  Mux(!op1_is_word , 
                      Mux(op1_is_signed,io.op1(63) === 1.U,false.B)//64 
                    ,(Mux(op1_is_signed,io.op1(31) === 1.U,false.B)))//32

    //check whether op2 is negtive
    val op2_is_neg =  Mux(!op2_is_word , 
                      Mux(op2_is_signed,io.op2(63) === 1.U,false.B)//64 
                    ,(Mux(op2_is_signed,io.op2(31) === 1.U,false.B)))//32

    val sign_change = !(op1_is_neg === op2_is_neg)

    //get abs_val of op1
    val abs_op1 = Mux(!op1_is_word,Mux(op1_is_neg,(~ (io.op1) + 1.U)(63,0),io.op1(63,0)),Mux(op1_is_neg,Cat(0.U(32.W),(~ (io.op1(31,0)) + 1.U)(31,0)),Cat(0.U(32.W),io.op1(31,0)))) 
    //get abs_val of op2
    val abs_op2 = Mux(!op2_is_word,Mux(op2_is_neg,(~ (io.op2) + 1.U)(63,0),io.op2(63,0)),Mux(op2_is_neg,Cat(0.U(32.W),(~ (io.op2(31,0)) + 1.U)(31,0)),Cat(0.U(32.W),io.op2(31,0)))) 

    val is_mul_op = (io.op === ALU_MUL || io.op === ALU_MULH || io.op === ALU_MULHSU || io.op === ALU_MULHU)
    val is_div_op = is_mdu_op && ! is_mul_op

    val mdu_idle :: mdu_exe :: mdu_finish :: Nil = Enum(3)

    val mdu_state = RegInit(mdu_idle)
    val exe_cycles = RegInit(64.U(7.W))

    val mul_result = RegInit(0.U(128.W))
    val rem_result = RegInit(0.U(128.W))
    val div_op2 = RegInit(0.U(128.W))
    val div_result = RegInit(0.U(64.W))
    val mdu_result = WireInit(0.U(64.W))

    // BoringUtils.addSource(mul_result(127,64),"mul_result_hi")
    // BoringUtils.addSource(mul_result(63,0),"mul_result_lo")
    // BoringUtils.addSource(abs_op1,"abs_op1")
    // BoringUtils.addSource(abs_op2,"abs_op2")

    io.exe_stall := io.en && !(io.finish)

    def mul_step() = {
        when(mul_result(0) === 1.U)
        {
            val temp_add_res = abs_op1 +& mul_result(127,64)//65 bits 

            mul_result := (Cat(temp_add_res,mul_result(63,1)))(127,0) 
        }.otherwise
        {
            mul_result := Cat(0.U(1.W),mul_result(127,1))
            // mul_result := mul_result >> 1
        }
    }

    def div_step() = {
        when(rem_result >= div_op2)
        {
            rem_result := rem_result - div_op2
            div_result := (div_result << 1) + 1.U
        }.otherwise
        {
            div_result := div_result << 1 
        }
        // div_op2 := (div_op2 >> 1)(127,0)
        div_op2 := Cat(0.U(1.W),div_op2(127,1))
    }

    switch(mdu_state)
    {
        is(mdu_idle)
        {
            io.finish := false.B

            when(io.en)
            {
                mdu_state := mdu_exe
                exe_cycles := 64.U

                mul_result := Cat(0.U(64.W),abs_op2)

                rem_result := Cat(0.U(64.W),abs_op1)
                div_op2 := Cat(abs_op2,0.U(64.W))
                div_result := 0.U(64.W)
            }
        }
        is(mdu_exe)
        {
            io.finish := false.B

            exe_cycles := exe_cycles - 1.U

            when(is_mul_op)
            {
                mul_step()
            }.elsewhen(is_div_op)
            {
                div_step()
            }

            when(exe_cycles === 1.U && is_mul_op)
            {
                mdu_state := mdu_finish
            }

            when(exe_cycles === 0.U && is_div_op)
            {
                mdu_state := mdu_finish
            }
        }
        is(mdu_finish)
        {
            io.finish := true.B

            mdu_result := MuxCase(mul_result(63,0),Array(
                (io.op === ALU_MUL)     -> Mux(sign_change,(~mul_result + 1.U)(63,0),mul_result(63,0)),
                (io.op === ALU_MULH)    -> Mux(sign_change,(~mul_result + 1.U)(127,64),mul_result(127,64)),
                (io.op === ALU_MULHSU)  -> Mux(sign_change,(~mul_result + 1.U)(127,64),mul_result(127,64)),
                (io.op === ALU_MULHU)   -> Mux(sign_change,(~mul_result + 1.U)(127,64),mul_result(127,64)),
                
                // (io.op === ALU_REM)     -> Mux(sign_change,(~rem_result(63,0)) + 1.U,rem_result(63,0)),
                // (io.op === ALU_REMU)    -> Mux(sign_change,(~rem_result(63,0)) + 1.U,rem_result(63,0)),
                // (io.op === ALU_REMUW)   -> Mux(sign_change,(~rem_result(63,0)) + 1.U,rem_result(63,0)),
                // (io.op === ALU_REMW)    -> Mux(sign_change,(~rem_result(63,0)) + 1.U,rem_result(63,0)),

                (io.op === ALU_REM)     -> rem_result(63,0),
                (io.op === ALU_REMU)    -> rem_result(63,0),
                (io.op === ALU_REMUW)   -> rem_result(63,0),
                (io.op === ALU_REMW)    -> rem_result(63,0),

                (io.op === ALU_DIV)     -> Mux(sign_change,(~div_result(63,0)) + 1.U,div_result(63,0)),
                (io.op === ALU_DIVU)    -> Mux(sign_change,(~div_result(63,0)) + 1.U,div_result(63,0)),
                (io.op === ALU_DIVUW)   -> Mux(sign_change,(~div_result(63,0)) + 1.U,div_result(63,0)),
                (io.op === ALU_DIVW)    -> Mux(sign_change,(~div_result(63,0)) + 1.U,div_result(63,0))
            ))

            io.result := mdu_result

            when(io.result_got)
            {
                mdu_state := mdu_idle
            }
        }
    }
    
}

