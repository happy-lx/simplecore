package simplecore

import chisel3._
import chisel3.util._
import chisel3.util.experimental.BoringUtils

import constants.RV64I._
import constants.RV64M._
import constants.Constraints._

class C2DIO extends Bundle
{
    //控制通路向数据通路传递的信息
    val cp_pc_sel = Output(UInt(3.W))
    val cp_op1_sel = Output(UInt(2.W))
    val cp_op2_sel = Output(UInt(2.W))
    val cp_alu_sel = Output(UInt(5.W))
    val cp_reg_wen = Output(Bool())
    val cp_mem_en = Output(Bool())
    val cp_mem_read_op = Output(UInt(3.W))
    val cp_mem_write_mask = Output(UInt(8.W))
    val cp_mem_wen = Output(Bool())
    val cp_alu_ext_sel = Output(UInt(3.W))
    val cp_wb_sel = Output(UInt(2.W))
    val cp_csr_op = Output(UInt(csr_op_sz)) 


    val hasexception = Output(Bool())
    val shouldstall = Output(Bool())

}
class CpathIO extends Bundle
{
    val c2d = new C2DIO()
    val d2c = Flipped(new D2CIO())
    val imem = Flipped(new memory_port_io)
    val dmem = Flipped(new memory_port_io)
    
}

class Cpath extends Module {
    val io = IO(new CpathIO())

    io := DontCare
    

    //根据数据通路传入的指令进行译码

    val ctr_list = ListLookup(io.d2c.instr, 
                           List(    N  ,     BR_N  ,  OP1_X , OP2_X   ,ALU_X   ,rf_wr_N    ,N , op_x       ,mask_x          , mem_wr_N     , wback_X   ,csr_x,   alu_res_x),
            Array(
                            /*
                            | valid instr | br type | op1    | op2    | alu    | reg write | mem en | mem read op | mem write mask | mem write en |  wb data | csr op  | ALU EXT |
                            */
                JAL     -> List(    Y  ,     BR_J   ,  OP1_X , OP2_X   ,ALU_X   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_pc_4   ,csr_x,   alu_res_x),
                // JAL     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_ADD   ,rf_wr_Y    ,Y , op_bu       ,mask_x          , mem_wr_N     , wback_memout   ,csr_x,   alu_res_noext),
                JALR    -> List(    Y  ,     BR_JR  ,  OP1_X , OP2_X   ,ALU_X   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_pc_4   ,csr_x,   alu_res_x),
                // JALR    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_ADD   ,rf_wr_Y    ,Y , op_bu       ,mask_x          , mem_wr_N     , wback_memout   ,csr_x,   alu_res_noext),

                LB      -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_ADD   ,rf_wr_Y    ,Y , op_b       ,mask_x          , mem_wr_N     , wback_memout   ,csr_x, alu_res_noext),
                LBU     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_ADD   ,rf_wr_Y    ,Y , op_bu       ,mask_x          , mem_wr_N     , wback_memout   ,csr_x,   alu_res_noext),  
                LD      -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_ADD   ,rf_wr_Y    ,Y , op_d       ,mask_x          , mem_wr_N     , wback_memout   ,csr_x,   alu_res_noext),
                LH      -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_ADD   ,rf_wr_Y    ,Y , op_hb       ,mask_x          , mem_wr_N     , wback_memout   ,csr_x,   alu_res_noext),
                LHU     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_ADD   ,rf_wr_Y    ,Y , op_hbu      ,mask_x          , mem_wr_N     , wback_memout   ,csr_x,   alu_res_noext),
                LW      -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_ADD   ,rf_wr_Y    ,Y , op_w       ,mask_x          , mem_wr_N     , wback_memout   ,csr_x,   alu_res_noext),
                LWU     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_ADD   ,rf_wr_Y    ,Y , op_wu       ,mask_x          , mem_wr_N     , wback_memout   ,csr_x,   alu_res_noext),

                LUI     -> List(    Y  ,     BR_N  ,  OP1_U , OP2_X   ,ALU_CP1   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext),
                AUIPC   -> List(    Y  ,     BR_N  ,  OP1_U , OP2_PC   ,ALU_ADD   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext),
                
                SLL     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_SLL   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext),
                SLLI    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_SLL   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext),
                SLLIW   -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_SLL   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_ws),
                SLLW    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_SLL   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_ws),
                SLT     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_SLT   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext),
                SLTI    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_SLT   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext),
                SLTIU   -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_SLTU   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext),
                SLTU    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_SLTU   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext),
                SRA     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_SRA   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext),
                SRAI    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_SRA   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext),
                SRAIW   -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_SRAW   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_ws),
                SRAW    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_SRAW   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_ws),
                SRL     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_SRL   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext),
                SRLI    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_SRL   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext),
                SRLIW   -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_SRLW   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_ws),
                SRLW    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_SRLW   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_ws),
                SUB     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_SUB   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext),
                SUBW    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_SUB   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_ws),
                XOR     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_XOR   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext),
                XORI    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_XOR   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext),
                OR      -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_OR   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext),
                ORI     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_OR   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext),
                ADD     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_ADD   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext),
                ADDI    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_ADD   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext),
                ADDIW   -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_ADD   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_ws),
                ADDW    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_ADD   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_ws),
                AND     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_AND   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext),
                ANDI    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_AND   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext),

                SB      -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_SIM   ,ALU_ADD   ,rf_wr_N    ,Y , op_x       ,mask_b          , mem_wr_Y     , wback_X   ,csr_x,   alu_res_noext),
                SD      -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_SIM   ,ALU_ADD   ,rf_wr_N    ,Y , op_x       ,mask_dw          , mem_wr_Y     , wback_X   ,csr_x,   alu_res_noext),
                SH      -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_SIM   ,ALU_ADD   ,rf_wr_N    ,Y , op_x       ,mask_hb          , mem_wr_Y     , wback_X   ,csr_x,   alu_res_noext),
                SW      -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_SIM   ,ALU_ADD   ,rf_wr_N    ,Y , op_x       ,mask_w          , mem_wr_Y     , wback_X   ,csr_x,   alu_res_noext),

                BEQ     -> List(    Y  ,     BR_EQ  ,  OP1_X , OP2_X   ,ALU_X   ,rf_wr_N    ,N , op_x       ,mask_x          , mem_wr_N     , wback_X   ,csr_x,   alu_res_x),
                BGE     -> List(    Y  ,     BR_GE  ,  OP1_X , OP2_X   ,ALU_X   ,rf_wr_N    ,N , op_x       ,mask_x          , mem_wr_N     , wback_X   ,csr_x,   alu_res_x),
                BGEU    -> List(    Y  ,     BR_GEU  ,  OP1_X , OP2_X   ,ALU_X   ,rf_wr_N    ,N , op_x       ,mask_x          , mem_wr_N     , wback_X   ,csr_x,   alu_res_x),
                BLT     -> List(    Y  ,     BR_LT  ,  OP1_X , OP2_X   ,ALU_X   ,rf_wr_N    ,N , op_x       ,mask_x          , mem_wr_N     , wback_X   ,csr_x,   alu_res_x),
                BLTU    -> List(    Y  ,     BR_LTU  ,  OP1_X , OP2_X   ,ALU_X   ,rf_wr_N    ,N , op_x       ,mask_x          , mem_wr_N     , wback_X   ,csr_x,   alu_res_x),
                BNE     -> List(    Y  ,     BR_NEQ  ,  OP1_X , OP2_X   ,ALU_X   ,rf_wr_N    ,N , op_x       ,mask_x          , mem_wr_N     , wback_X   ,csr_x,   alu_res_x),

                CSRRC   -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_X   ,ALU_CP1   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_csrout   ,csr_c,   alu_res_x),
                CSRRCI  -> List(    Y  ,     BR_N  ,  OP1_Z , OP2_X   ,ALU_CP1   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_csrout   ,csr_c,   alu_res_x),
                CSRRS   -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_X   ,ALU_CP1   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_csrout   ,csr_s,   alu_res_x),
                CSRRSI  -> List(    Y  ,     BR_N  ,  OP1_Z , OP2_X   ,ALU_CP1   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_csrout   ,csr_s,   alu_res_x),
                CSRRW   -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_X   ,ALU_CP1   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_csrout   ,csr_w,   alu_res_x),
                CSRRWI   -> List(    Y  ,     BR_N  ,  OP1_Z , OP2_X   ,ALU_CP1   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_csrout   ,csr_w,   alu_res_x),

                EBREAK  -> List(    Y  ,     BR_N  ,  OP1_X , OP2_X   ,ALU_X   ,rf_wr_N    ,N , op_x       ,mask_x          , mem_wr_N     , wback_X   ,csr_prv,   alu_res_x),
                ECALL   -> List(    Y  ,     BR_N  ,  OP1_X , OP2_X   ,ALU_X   ,rf_wr_N    ,N , op_x       ,mask_x          , mem_wr_N     , wback_X   ,csr_prv,   alu_res_x),
                WFI     -> List(    Y  ,     BR_N  ,  OP1_X , OP2_X   ,ALU_X   ,rf_wr_N    ,N , op_x       ,mask_x          , mem_wr_N     , wback_X   ,csr_x,   alu_res_x),
                SRET    -> List(    Y  ,     BR_N  ,  OP1_X , OP2_X   ,ALU_X   ,rf_wr_N    ,N , op_x       ,mask_x          , mem_wr_N     , wback_X   ,csr_prv,   alu_res_x),
                MRET    -> List(    Y  ,     BR_N  ,  OP1_X , OP2_X   ,ALU_X   ,rf_wr_N    ,N , op_x       ,mask_x          , mem_wr_N     , wback_X   ,csr_prv,   alu_res_x),
                FENCE   -> List(    Y  ,     BR_N  ,  OP1_X , OP2_X   ,ALU_X   ,rf_wr_N    ,N , op_x       ,mask_x          , mem_wr_N     , wback_X   ,csr_x,   alu_res_x),
                FENCEI  -> List(    Y  ,     BR_N  ,  OP1_X , OP2_X   ,ALU_X   ,rf_wr_N    ,N , op_x       ,mask_x          , mem_wr_N     , wback_X   ,csr_x,   alu_res_x),

                MUL     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_MUL   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext),
                MULH    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_MULH   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext),
                MULHSU  -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_MULHSU   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext),
                MULHU   -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_MULHU   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext),
                MULW    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_MUL   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_ws),
                REM     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_REM   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext),
                REMU    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_REMU   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext),
                REMUW   -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_REMUW   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_ws),
                REMW    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_REMW   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_ws),
                DIV     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_DIV   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext),
                DIVU    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_DIVU   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext),
                DIVUW   -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_DIVUW   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_ws),
                DIVW    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_DIVW   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_ws)
            )

    )

    val (cs_valid_inst : Bool) :: cs_branch :: cs_op1_sel :: cs_op2_sel :: cs_alu_sel :: (cs_rf_wen : Bool) :: (cs_mem_valid : Bool) :: cs_mem_read_op :: cs_mem_write_mask :: (cs_mem_en : Bool) :: cs_wb_sel :: cs_csr_op :: cs_alu_ext :: Nil = ctr_list

    //branch logic 
    val temp_pc_sel = Wire(UInt(3.W))
    val temp_stall = Wire(Bool())
    val temp_exception = Wire(Bool())

    temp_pc_sel := MuxCase(pc_4,Array(
        // (io.d2c.isredir) -> pc_redir,
        (cs_branch === BR_N) -> (pc_4),
        (cs_branch === BR_EQ) -> (Mux(io.d2c.iseq,pc_branch,pc_4)),
        (cs_branch === BR_NEQ) -> (Mux(!io.d2c.iseq,pc_branch,pc_4)),
        (cs_branch === BR_GE) -> (Mux(!io.d2c.islt,pc_branch,pc_4)),
        (cs_branch === BR_GEU) -> (Mux(!io.d2c.isltu,pc_branch,pc_4)),
        (cs_branch === BR_LT) -> (Mux(io.d2c.islt,pc_branch,pc_4)),
        (cs_branch === BR_LTU) -> (Mux(io.d2c.isltu,pc_branch,pc_4)),
        (cs_branch === BR_J) -> pc_j,
        (cs_branch === BR_JR) -> pc_jr
    ))

    when(io.d2c.isredir)
    {
        temp_pc_sel := pc_redir
    }

    //judge stall and exception 
    //stall happens when i$ miss or d$miss 
    temp_stall := (!io.imem.resp.valid || !(!cs_mem_valid || (cs_mem_valid && io.dmem.resp.valid)))

    //exception happens when the instruction is illegal
    temp_exception := (io.imem.resp.valid && !cs_valid_inst)

    //assgin control signal to output 
    // val cp_pc_sel = Output(UInt(2.W))
    // val cp_op1_sel = Output(UInt(2.W))
    // val cp_op2_sel = Output(UInt(2.W))
    // val cp_alu_sel = Output(UInt(5.W))
    // val cp_reg_wen = Output(Bool())
    // val cp_mem_en = Output(Bool())
    // val cp_mem_read_mask = Output(3.W)
    // val cp_mem_write_mask = Output(8.W)
    // val cp_mem_wen = Output(Bool())
    // val cp_alu_ext_sel = Output(3.W)
    // val cp_wb_sel = Output(2.W)
    // val cp_csr_op = Output(csr_op_sz) 

    io.c2d.cp_pc_sel            := temp_pc_sel
    io.c2d.cp_op1_sel           := cs_op1_sel
    io.c2d.cp_op2_sel           := cs_op2_sel
    io.c2d.cp_alu_sel           := cs_alu_sel
    io.c2d.cp_reg_wen           := cs_rf_wen
    io.c2d.cp_mem_en            := cs_mem_valid
    io.c2d.cp_mem_read_op       := cs_mem_read_op
    io.c2d.cp_mem_write_mask    := cs_mem_write_mask
    io.c2d.cp_mem_wen           := cs_mem_en
    io.c2d.cp_alu_ext_sel       := cs_alu_ext
    io.c2d.cp_wb_sel            := cs_wb_sel
    io.c2d.cp_csr_op            := cs_csr_op

    io.c2d.hasexception := temp_exception
    io.c2d.shouldstall := temp_stall

    BoringUtils.addSource(io.c2d.cp_reg_wen,"cs_rf_wen")
    // BoringUtils.addSource(io.d2c.isredir,"isredir")

    

}