package mycore

import chisel3._
import chisel3.util._
import chisel3.util.experimental.BoringUtils


import constants.RV64I._
import constants.RV64M._
import constants.Constraints._

class D2CIO extends Bundle
{
    //instruction in DEC
    val instr = Output(UInt(32.W))
    val islt = Output(Bool())
    val isltu = Output(Bool())
    val iseq = Output(Bool())
    val isredir =  Output(Bool())
    val mem_mem_valid = Output(Bool())
    val IF_ins = Output(UInt(32.W))
    val EXE_pc_branch = Output(UInt(2.W))
}

class DpathIO extends Bundle
{
    val c2d = Flipped(new C2DIO()) 
    val d2c = new D2CIO()
    val imem = new sram_like_io
    val dmem = new sram_like_io
}

class Dpath extends Module {
    val io = IO(new DpathIO)

    io := DontCare

    //instruction fetch stage
    val reg_if_pc = RegInit(STARTADDR)
    val wire_pc_next = Wire(UInt(64.W))
    val wire_pc_next_4 = Wire(UInt(64.W))
    
    //the following target is generated in exe stage
    val wire_pc_jump_target = Wire(UInt(64.W))
    val wire_pc_jr_target = Wire(UInt(64.W))
    val wire_pc_branch_target = Wire(UInt(64.W))
    //the following target is generated in mem stage
    val wire_pc_redirect_target = Wire(UInt(64.W))
    val wire_pc_bpu_target = Wire(UInt(64.W))

    io.imem.memen := true.B
    io.imem.addr := reg_if_pc(31,0)
    io.imem.op := op_wu
    io.imem.wen := false.B

    wire_pc_next_4 := reg_if_pc + 4.U

    //the pc_sel from cpath is always for if stage
    wire_pc_next := MuxCase(wire_pc_next_4,Array(
        (io.c2d.cp_pc_sel === pc_4)     -> wire_pc_next_4,
        (io.c2d.cp_pc_sel === pc_redir) -> wire_pc_redirect_target,
        (io.c2d.cp_pc_sel === pc_j)     -> wire_pc_jump_target,
        (io.c2d.cp_pc_sel === pc_jr)    -> wire_pc_jr_target,
        (io.c2d.cp_pc_sel === pc_branch)-> wire_pc_branch_target,
        (io.c2d.cp_pc_sel === pc_bpu)   -> wire_pc_bpu_target
    ))


    val wire_if_instr = WireInit(io.imem.rdata(31,0))
    io.d2c.IF_ins := wire_if_instr

    val if_bim = Cat(wire_if_instr(31),wire_if_instr(7),wire_if_instr(30,25),wire_if_instr(11,8))
    val if_bim_ext = Cat(Fill(51,if_bim(11)),if_bim,0.U(1.W))
    wire_pc_bpu_target := reg_if_pc + if_bim_ext

    //the instruction register in decode stage init to nop in case the cpath generates a 
    //excepiton in the init cycle for the first instruction is zero
    val reg_dec_instr = RegInit(NOP)
    val reg_dec_instr_valid = RegInit(false.B)
    val reg_dec_pc = RegInit(STARTADDR)
    //for BPU
    val reg_dec_pc_branch = RegInit(0.U(2.W))
    // reg_dec_instr := reg_dec_instr

    //update pc 
    //pipeline kill and stall will not happen together
    when(io.c2d.cp_pipeline_stall)
    {
        reg_dec_instr := reg_dec_instr
        reg_if_pc := reg_if_pc
        reg_dec_instr_valid := reg_dec_instr_valid
        reg_dec_pc := reg_dec_pc
        reg_dec_pc_branch := reg_dec_pc_branch

    }.elsewhen(io.c2d.cp_pipeline_kill)
    {
        reg_dec_instr := NOP
        reg_if_pc := wire_pc_next
        reg_dec_instr_valid := false.B
        reg_dec_pc := 0.U(64.W)
        reg_dec_pc_branch := 0.U(2.W)

    }.otherwise
    {
        when(io.c2d.cp_data_hazard)
        {
            reg_dec_instr := reg_dec_instr
            reg_if_pc := reg_if_pc
            reg_dec_instr_valid := true.B
            reg_dec_pc := reg_dec_pc
            reg_dec_pc_branch := reg_dec_pc_branch
        }.elsewhen(io.c2d.cp_control_hazard)
        {
            reg_dec_instr := NOP
            reg_if_pc := wire_pc_next
            reg_dec_instr_valid := false.B
            reg_dec_pc := 0.U(64.W)
            reg_dec_pc_branch := 0.U(2.W)
        }.elsewhen(io.c2d.cp_if_kill)
        {
            reg_dec_instr := NOP
            reg_if_pc := reg_if_pc
            reg_dec_instr_valid := false.B
            reg_dec_pc := 0.U(64.W)
            reg_dec_pc_branch := 0.U(2.W)
        }.otherwise
        {
            reg_dec_instr := wire_if_instr
            reg_if_pc := wire_pc_next
            reg_dec_instr_valid := true.B
            reg_dec_pc := reg_if_pc
            reg_dec_pc_branch := io.c2d.cp_if_pc_branch
        }
    }


    //send instruction to cpath to decode 
    io.d2c.instr := reg_dec_instr

    //signal decoded from cpath is accessed in dec stage

    val dp_dec_rs1_addr = reg_dec_instr(rs1_MSB,rs1_LSB)
    val dp_dec_rs2_addr = reg_dec_instr(rs2_MSB,rs2_LSB)
    val dp_dec_rd_addr  = reg_dec_instr(rd_MSB,rd_LSB)

    val regfile = Module(new Regfile)

    regfile.io.rp1 := dp_dec_rs1_addr
    regfile.io.rp2 := dp_dec_rs2_addr

    val dp_dec_rs1_data = regfile.io.rp1_data
    val dp_dec_rs2_data = regfile.io.rp2_data

    val dp_dec_iim = reg_dec_instr(31,20)
    val dp_dec_jim = Cat(reg_dec_instr(31),reg_dec_instr(19,12),reg_dec_instr(20),reg_dec_instr(30,21))
    val dp_dec_uim = reg_dec_instr(31,12)
    val dp_dec_sim = Cat(reg_dec_instr(31,25),reg_dec_instr(11,7))
    val dp_dec_bim = Cat(reg_dec_instr(31),reg_dec_instr(7),reg_dec_instr(30,25),reg_dec_instr(11,8))
    val dp_dec_zim = reg_dec_instr(19,15)

    val dp_dec_iim_ext = Cat(Fill(54,dp_dec_iim(11)),dp_dec_iim)
    val dp_dec_jim_ext = Cat(Fill(43,dp_dec_jim(19)),dp_dec_jim,0.U(1.W))
    val dp_dec_uim_ext = Cat(Fill(32,dp_dec_uim(19)),dp_dec_uim,Fill(12,0.U(1.W)))
    val dp_dec_sim_ext = Cat(Fill(52,dp_dec_sim(11)),dp_dec_sim)
    val dp_dec_bim_ext = Cat(Fill(51,dp_dec_bim(11)),dp_dec_bim,0.U(1.W))
    val dp_dec_zim_ext = Cat(Fill(59,0.U(1.W)),dp_dec_zim)


    //op1-sel and op2-sel select the source to pass forward to exe stage
    //but there will be data hazard 
    //1.dp_wire_exe_aluout (instruction in exe's rd == dec's rs1 | rs2 and exe's rf_wen is true and op1-sel is rs1 and rs1 is not x0)
    //2.dp_wire_mem_memstageout (instruction in mem's rd == dec's rs1 | rs2 and mem's rf_wen is true and op1-sel is rs1 )
    //3.dp_reg_wb_wbdata (instruction in wb's rd == dec's rs1 | rs2 and wb's rf_wen is true and op1-sel is rs1 )

    //{rd,rf_wen} will pass to wb stage
    val dp_exe_reg_rd_addr = RegInit(0.U(5.W))
    val dp_mem_reg_rd_addr = RegInit(0.U(5.W))
    val dp_wb_reg_rd_addr  = RegInit(0.U(5.W))

    val dp_exe_reg_rf_wen = RegInit(false.B)
    val dp_mem_reg_rf_wen = RegInit(false.B)
    val dp_wb_reg_rf_wen  = RegInit(false.B)

    val dp_exe_reg_op1_source = Reg(UInt(64.W))
    val dp_exe_reg_op2_source = Reg(UInt(64.W))
    val dp_dec_wire_op1_source = Wire(UInt(64.W))
    val dp_dec_wire_op2_temp   = Wire(UInt(64.W))
    val dp_dec_wire_op2_source = Wire(UInt(64.W))
    
    val dp_exe_reg_instr = RegInit(NOP)

    val dp_wire_exe_aluout = WireInit(0.U(64.W))
    val dp_wire_mem_memstageout = WireInit(0.U(64.W))
    val dp_wb_reg_wb_data = RegInit(0.U(64.W))
    
    //to soulve data hazard and get the op1_source and op2_source
    dp_dec_wire_op1_source := MuxCase(dp_dec_rs1_data,Array(
        (io.c2d.cp_op1_sel === OP1_Z)   -> dp_dec_zim_ext,
        (io.c2d.cp_op1_sel === OP1_U)   -> dp_dec_uim_ext,
        //the the op1_sel is op1_rs1
        (dp_dec_rs1_addr === dp_exe_reg_rd_addr && dp_dec_rs1_addr =/= 0.U && dp_exe_reg_rf_wen) -> dp_wire_exe_aluout,
        (dp_dec_rs1_addr === dp_mem_reg_rd_addr && dp_dec_rs1_addr =/= 0.U && dp_mem_reg_rf_wen) -> dp_wire_mem_memstageout,
        (dp_dec_rs1_addr === dp_wb_reg_rd_addr && dp_dec_rs1_addr =/= 0.U && dp_wb_reg_rf_wen) -> dp_wb_reg_wb_data
    ))

    dp_dec_wire_op2_temp := MuxCase(dp_dec_rs2_data,Array(
        (io.c2d.cp_op2_sel === OP2_RS2) -> dp_dec_rs2_data,
        (io.c2d.cp_op2_sel === OP2_PC)  -> reg_dec_pc,
        (io.c2d.cp_op2_sel === OP2_IIM) -> dp_dec_iim_ext,
        (io.c2d.cp_op2_sel === OP2_SIM) -> dp_dec_sim_ext
    ))

    dp_dec_wire_op2_source := MuxCase(dp_dec_wire_op2_temp,Array(
        (dp_dec_rs2_addr === dp_exe_reg_rd_addr && io.c2d.cp_op2_sel === OP2_RS2 && dp_dec_rs2_addr =/= 0.U && dp_exe_reg_rf_wen) -> dp_wire_exe_aluout,
        (dp_dec_rs2_addr === dp_mem_reg_rd_addr && io.c2d.cp_op2_sel === OP2_RS2 && dp_dec_rs2_addr =/= 0.U && dp_mem_reg_rf_wen) -> dp_wire_mem_memstageout,
        (dp_dec_rs2_addr === dp_wb_reg_rd_addr && io.c2d.cp_op2_sel === OP2_RS2 && dp_dec_rs2_addr =/= 0.U && dp_wb_reg_rf_wen)   -> dp_wb_reg_wb_data
    ))

    //rs2_data will be used when there is a store so rs2_data is also need a by-pass
    val dp_exe_reg_rs2_data  = RegInit(0.U(64.W))
    val dp_dec_wire_rs2_data = Wire(UInt(64.W))

    dp_dec_wire_rs2_data := MuxCase(dp_dec_rs2_data,Array(
        (dp_dec_rs2_addr === dp_exe_reg_rd_addr && dp_dec_rs2_addr =/= 0.U && dp_exe_reg_rf_wen) -> dp_wire_exe_aluout,
        (dp_dec_rs2_addr === dp_mem_reg_rd_addr && dp_dec_rs2_addr =/= 0.U && dp_mem_reg_rf_wen) -> dp_wire_mem_memstageout,
        (dp_dec_rs2_addr === dp_wb_reg_rd_addr && dp_dec_rs2_addr =/= 0.U && dp_wb_reg_rf_wen)   -> dp_wb_reg_wb_data
    ))

    //signal define used after dec stage
    val dp_exe_reg_alu_sel = RegInit(0.U(5.W))
    val dp_exe_reg_mem_en = RegInit(false.B)
    val dp_exe_reg_mem_read_op = RegInit(0.U(3.W))
    val dp_exe_reg_mem_write_mask = RegInit(0.U(8.W))
    val dp_exe_reg_mem_wen = RegInit(false.B)
    val dp_exe_reg_alu_ext_sel = RegInit(0.U(3.W))
    val dp_exe_reg_wb_sel = RegInit(0.U(2.W))
    val dp_exe_reg_csr_op = RegInit(0.U(csr_op_sz))
    
    val dp_exe_reg_pc = RegInit(STARTADDR)
    
    val dp_exe_reg_instr_valid = RegInit(false.B)

    val dp_exe_reg_jim_ext = RegInit(0.U(64.W))
    val dp_exe_reg_iim_ext = RegInit(0.U(64.W))
    val dp_exe_reg_bim_ext = RegInit(0.U(64.W))
    val dp_exe_reg_rs1_data = RegInit(0.U(64.W))

    //for BPU
    val dp_exe_pc_branch = RegInit(0.U(2.W))

    //pass signals from dec to exe stage due to all kinds of hazard 
    //needs rewrite that only control signal should be set to false 
    when(io.c2d.cp_pipeline_stall)
    {
        dp_exe_reg_instr_valid := dp_exe_reg_instr_valid
        dp_exe_reg_instr := dp_exe_reg_instr
        dp_exe_reg_rd_addr := dp_exe_reg_rd_addr
        dp_exe_reg_rf_wen := dp_exe_reg_rf_wen
        dp_exe_reg_op1_source := dp_exe_reg_op1_source
        dp_exe_reg_op2_source := dp_exe_reg_op2_source
        dp_exe_reg_rs2_data := dp_exe_reg_rs2_data
        dp_exe_reg_alu_sel := dp_exe_reg_alu_sel
        dp_exe_reg_mem_en := dp_exe_reg_mem_en
        dp_exe_reg_mem_read_op := dp_exe_reg_mem_read_op
        dp_exe_reg_mem_write_mask := dp_exe_reg_mem_write_mask
        dp_exe_reg_mem_wen := dp_exe_reg_mem_wen
        dp_exe_reg_alu_ext_sel := dp_exe_reg_alu_ext_sel
        dp_exe_reg_csr_op := dp_exe_reg_csr_op
        dp_exe_reg_pc := dp_exe_reg_pc
        dp_exe_reg_jim_ext := dp_exe_reg_jim_ext
        dp_exe_reg_iim_ext := dp_exe_reg_iim_ext
        dp_exe_reg_bim_ext := dp_exe_reg_bim_ext
        dp_exe_reg_rs1_data := dp_exe_reg_rs1_data
        dp_exe_reg_wb_sel := dp_exe_reg_wb_sel
        dp_exe_pc_branch := dp_exe_pc_branch
        
    }.elsewhen(io.c2d.cp_pipeline_kill)
    {
        dp_exe_reg_instr_valid := false.B
        dp_exe_reg_instr := NOP
        dp_exe_reg_rd_addr := 0.U(5.W)
        dp_exe_reg_rf_wen := false.B
        dp_exe_reg_op1_source := 0.U(64.W)
        dp_exe_reg_op2_source := 0.U(64.W)
        dp_exe_reg_rs2_data := 0.U(64.W)
        dp_exe_reg_alu_sel := 0.U(5.W)
        dp_exe_reg_mem_en := false.B
        dp_exe_reg_mem_read_op := 0.U(3.W)
        dp_exe_reg_mem_write_mask := 0.U(8.W)
        dp_exe_reg_mem_wen := false.B
        dp_exe_reg_alu_ext_sel := 0.U(3.W)
        dp_exe_reg_csr_op := 0.U(csr_op_sz)
        dp_exe_reg_pc := 0.U(64.W)
        dp_exe_reg_jim_ext := 0.U(64.W)
        dp_exe_reg_iim_ext := 0.U(64.W)
        dp_exe_reg_bim_ext := 0.U(64.W)
        dp_exe_reg_rs1_data := 0.U(64.W)
        dp_exe_reg_wb_sel := 0.U(2.W)
        dp_exe_pc_branch := 0.U(2.W)
    }.otherwise
    {
        when(io.c2d.cp_data_hazard)
        {
            dp_exe_reg_instr_valid := false.B
            dp_exe_reg_instr := NOP
            dp_exe_reg_rd_addr := 0.U(5.W)
            dp_exe_reg_rf_wen := false.B
            dp_exe_reg_op1_source := 0.U(64.W)
            dp_exe_reg_op2_source := 0.U(64.W)
            dp_exe_reg_rs2_data := 0.U(64.W)
            dp_exe_reg_alu_sel := 0.U(5.W)
            dp_exe_reg_mem_en := false.B
            dp_exe_reg_mem_read_op := 0.U(3.W)
            dp_exe_reg_mem_write_mask := 0.U(8.W)
            dp_exe_reg_mem_wen := false.B
            dp_exe_reg_alu_ext_sel := 0.U(3.W)
            dp_exe_reg_csr_op := 0.U(csr_op_sz)
            dp_exe_reg_pc := 0.U(64.W)
            dp_exe_reg_jim_ext := 0.U(64.W)
            dp_exe_reg_iim_ext := 0.U(64.W)
            dp_exe_reg_bim_ext := 0.U(64.W)
            dp_exe_reg_rs1_data := 0.U(64.W)
            dp_exe_reg_wb_sel := 0.U(2.W)
            dp_exe_pc_branch := 0.U(2.W)

        }.elsewhen(io.c2d.cp_control_hazard)
        {
            dp_exe_reg_instr_valid := false.B
            dp_exe_reg_instr := NOP
            dp_exe_reg_rd_addr := 0.U(5.W)
            dp_exe_reg_rf_wen := false.B
            dp_exe_reg_op1_source := 0.U(64.W)
            dp_exe_reg_op2_source := 0.U(64.W)
            dp_exe_reg_rs2_data := 0.U(64.W)
            dp_exe_reg_alu_sel := 0.U(5.W)
            dp_exe_reg_mem_en := false.B
            dp_exe_reg_mem_read_op := 0.U(3.W)
            dp_exe_reg_mem_write_mask := 0.U(8.W)
            dp_exe_reg_mem_wen := false.B
            dp_exe_reg_alu_ext_sel := 0.U(3.W)
            dp_exe_reg_csr_op := 0.U(csr_op_sz)
            dp_exe_reg_pc := 0.U(64.W)
            dp_exe_reg_jim_ext := 0.U(64.W)
            dp_exe_reg_iim_ext := 0.U(64.W)
            dp_exe_reg_bim_ext := 0.U(64.W)
            dp_exe_reg_rs1_data := 0.U(64.W)
            dp_exe_reg_wb_sel := 0.U(2.W)
            dp_exe_pc_branch := 0.U(2.W)
        }.otherwise
        {
            dp_exe_reg_instr_valid := reg_dec_instr_valid
            dp_exe_reg_instr := reg_dec_instr
            dp_exe_reg_rd_addr := dp_dec_rd_addr
            dp_exe_reg_rf_wen := io.c2d.cp_reg_wen
            dp_exe_reg_op1_source := dp_dec_wire_op1_source
            dp_exe_reg_op2_source := dp_dec_wire_op2_source
            dp_exe_reg_rs2_data := dp_dec_wire_rs2_data
            dp_exe_reg_alu_sel := io.c2d.cp_alu_sel
            dp_exe_reg_mem_en := io.c2d.cp_mem_en
            dp_exe_reg_mem_read_op := io.c2d.cp_mem_read_op
            dp_exe_reg_mem_write_mask := io.c2d.cp_mem_write_mask
            dp_exe_reg_mem_wen := io.c2d.cp_mem_wen
            dp_exe_reg_alu_ext_sel := io.c2d.cp_alu_ext_sel
            dp_exe_reg_csr_op := io.c2d.cp_csr_op
            dp_exe_reg_pc := reg_dec_pc
            dp_exe_reg_jim_ext := dp_dec_jim_ext
            dp_exe_reg_iim_ext := dp_dec_iim_ext
            dp_exe_reg_bim_ext := dp_dec_bim_ext
            dp_exe_reg_rs1_data := dp_dec_rs1_data
            dp_exe_reg_wb_sel := io.c2d.cp_wb_sel
            dp_exe_pc_branch := reg_dec_pc_branch
        }
    }

    //execute stage
    //calculate the jump target 

    // val wire_pc_jump_target = Wire(UInt(64.W))
    // val wire_pc_jr_target = Wire(UInt(64.W))
    // val wire_pc_branch_target = Wire(UInt(64.W))
    wire_pc_jump_target := (dp_exe_reg_pc.asSInt() + dp_exe_reg_jim_ext.asSInt()).asUInt()
    //not dp_exe_reg_rs1_data because there might be a data hazard
    wire_pc_jr_target := (((dp_exe_reg_op1_source.asSInt() + dp_exe_reg_iim_ext.asSInt()) >> 1) << 1).asUInt()
    wire_pc_branch_target := Mux(io.c2d.cp_exe_actual_branch === 1.U(2.W),(dp_exe_reg_pc.asSInt() + dp_exe_reg_bim_ext.asSInt()).asUInt(),(dp_exe_reg_pc.asSInt() + 4.U(64.W).asSInt()).asUInt())

    io.d2c.EXE_pc_branch := dp_exe_pc_branch

    //let alu do it's work 
    val dp_alu = Module(new alu_module)

    dp_alu.io.input1 := dp_exe_reg_op1_source
    dp_alu.io.input2 := dp_exe_reg_op2_source

    dp_alu.io.op := dp_exe_reg_alu_sel
    dp_alu.io.res_ext_op := dp_exe_reg_alu_ext_sel
    dp_alu.io.pipeline_stall := io.c2d.cp_pipeline_stall

    dp_wire_exe_aluout := dp_alu.io.res



    //send the relation of op1 and op2 to cpath
    io.d2c.islt := (dp_exe_reg_op1_source.asSInt() < dp_exe_reg_op2_source.asSInt())
    io.d2c.isltu := (dp_exe_reg_op1_source < dp_exe_reg_op2_source)
    io.d2c.iseq := (dp_exe_reg_op1_source === dp_exe_reg_op2_source)

    //mem's regs
    val dp_mem_reg_instr            = RegInit(NOP)
    val dp_mem_reg_instr_valid      = RegInit(false.B)
    val dp_mem_reg_rs2_data         = RegInit(0.U(64.W))
    val dp_mem_reg_mem_en           = RegInit(false.B)
    val dp_mem_reg_mem_read_op      = RegInit(0.U(3.W))
    val dp_mem_reg_mem_write_mask   = RegInit(0.U(8.W))
    val dp_mem_reg_mem_wen          = RegInit(false.B)
    val dp_mem_reg_csr_op           = RegInit(0.U(csr_op_sz))
    val dp_mem_reg_pc               = RegInit(STARTADDR)
    val dp_mem_reg_alu_out          = RegInit(0.U(64.W))
    val dp_mem_reg_wb_sel           = RegInit(0.U(2.W))

    //connect exe with mem
    when(io.c2d.cp_pipeline_stall)
    {
        dp_mem_reg_instr := dp_mem_reg_instr
        dp_mem_reg_instr_valid := dp_mem_reg_instr_valid
        dp_mem_reg_rs2_data := dp_mem_reg_rs2_data
        dp_mem_reg_mem_en := dp_mem_reg_mem_en
        dp_mem_reg_mem_read_op := dp_mem_reg_mem_read_op
        dp_mem_reg_mem_write_mask := dp_mem_reg_mem_write_mask
        dp_mem_reg_mem_wen := dp_mem_reg_mem_wen
        dp_mem_reg_csr_op := dp_mem_reg_csr_op
        dp_mem_reg_pc := dp_mem_reg_pc
        dp_mem_reg_alu_out := dp_mem_reg_alu_out
        dp_mem_reg_wb_sel := dp_mem_reg_wb_sel
        dp_mem_reg_rd_addr := dp_mem_reg_rd_addr
        dp_mem_reg_rf_wen := dp_mem_reg_rf_wen

    }.elsewhen(io.c2d.cp_pipeline_kill)
    {
        dp_mem_reg_instr := NOP
        dp_mem_reg_instr_valid := false.B
        dp_mem_reg_rs2_data := 0.U(64.W)
        dp_mem_reg_mem_en := false.B
        dp_mem_reg_mem_read_op := 0.U(3.W)
        dp_mem_reg_mem_write_mask := 0.U(8.W)
        dp_mem_reg_mem_wen := false.B
        dp_mem_reg_csr_op := 0.U(csr_op_sz)
        dp_mem_reg_pc := 0.U(64.W)
        dp_mem_reg_alu_out := 0.U(64.W)
        dp_mem_reg_wb_sel := 0.U(2.W)
        dp_mem_reg_rd_addr := 0.U(5.W)
        dp_mem_reg_rf_wen := false.B

    }.otherwise
    {
        dp_mem_reg_instr := dp_exe_reg_instr
        dp_mem_reg_instr_valid := dp_exe_reg_instr_valid
        dp_mem_reg_rs2_data := dp_exe_reg_rs2_data
        dp_mem_reg_mem_en := dp_exe_reg_mem_en
        dp_mem_reg_mem_read_op := dp_exe_reg_mem_read_op
        dp_mem_reg_mem_write_mask := dp_exe_reg_mem_write_mask
        dp_mem_reg_mem_wen := dp_exe_reg_mem_wen
        dp_mem_reg_csr_op := dp_exe_reg_csr_op
        dp_mem_reg_pc := dp_exe_reg_pc
        dp_mem_reg_alu_out := dp_wire_exe_aluout
        dp_mem_reg_wb_sel := dp_exe_reg_wb_sel
        dp_mem_reg_rd_addr := dp_exe_reg_rd_addr
        dp_mem_reg_rf_wen := dp_exe_reg_rf_wen

    }
    //mem stage

    //mem stage's mem enable to control path
    io.d2c.mem_mem_valid := dp_mem_reg_mem_en

    //access memory for store instruction and access csr file for csr instructions 
    io.dmem.memen := dp_mem_reg_mem_en
    io.dmem.addr := dp_mem_reg_alu_out(31,0)
    io.dmem.mask := dp_mem_reg_mem_write_mask
    io.dmem.op := dp_mem_reg_mem_read_op
    when(dp_mem_reg_mem_write_mask === mask_b)
    {
        io.dmem.wdata := Fill(8,dp_mem_reg_rs2_data(7,0))
    }.elsewhen(dp_mem_reg_mem_write_mask === mask_hb)
    {
        io.dmem.wdata := Fill(4,dp_mem_reg_rs2_data(15,0))
    }
    .elsewhen(dp_mem_reg_mem_write_mask === mask_w)
    {
        io.dmem.wdata := Fill(2,dp_mem_reg_rs2_data(31,0))
    }
    .elsewhen(dp_mem_reg_mem_write_mask === mask_dw)
    {
        io.dmem.wdata := dp_mem_reg_rs2_data
    }
    
    io.dmem.wen := dp_mem_reg_mem_wen

    val csr = Module(new CSRfile)

    csr.io.instruction := dp_mem_reg_instr
    csr.io.csr_op := dp_mem_reg_csr_op
    csr.io.data_in := dp_mem_reg_alu_out
    csr.io.hasException := io.c2d.hasexception
    csr.io.hasStall := io.c2d.shouldstall
    csr.io.in_mem_pc := dp_mem_reg_pc
    csr.io.in_exe_pc := dp_exe_reg_pc
    csr.io.in_dec_pc := reg_dec_pc
    csr.io.in_if_pc := reg_if_pc

    wire_pc_redirect_target := csr.io.redir_target
    io.d2c.isredir := csr.io.isredir

    dp_wire_mem_memstageout := MuxCase(dp_mem_reg_alu_out,Array(
        (dp_mem_reg_wb_sel === wback_aluout) -> dp_mem_reg_alu_out,
        (dp_mem_reg_wb_sel === wback_memout) -> io.dmem.rdata,
        (dp_mem_reg_wb_sel === wback_pc_4) -> (dp_mem_reg_pc + 4.U),
        (dp_mem_reg_wb_sel === wback_csrout) -> csr.io.csr_info
    ))

    //wb's regs
    // val dp_wb_reg_wb_data = RegInit(0.U(64.W))
    val dp_wb_reg_instr_valid = RegInit(false.B)
    val dp_wb_reg_pc = RegInit(STARTADDR)
    val dp_wb_reg_instr = RegInit(NOP)

    //connect mem and write back stage
    when(io.c2d.cp_pipeline_stall)
    {
        // when(io.c2d.cp_pipeline_data_stall && io.c2d.cp_pipeline_inst_stall)
        // {
            dp_wb_reg_rd_addr     := 0.U(5.W)
            dp_wb_reg_rf_wen      := false.B
            dp_wb_reg_wb_data     := 0.U(64.W)
            dp_wb_reg_instr_valid := false.B
            dp_wb_reg_pc          := dp_mem_reg_pc
            dp_wb_reg_instr       := dp_mem_reg_instr
        // }.elsewhen(!io.c2d.cp_pipeline_data_stall && io.c2d.cp_pipeline_inst_stall)
        // {
        //     //now we can commit the MEM stage and set the previous MEM stage invalid
        //     dp_wb_reg_rd_addr     := dp_mem_reg_rd_addr
        //     when(!csr.io.csr_illegal_ins_exception)
        //     {
        //         dp_wb_reg_rf_wen      := dp_mem_reg_rf_wen
        //     }.otherwise
        //     {
        //         dp_wb_reg_rf_wen      := false.B
        //     }
        //     dp_wb_reg_wb_data     := dp_wire_mem_memstageout
        //     dp_wb_reg_instr_valid := dp_mem_reg_instr_valid
        //     dp_wb_reg_pc          := dp_mem_reg_pc
        //     dp_wb_reg_instr       := dp_mem_reg_instr

        //     dp_mem_reg_instr_valid := false.B
        //     dp_mem_reg_mem_en := false.B
        //     // for load use , let the bypass not detect a forwarding
        //     //because the MEM stage has commit 
        //     dp_mem_reg_rf_wen := false.B

        // }
    }.elsewhen(csr.io.csr_illegal_ins_exception)
    {
        //when a illegal instruction or a illegal csr_read or write
        //happens , we should set rf_wen = false , illegal instruction
        //has been set in DEC stage but csr illegal read and write
        //are detected in MEM stage which will cause a exception and 
        //make pc redirect , we should make sure the illegal instruction
        //will not write anything in WB stage

        //WARNING: do not use pipeline kill signal to judge
        //         because that will make a legal instruction
        //         in MEM stage but timer interrupt happens so
        //         that the ilegal instruction will fail 
        dp_wb_reg_rd_addr     := dp_mem_reg_rd_addr
        dp_wb_reg_rf_wen      := false.B
        dp_wb_reg_wb_data     := dp_wire_mem_memstageout
        dp_wb_reg_instr_valid := dp_mem_reg_instr_valid
        dp_wb_reg_pc          := dp_mem_reg_pc
        dp_wb_reg_instr       := dp_mem_reg_instr

    }.otherwise
    {
        dp_wb_reg_rd_addr     := dp_mem_reg_rd_addr
        dp_wb_reg_rf_wen      := dp_mem_reg_rf_wen
        dp_wb_reg_wb_data     := dp_wire_mem_memstageout
        dp_wb_reg_instr_valid := dp_mem_reg_instr_valid
        dp_wb_reg_pc          := dp_mem_reg_pc
        dp_wb_reg_instr       := dp_mem_reg_instr
    }

    //Write back stage
    when(dp_wb_reg_rf_wen && dp_wb_reg_instr_valid)
    {
        regfile.io.wp_en := true.B
    }.otherwise
    {
        regfile.io.wp_en := false.B
    }
    regfile.io.wp := dp_wb_reg_rd_addr
    regfile.io.wp_data := dp_wb_reg_wb_data

    csr.io.is_retire := dp_wb_reg_instr_valid

    BoringUtils.addSource(dp_wb_reg_pc,"pc_data")
    BoringUtils.addSource(csr.io.is_retire,"is_retire")
    BoringUtils.addSource(dp_wb_reg_instr,"dp_wb_reg_instr")
    
    
}
