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
    //for RAS
    val pc_value = Input(UInt(64.W))
    val ras_target = Output(UInt(64.W))
    //for PHT
    val pc_exe  = Input(UInt(64.W))

    val IF_pc_branch = Output(UInt(2.W))
    val IF_pc_sel = Output(UInt(3.W))
    val EXE_correct = Output(Bool())
}

class BPU extends Module
{
    val io = IO(new BPU_io)

    io := DontCare

    val BRANCHTYPRE =   BitPat("b????????_????????_????????_?1100011")
    //jal : rd = any
    val JALTYPE     =   BitPat("b????????_????????_????????_?1101111")
    //jalr $ra
    val JALRTYPE    =   BitPat("b????????_????????_?000????_?1100111")

    val sn_TAKEN :: n_TAKEN :: _TAKEN :: s_TAKEN :: Nil = Enum(4) 

    assert(Config.get("Pshare") && !Config.get("Gshare") || !Config.get("Pshare") && Config.get("Gshare") || !Config.get("Pshare") && !Config.get("Gshare"))
    
    val bpu_PHT = if(Config.get("Pshare")) RegInit(VecInit(Seq.fill(PHTSIZE)(sn_TAKEN))) else null

    val bpu_raw = RegInit(sn_TAKEN) 

    val bpu_BHT = if(Config.get("Pshare")) RegInit(VecInit(Seq.fill(BHTSIZE)(0.U(BHRWIDTH.W)))) else null
    
    val bpu_GHR = if(Config.get("Gshare")) RegInit(0.U(GHRWIDTH.W)) else null
    
    val bpu_GPHT = if(Config.get("Gshare")) RegInit(VecInit(Seq.fill(PHTSIZE)(sn_TAKEN))) else null

    if(Config.get("Pshare"))
    {
        when(io.EXE_pc_branch =/= 0.U && !io.has_stall)
        {
            //indicate that this is a branch instruction
            bpu_BHT(io.pc_exe(BHTINDEX_HIGH,BHTINDEX_LOW)) := Mux(io.EXE_actual_branch === 1.U,
                Cat(bpu_BHT(io.pc_exe(BHTINDEX_HIGH,BHTINDEX_LOW))(BHRWIDTH-1,1),1.U(1.W)),
                Cat(bpu_BHT(io.pc_exe(BHTINDEX_HIGH,BHTINDEX_LOW))(BHRWIDTH-1,1),0.U(1.W))
            )
        }
    }
    if(Config.get("Gshare"))
    {
        when(io.EXE_pc_branch =/= 0.U && !io.has_stall)
        {
            //indicate that this is a branch instruction
            bpu_GHR := Mux(io.EXE_actual_branch === 1.U,
                Cat(bpu_GHR(GHRWIDTH-1,1),1.U(1.W)),
                Cat(bpu_GHR(GHRWIDTH-1,1),0.U(1.W))
            )
        }
    }


    val isBtype = WireInit(false.B)
    val isJALtype = WireInit(false.B)
    val isJALRtype = WireInit(false.B)

    val bpu_ras = Module(new RAS)
    bpu_ras.io := DontCare
    bpu_ras.io.pipeline_stall := io.has_stall
    bpu_ras.io.pc_in := io.pc_value

    //mutex: only one will be true or all the signals are false
    val (isBtype_temp : Bool) :: Nil = ListLookup(io.IF_ins,
                           List(false.B),
    Array( BRANCHTYPRE ->  List(true.B ))
    )
    val (isJALtype_temp : Bool) :: Nil = ListLookup(io.IF_ins,
                             List(false.B),
    Array( JALTYPE    ->     List(true.B ))
    )
    val (isJALRtype_temp : Bool) :: Nil = ListLookup(io.IF_ins,
                            List(false.B),
    Array( JALRTYPE   ->    List(true.B ))
    )

    isBtype := isBtype_temp && !io.has_stall
    isJALtype := isJALtype_temp && !io.has_stall
    isJALRtype := isJALRtype_temp && !io.has_stall

    val prediction_suc  = (io.EXE_actual_branch === io.EXE_pc_branch && io.EXE_actual_branch =/= 0.U(2.W))
    val prediction_fail = (io.EXE_actual_branch =/= io.EXE_pc_branch && io.EXE_actual_branch =/= 0.U(2.W) && io.EXE_pc_branch =/= 0.U(2.W))
    io.EXE_correct :=  prediction_suc

    when(!isBtype)
    {
        when(isJALtype)
        {
            io.IF_pc_sel := pc_btb
            io.IF_pc_branch := 0.U(2.W)
            bpu_ras.io.op := ras_write
            bpu_ras.io.write_target := io.pc_value + 4.U
            
        }.elsewhen(isJALRtype)
        {
            io.IF_pc_sel := pc_ras
            io.IF_pc_branch := 0.U(2.W)
            bpu_ras.io.op := ras_read
            io.ras_target := bpu_ras.io.read_value

        }.otherwise
        {
            io.IF_pc_sel := pc_4
            io.IF_pc_branch := 0.U(2.W)
            bpu_ras.io.op := ras_x
        }
    }
    //val pht_index_if = Cat(io.pc_value(PHTINDEX,0),bpu_BHT(io.pc_value(BHTINDEX_HIGH,BHTINDEX_LOW)))
    val prediction_state_if = if(Config.get("Pshare")) 
                          bpu_PHT(Cat(io.pc_value(PHTINDEX,0),bpu_BHT(io.pc_value(BHTINDEX_HIGH,BHTINDEX_LOW))))
                              else if(Config.get("Gshare"))
                          bpu_GPHT((io.pc_value(GHRWIDTH-1,0) ^ bpu_GHR)(GHRWIDTH-1,GHRWIDTH-1-log2Ceil(PHTSIZE)-1))
                              else
                          bpu_raw
    //prediction logic 
    switch(prediction_state_if)
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
    //val pht_index_exe = Cat(io.pc_exe(PHTINDEX,0),bpu_BHT(io.pc_exe(BHTINDEX_HIGH,BHTINDEX_LOW)))
    val prediction_state_exe = if(Config.get("Pshare")) 
                           bpu_PHT(Cat(io.pc_exe(PHTINDEX,0),bpu_BHT(io.pc_exe(BHTINDEX_HIGH,BHTINDEX_LOW))))
                               else if(Config.get("Gshare"))
                           bpu_GPHT((io.pc_value(GHRWIDTH-1,0) ^ bpu_GHR)(GHRWIDTH-1,GHRWIDTH-1-log2Ceil(PHTSIZE)-1))
                               else 
                           bpu_raw
    //state switch logic 
    switch(prediction_state_exe)
    {
        is(sn_TAKEN)
        {
            when(prediction_suc && !io.has_stall)
            {
                prediction_state_exe := sn_TAKEN
            }.elsewhen(prediction_fail && !io.has_stall)
            {
                prediction_state_exe := n_TAKEN
            }
        }
        is(n_TAKEN)
        {
            when(prediction_suc && !io.has_stall)
            {
                prediction_state_exe := sn_TAKEN
            }.elsewhen(prediction_fail && !io.has_stall)
            {
                prediction_state_exe := _TAKEN
            }
        }
        is(_TAKEN)
        {
            when(prediction_suc && !io.has_stall)
            {
                prediction_state_exe := s_TAKEN
            }.elsewhen(prediction_fail && !io.has_stall)
            {
                prediction_state_exe := n_TAKEN
            }
        }
        is(s_TAKEN)
        {
            when(prediction_suc && !io.has_stall)
            {
                prediction_state_exe := s_TAKEN
            }.elsewhen(prediction_fail && !io.has_stall)
            {
                prediction_state_exe := _TAKEN
            }
        }
    }

}

class RAS_io extends Bundle
{
    val op = Input(UInt(2.W))
    val pc_in = Input(UInt(64.W))
    val write_target = Input(UInt(64.W))
    
    val read_value = Output(UInt(64.W))

    val pipeline_stall = Input(Bool())
}

class RAS_data extends Bundle
{
    val target = UInt(64.W)
    val depth = UInt(log2Down(recursion_depth).W)
}

class RAS extends Module
{
    val io = IO(new RAS_io)

    io := DontCare

    val ras_data = Mem(ras_number,new RAS_data)
    val pointer = RegInit(0.U(log2Down(ras_number).W))
    val write_same = (io.pc_in + 4.U === ras_data(pointer - 1.U).target)

    /* eg. for a 4 entry RAS 
    ------
    |    |
    ------    
    |    |  <- pointer
    ------  
    |ras2|
    ------  
    |ras1|
    ------  
    */

    //for read , step1: connect the output value for BPU to read 
    //step2: when there is no stall signal,pop the value on the top of RAS , pointer--
    when(io.op === ras_read)
    {
        io.read_value := ras_data(pointer - 1.U).target
        when(!io.pipeline_stall)
        {
            //pipeline about to foward 
            when(ras_data(pointer - 1.U).depth > 0.U)
            {
                ras_data(pointer - 1.U).depth := ras_data(pointer - 1.U).depth - 1.U
            }.otherwise
            {
                pointer := pointer - 1.U
            }
        }
    }

    //for write , only active on jal instruction so when no stall , write to the top of RAS , pointer++
    when(io.op === ras_write)
    {
        when(!io.pipeline_stall)
        {
            when(write_same)
            {
                //recursion
                ras_data(pointer - 1.U).depth := ras_data(pointer - 1.U).depth + 1.U
            }.otherwise
            {
                ras_data(pointer).target := io.write_target
                ras_data(pointer).depth := 0.U
                pointer := pointer + 1.U
            }
        }
    }
}