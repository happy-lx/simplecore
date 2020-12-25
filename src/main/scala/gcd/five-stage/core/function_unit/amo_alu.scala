package mycore

import chisel3._
import chisel3.util._
import chisel3.experimental._
import chisel3.experimental.BundleLiterals._
import chisel3.util.experimental.BoringUtils

import constants.RV64I._
import constants.RV64M._
import constants.Constraints._

class amo_alu_IO extends Bundle
{
    val op1 = Input(UInt(64.W))
    val op2 = Input(UInt(64.W))
    val is_word = Input(Bool())
    val op_code = Input(UInt(4.W))
    val en = Input(Bool())

    val out_rd = Output(UInt(64.W))
    val out_mem = Output(UInt(64.W))
}

class amo_alu extends Module
{
    val io = IO(new amo_alu_IO)

    io := DontCare

    val op1_word = WireInit(io.op1(31,0))
    val op2_word = WireInit(io.op2(31,0))
    val op1 = WireInit(io.op1)
    val op2 = WireInit(io.op2)

    val result = Wire(UInt(64.W))

    when(io.en)
    {
        result := MuxCase((op1 + op2)(63,0),Array(
            (io.op_code === A_op_add && !io.is_word)    -> (op1 + op2)(63,0),
            (io.op_code === A_op_add &&  io.is_word)    -> Fill(2,(op1_word + op2_word)(31,0)),
            (io.op_code === A_op_and && !io.is_word)    -> (op1 & op2)(63,0),
            (io.op_code === A_op_and &&  io.is_word)    -> Fill(2,(op1_word & op2_word)(31,0)),
            (io.op_code === A_op_max && !io.is_word)    -> Mux(op1.asSInt > op2.asSInt,op1,op2),
            (io.op_code === A_op_max &&  io.is_word)    -> Mux(op1_word.asSInt > op2_word.asSInt,Fill(2,op1_word),Fill(2,op2_word)),
            (io.op_code === A_op_maxu && !io.is_word)   -> Mux(op1.asUInt > op2.asUInt,op1,op2),
            (io.op_code === A_op_maxu &&  io.is_word)   -> Mux(op1_word.asUInt > op2_word.asUInt,Fill(2,op1_word),Fill(2,op2_word)),
            (io.op_code === A_op_min && !io.is_word)    -> Mux(op1.asSInt > op2.asSInt,op2,op1),
            (io.op_code === A_op_min &&  io.is_word)    -> Mux(op1_word.asSInt > op2_word.asSInt,Fill(2,op2_word),Fill(2,op1_word)),
            (io.op_code === A_op_minu && !io.is_word)   -> Mux(op1.asUInt > op2.asUInt,op2,op1),
            (io.op_code === A_op_minu &&  io.is_word)   -> Mux(op1_word.asUInt > op2_word.asUInt,Fill(2,op2_word),Fill(2,op1_word)),
            (io.op_code === A_op_or && !io.is_word)     -> (op1 | op2),
            (io.op_code === A_op_or &&  io.is_word)     -> Fill(2,(op1_word | op2_word)(31,0)),
            (io.op_code === A_op_swap && !io.is_word)   -> op2,
            (io.op_code === A_op_swap &&  io.is_word)   -> Fill(2,op2(31,0)),
            (io.op_code === A_op_xor && !io.is_word)    -> (op1 ^ op2),
            (io.op_code === A_op_xor &&  io.is_word)    -> Fill(2,(op1_word ^ op2_word)(31,0)),
        ))

    }.otherwise
    {
        result := DontCare
    }

    io.out_mem := result
    io.out_rd  := Mux(io.is_word,Cat(Fill(32,op1(31)),op1(31,0)),op1)

    

}

