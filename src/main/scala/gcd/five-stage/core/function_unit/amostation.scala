package mycore

import chisel3._
import chisel3.util._
import chisel3.experimental._
import chisel3.experimental.BundleLiterals._
import chisel3.util.experimental.BoringUtils

import constants.RV64I._
import constants.RV64M._
import constants.Constraints._

class amoStation_IO extends Bundle
{
    val en = Input(Bool())
    val is_word = Input(Bool())
    val push = Input(Bool())
    val compare = Input(Bool())
    val in_addr = Input(UInt(64.W))
    val flush = Input(Bool())

    val valid = Output(Bool())
}

class amoStation extends Module
{
    val io = IO(new amoStation_IO)

    io := DontCare

    val data = RegInit(0.U(64.W))
    val is_empty = RegInit(true.B)
    val is_word = RegInit(false.B)

    when(io.en && io.push)
    {
        io.valid := false.B
        is_empty := false.B
        data := io.in_addr
        is_word := io.is_word 
    }.elsewhen(io.en && io.compare)
    {
        when(is_empty)
        {
            //nothing is in station
            io.valid := false.B
        }.elsewhen(data === io.in_addr && is_word === io.is_word)
        {
            //there is a data in station
            io.valid := true.B
        }.otherwise
        {
            io.valid := false.B
        }
    }
    when(io.en && io.flush)
    {
        is_empty := true.B
        data := 0.U(64.W)
        is_word := false.B
    }
}