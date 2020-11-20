package mycore
package constants

//定义一些常量
import chisel3._
import chisel3.util._

trait memory_const
{
    //掩码  64位8个字节
    val mask_b = 1.U(8.W)
    val mask_hb = 3.U(8.W)
    val mask_w = 15.U(8.W)
    val mask_dw = 255.U(8.W)
    val mask_x = 1.U(8.W)

    //内存操作方式
    val op_b = 0.U(3.W)
    val op_bu = 1.U(3.W)
    val op_hb = 2.U(3.W)
    val op_hbu = 3.U(3.W)
    val op_w = 4.U(3.W)
    val op_wu = 5.U(3.W)
    val op_d = 6.U(3.W)
    val op_x = 0.U(3.W)

    //内存操作定义
    val memory_op_read = 0.U(1.W)
    val memory_op_write = 1.U(1.W)
    val memory_op_x = 0.U(1.W)
}

trait AXI_const
{
    //ram's addr length
    val AXI_paddr_len = 32
    val AXI_real_addr_len = 27 // 128 * 1024 * 1024
    val AXI_data_len = 64
    val AXI_wstrb_len = (AXI_data_len / 8)
    val bits_ignore = log2Ceil(AXI_wstrb_len)
    val AXI_ram_len = AXI_real_addr_len - bits_ignore
    val AXI_byte_len = 8

    //for sram-like's ports
    val DATA = 1 
    val INTR = 0
}

trait Uart_const
{
    val uart_read_addr =  0x40600000L
    val uart_write_addr = 0x40600004L
    val uart_state_addr = 0x40600008L
    val uart_contr_addr = 0x4060000cL
}

trait alu_const
{
    //alu operation (5 bits)
    val ALU_ADD = 0.U(5.W)
    val ALU_SUB = 1.U(5.W)
    val ALU_AND = 2.U(5.W) 
    val ALU_OR = 3.U(5.W) 
    val ALU_XOR = 4.U(5.W) 
    val ALU_SLL = 5.U(5.W) 
    val ALU_SLT = 6.U(5.W) 
    val ALU_SLTU = 7.U(5.W) 
    val ALU_SRA = 8.U(5.W) 
    val ALU_SRAW = 9.U(5.W) 
    val ALU_SRL = 10.U(5.W) 
    val ALU_SRLW = 11.U(5.W) 
    val ALU_CP1 = 12.U(5.W) 
    val ALU_MUL = 13.U(5.W)
    val ALU_MULH = 14.U(5.W)
    val ALU_MULHSU = 15.U(5.W)
    val ALU_MULHU = 16.U(5.W)
    val ALU_REM = 17.U(5.W)
    val ALU_REMU = 18.U(5.W)
    val ALU_REMUW = 19.U(5.W)
    val ALU_REMW = 20.U(5.W)
    val ALU_DIV = 21.U(5.W)
    val ALU_DIVU = 22.U(5.W)
    val ALU_DIVUW = 23.U(5.W)
    val ALU_DIVW = 24.U(5.W)
    val ALU_SLLW = 25.U(5.W)
    val ALU_X = 0.U(5.W)


    //result extend operation (3 bits )
    val alu_res_noext = "b000".U(3.W)
    val alu_res_bs = "b001".U(3.W)
    val alu_res_bu = "b010".U(3.W)
    val alu_res_hbs = "b011".U(3.W)
    val alu_res_hbu = "b100".U(3.W)
    val alu_res_ws = "b101".U(3.W)
    val alu_res_wu = "b110".U(3.W)
    val alu_res_x = "b000".U(3.W)
}

trait PRV 
{
    val prv_sz = 2.W
    val PRV_U = 0.U(prv_sz)
    val PRV_S = 1.U(prv_sz)
    val PRV_M = 3.U(prv_sz)
}

trait core
{
    val rs1_LSB = 15
    val rs1_MSB = 19
    val rs2_LSB = 20
    val rs2_MSB = 24
    val rd_LSB = 7
    val rd_MSB = 11
    val z_LSB = 15
    val z_MSB = 19

    val shamt_len = 5

    val Y = true.B
    val N = false.B

    val STARTADDR = 0x40000000L.U(64.W)
    // val STARTADDR = 0x80000000L.U(64.W)

    val NOP = 0x4033.U(32.W)
}

trait CSRConstants extends PRV
{
    //csr operation
    val csr_op_sz = 3.W 
    val csr_x   = 0.U(csr_op_sz)
    val csr_n   = 0.U(csr_op_sz)
    val csr_r   = 1.U(csr_op_sz)
    val csr_w   = 2.U(csr_op_sz)
    val csr_c   = 3.U(csr_op_sz)
    val csr_s   = 4.U(csr_op_sz)
    val csr_prv = 5.U(csr_op_sz)

    //csr reg index size
    val csr_add_sz = 12

    val csr_LSB = 20
    val csr_MSB = 31

    val MTVEC_ADDR = 0x8000c09cL

    //for RT-Thread
    val mtimecmp_addr = 0x40704000L
    val mtime_addr    = 0x4070bff8L

    //for am-test
    // val mtimecmp_addr = 0x38004000L
    // val mtime_addr    = 0x3800bff8L
}

trait CpathConstants 
{
    //pc selector
    val pc_4 = 0.U(3.W)
    val pc_j = 1.U(3.W)
    val pc_branch = 2.U(3.W)
    val pc_jr = 3.U(3.W)
    val pc_redir = 4.U(3.W)
    val pc_bpu = 5.U(3.W)

    //brach type selector
    val BR_N = 0.U(4.W)
    val BR_EQ = 1.U(4.W)
    val BR_NEQ = 2.U(4.W)
    val BR_LT = 3.U(4.W)
    val BR_LTU = 4.U(4.W)
    val BR_GE = 5.U(4.W)
    val BR_GEU = 6.U(4.W)
    val BR_J = 7.U(4.W)
    val BR_JR = 8.U(4.W)

    //OP1 selector
    val OP1_X = 0.U(2.W)
    val OP1_RS1 = 0.U(2.W)
    val OP1_Z = 1.U(2.W)
    val OP1_U = 2.U(2.W)

    //OP2 selector
    val OP2_X = 0.U(2.W)
    val OP2_RS2 = 0.U(2.W)
    val OP2_PC = 1.U(2.W)
    val OP2_IIM = 2.U(2.W)
    val OP2_SIM = 3.U(2.W)

    //reg file write enable
    val rf_wr_Y = true.B
    val rf_wr_N = false.B
    val rf_wr_X = false.B

    //memory write enable
    val mem_wr_Y = true.B
    val mem_wr_N = false.B
    val mem_wr_X = false.B

    //write back selector
    val wback_aluout = 0.U(2.W)
    val wback_memout = 1.U(2.W)
    val wback_pc_4 = 2.U(2.W)
    val wback_csrout = 3.U(2.W)
    val wback_X = 0.U(2.W)

    
    
}

object Cause 
{
    // interrupt
    val s_soft_interrupt    = 1.U(64.W)
    val m_soft_interrupt    = 3.U(64.W)
    val s_timer_interrupt   = 5.U(64.W)
    val m_timer_interrupt   = 7.U(64.W)
    val s_ext_interrupt     = 9.U(64.W)
    val m_ext_interrupt     = 11.U(64.W) 

    val intr_priority_table = Seq(
        m_ext_interrupt,
        m_soft_interrupt,
        m_timer_interrupt,
        s_ext_interrupt,
        s_soft_interrupt,
        s_timer_interrupt
    )

    //exception
    val instr_addr_misalign =   0.U(64.W)
    val instr_access_falut =    1.U(64.W)
    val illegal_instr =         2.U(64.W)
    val breakpoint =            3.U(64.W)
    val load_addr_misalign =    4.U(64.W)
    val load_access_fault =     5.U(64.W)
    val store_addr_misalign =   6.U(64.W)
    val store_access_fault =    7.U(64.W)
    val ecall_u =               8.U(64.W)
    val ecall_s =               9.U(64.W)
    val ecall_m =               11.U(64.W)
    val instr_page_fault =      12.U(64.W)
    val load_page_fault =       13.U(64.W)
    val store_page_fault =      15.U(64.W)

    val exc_priority_table = Seq(
        breakpoint,
        instr_page_fault,
        instr_access_falut,
        illegal_instr,
        instr_addr_misalign,
        ecall_m,
        ecall_s,
        ecall_u,
        store_addr_misalign,
        load_addr_misalign,
        store_page_fault,
        load_page_fault,
        store_access_fault,
        load_access_fault
    )
}

trait CSRmap
{
    //machine mode infomation registers
    val mvendorid = 0xf11
    val marchid = 0xf12
    val mimpid = 0xf13
    val mhartid = 0xf14

    //machine mode trap setup registers
    val mstatus = 0x300
    val misa = 0x301
    val medelege = 0x302
    val midelege = 0x303
    val mie = 0x304
    val mtvec = 0x305
    val mcounteren = 0x306
    
    //machine mode trap handling registers
    val mscratch = 0x340
    val mepc = 0x341
    val mcause = 0x342
    val mtval = 0x343
    val mip = 0x344

    //machine mode physical memory protection 
    val pmpcfg0 = 0x3a0
    val pmpcfg1 = 0x3a1
    val pmpaddr0 = 0x3b0
    val pmpaddr1 = 0x3b1
    val pmpaddr3 = 0x3b2
    val pmpaddr4 = 0x3b3
    val pmpaddr5 = 0x3b4
    val pmpaddr6 = 0x3b5
    val pmpaddr7 = 0x3b6
    val pmpaddr8 = 0x3b7
    val pmpaddr9 = 0x3b8
    val pmpaddr10 = 0x3b9
    val pmpaddr11 = 0x3ba
    val pmpaddr12 = 0x3bb
    val pmpaddr13 = 0x3bc
    val pmpaddr14 = 0x3bd
    val pmpaddr15 = 0x3be

    //machine mode timers
    val mcycle = 0xb00
    val minstret = 0xb02
    val mhpmcounter_start = 0xb03
    val mhpmcounter_number = 29
    val mcounterinhibit = 0x320
    val mhpmevent_start = 0x323
    val mhpmevent_number = 29
    

}

object Constraints extends memory_const with alu_const with core with CpathConstants with CSRConstants with CSRmap with AXI_const with Uart_const
{}