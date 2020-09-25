package mycore

import chisel3._
import chisel3.util._
import chisel3.experimental._
import chisel3.experimental.BundleLiterals._
import chisel3.tester._
import chisel3.tester.RawTester.test


import constants.Constraints._

class alu_io extends Bundle
{
    val input1 = Input(UInt(64.W))
    val input2 = Input(UInt(64.W))

    val op = Input(UInt(5.W))
    val res_ext_op = Input(UInt(3.W))

    val res = Output(UInt(64.W))
}

class alu_module extends Module {
    val io = IO(new alu_io)

    val res_temp = Wire(UInt(64.W))
    val add_res = Wire(UInt(64.W))
    add_res := io.input1 + io.input2

    val sham = io.input2(5,0).asUInt()

    //do the operation of op

    res_temp := MuxCase(add_res,Array(
        (io.op === ALU_ADD) -> add_res,
        (io.op === ALU_SUB) -> (io.input1 - io.input2) ,
        (io.op === ALU_AND) -> (io.input1 & io.input2),
        (io.op === ALU_OR) -> (io.input1 | io.input2),
        (io.op === ALU_XOR) -> (io.input1 ^ io.input2),
        (io.op === ALU_SLL) -> ((io.input1 << sham)(63,0).asUInt()),
        (io.op === ALU_SLT) -> (io.input1.asSInt() < io.input2.asSInt()),
        (io.op === ALU_SLTU) -> (io.input1.asUInt() < io.input2.asUInt()),
        (io.op === ALU_SRA) -> ((io.input1.asSInt() >> sham).asUInt()),
        (io.op === ALU_SRAW) -> ((io.input1(31,0).asSInt() >> sham).asUInt()),
        (io.op === ALU_SRL) -> ((io.input1.asUInt() >> sham).asUInt()),
        (io.op === ALU_SRLW) -> ((io.input1(31,0).asUInt() >> sham).asUInt()),
        (io.op === ALU_CP1) -> (io.input1),
        (io.op === ALU_MUL) -> ((io.input1.asSInt() * io.input2.asSInt())(63,0).asUInt()),
        (io.op === ALU_MULH) -> ((io.input1.asSInt() * io.input2.asSInt())(127,64).asUInt()),
        (io.op === ALU_MULHSU) -> ((io.input1.asSInt() * Cat(0.U(1.W),io.input2).asSInt())(127,64).asUInt()),
        (io.op === ALU_MULHU) -> ((io.input1.asUInt() * io.input2.asUInt())(127,64).asUInt()),
        (io.op === ALU_REM) -> ((io.input1.asSInt() % io.input2.asSInt()).asUInt()),
        (io.op === ALU_REMU) -> ((io.input1.asUInt() % io.input2.asUInt()).asUInt()),
        (io.op === ALU_REMUW) -> ((io.input1(31,0).asUInt() % io.input2(31,0).asUInt()).asUInt()),
        (io.op === ALU_REMW) -> ((io.input1(31,0).asSInt() % io.input2(31,0).asSInt()).asUInt()),
        (io.op === ALU_DIV) -> ((io.input1.asSInt() / io.input2.asSInt()).asUInt()),
        (io.op === ALU_DIVU) -> ((io.input1.asUInt() / io.input2.asUInt()).asUInt()),
        (io.op === ALU_DIVUW) -> ((io.input1(31,0).asUInt() / io.input2(31,0).asUInt()).asUInt()),
        (io.op === ALU_DIVW) -> ((io.input1(31,0).asSInt() / io.input2(31,0).asSInt()).asUInt())
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

// val result = Driver(() => new alu_module){
//     c => new PeekPokeTester(c)
//     {
        
//     }
// }

// object alu_main
// {
//     def main(args: Array[String]): Unit = {
//         test(new alu_module){
//         c => 
//         c.io.input1.poke(5.U)
//         c.io.input2.poke(7.U)

//         c.io.op.poke(0.U)
//         c.io.res_ext_op.poke(0.U)

//         c.io.res.expect(12.U)

//         c.io.input1.poke(5.U)
//         c.io.input2.poke(7.U)

//         c.io.op.poke(1.U)
//         c.io.res_ext_op.poke(0.U)

//         c.io.res.expect(-2.U)
//         }
//     }
// }
