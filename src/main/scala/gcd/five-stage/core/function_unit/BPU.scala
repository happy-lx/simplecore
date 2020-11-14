package mycore

import chisel3._
import chisel3.util._
import chisel3.experimental._
import chisel3.experimental.BundleLiterals._
import chisel3.util.experimental.BoringUtils

import constants.RV64I._
import constants.RV64M._
import constants.Constraints._

class BPU_io extends Bundle
{
    val IF_ins = Input(UInt(64.W))
    //0 : nothing ; 1 : jump ; 2 : not jump 
    val EXE_pc_branch = Input(UInt(2.W))
    val EXE_actual_branch = Input(UInt(2.W))
    val has_stall = Input(Bool())

    val IF_pc_branch = Output(UInt(2.W))
    val IF_pc_sel = Output(UInt(3.W))
    val EXE_correct = Output(Bool())
}

class BPU extends Module
{
    val io = IO(new BPU_io)

    io := DontCare

    val BRANCHTYPRE = BitPat("b????????_????????_????????_?1100011")

    val sn_TAKEN :: n_TAKEN :: _TAKEN :: s_TAKEN :: Nil = Enum(4) 
    val prediction_state = RegInit(sn_TAKEN)

    val isBtype = WireInit(false.B)

    val (isBtype_temp : Bool) :: Nil = ListLookup(io.IF_ins,
                           List(false.B),
    Array( BRANCHTYPRE ->  List(true.B ))
    )

    isBtype := isBtype_temp && !io.has_stall

    val prediction_suc  = (io.EXE_actual_branch === io.EXE_pc_branch && io.EXE_actual_branch =/= 0.U(2.W))
    val prediction_fail = (io.EXE_actual_branch =/= io.EXE_pc_branch && io.EXE_actual_branch =/= 0.U(2.W) && io.EXE_pc_branch =/= 0.U(2.W))
    io.EXE_correct :=  prediction_suc

    when(!isBtype)
    {
        io.IF_pc_sel := pc_4
        io.IF_pc_branch := 0.U(2.W)
    }

    //prediction logic 
    switch(prediction_state)
    {

        is(sn_TAKEN)
        {
            when(isBtype)
            {
                io.IF_pc_sel := pc_4
                io.IF_pc_branch := 2.U(2.W)
            }
        }
        is(n_TAKEN)
        {
            when(isBtype)
            {
                io.IF_pc_sel := pc_4
                io.IF_pc_branch := 2.U(2.W)
            }
        }
        is(_TAKEN)
        {
            when(isBtype)
            {
                io.IF_pc_sel := pc_bpu
                io.IF_pc_branch := 1.U(2.W)
            }
        }
        is(s_TAKEN)
        {
            when(isBtype)
            {
                io.IF_pc_sel := pc_bpu
                io.IF_pc_branch := 1.U(2.W)
            }
        }
    }

    //state switch logic 
    switch(prediction_state)
    {
        is(sn_TAKEN)
        {
            when(prediction_suc && !io.has_stall)
            {
                prediction_state := sn_TAKEN
            }.elsewhen(prediction_fail && !io.has_stall)
            {
                prediction_state := n_TAKEN
            }
        }
        is(n_TAKEN)
        {
            when(prediction_suc && !io.has_stall)
            {
                prediction_state := sn_TAKEN
            }.elsewhen(prediction_fail && !io.has_stall)
            {
                prediction_state := _TAKEN
            }
        }
        is(_TAKEN)
        {
            when(prediction_suc && !io.has_stall)
            {
                prediction_state := s_TAKEN
            }.elsewhen(prediction_fail && !io.has_stall)
            {
                prediction_state := n_TAKEN
            }
        }
        is(s_TAKEN)
        {
            when(prediction_suc && !io.has_stall)
            {
                prediction_state := s_TAKEN
            }.elsewhen(prediction_fail && !io.has_stall)
            {
                prediction_state := _TAKEN
            }
        }
    }

}