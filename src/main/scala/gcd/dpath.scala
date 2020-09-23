package simplecore

import chisel3._
import chisel3.util._
import chisel3.util.experimental.BoringUtils


import constants.RV64I._
import constants.RV64M._
import constants.Constraints._

class D2CIO extends Bundle
{
    val instr = Output(UInt(32.W))
    val islt = Output(Bool())
    val isltu = Output(Bool())
    val iseq = Output(Bool())
    val isredir =  Output(Bool())
}
class DpathIO extends Bundle
{
    val c2d = Flipped(new C2DIO()) 
    val d2c = new D2CIO()
    val imem = Flipped(new memory_port_io)
    val dmem = Flipped(new memory_port_io)
}

class Dpath extends Module {
    val io = IO(new DpathIO)

    io := DontCare

    val reg_pc = RegInit(STARTADDR)
    val wire_pc_next = Wire(UInt(64.W))

    //instruction fetch
    io.imem.req.valid := true.B
    io.imem.req.bits.addr := reg_pc(31,0)
    io.imem.req.bits.op := op_wu
    io.imem.req.bits.memen := true.B
    io.imem.req.bits.wen := false.B

    val dp_instr = WireInit(io.imem.resp.bits.rdata(31,0))

    io.d2c.instr := dp_instr

    //pc update
    val temp_pc_next_4 = Wire(UInt(64.W))
    val temp_pc_jump_target = Wire(UInt(64.W))
    val temp_pc_jr_target = Wire(UInt(64.W))
    val temp_pc_branch_target = Wire(UInt(64.W))
    val temp_pc_redirect_target = Wire(UInt(64.W))
    

    wire_pc_next := MuxCase(temp_pc_next_4,Array(
        (io.c2d.cp_pc_sel === pc_4) -> temp_pc_next_4,
        (io.c2d.cp_pc_sel === pc_redir) -> temp_pc_redirect_target,
        (io.c2d.cp_pc_sel === pc_j)     -> temp_pc_jump_target,
        (io.c2d.cp_pc_sel === pc_jr)    -> temp_pc_jr_target,
        (io.c2d.cp_pc_sel === pc_branch)-> temp_pc_branch_target
    ))

    when(!io.c2d.shouldstall)
    {
        reg_pc := wire_pc_next
    }

    //decode
    val dp_rs1_addr = dp_instr(rs1_MSB,rs1_LSB)
    val dp_rs2_addr = dp_instr(rs2_MSB,rs2_LSB)
    val dp_rd_addr  = dp_instr(rd_MSB,rd_LSB)

    val regfile = Module(new Regfile)

    regfile.io.rp1 := dp_rs1_addr
    regfile.io.rp2 := dp_rs2_addr

    val dp_rs1_data = regfile.io.rp1_data
    val dp_rs2_data = regfile.io.rp2_data

    val dp_iim = dp_instr(31,20)
    val dp_jim = Cat(dp_instr(31),dp_instr(19,12),dp_instr(20),dp_instr(30,21))
    val dp_uim = dp_instr(31,12)
    val dp_sim = Cat(dp_instr(31,25),dp_instr(11,7))
    val dp_bim = Cat(dp_instr(31),dp_instr(7),dp_instr(30,25),dp_instr(11,8))
    val dp_zim = dp_instr(19,15)

    val dp_iim_ext = Cat(Fill(54,dp_iim(11)),dp_iim)
    val dp_jim_ext = Cat(Fill(43,dp_jim(19)),dp_jim,0.U(1.W))
    val dp_uim_ext = Cat(Fill(32,dp_uim(19)),dp_uim,Fill(12,0.U(1.W)))
    val dp_sim_ext = Cat(Fill(52,dp_sim(11)),dp_sim)
    val dp_bim_ext = Cat(Fill(51,dp_bim(11)),dp_bim,0.U(1.W))
    val dp_zim_ext = Cat(Fill(59,0.U(1.W)),dp_zim)


    //pc update
    temp_pc_next_4 := reg_pc + 4.U
    temp_pc_jump_target := (reg_pc.asSInt() + dp_jim_ext.asSInt()).asUInt()
    temp_pc_jr_target := (((dp_rs1_data.asSInt() + dp_iim_ext.asSInt()) >> 1) << 1).asUInt()
    temp_pc_branch_target := (reg_pc.asSInt() + dp_bim_ext.asSInt()).asUInt()

    //execute 
    val dp_op1_src = Wire(UInt(64.W))
    val dp_op2_src = Wire(UInt(64.W))

    dp_op1_src := MuxCase(dp_rs1_data,Array(
        (io.c2d.cp_op1_sel === OP1_RS1) -> dp_rs1_data,
        (io.c2d.cp_op1_sel === OP1_Z)   -> dp_zim_ext,
        (io.c2d.cp_op1_sel === OP1_U)   -> dp_uim_ext
    ))

    dp_op2_src := MuxCase(dp_rs2_data,Array(
        (io.c2d.cp_op2_sel === OP2_RS2) -> dp_rs2_data,
        (io.c2d.cp_op2_sel === OP2_PC)  -> reg_pc,
        (io.c2d.cp_op2_sel === OP2_IIM) -> dp_iim_ext,
        (io.c2d.cp_op2_sel === OP2_SIM) -> dp_sim_ext
    ))

    val dp_alu = Module(new alu_module)

    dp_alu.io.input1 := dp_op1_src
    dp_alu.io.input2 := dp_op2_src

    dp_alu.io.op := io.c2d.cp_alu_sel
    dp_alu.io.res_ext_op := io.c2d.cp_alu_ext_sel

    val dp_alu_res = dp_alu.io.res

    //send the relation of op1 and op2 to cpath
    io.d2c.islt := (dp_op1_src.asSInt() < dp_op2_src.asSInt())
    io.d2c.isltu := (dp_op1_src < dp_op2_src)
    io.d2c.iseq := (dp_op1_src === dp_op2_src)

    //access data memory and csr file
    io.dmem.req.valid := io.c2d.cp_mem_en
    io.dmem.req.bits.addr := dp_alu_res(31,0)
    io.dmem.req.bits.mask := io.c2d.cp_mem_write_mask
    io.dmem.req.bits.op := io.c2d.cp_mem_read_op
    io.dmem.req.bits.wdata := dp_rs2_data
    io.dmem.req.bits.memen := io.c2d.cp_mem_en
    io.dmem.req.bits.wen := io.c2d.cp_mem_wen

    val dp_mem_out = io.dmem.resp.bits.rdata

    val csr = Module(new CSRfile)

    csr.io.instruction := dp_instr
    csr.io.csr_op := io.c2d.cp_csr_op
    csr.io.data_in := dp_alu_res
    csr.io.hasException := io.c2d.hasexception
    csr.io.hasStall := io.c2d.shouldstall
    csr.io.in_pc := reg_pc

    temp_pc_redirect_target := csr.io.redir_target
    
    io.d2c.isredir := csr.io.isredir

    //write back 
    val dp_wb_data = Wire(UInt(64.W))

    dp_wb_data := MuxCase(dp_alu_res,Array(
        (io.c2d.cp_wb_sel === wback_aluout) -> dp_alu_res,
        (io.c2d.cp_wb_sel === wback_memout) -> dp_mem_out,
        (io.c2d.cp_wb_sel === wback_pc_4) -> temp_pc_next_4,
        (io.c2d.cp_wb_sel === wback_csrout) -> csr.io.csr_info
    ))

    when(!io.c2d.hasexception && !io.c2d.shouldstall && io.c2d.cp_reg_wen)
    {
        regfile.io.wp_en := true.B
    }.otherwise
    {
        regfile.io.wp_en := false.B
    }
    regfile.io.wp := dp_rd_addr
    regfile.io.wp_data := dp_wb_data

    BoringUtils.addSource(reg_pc,"pc_data")
    BoringUtils.addSource(io.c2d.cp_reg_wen,"cp_reg_wen")
    // BoringUtils.addSource(io.c2d.cp_pc_sel,"pc_sel")

    
}
