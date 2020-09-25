package mycore

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

    val cp_control_hazard = Output(Bool())
    val cp_if_kill = Output(Bool())
    val cp_data_hazard = Output(Bool())
    val cp_pipeline_kill = Output(Bool())
    val cp_pipeline_stall = Output(Bool())



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
                           List(    N  ,     BR_N  ,  OP1_X , OP2_X   ,ALU_X   ,rf_wr_N    ,N , op_x       ,mask_x          , mem_wr_N     , wback_X   ,csr_x,   alu_res_x  , N , N , N),
            Array(
                            /*
                            | valid instr | br type | op1    | op2    | alu    | reg write | mem en | mem read op | mem write mask | mem write en |  wb data | csr op  | ALU EXT | is fence.i? | rs1en | rs2 en
                            */
                JAL     -> List(    Y  ,     BR_J   ,  OP1_X , OP2_X   ,ALU_X   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_pc_4   ,csr_x,   alu_res_x   ,  N   ,  N   , N),
                // JAL     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_ADD   ,rf_wr_Y    ,Y , op_bu       ,mask_x          , mem_wr_N     , wback_memout   ,csr_x,   alu_res_noext),
                JALR    -> List(    Y  ,     BR_JR  ,  OP1_X , OP2_X   ,ALU_X   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_pc_4   ,csr_x,   alu_res_x  ,  N   ,  Y   , N),
                // JALR    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_ADD   ,rf_wr_Y    ,Y , op_bu       ,mask_x          , mem_wr_N     , wback_memout   ,csr_x,   alu_res_noext),

                LB      -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_ADD   ,rf_wr_Y    ,Y , op_b       ,mask_x          , mem_wr_N     , wback_memout   ,csr_x, alu_res_noext  ,  N   ,  Y   , N),
                LBU     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_ADD   ,rf_wr_Y    ,Y , op_bu       ,mask_x          , mem_wr_N     , wback_memout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , N),  
                LD      -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_ADD   ,rf_wr_Y    ,Y , op_d       ,mask_x          , mem_wr_N     , wback_memout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , N),
                LH      -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_ADD   ,rf_wr_Y    ,Y , op_hb       ,mask_x          , mem_wr_N     , wback_memout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , N),
                LHU     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_ADD   ,rf_wr_Y    ,Y , op_hbu      ,mask_x          , mem_wr_N     , wback_memout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , N),
                LW      -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_ADD   ,rf_wr_Y    ,Y , op_w       ,mask_x          , mem_wr_N     , wback_memout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , N),
                LWU     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_ADD   ,rf_wr_Y    ,Y , op_wu       ,mask_x          , mem_wr_N     , wback_memout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , N),

                LUI     -> List(    Y  ,     BR_N  ,  OP1_U , OP2_X   ,ALU_CP1   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  N   , N),
                AUIPC   -> List(    Y  ,     BR_N  ,  OP1_U , OP2_PC   ,ALU_ADD   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  N   , N),
                
                SLL     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_SLL   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , Y),
                SLLI    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_SLL   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , N),
                SLLIW   -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_SLL   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_ws  ,  N   ,  Y   , N),
                SLLW    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_SLL   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_ws  ,  N   ,  Y   , Y),
                SLT     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_SLT   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , Y),
                SLTI    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_SLT   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , N),
                SLTIU   -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_SLTU   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , N),
                SLTU    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_SLTU   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , Y),
                SRA     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_SRA   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , Y),
                SRAI    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_SRA   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , N),
                SRAIW   -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_SRAW   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_ws  ,  N   ,  Y   , N),
                SRAW    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_SRAW   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_ws  ,  N   ,  Y   , Y,
                SRL     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_SRL   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , Y),
                SRLI    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_SRL   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , N),
                SRLIW   -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_SRLW   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_ws  ,  N   ,  Y   , N),
                SRLW    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_SRLW   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_ws  ,  N   ,  Y   , Y),
                SUB     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_SUB   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , Y),
                SUBW    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_SUB   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_ws  ,  N   ,  Y   , Y),
                XOR     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_XOR   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , Y),
                XORI    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_XOR   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , N),
                OR      -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_OR   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , Y),
                ORI     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_OR   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , N),
                ADD     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_ADD   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , Y),
                ADDI    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_ADD   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , N),
                ADDIW   -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_ADD   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_ws  ,  N   ,  Y   , N),
                ADDW    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_ADD   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_ws  ,  N   ,  Y   , Y),
                AND     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_AND   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , Y),
                ANDI    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_AND   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , N),

                SB      -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_SIM   ,ALU_ADD   ,rf_wr_N    ,Y , op_x       ,mask_b          , mem_wr_Y     , wback_X   ,csr_x,   alu_res_noext  ,  N   ,  Y   , N),
                SD      -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_SIM   ,ALU_ADD   ,rf_wr_N    ,Y , op_x       ,mask_dw          , mem_wr_Y     , wback_X   ,csr_x,   alu_res_noext  ,  N   ,  Y   , N),
                SH      -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_SIM   ,ALU_ADD   ,rf_wr_N    ,Y , op_x       ,mask_hb          , mem_wr_Y     , wback_X   ,csr_x,   alu_res_noext  ,  N   ,  Y   , N),
                SW      -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_SIM   ,ALU_ADD   ,rf_wr_N    ,Y , op_x       ,mask_w          , mem_wr_Y     , wback_X   ,csr_x,   alu_res_noext  ,  N   ,  Y   , N),

                BEQ     -> List(    Y  ,     BR_EQ  ,  OP1_X , OP2_X   ,ALU_X   ,rf_wr_N    ,N , op_x       ,mask_x          , mem_wr_N     , wback_X   ,csr_x,   alu_res_x  ,  N   ,  Y   , Y),
                BGE     -> List(    Y  ,     BR_GE  ,  OP1_X , OP2_X   ,ALU_X   ,rf_wr_N    ,N , op_x       ,mask_x          , mem_wr_N     , wback_X   ,csr_x,   alu_res_x  ,  N   ,  Y   , Y),
                BGEU    -> List(    Y  ,     BR_GEU  ,  OP1_X , OP2_X   ,ALU_X   ,rf_wr_N    ,N , op_x       ,mask_x          , mem_wr_N     , wback_X   ,csr_x,   alu_res_x  ,  N   ,  Y   , Y),
                BLT     -> List(    Y  ,     BR_LT  ,  OP1_X , OP2_X   ,ALU_X   ,rf_wr_N    ,N , op_x       ,mask_x          , mem_wr_N     , wback_X   ,csr_x,   alu_res_x  ,  N   ,  Y   , Y),
                BLTU    -> List(    Y  ,     BR_LTU  ,  OP1_X , OP2_X   ,ALU_X   ,rf_wr_N    ,N , op_x       ,mask_x          , mem_wr_N     , wback_X   ,csr_x,   alu_res_x  ,  N   ,  Y   , Y),
                BNE     -> List(    Y  ,     BR_NEQ  ,  OP1_X , OP2_X   ,ALU_X   ,rf_wr_N    ,N , op_x       ,mask_x          , mem_wr_N     , wback_X   ,csr_x,   alu_res_x  ,  N   ,  Y   , Y),

                CSRRC   -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_X   ,ALU_CP1   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_csrout   ,csr_c,   alu_res_x  ,  N   ,  Y   , N),
                CSRRCI  -> List(    Y  ,     BR_N  ,  OP1_Z , OP2_X   ,ALU_CP1   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_csrout   ,csr_c,   alu_res_x  ,  N   ,  N   , N),
                CSRRS   -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_X   ,ALU_CP1   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_csrout   ,csr_s,   alu_res_x  ,  N   ,  Y   , N),
                CSRRSI  -> List(    Y  ,     BR_N  ,  OP1_Z , OP2_X   ,ALU_CP1   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_csrout   ,csr_s,   alu_res_x  ,  N   ,  N   , N),
                CSRRW   -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_X   ,ALU_CP1   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_csrout   ,csr_w,   alu_res_x  ,  N   ,  Y   , N),
                CSRRWI  -> List(    Y  ,     BR_N  ,  OP1_Z , OP2_X   ,ALU_CP1   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_csrout   ,csr_w,   alu_res_x  ,  N   ,  N   , N),

                EBREAK  -> List(    Y  ,     BR_N  ,  OP1_X , OP2_X   ,ALU_X   ,rf_wr_N    ,N , op_x       ,mask_x          , mem_wr_N     , wback_X   ,csr_prv,   alu_res_x  ,  N   ,  N   , N),
                ECALL   -> List(    Y  ,     BR_N  ,  OP1_X , OP2_X   ,ALU_X   ,rf_wr_N    ,N , op_x       ,mask_x          , mem_wr_N     , wback_X   ,csr_prv,   alu_res_x  ,  N   ,  N   , N),
                WFI     -> List(    Y  ,     BR_N  ,  OP1_X , OP2_X   ,ALU_X   ,rf_wr_N    ,N , op_x       ,mask_x          , mem_wr_N     , wback_X   ,csr_x,   alu_res_x  ,  N   ,  N   , N),
                SRET    -> List(    Y  ,     BR_N  ,  OP1_X , OP2_X   ,ALU_X   ,rf_wr_N    ,N , op_x       ,mask_x          , mem_wr_N     , wback_X   ,csr_prv,   alu_res_x  ,  N   ,  N   , N),
                MRET    -> List(    Y  ,     BR_N  ,  OP1_X , OP2_X   ,ALU_X   ,rf_wr_N    ,N , op_x       ,mask_x          , mem_wr_N     , wback_X   ,csr_prv,   alu_res_x  ,  N   ,  N   , N),
                FENCE   -> List(    Y  ,     BR_N  ,  OP1_X , OP2_X   ,ALU_X   ,rf_wr_N    ,N , op_x       ,mask_x          , mem_wr_N     , wback_X   ,csr_x,   alu_res_x  ,  N   ,  N   , N),
                FENCEI  -> List(    Y  ,     BR_N  ,  OP1_X , OP2_X   ,ALU_X   ,rf_wr_N    ,N , op_x       ,mask_x          , mem_wr_N     , wback_X   ,csr_x,   alu_res_x  ,  Y   ,  N   , N),

                MUL     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_MUL   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , Y),
                MULH    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_MULH   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , Y),
                MULHSU  -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_MULHSU   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , Y),
                MULHU   -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_MULHU   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , Y),
                MULW    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_MUL   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_ws  ,  N   ,  Y   , Y),
                REM     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_REM   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , Y),
                REMU    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_REMU   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , Y),
                REMUW   -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_REMUW   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_ws  ,  N   ,  Y   , Y),
                REMW    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_REMW   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_ws  ,  N   ,  Y   , Y),
                DIV     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_DIV   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , Y),
                DIVU    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_DIVU   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , Y),
                DIVUW   -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_DIVUW   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_ws  ,  N   ,  Y   , Y),
                DIVW    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_DIVW   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_ws  ,  N   ,  Y   , Y)
            )

    )

    val (cs_valid_inst : Bool) :: cs_branch :: cs_op1_sel :: cs_op2_sel :: cs_alu_sel :: (cs_rf_wen : Bool) :: (cs_mem_valid : Bool) :: cs_mem_read_op :: cs_mem_write_mask :: (cs_mem_en : Bool) :: cs_wb_sel :: cs_csr_op :: cs_alu_ext :: (cs_is_fencei : Bool) :: (cs_rs1_en : Bool) :: (cs_rs2_en : Bool) :: Nil = ctr_list

    //branch logic depends on exe's branch logic 
    val cs_exe_branch = RegInit(BR_N)

    cs_exe_branch := cs_branch
    
    val temp_pc_sel = Wire(UInt(3.W))

    temp_pc_sel := MuxCase(pc_4,Array(
        (cs_exe_branch === BR_N) -> pc_4,
        (cs_exe_branch === BR_EQ) -> (Mux(io.d2c.iseq,pc_branch,pc_4)),
        (cs_exe_branch === BR_NEQ) -> (Mux(!io.d2c.iseq,pc_branch,pc_4)),
        (cs_exe_branch === BR_GE) -> (Mux(!io.d2c.islt,pc_branch,pc_4)),
        (cs_exe_branch === BR_GEU) -> (Mux(!io.d2c.isltu,pc_branch,pc_4)),
        (cs_exe_branch === BR_LT) -> (Mux(io.d2c.islt,pc_branch,pc_4)),
        (cs_exe_branch === BR_LTU) -> (Mux(io.d2c.isltu,pc_branch,pc_4)),
        (cs_exe_branch === BR_J) -> pc_j,
        (cs_exe_branch === BR_JR) -> pc_jr
    ))

    when(io.d2c.isredir)
    {
        temp_pc_sel := pc_redir
    }

    //if pc_sel is not pc_4 then control hazard happens or a mem's exception or ret happens
    //control hazard kills if and dec stages 
    //maybe there will be a control hazard clear and a mem's exception ,but the second one is prior to the first
    val cs_wire_control_hazard = WireInit(false.B)

    //if_kill tells that i$ miss or there is a fencei
    val cs_wire_if_kill = WireInit(false.B)

    //data_hazard is only for load-use data hazard
    val cs_wire_data_hazard = WireInit(false.B)

    //pipeline_kill is only for mem's exception[interrupt | mret] to kill if , dec , exe
    val cs_wire_pipeline_kill = WireInit(false.B)

    //pipeline_stall is only for d$ miss 
    val cs_wire_pipeline_stall = WireInit(false.B)

    when(temp_pc_sel =/= pc_4)
    {
        cs_wire_control_hazard := true.B
    }.otherwise
    {
        cs_wire_control_hazard := false.B
    }

    when(!io.imem.resp.valid || cs_is_fencei || RegNext(cs_is_fencei))
    {
        cs_wire_if_kill := true.B
    }.otherwise
    {
        cs_wire_if_kill := false.B
    }

    //to find load-use data hazard
    //temp_wire_is_load indicates the instruction being decoded is or not a load
    val temp_wire_dec_is_load = cs_mem_valid && !cs_mem_en

    //cs_reg_exe_is_load indicates instruction in exe stage is or not a load
    val cs_reg_exe_is_load = RegNext(temp_wire_dec_is_load)

    val cs_wire_dec_rs1_addr = io.d2c.instruction(r1_MSB,r1_LSB)
    val cs_wire_dec_rs2_addr = io.d2c.instruction(r2_MSB,r2_LSB)
    val cs_wire_dec_rd_addr  = io.d2c.instruction(rd_MSB,rd_LSB)

    val cs_reg_exe_rd_addr = RegNext(cs_wire_dec_rd_addr)

    when(cs_reg_exe_is_load)
    {
        when((cs_reg_exe_rd_addr === cs_wire_dec_rs1_addr && cs_rs1_en) || (cs_reg_exe_rd_addr === cs_wire_dec_rs2_addr && cs_rs2_en))
        {
            cs_wire_data_hazard := true.B
        }.otherwise
        {
            cs_wire_data_hazard := false.B
        }
    }.otherwise
    {
        cs_wire_data_hazard := false.B
    }

    //pipeline kill 
    val cs_wire_dec_exception = !cs_valid_inst
    val cs_reg_exe_exception = RegNext(cs_wire_dec_exception)
    val cs_reg_mem_exception = RegNext(cs_reg_exe_exception)

    io.d2c.hasexception := cs_reg_mem_exception

    cs_wire_pipeline_kill := io.d2c.isredir

    //pipeline stall for d$ miss
    val cs_reg_exe_mem_valid = RegNext(cs_mem_valid)
    val cs_reg_mem_mem_valid = RegNext(cs_reg_exe_mem_valid)

    cs_wire_pipeline_stall := !((!cs_reg_mem_mem_valid) || (cs_reg_mem_mem_valid && io.dmem.resp.valid))
    io.d2c.shouldstall := cs_wire_pipeline_stall

    //assgin inside signal to output
    

    io.d2c.cp_pc_sel := temp_wire_dec_is_load
    io.d2c.cp_op1_sel := cs_op1_sel
    io.d2c.cp_op2_sel := cs_op2_sel
    io.d2c.cp_alu_sel := cs_alu_sel
    io.d2c.cp_reg_wen := cs_rf_wen
    io.d2c.cp_mem_en := cs_mem_valid
    io.d2c.cp_mem_read_op := cs_mem_read_op
    io.d2c.cp_mem_write_mask := cs_mem_write_mask
    io.d2c.cp_mem_wen := cs_mem_en
    io.d2c.cp_alu_ext_sel := cs_alu_ext
    io.d2c.cp_wb_sel := cs_wb_sel
    io.d2c.cp_csr_op := cs_csr_op

    io.d2c.cp_control_hazard := cs_wire_control_hazard
    io.d2c.cp_if_kill := cs_wire_if_kill
    io.d2c.cp_data_hazard := cs_wire_data_hazard
    io.d2c.cp_pipeline_kill := cs_wire_pipeline_kill
    io.d2c.cp_pipeline_stall := cs_wire_pipeline_stall

    

}