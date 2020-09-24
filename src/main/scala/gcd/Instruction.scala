package simplecore
package constants

import chisel3._
import chisel3.util._

object RV64I 
{
    // jump
    def JAL =   BitPat("b????????_????????_????????_?1101111")
    def JALR =  BitPat("b????????_????????_?010????_?1100111")

    //load 
    def LB =    BitPat("b????????_????????_?000????_?0000011")
    def LBU =   BitPat("b????????_????????_?100????_?0000011")
    def LD =    BitPat("b????????_????????_?011????_?0000011")
    def LH =    BitPat("b????????_????????_?001????_?0000011")
    def LHU =   BitPat("b????????_????????_?101????_?0000011")
    def LW =    BitPat("b????????_????????_?010????_?0000011")
    def LWU =   BitPat("b????????_????????_?110????_?0000011")

    //lui
    def LUI =    BitPat("b????????_????????_????????_?0110111")
    def AUIPC =  BitPat("b????????_????????_????????_?0010111")

    //R TYPE AND I TYEP
    def SLL =       BitPat("b0000000?_????????_?001????_?0110011")
    def SLLI =      BitPat("b000000??_????????_?001????_?0010011")
    def SLLIW =     BitPat("b000000??_????????_?001????_?0011011")
    def SLLW =      BitPat("b0000000?_????????_?001????_?0111011")
    def SLT =       BitPat("b0000000?_????????_?010????_?0110011")
    def SLTI =      BitPat("b????????_????????_?010????_?0010011")
    def SLTIU =     BitPat("b????????_????????_?011????_?0010011")
    def SLTU =      BitPat("b0000000?_????????_?011????_?0110011")
    def SRA =       BitPat("b0100000?_????????_?101????_?0110011")
    def SRAI =      BitPat("b010000??_????????_?101????_?0010011")
    def SRAIW =     BitPat("b010000??_????????_?101????_?0011011")
    def SRAW =      BitPat("b0100000?_????????_?101????_?0111011")
    def SRL =       BitPat("b0000000?_????????_?101????_?0110011")
    def SRLI =      BitPat("b000000??_????????_?101????_?0010011")
    def SRLIW =     BitPat("b000000??_????????_?101????_?0011011")
    def SRLW =      BitPat("b0000000?_????????_?101????_?0111011")
    def SUB =       BitPat("b0100000?_????????_?000????_?0110011")
    def SUBW =      BitPat("b0100000?_????????_?000????_?0111011")
    def XOR =       BitPat("b0000000?_????????_?100????_?0110011")
    def XORI =      BitPat("b????????_????????_?100????_?0010011")
    def OR =        BitPat("b0000000?_????????_?110????_?0110011")
    def ORI =       BitPat("b????????_????????_?110????_?0010011")
    def ADD =       BitPat("b0000000?_????????_?000????_?0110011")
    def ADDI =      BitPat("b????????_????????_?000????_?0010011")
    def ADDIW =     BitPat("b????????_????????_?000????_?0011011")
    def ADDW =      BitPat("b0000000?_????????_?000????_?0111011")
    def AND =       BitPat("b0000000?_????????_?111????_?0110011")
    def ANDI =      BitPat("b????????_????????_?111????_?0010011")
    

    //store
    def SB =  BitPat("b????????_????????_?000????_?0100011")
    def SD =  BitPat("b????????_????????_?011????_?0100011")
    def SH =  BitPat("b????????_????????_?001????_?0100011")
    def SW =  BitPat("b????????_????????_?010????_?0100011")

    //branch
    def BEQ =   BitPat("b????????_????????_?000????_?1100011")
    def BGE =   BitPat("b????????_????????_?101????_?1100011")
    def BGEU =  BitPat("b????????_????????_?111????_?1100011")
    def BLT =   BitPat("b????????_????????_?100????_?1100011")
    def BLTU =  BitPat("b????????_????????_?110????_?1100011")
    def BNE =   BitPat("b????????_????????_?001????_?1100011")
    

    //csr operation
    def CSRRC =     BitPat("b????????_????????_?011????_?1110011")
    def CSRRCI =    BitPat("b????????_????????_?111????_?1110011")
    def CSRRS =     BitPat("b????????_????????_?010????_?1110011")
    def CSRRSI =    BitPat("b????????_????????_?110????_?1110011")
    def CSRRW =     BitPat("b????????_????????_?001????_?1110011")
    def CSRRWI =    BitPat("b????????_????????_?101????_?1110011")
    
    //privilige instr
    def EBREAK =  BitPat("b00000000_00010000_00000000_01110011")
    def ECALL =   BitPat("b00000000_00000000_00000000_01110011")
    def WFI =     BitPat("b00010000_01010000_00000000_01110011")
    def SRET =    BitPat("b00010000_00100000_00000000_01110011")
    def MRET =    BitPat("b00110000_00100000_00000000_01110011")
    def FENCE =   BitPat("b0000????_????0000_00000000_00001111")
    def FENCEI =  BitPat("b00000000_00000000_00010000_00001111")

}

object RV64M
{
    def MUL =       BitPat("b0000001?_????????_?000????_?0110011")
    def MULH =      BitPat("b0000001?_????????_?001????_?0110011")
    def MULHSU =    BitPat("b0000001?_????????_?010????_?0110011")
    def MULHU =     BitPat("b0000001?_????????_?011????_?0110011")
    def MULW =      BitPat("b0000001?_????????_?000????_?0111011")
    def REM  =      BitPat("b0000001?_????????_?110????_?0110011")
    def REMU =      BitPat("b0000001?_????????_?111????_?0110011")
    def REMUW =     BitPat("b0000001?_????????_?111????_?0111011")
    def REMW =      BitPat("b0000001?_????????_?110????_?0111011")
    def DIV =       BitPat("b0000001?_????????_?100????_?0110011")
    def DIVU =      BitPat("b0000001?_????????_?101????_?0110011")
    def DIVUW =     BitPat("b0000001?_????????_?101????_?0111011")
    def DIVW =      BitPat("b0000001?_????????_?100????_?0111011")
    
}