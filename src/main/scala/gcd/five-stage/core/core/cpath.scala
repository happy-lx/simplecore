package mycore

import chisel3._
import chisel3.util._
import chisel3.util.experimental.BoringUtils

import constants.RV64I._
import constants.RV64M._
import constants.RV64A._
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
    val cp_pipeline_data_stall = Output(Bool())
    val cp_pipeline_inst_stall = Output(Bool())

    //for BPU
    val cp_if_pc_branch = Output(UInt(2.W))
    val cp_exe_actual_branch = Output(UInt(2.W))

    val hasexception = Output(Bool())
    val shouldstall = Output(Bool())

}
class CpathIO extends Bundle
{
    val c2d = new C2DIO()
    val d2c = Flipped(new D2CIO())
    val imem = new sram_like_io{
        val valid = Input(Bool())
        val instrPageFault = Input(Bool())
    }
    val dmem = new sram_like_io{
        val valid = Input(Bool())
        val loadPageFault  = Input(Bool())
        val storePageFault = Input(Bool())
    }
    
}

class Cpath extends Module {
    val io = IO(new CpathIO())

    io := DontCare
    

    //根据数据通路传入的指令进行译码

    val ctr_list = ListLookup(io.d2c.instr, 
                           List(    N  ,     BR_N  ,  OP1_X , OP2_X   ,ALU_X   ,rf_wr_N    ,N , op_x       ,mask_x          , mem_wr_N     , wback_X   ,csr_x,   alu_res_x  , N , N , N , N),
            Array(
                            /*
                            | valid instr | br type | op1    | op2    | alu    | reg write | mem en | mem read op | mem write mask | mem write en |  wb data | csr op  | ALU EXT | is fence.i? | rs1 en | rs2 en | is sfence.vma?
                            */
                JAL     -> List(    Y  ,     BR_J   ,  OP1_X , OP2_X   ,ALU_X   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_pc_4   ,csr_x,   alu_res_x   ,  N   ,  N   , N , N),
                // JAL     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_ADD   ,rf_wr_Y    ,Y , op_bu       ,mask_x          , mem_wr_N     , wback_memout   ,csr_x,   alu_res_noext),
                JALR    -> List(    Y  ,     BR_JR  ,  OP1_X , OP2_X   ,ALU_X   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_pc_4   ,csr_x,   alu_res_x  ,  N   ,  Y   , N , N),
                // JALR    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_ADD   ,rf_wr_Y    ,Y , op_bu       ,mask_x          , mem_wr_N     , wback_memout   ,csr_x,   alu_res_noext),

                LB      -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_ADD   ,rf_wr_Y    ,Y , op_b       ,mask_x          , mem_wr_N     , wback_memout   ,csr_x, alu_res_noext  ,  N   ,  Y   , N , N),
                LBU     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_ADD   ,rf_wr_Y    ,Y , op_bu       ,mask_x          , mem_wr_N     , wback_memout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , N , N),  
                LD      -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_ADD   ,rf_wr_Y    ,Y , op_d       ,mask_x          , mem_wr_N     , wback_memout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , N , N),
                LH      -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_ADD   ,rf_wr_Y    ,Y , op_hb       ,mask_x          , mem_wr_N     , wback_memout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , N , N),
                LHU     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_ADD   ,rf_wr_Y    ,Y , op_hbu      ,mask_x          , mem_wr_N     , wback_memout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , N , N),
                LW      -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_ADD   ,rf_wr_Y    ,Y , op_w       ,mask_x          , mem_wr_N     , wback_memout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , N , N),
                LWU     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_ADD   ,rf_wr_Y    ,Y , op_wu       ,mask_x          , mem_wr_N     , wback_memout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , N , N),

                LUI     -> List(    Y  ,     BR_N  ,  OP1_U , OP2_X   ,ALU_CP1   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  N   , N , N),
                AUIPC   -> List(    Y  ,     BR_N  ,  OP1_U , OP2_PC   ,ALU_ADD   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  N   , N , N),
                
                SLL     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_SLL   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , Y , N),
                SLLI    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_SLL   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , N , N),
                SLLIW   -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_SLL   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_ws  ,  N   ,  Y   , N , N),
                SLLW    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_SLLW   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_ws  ,  N   ,  Y   , Y , N),
                SLT     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_SLT   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , Y , N),
                SLTI    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_SLT   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , N , N),
                SLTIU   -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_SLTU   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , N , N),
                SLTU    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_SLTU   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , Y , N),
                SRA     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_SRA   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , Y , N),
                SRAI    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_SRA   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , N , N),
                SRAIW   -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_SRAW   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_ws  ,  N   ,  Y   , N , N),
                SRAW    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_SRAW   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_ws  ,  N   ,  Y   , Y , N),
                SRL     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_SRL   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , Y , N),
                SRLI    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_SRL   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , N , N),
                SRLIW   -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_SRLW   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_ws  ,  N   ,  Y   , N , N),
                SRLW    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_SRLW   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_ws  ,  N   ,  Y   , Y , N),
                SUB     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_SUB   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , Y , N),
                SUBW    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_SUB   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_ws  ,  N   ,  Y   , Y , N),
                XOR     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_XOR   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , Y , N),
                XORI    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_XOR   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , N , N),
                OR      -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_OR   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , Y , N),
                ORI     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_OR   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , N , N),
                ADD     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_ADD   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , Y , N),
                ADDI    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_ADD   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , N , N),
                ADDIW   -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_ADD   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_ws  ,  N   ,  Y   , N , N),
                ADDW    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_ADD   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_ws  ,  N   ,  Y   , Y , N),
                AND     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_AND   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , Y , N),
                ANDI    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_IIM   ,ALU_AND   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , N , N),

                SB      -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_SIM   ,ALU_ADD   ,rf_wr_N    ,Y , op_x       ,mask_b          , mem_wr_Y     , wback_X   ,csr_x,   alu_res_noext  ,  N   ,  Y   , Y , N),
                SD      -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_SIM   ,ALU_ADD   ,rf_wr_N    ,Y , op_x       ,mask_dw          , mem_wr_Y     , wback_X   ,csr_x,   alu_res_noext  ,  N   ,  Y   , Y , N),
                SH      -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_SIM   ,ALU_ADD   ,rf_wr_N    ,Y , op_x       ,mask_hb          , mem_wr_Y     , wback_X   ,csr_x,   alu_res_noext  ,  N   ,  Y   , Y , N),
                SW      -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_SIM   ,ALU_ADD   ,rf_wr_N    ,Y , op_x       ,mask_w          , mem_wr_Y     , wback_X   ,csr_x,   alu_res_noext  ,  N   ,  Y   , Y , N),

                //op1-sel and op2-sel of branch is only for data hazard detect ,no alu operation will happen
                BEQ     -> List(    Y  ,     BR_EQ  ,  OP1_RS1 , OP2_RS2   ,ALU_X   ,rf_wr_N    ,N , op_x       ,mask_x          , mem_wr_N     , wback_X   ,csr_x,   alu_res_x  ,  N   ,  Y   , Y , N),
                BGE     -> List(    Y  ,     BR_GE  ,  OP1_RS1 , OP2_RS2   ,ALU_X   ,rf_wr_N    ,N , op_x       ,mask_x          , mem_wr_N     , wback_X   ,csr_x,   alu_res_x  ,  N   ,  Y   , Y , N),
                BGEU    -> List(    Y  ,     BR_GEU  ,  OP1_RS1 , OP2_RS2   ,ALU_X   ,rf_wr_N    ,N , op_x       ,mask_x          , mem_wr_N     , wback_X   ,csr_x,   alu_res_x  ,  N   ,  Y   , Y , N),
                BLT     -> List(    Y  ,     BR_LT  ,  OP1_RS1 , OP2_RS2   ,ALU_X   ,rf_wr_N    ,N , op_x       ,mask_x          , mem_wr_N     , wback_X   ,csr_x,   alu_res_x  ,  N   ,  Y   , Y , N),
                BLTU    -> List(    Y  ,     BR_LTU  ,  OP1_RS1 , OP2_RS2   ,ALU_X   ,rf_wr_N    ,N , op_x       ,mask_x          , mem_wr_N     , wback_X   ,csr_x,   alu_res_x  ,  N   ,  Y   , Y , N),
                BNE     -> List(    Y  ,     BR_NEQ  ,  OP1_RS1 , OP2_RS2   ,ALU_X   ,rf_wr_N    ,N , op_x       ,mask_x          , mem_wr_N     , wback_X   ,csr_x,   alu_res_x  ,  N   ,  Y   , Y , N),

                CSRRC   -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_X   ,ALU_CP1   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_csrout   ,csr_c,   alu_res_x  ,  N   ,  Y   , N , N),
                CSRRCI  -> List(    Y  ,     BR_N  ,  OP1_Z , OP2_X   ,ALU_CP1   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_csrout   ,csr_c,   alu_res_x  ,  N   ,  N   , N , N),
                CSRRS   -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_X   ,ALU_CP1   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_csrout   ,csr_s,   alu_res_x  ,  N   ,  Y   , N , N),
                CSRRSI  -> List(    Y  ,     BR_N  ,  OP1_Z , OP2_X   ,ALU_CP1   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_csrout   ,csr_s,   alu_res_x  ,  N   ,  N   , N , N),
                CSRRW   -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_X   ,ALU_CP1   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_csrout   ,csr_w,   alu_res_x  ,  N   ,  Y   , N , N),
                CSRRWI  -> List(    Y  ,     BR_N  ,  OP1_Z , OP2_X   ,ALU_CP1   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_csrout   ,csr_w,   alu_res_x  ,  N   ,  N   , N , N),

                EBREAK  -> List(    Y  ,     BR_N  ,  OP1_X , OP2_X   ,ALU_X   ,rf_wr_N    ,N , op_x       ,mask_x          , mem_wr_N     , wback_X   ,csr_prv,   alu_res_x  ,  N   ,  N   , N , N),
                ECALL   -> List(    Y  ,     BR_N  ,  OP1_X , OP2_X   ,ALU_X   ,rf_wr_N    ,N , op_x       ,mask_x          , mem_wr_N     , wback_X   ,csr_prv,   alu_res_x  ,  N   ,  N   , N , N),
                WFI     -> List(    Y  ,     BR_N  ,  OP1_X , OP2_X   ,ALU_X   ,rf_wr_N    ,N , op_x       ,mask_x          , mem_wr_N     , wback_X   ,csr_x,   alu_res_x  ,  N   ,  N   , N , N),
                SRET    -> List(    Y  ,     BR_N  ,  OP1_X , OP2_X   ,ALU_X   ,rf_wr_N    ,N , op_x       ,mask_x          , mem_wr_N     , wback_X   ,csr_prv,   alu_res_x  ,  N   ,  N   , N , N),
                MRET    -> List(    Y  ,     BR_N  ,  OP1_X , OP2_X   ,ALU_X   ,rf_wr_N    ,N , op_x       ,mask_x          , mem_wr_N     , wback_X   ,csr_prv,   alu_res_x  ,  N   ,  N   , N , N),
                FENCE   -> List(    Y  ,     BR_N  ,  OP1_X , OP2_X   ,ALU_X   ,rf_wr_N    ,N , op_x       ,mask_x          , mem_wr_N     , wback_X   ,csr_x,   alu_res_x  ,  N   ,  N   , N , N),
                FENCEI  -> List(    Y  ,     BR_N  ,  OP1_X , OP2_X   ,ALU_X   ,rf_wr_N    ,N , op_x       ,mask_x          , mem_wr_N     , wback_X   ,csr_x,   alu_res_x  ,  Y   ,  N   , N , N),
               SFENCEVMA-> List(    Y  ,     BR_N  ,  OP1_X , OP2_X   ,ALU_X   ,rf_wr_N    ,N , op_x       ,mask_x          , mem_wr_N     , wback_X   ,csr_x,   alu_res_x  ,  N   ,  N   , N , Y),

                MUL     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_MUL   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , Y , N),
                MULH    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_MULH   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , Y , N),
                MULHSU  -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_MULHSU   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , Y , N),
                MULHU   -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_MULHU   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , Y , N),
                MULW    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_MUL   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_ws  ,  N   ,  Y   , Y , N),
                REM     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_REM   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , Y , N),
                REMU    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_REMU   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , Y , N),
                REMUW   -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_REMUW   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_ws  ,  N   ,  Y   , Y , N),
                REMW    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_REMW   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_ws  ,  N   ,  Y   , Y , N),
                DIV     -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_DIV   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , Y , N),
                DIVU    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_DIVU   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_noext  ,  N   ,  Y   , Y , N),
                DIVUW   -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_DIVUW   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_ws  ,  N   ,  Y   , Y , N),
                DIVW    -> List(    Y  ,     BR_N  ,  OP1_RS1 , OP2_RS2   ,ALU_DIVW   ,rf_wr_Y    ,N , op_x       ,mask_x          , mem_wr_N     , wback_aluout   ,csr_x,   alu_res_ws  ,  N   ,  Y   , Y , N)
            
                
    
    )
    )
    val (cs_valid_inst : Bool) :: cs_branch :: cs_op1_sel :: cs_op2_sel :: cs_alu_sel :: (cs_rf_wen : Bool) :: (cs_mem_valid : Bool) :: cs_mem_read_op :: cs_mem_write_mask :: (cs_mem_en : Bool) :: cs_wb_sel :: cs_csr_op :: cs_alu_ext :: (cs_is_fencei : Bool) :: (cs_rs1_en : Bool) :: (cs_rs2_en : Bool) :: (cs_is_sfencevma : Bool) :: Nil = ctr_list

    //branch logic depends on exe's branch logic 
    val cs_exe_branch = RegInit(BR_N)

    cs_exe_branch := cs_branch

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

    val cp_bpu = Module(new BPU)
    cp_bpu.io := DontCare

    cp_bpu.io.IF_ins := io.d2c.IF_ins
    cp_bpu.io.has_stall := cs_wire_pipeline_stall
    cp_bpu.io.EXE_pc_branch := io.d2c.EXE_pc_branch

    io.c2d.cp_if_pc_branch := cp_bpu.io.IF_pc_branch

    
    val temp_pc_sel = Wire(UInt(3.W))

    val pc_sel_from_bpu = cp_bpu.io.IF_pc_sel

    temp_pc_sel := MuxCase(pc_sel_from_bpu,Array(
        (cs_exe_branch === BR_N) -> pc_sel_from_bpu,
        (cs_exe_branch === BR_EQ) -> (Mux(io.d2c.iseq,Mux(io.d2c.EXE_pc_branch === 1.U,pc_sel_from_bpu,pc_branch),Mux(io.d2c.EXE_pc_branch === 1.U,pc_branch,pc_sel_from_bpu))),
        (cs_exe_branch === BR_NEQ) -> (Mux(!io.d2c.iseq,Mux(io.d2c.EXE_pc_branch === 1.U,pc_sel_from_bpu,pc_branch),Mux(io.d2c.EXE_pc_branch === 1.U,pc_branch,pc_sel_from_bpu))),
        (cs_exe_branch === BR_GE) -> (Mux(!io.d2c.islt,Mux(io.d2c.EXE_pc_branch === 1.U,pc_sel_from_bpu,pc_branch),Mux(io.d2c.EXE_pc_branch === 1.U,pc_branch,pc_sel_from_bpu))),
        (cs_exe_branch === BR_GEU) -> (Mux(!io.d2c.isltu,Mux(io.d2c.EXE_pc_branch === 1.U,pc_sel_from_bpu,pc_branch),Mux(io.d2c.EXE_pc_branch === 1.U,pc_branch,pc_sel_from_bpu))),
        (cs_exe_branch === BR_LT) -> (Mux(io.d2c.islt,Mux(io.d2c.EXE_pc_branch === 1.U,pc_sel_from_bpu,pc_branch),Mux(io.d2c.EXE_pc_branch === 1.U,pc_branch,pc_sel_from_bpu))),
        (cs_exe_branch === BR_LTU) -> (Mux(io.d2c.isltu,Mux(io.d2c.EXE_pc_branch === 1.U,pc_sel_from_bpu,pc_branch),Mux(io.d2c.EXE_pc_branch === 1.U,pc_branch,pc_sel_from_bpu))),
        (cs_exe_branch === BR_J) -> pc_j,
        (cs_exe_branch === BR_JR) -> pc_jr
    ))

    cp_bpu.io.EXE_actual_branch := MuxCase(0.U(2.W),Array(
        (cs_exe_branch === BR_EQ) ->(Mux(io.d2c.iseq,1.U(2.W),2.U(2.W))),
        (cs_exe_branch === BR_NEQ) ->(Mux(!io.d2c.iseq,1.U(2.W),2.U(2.W))),
        (cs_exe_branch === BR_GE) ->(Mux(!io.d2c.islt,1.U(2.W),2.U(2.W))),
        (cs_exe_branch === BR_GEU) ->(Mux(!io.d2c.isltu,1.U(2.W),2.U(2.W))),
        (cs_exe_branch === BR_LT) ->(Mux(io.d2c.islt,1.U(2.W),2.U(2.W))),
        (cs_exe_branch === BR_LTU) ->(Mux(io.d2c.isltu,1.U(2.W),2.U(2.W)))
    ))

    io.c2d.cp_exe_actual_branch := cp_bpu.io.EXE_actual_branch

    when(io.d2c.isredir)
    {
        temp_pc_sel := pc_redir
    }



    val temp_is_csr = ((cs_csr_op =/= csr_x) && (cs_csr_op =/= csr_prv))
    val cs_reg_exe_is_csr = RegNext(temp_is_csr,false.B)
    val cs_reg_exe_is_fencei = RegNext(cs_is_fencei,false.B)
    //for cache coherence
    val cs_reg_mem_is_fencei = RegNext(cs_reg_exe_is_fencei,false.B)

    BoringUtils.addSource(cs_reg_mem_is_fencei,"cache_flush")

    // when(temp_pc_sel =/= pc_4)
    when(temp_pc_sel =/= pc_4 && temp_pc_sel =/= pc_bpu)
    {
        cs_wire_control_hazard := true.B
    }.otherwise
    {
        cs_wire_control_hazard := false.B
    }

    //WARNING: there will be a problem in fence.i when stalling
    when(cs_is_fencei || cs_reg_exe_is_fencei)
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
    val cs_reg_exe_is_load = RegNext(temp_wire_dec_is_load,false.B)

    val cs_wire_dec_rs1_addr = io.d2c.instr(rs1_MSB,rs1_LSB)
    val cs_wire_dec_rs2_addr = io.d2c.instr(rs2_MSB,rs2_LSB)
    val cs_wire_dec_rd_addr  = io.d2c.instr(rd_MSB,rd_LSB)

    val cs_reg_exe_rd_addr = RegNext(cs_wire_dec_rd_addr,0.U(5.W))

    when(cs_reg_exe_is_load || cs_reg_exe_is_csr)
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
    //might be a problem
    //WARNING : RegNext(io.imem.data_valid,false.B) MAY BE A PROBLEM
    val cs_reg_dec_imem_valid = RegNext(io.imem.data_valid,false.B)
    val cs_wire_dec_exception = !cs_valid_inst && cs_reg_dec_imem_valid
    val cs_reg_exe_exception = RegNext(cs_wire_dec_exception,false.B)
    val cs_reg_mem_exception = RegNext(cs_reg_exe_exception,false.B)

    //! I don't use pipelien_stall signal for wire , not sure whether it's correct 
    //get instruction page fault from MMU when no stall , pf.valid , instrPageFault(IF)
    val cs_wire_if_instr_page_fault = WireInit(io.imem.valid && io.imem.instrPageFault)
    val cs_reg_dec_instr_page_fault = RegNext(cs_wire_if_instr_page_fault,false.B)
    val cs_reg_exe_instr_page_fault = RegNext(cs_reg_dec_instr_page_fault,false.B)
    val cs_reg_mem_instr_page_fault = RegNext(cs_reg_exe_instr_page_fault,false.B)

    //get instruction missaligned from IF when pc(1.0) != 0(IF)
    //TODO : when misaligned happens no need to access memory 
    val cs_wire_if_instr_missaligned = WireInit(io.d2c.pc_if(1,0) =/= 0.U)
    val cs_reg_dec_instr_missaligned = RegNext(cs_wire_if_instr_missaligned,false.B)
    val cs_reg_exe_instr_missaligned = RegNext(cs_reg_dec_instr_missaligned,false.B)
    val cs_reg_mem_instr_missaligned = RegNext(cs_reg_exe_instr_missaligned,false.B)

    //get load page fault from MMU when mem_mem_valid,no stall , pf.valid , LoadPageFault(MEM)
    val cs_wire_mem_load_page_fault = WireInit(io.d2c.mem_mem_valid && io.dmem.valid && io.dmem.loadPageFault && !io.d2c.mem_isWrite)

    //get load missaligned according to mask and addr and also mem_mem_valid(MEM)
    //TODO : when misaligned happens no need to access memory 
    val cs_wire_mem_load_missaligned = WireInit(false.B)
    when(io.d2c.mem_mem_valid && !io.d2c.mem_isWrite)
    {
        //it's a load instruction
        //now we should use mem_op and addr to make sure of missalignment 
        switch(io.d2c.mem_op)
        {
            is(op_b)
            {
                cs_wire_mem_load_missaligned := false.B
            }
            is(op_bu)
            {
                cs_wire_mem_load_missaligned := false.B
            }
            is(op_hb)
            {
                when(io.d2c.mem_addr(0) =/= 0.U)
                {
                    cs_wire_mem_load_missaligned := true.B
                }.otherwise
                {
                    cs_wire_mem_load_missaligned := false.B
                }
            }
            is(op_hbu)
            {
                when(io.d2c.mem_addr(0) =/= 0.U)
                {
                    cs_wire_mem_load_missaligned := true.B
                }.otherwise
                {
                    cs_wire_mem_load_missaligned := false.B
                }
            }
            is(op_w)
            {
                when(io.d2c.mem_addr(1,0) =/= 0.U)
                {
                    cs_wire_mem_load_missaligned := true.B
                }.otherwise
                {
                    cs_wire_mem_load_missaligned := false.B
                }
            }
            is(op_wu)
            {
                when(io.d2c.mem_addr(1,0) =/= 0.U)
                {
                    cs_wire_mem_load_missaligned := true.B
                }.otherwise
                {
                    cs_wire_mem_load_missaligned := false.B
                }
            }
            is(op_d)
            {
                when(io.d2c.mem_addr(2,0) =/= 0.U)
                {
                    cs_wire_mem_load_missaligned := true.B
                }.otherwise
                {
                    cs_wire_mem_load_missaligned := false.B
                }
            }
        }

    }.otherwise
    {
        cs_wire_mem_load_missaligned := false.B
    }

    //get store page fault from MMU when mem_mem_valid,no stall , pf.valid , StorePageFault(MEM)
    val cs_wire_mem_store_page_fault = WireInit(io.d2c.mem_mem_valid && io.dmem.valid && io.dmem.storePageFault && io.d2c.mem_isWrite)

    //get store missaligned according to mask an addr and also mem_mem_valid(MEM)
    val cs_wire_mem_store_missaligned = WireInit(false.B)
    when(io.d2c.mem_mem_valid && io.d2c.mem_isWrite)
    {
        //it's a store instruction
        //now we should use mem_mask and addr to make sure of missalignment 
        switch(io.d2c.mem_mask)
        {
            is(mask_b)
            {
                cs_wire_mem_store_missaligned := false.B
            }
            is(mask_hb)
            {
                when(io.d2c.mem_addr(0) =/= 0.U)
                {
                    cs_wire_mem_store_missaligned := true.B
                }.otherwise
                {
                    cs_wire_mem_store_missaligned := false.B
                }
            }
            is(mask_w)
            {
                when(io.d2c.mem_addr(1,0) =/= 0.U)
                {
                    cs_wire_mem_store_missaligned := true.B
                }.otherwise
                {
                    cs_wire_mem_store_missaligned := false.B
                }
            }
            is(mask_dw)
            {
                when(io.d2c.mem_addr(2,0) =/= 0.U)
                {
                    cs_wire_mem_store_missaligned := true.B
                }.otherwise
                {
                    cs_wire_mem_store_missaligned := false.B
                }
            }
        }

    }.otherwise
    {
        cs_wire_mem_store_missaligned := false.B
    }

    //use BoringUtil to connect exception wire between cpath and csr
    BoringUtils.addSource(cs_reg_mem_instr_page_fault,"cs_reg_mem_instr_page_fault")
    BoringUtils.addSource(cs_reg_mem_instr_missaligned,"cs_reg_mem_instr_missaligned")
    BoringUtils.addSource(cs_wire_mem_load_page_fault,"cs_wire_mem_load_page_fault")
    BoringUtils.addSource(cs_wire_mem_load_missaligned,"cs_wire_mem_load_missaligned")
    BoringUtils.addSource(cs_wire_mem_store_page_fault,"cs_wire_mem_store_page_fault")
    BoringUtils.addSource(cs_wire_mem_store_missaligned,"cs_wire_mem_store_missaligned")



    io.c2d.hasexception := cs_reg_mem_exception

    cs_wire_pipeline_kill := io.d2c.isredir

    //pipeline stall for d$ miss
    // val cs_reg_exe_mem_valid = RegNext(cs_mem_valid,false.B)
    // val cs_reg_mem_mem_valid = RegNext(cs_reg_exe_mem_valid,false.B)

    val cs_wire_pipeline_data_stall = WireInit(false.B)
    val cs_wire_pipeline_inst_stall = WireInit(false.B)

    cs_wire_pipeline_data_stall := !((!io.d2c.mem_mem_valid) || (io.d2c.mem_mem_valid && io.dmem.data_valid))
    cs_wire_pipeline_inst_stall := !io.imem.data_valid

    cs_wire_pipeline_stall := cs_wire_pipeline_inst_stall || cs_wire_pipeline_data_stall
    io.c2d.shouldstall := cs_wire_pipeline_stall

    //for sfence.vma to flush iTLB and dTLB
    //when sfecne.vma is detected in DEC stage , flush iTLB immediately
    //when sfence.vma achieves MEM stage , flush dTLB
    BoringUtils.addSource(cs_is_sfencevma,"dec_is_sfencevma")
    val cs_reg_exe_is_sfencevma = RegNext(cs_is_sfencevma,false.B)
    val cs_reg_mem_is_sfencevma = RegNext(cs_reg_exe_is_sfencevma,false.B)
    BoringUtils.addSource(cs_reg_mem_is_sfencevma,"mem_is_sfencevma")

    //assgin inside signal to output
    io.c2d.cp_pc_sel := temp_pc_sel
    io.c2d.cp_op1_sel := cs_op1_sel
    io.c2d.cp_op2_sel := cs_op2_sel
    io.c2d.cp_alu_sel := cs_alu_sel
    io.c2d.cp_reg_wen := cs_rf_wen
    io.c2d.cp_mem_en := cs_mem_valid
    io.c2d.cp_mem_read_op := cs_mem_read_op
    io.c2d.cp_mem_write_mask := cs_mem_write_mask
    io.c2d.cp_mem_wen := cs_mem_en
    io.c2d.cp_alu_ext_sel := cs_alu_ext
    io.c2d.cp_wb_sel := cs_wb_sel
    io.c2d.cp_csr_op := cs_csr_op

    io.c2d.cp_control_hazard := cs_wire_control_hazard
    io.c2d.cp_if_kill := cs_wire_if_kill
    io.c2d.cp_data_hazard := cs_wire_data_hazard
    io.c2d.cp_pipeline_kill := cs_wire_pipeline_kill
    io.c2d.cp_pipeline_stall := cs_wire_pipeline_stall
    io.c2d.cp_pipeline_data_stall := cs_wire_pipeline_data_stall
    io.c2d.cp_pipeline_inst_stall := cs_wire_pipeline_inst_stall

    //when control hazard happens or pipeline kill happens 
    //no need to passforward 
    //adjust the priority of pipeline stall and pipeline kill
    when(cs_wire_pipeline_stall)
    {
        cs_exe_branch       := cs_exe_branch
        cs_reg_exe_is_csr   := cs_reg_exe_is_csr
        cs_reg_exe_is_load  := cs_reg_exe_is_load
        cs_reg_exe_rd_addr  := cs_reg_exe_rd_addr
        cs_reg_exe_exception:= cs_reg_exe_exception
        cs_reg_mem_exception:= cs_reg_mem_exception
        // cs_reg_exe_mem_valid:= cs_reg_exe_mem_valid
        // cs_reg_mem_mem_valid:= cs_reg_mem_mem_valid
        cs_reg_exe_is_fencei:= cs_reg_exe_is_fencei
        cs_reg_mem_is_fencei:= cs_reg_mem_is_fencei
        cs_reg_dec_imem_valid := cs_reg_dec_imem_valid

        cs_reg_dec_instr_page_fault := cs_reg_dec_instr_page_fault
        cs_reg_exe_instr_page_fault := cs_reg_exe_instr_page_fault
        cs_reg_mem_instr_page_fault := cs_reg_mem_instr_page_fault

        cs_reg_dec_instr_missaligned := cs_reg_dec_instr_missaligned
        cs_reg_exe_instr_missaligned := cs_reg_exe_instr_missaligned
        cs_reg_mem_instr_missaligned := cs_reg_mem_instr_missaligned

        cs_reg_exe_is_sfencevma := cs_reg_exe_is_sfencevma
        cs_reg_mem_is_sfencevma := cs_reg_mem_is_sfencevma


    }.elsewhen(cs_wire_pipeline_kill)
    {
        cs_exe_branch       := BR_N
        cs_reg_exe_is_csr   := N
        cs_reg_exe_is_load  := N
        cs_reg_exe_rd_addr  := 0.U(5.W)
        cs_reg_exe_exception:= N
        cs_reg_mem_exception:= N
        // cs_reg_exe_mem_valid:= N
        // cs_reg_mem_mem_valid:= N
        cs_reg_exe_is_fencei:= N
        cs_reg_mem_is_fencei:= N
        cs_reg_dec_imem_valid := N

        cs_reg_dec_instr_page_fault := N
        cs_reg_exe_instr_page_fault := N
        cs_reg_mem_instr_page_fault := N
        cs_reg_dec_instr_missaligned := N
        cs_reg_exe_instr_missaligned := N
        cs_reg_mem_instr_missaligned := N

        cs_reg_exe_is_sfencevma := N
        cs_reg_mem_is_sfencevma := N
        
    }.otherwise
    {
        when(cs_wire_data_hazard)
        {
            cs_exe_branch       := BR_N
            cs_reg_exe_is_csr   := N
            cs_reg_exe_is_load  := N
            cs_reg_exe_rd_addr  := 0.U(5.W)
            cs_reg_exe_exception:= N
            // cs_reg_exe_mem_valid:= N
            cs_reg_exe_is_fencei:= N
            cs_reg_dec_imem_valid := cs_reg_dec_imem_valid

            cs_reg_dec_instr_page_fault := cs_reg_dec_instr_page_fault
            cs_reg_exe_instr_page_fault := N
            cs_reg_dec_instr_missaligned := cs_reg_dec_instr_missaligned
            cs_reg_exe_instr_missaligned := N

            cs_reg_exe_is_sfencevma := N
        }.elsewhen(cs_wire_control_hazard)
        {
            cs_exe_branch       := BR_N
            cs_reg_exe_is_csr   := N
            cs_reg_exe_is_load  := N
            cs_reg_exe_rd_addr  := 0.U(5.W)
            cs_reg_exe_exception:= N
            // cs_reg_exe_mem_valid:= N
            cs_reg_exe_is_fencei:= N
            cs_reg_dec_imem_valid := N

            cs_reg_dec_instr_page_fault := N
            cs_reg_exe_instr_page_fault := N
            cs_reg_dec_instr_missaligned := N
            cs_reg_exe_instr_missaligned := N

            cs_reg_exe_is_sfencevma := N
        }
    }

    BoringUtils.addSource(cs_valid_inst,"cs_valid_inst")


    //for AMO accesser
    BoringUtils.addSource(io.dmem.valid,"cpath_pf_valid")
    BoringUtils.addSource(io.dmem.loadPageFault,"cpath_loadPageFault")
    BoringUtils.addSource(io.dmem.storePageFault,"cpath_storePageFault")
}