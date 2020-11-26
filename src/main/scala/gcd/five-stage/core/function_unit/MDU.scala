package mycore

import chisel3._
import chisel3.util._
import chisel3.experimental._
import chisel3.experimental.BundleLiterals._
import chisel3.tester._
import chisel3.tester.RawTester.test
import chisel3.util.experimental.BoringUtils


import constants.Constraints._

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

    val rem_sign_change = (op1_is_neg && !op2_is_neg) || (op1_is_neg && op2_is_neg)

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
    BoringUtils.addSource(abs_op1,"abs_op1")
    BoringUtils.addSource(abs_op2,"abs_op2")

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
                
                (io.op === ALU_REM)     -> Mux(rem_sign_change,(~rem_result(63,0)) + 1.U,rem_result(63,0)),
                (io.op === ALU_REMU)    -> Mux(rem_sign_change,(~rem_result(63,0)) + 1.U,rem_result(63,0)),
                (io.op === ALU_REMUW)   -> Mux(rem_sign_change,(~rem_result(63,0)) + 1.U,rem_result(63,0)),
                (io.op === ALU_REMW)    -> Mux(rem_sign_change,(~rem_result(63,0)) + 1.U,rem_result(63,0)),

                // (io.op === ALU_REM)     -> rem_result(63,0),
                // (io.op === ALU_REMU)    -> rem_result(63,0),
                // (io.op === ALU_REMUW)   -> rem_result(63,0),
                // (io.op === ALU_REMW)    -> rem_result(63,0),

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