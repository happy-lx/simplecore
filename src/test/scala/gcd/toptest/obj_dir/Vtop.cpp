// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"              // For This
#include "Vtop__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vtop) {
    Vtop__Syms* __restrict vlSymsp = __VlSymsp = new Vtop__Syms(this, name());
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL (__PVT____024unit, Vtop___024unit);
    // Reset internal values
    
    // Reset structure values
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_diff_r_0 = VL_RAND_RESET_Q(64);
    io_diff_r_1 = VL_RAND_RESET_Q(64);
    io_diff_r_2 = VL_RAND_RESET_Q(64);
    io_diff_r_3 = VL_RAND_RESET_Q(64);
    io_diff_r_4 = VL_RAND_RESET_Q(64);
    io_diff_r_5 = VL_RAND_RESET_Q(64);
    io_diff_r_6 = VL_RAND_RESET_Q(64);
    io_diff_r_7 = VL_RAND_RESET_Q(64);
    io_diff_r_8 = VL_RAND_RESET_Q(64);
    io_diff_r_9 = VL_RAND_RESET_Q(64);
    io_diff_r_10 = VL_RAND_RESET_Q(64);
    io_diff_r_11 = VL_RAND_RESET_Q(64);
    io_diff_r_12 = VL_RAND_RESET_Q(64);
    io_diff_r_13 = VL_RAND_RESET_Q(64);
    io_diff_r_14 = VL_RAND_RESET_Q(64);
    io_diff_r_15 = VL_RAND_RESET_Q(64);
    io_diff_r_16 = VL_RAND_RESET_Q(64);
    io_diff_r_17 = VL_RAND_RESET_Q(64);
    io_diff_r_18 = VL_RAND_RESET_Q(64);
    io_diff_r_19 = VL_RAND_RESET_Q(64);
    io_diff_r_20 = VL_RAND_RESET_Q(64);
    io_diff_r_21 = VL_RAND_RESET_Q(64);
    io_diff_r_22 = VL_RAND_RESET_Q(64);
    io_diff_r_23 = VL_RAND_RESET_Q(64);
    io_diff_r_24 = VL_RAND_RESET_Q(64);
    io_diff_r_25 = VL_RAND_RESET_Q(64);
    io_diff_r_26 = VL_RAND_RESET_Q(64);
    io_diff_r_27 = VL_RAND_RESET_Q(64);
    io_diff_r_28 = VL_RAND_RESET_Q(64);
    io_diff_r_29 = VL_RAND_RESET_Q(64);
    io_diff_r_30 = VL_RAND_RESET_Q(64);
    io_diff_r_31 = VL_RAND_RESET_Q(64);
    io_diff_pc_data = VL_RAND_RESET_Q(64);
    io_diff_mstatus = VL_RAND_RESET_Q(64);
    io_diff_isredir = VL_RAND_RESET_I(1);
    io_diff_is_retire = VL_RAND_RESET_I(1);
    io_diff_instr_in_wb = VL_RAND_RESET_I(32);
    io_diff_is_valid = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__dpath_io_d2c_islt = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__dpath_io_d2c_isltu = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__dpath_io_d2c_iseq = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel = VL_RAND_RESET_I(3);
    v__DOT__mycore__DOT__cpath_io_c2d_cp_op1_sel = VL_RAND_RESET_I(2);
    v__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel = VL_RAND_RESET_I(2);
    v__DOT__mycore__DOT__cpath_io_c2d_cp_if_kill = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__mymem_io_ports_1_resp_bits_rdata = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp1_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp2_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__dpath__DOT__reg_if_pc = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__wire_pc_next_4 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_pc = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_bim_ext = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__wire_pc_branch_target = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rs1_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_iim_ext = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_jim_ext = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__wire_pc_jump_target = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr = VL_RAND_RESET_I(32);
    v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr_valid = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__dpath__DOT__reg_dec_pc = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(66,v__DOT__mycore__DOT__dpath__DOT__dp_dec_iim_ext);
    v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rd_addr = VL_RAND_RESET_I(5);
    v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rd_addr = VL_RAND_RESET_I(5);
    v__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_rd_addr = VL_RAND_RESET_I(5);
    v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rf_wen = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rf_wen = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_rf_wen = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_instr = VL_RAND_RESET_I(32);
    v__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_wb_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_wb_sel = VL_RAND_RESET_I(2);
    v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_pc = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT___T_75 = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__dpath__DOT___T_81 = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__dpath__DOT___T_87 = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rs2_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel = VL_RAND_RESET_I(5);
    v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_en = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_read_op = VL_RAND_RESET_I(3);
    v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_write_mask = VL_RAND_RESET_I(8);
    v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_wen = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_ext_sel = VL_RAND_RESET_I(3);
    v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_wb_sel = VL_RAND_RESET_I(2);
    v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_csr_op = VL_RAND_RESET_I(3);
    v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_instr_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(66,v__DOT__mycore__DOT__dpath__DOT___GEN_96);
    v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr = VL_RAND_RESET_I(32);
    v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr_valid = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rs2_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_en = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_read_op = VL_RAND_RESET_I(3);
    v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_write_mask = VL_RAND_RESET_I(8);
    v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_wen = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op = VL_RAND_RESET_I(3);
    v__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_instr_valid = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_pc = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_instr = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
	    v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_4_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_7_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_9_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_10_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_11_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_12_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_13_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_14_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_15_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_16_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_17_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_18_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_19_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_20_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_21_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_22_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_23_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_24_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_25_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_26_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_27_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_28_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_29_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_30_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_31_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_32_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_33_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_34_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_35_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_36_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_37_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_38_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_39_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_40_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__add_res = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128,v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39);
    VL_RAND_RESET_W(65,v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtvec = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcause = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mie_msi = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mie_mti = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mip_msi = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mip_mti = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtval = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mscratch = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp = VL_RAND_RESET_I(2);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_pmpcfg0 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_pmpcfg1 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_0 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_1 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_2 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_3 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_4 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_5 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_6 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_7 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_8 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_9 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_10 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_11 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_12 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_13 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_14 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_15 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcycle = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_minstret = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_0 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_1 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_2 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_3 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_4 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_5 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_6 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_7 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_8 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_9 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_10 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_11 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_12 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_13 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_14 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_15 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_16 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_17 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_18 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_19 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_20 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_21 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_22 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_23 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_24 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_25 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_26 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_27 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_28 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcounterinhibit = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_0 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_1 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_2 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_3 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_4 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_5 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_6 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_7 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_8 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_9 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_10 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_11 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_12 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_13 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_14 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_15 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_16 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_17 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_18 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_19 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_20 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_21 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_22 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_23 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_24 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_25 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_26 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_27 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_28 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__wire_csr_op = VL_RAND_RESET_I(3);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__write_illgal = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_28 = VL_RAND_RESET_I(11);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_39 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__legalcsrnumber = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_254 = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__read_illegal = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_enable = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9473 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9477 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9480 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT___GEN_92 = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_illegal_ins_exception = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_ismret = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasexception = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_17722 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_17724 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasinterrupt = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__prv_now = VL_RAND_RESET_I(2);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT___GEN_241 = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_17734 = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__cpath__DOT___T_162 = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__cpath__DOT__cs_valid_inst = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__cpath__DOT___T_539 = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__cpath__DOT___T_659 = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__cpath__DOT___T_666 = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__cpath__DOT___T_667 = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__cpath__DOT___T_889 = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__cpath__DOT___T_1037 = VL_RAND_RESET_I(3);
    v__DOT__mycore__DOT__cpath__DOT__cs_csr_op = VL_RAND_RESET_I(3);
    v__DOT__mycore__DOT__cpath__DOT___T_1206 = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__cpath__DOT__cs_exe_branch = VL_RAND_RESET_I(4);
    v__DOT__mycore__DOT__cpath__DOT___T_1360 = VL_RAND_RESET_I(3);
    v__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_is_csr = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__cpath__DOT___T_1366 = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_is_load = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_rd_addr = VL_RAND_RESET_I(5);
    v__DOT__mycore__DOT__cpath__DOT___T_1376 = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_exception = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__cpath__DOT__cs_reg_mem_exception = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_mem_valid = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__cpath__DOT__cs_reg_mem_mem_valid = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__cpath__DOT___T_1379 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<16777216; ++__Vi0) {
	    v__DOT__mycore__DOT__mymem__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }}
    v__DOT__mycore__DOT__mymem__DOT__mem___05FT_96_data = VL_RAND_RESET_I(8);
    v__DOT__mycore__DOT__mymem__DOT__mem___05FT_98_data = VL_RAND_RESET_I(8);
    v__DOT__mycore__DOT__mymem__DOT__mem___05FT_100_data = VL_RAND_RESET_I(8);
    v__DOT__mycore__DOT__mymem__DOT__mem___05FT_102_data = VL_RAND_RESET_I(8);
    v__DOT__mycore__DOT__mymem__DOT__mem___05FT_112_data = VL_RAND_RESET_I(8);
    v__DOT__mycore__DOT__mymem__DOT__mem___05FT_114_data = VL_RAND_RESET_I(8);
    v__DOT__mycore__DOT__mymem__DOT__mem___05FT_116_data = VL_RAND_RESET_I(8);
    v__DOT__mycore__DOT__mymem__DOT__mem___05FT_118_data = VL_RAND_RESET_I(8);
    v__DOT__mycore__DOT__mymem__DOT__mem___05FT_120_data = VL_RAND_RESET_I(8);
    v__DOT__mycore__DOT__mymem__DOT__mem___05FT_122_data = VL_RAND_RESET_I(8);
    v__DOT__mycore__DOT__mymem__DOT__mem___05FT_124_data = VL_RAND_RESET_I(8);
    v__DOT__mycore__DOT__mymem__DOT__mem___05FT_126_data = VL_RAND_RESET_I(8);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
}

void Vtop::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtop::~Vtop() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vtop::eval() {
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate Vtop::eval\n"); );
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_PRINTF(" Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void Vtop::_eval_initial_loop(Vtop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

void Vtop::_initial__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_initial__TOP__1\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    //char	__VpadToAlign4[4];
    VL_SIGW(__Vtemp1,95,0,3);
    // Body
    // INITIAL at top.v:5450
    __Vtemp1[0U] = 0x2e747874U;
    __Vtemp1[1U] = 0x65737431U;
    __Vtemp1[2U] = 0x2e2f74U;
    VL_READMEM_W (true,8,16777216, 0,3, __Vtemp1, vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
		  ,0,~0);
}

VL_INLINE_OPT void Vtop::_sequent__TOP__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_sequent__TOP__2\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdlyvdim0__v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs__v0,4,0);
    VL_SIG8(__Vdlyvset__v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs__v0,0,0);
    VL_SIG8(__Vdly__v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie,0,0);
    VL_SIG8(__Vdlyvval__v__DOT__mycore__DOT__mymem__DOT__mem__v0,7,0);
    VL_SIG8(__Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v0,0,0);
    VL_SIG8(__Vdlyvval__v__DOT__mycore__DOT__mymem__DOT__mem__v1,7,0);
    VL_SIG8(__Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v1,0,0);
    VL_SIG8(__Vdlyvval__v__DOT__mycore__DOT__mymem__DOT__mem__v2,7,0);
    VL_SIG8(__Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v2,0,0);
    VL_SIG8(__Vdlyvval__v__DOT__mycore__DOT__mymem__DOT__mem__v3,7,0);
    VL_SIG8(__Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v3,0,0);
    VL_SIG8(__Vdlyvval__v__DOT__mycore__DOT__mymem__DOT__mem__v4,7,0);
    VL_SIG8(__Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v4,0,0);
    VL_SIG8(__Vdlyvval__v__DOT__mycore__DOT__mymem__DOT__mem__v5,7,0);
    VL_SIG8(__Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v5,0,0);
    VL_SIG8(__Vdlyvval__v__DOT__mycore__DOT__mymem__DOT__mem__v6,7,0);
    VL_SIG8(__Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v6,0,0);
    VL_SIG8(__Vdlyvval__v__DOT__mycore__DOT__mymem__DOT__mem__v7,7,0);
    VL_SIG8(__Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v7,0,0);
    //char	__VpadToAlign59[1];
    VL_SIG(__Vdlyvdim0__v__DOT__mycore__DOT__mymem__DOT__mem__v0,23,0);
    VL_SIG(__Vdlyvdim0__v__DOT__mycore__DOT__mymem__DOT__mem__v1,23,0);
    VL_SIG(__Vdlyvdim0__v__DOT__mycore__DOT__mymem__DOT__mem__v2,23,0);
    VL_SIG(__Vdlyvdim0__v__DOT__mycore__DOT__mymem__DOT__mem__v3,23,0);
    VL_SIG(__Vdlyvdim0__v__DOT__mycore__DOT__mymem__DOT__mem__v4,23,0);
    VL_SIG(__Vdlyvdim0__v__DOT__mycore__DOT__mymem__DOT__mem__v5,23,0);
    VL_SIG(__Vdlyvdim0__v__DOT__mycore__DOT__mymem__DOT__mem__v6,23,0);
    VL_SIG(__Vdlyvdim0__v__DOT__mycore__DOT__mymem__DOT__mem__v7,23,0);
    //char	__VpadToAlign92[4];
    VL_SIGW(__Vtemp2,95,0,3);
    //char	__VpadToAlign108[4];
    VL_SIGW(__Vtemp3,95,0,3);
    //char	__VpadToAlign124[4];
    VL_SIGW(__Vtemp4,95,0,3);
    //char	__VpadToAlign140[4];
    VL_SIGW(__Vtemp11,127,0,4);
    VL_SIGW(__Vtemp12,127,0,4);
    VL_SIGW(__Vtemp13,127,0,4);
    VL_SIG64(__Vdlyvval__v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs__v0,63,0);
    VL_SIG64(__Vdly__v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc,63,0);
    // Body
    __Vdly__v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie;
    __Vdlyvset__v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs__v0 = 0U;
    __Vdly__v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc;
    __Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v0 = 0U;
    __Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v1 = 0U;
    __Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v2 = 0U;
    __Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v3 = 0U;
    __Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v4 = 0U;
    __Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v5 = 0U;
    __Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v6 = 0U;
    __Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v7 = 0U;
    // ALWAYS at top.v:4383
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_is_csr 
	= ((~ (IData)(vlTOPp->reset)) & ((0U != (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_csr_op)) 
					 & (5U != (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_csr_op))));
    // ALWAYS at top.v:1728
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcycle 
	= ((IData)(vlTOPp->reset) ? VL_ULL(0) : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_17722);
    // ALWAYS at top.v:4535
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_reg_mem_exception 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_exception));
    // ALWAYS at top.v:4388
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1366 
	= ((~ (IData)(vlTOPp->reset)) & ((0x6fU != 
					  (0x7fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
					 & ((0x2067U 
					     != (0x707fU 
						 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
					    & ((3U 
						!= 
						(0x707fU 
						 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
					       & ((0x4003U 
						   != 
						   (0x707fU 
						    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
						  & ((0x3003U 
						      != 
						      (0x707fU 
						       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
						     & ((0x1003U 
							 != 
							 (0x707fU 
							  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
							& ((0x5003U 
							    != 
							    (0x707fU 
							     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
							   & ((0x2003U 
							       != 
							       (0x707fU 
								& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
							      & ((0x6003U 
								  != 
								  (0x707fU 
								   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
								 & ((0x37U 
								     != 
								     (0x7fU 
								      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
								    & ((0x17U 
									!= 
									(0x7fU 
									 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
								       & ((0x1033U 
									   != 
									   (0xfe00707fU 
									    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
									  & ((0x1013U 
									      != 
									      (0xfc00707fU 
									       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
									     & ((0x101bU 
										!= 
										(0xfc00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x103bU 
										!= 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x2033U 
										!= 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x2013U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x3013U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x3033U 
										!= 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x40005033U 
										!= 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x40005013U 
										!= 
										(0xfc00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x4000501bU 
										!= 
										(0xfc00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x4000503bU 
										!= 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x5033U 
										!= 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x5013U 
										!= 
										(0xfc00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x501bU 
										!= 
										(0xfc00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x503bU 
										!= 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x40000033U 
										!= 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x4000003bU 
										!= 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x4033U 
										!= 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x4013U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x6033U 
										!= 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x6013U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x33U 
										!= 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x13U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x1bU 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x3bU 
										!= 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x7033U 
										!= 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x7013U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x23U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x3023U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x1023U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x2023U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x63U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x5063U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x7063U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x4063U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x6063U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x1063U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x3073U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x7073U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x2073U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x6073U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x1073U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x5073U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x100073U 
										!= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
										& ((0x73U 
										!= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
										& ((0x10500073U 
										!= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
										& ((0x10200073U 
										!= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
										& ((0x30200073U 
										!= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
										& ((0xfU 
										!= 
										(0xf00fffffU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& (0x100fU 
										== vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    // ALWAYS at top.v:4520
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_rd_addr 
	= (0x1fU & ((IData)(vlTOPp->reset) ? 0U : (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
						   >> 7U)));
    // ALWAYS at top.v:4515
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_is_load 
	= ((~ (IData)(vlTOPp->reset)) & (((0x6fU != 
					   (0x7fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
					  & (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_667)) 
					 & (~ ((0x6fU 
						!= 
						(0x7fU 
						 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
					       & (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_889)))));
    // ALWAYS at top.v:4280
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_exe_branch 
	= ((IData)(vlTOPp->reset) ? 0U : ((0x6fU == 
					   (0x7fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
					   ? 7U : (
						   (0x2067U 
						    == 
						    (0x707fU 
						     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						    ? 8U
						    : 
						   ((3U 
						     == 
						     (0x707fU 
						      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						     ? 0U
						     : 
						    ((0x4003U 
						      == 
						      (0x707fU 
						       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						      ? 0U
						      : 
						     ((0x3003U 
						       == 
						       (0x707fU 
							& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						       ? 0U
						       : 
						      ((0x1003U 
							== 
							(0x707fU 
							 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						        ? 0U
						        : 
						       ((0x5003U 
							 == 
							 (0x707fU 
							  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							 ? 0U
							 : 
							((0x2003U 
							  == 
							  (0x707fU 
							   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							  ? 0U
							  : 
							 ((0x6003U 
							   == 
							   (0x707fU 
							    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							   ? 0U
							   : 
							  ((0x37U 
							    == 
							    (0x7fU 
							     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							    ? 0U
							    : 
							   ((0x17U 
							     == 
							     (0x7fU 
							      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							     ? 0U
							     : 
							    ((0x1033U 
							      == 
							      (0xfe00707fU 
							       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							      ? 0U
							      : 
							     ((0x1013U 
							       == 
							       (0xfc00707fU 
								& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							       ? 0U
							       : 
							      ((0x101bU 
								== 
								(0xfc00707fU 
								 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							        ? 0U
							        : 
							       ((0x103bU 
								 == 
								 (0xfe00707fU 
								  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								 ? 0U
								 : 
								((0x2033U 
								  == 
								  (0xfe00707fU 
								   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								  ? 0U
								  : 
								 ((0x2013U 
								   == 
								   (0x707fU 
								    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								   ? 0U
								   : 
								  ((0x3013U 
								    == 
								    (0x707fU 
								     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								    ? 0U
								    : 
								   ((0x3033U 
								     == 
								     (0xfe00707fU 
								      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								     ? 0U
								     : 
								    ((0x40005033U 
								      == 
								      (0xfe00707fU 
								       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								      ? 0U
								      : 
								     ((0x40005013U 
								       == 
								       (0xfc00707fU 
									& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								       ? 0U
								       : 
								      ((0x4000501bU 
									== 
									(0xfc00707fU 
									 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								        ? 0U
								        : 
								       ((0x4000503bU 
									 == 
									 (0xfe00707fU 
									  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									 ? 0U
									 : 
									((0x5033U 
									  == 
									  (0xfe00707fU 
									   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									  ? 0U
									  : 
									 ((0x5013U 
									   == 
									   (0xfc00707fU 
									    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									   ? 0U
									   : 
									  ((0x501bU 
									    == 
									    (0xfc00707fU 
									     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									    ? 0U
									    : 
									   ((0x503bU 
									     == 
									     (0xfe00707fU 
									      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									     ? 0U
									     : 
									    ((0x40000033U 
									      == 
									      (0xfe00707fU 
									       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									      ? 0U
									      : 
									     ((0x4000003bU 
									       == 
									       (0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									       ? 0U
									       : 
									      ((0x4033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									        ? 0U
									        : 
									       ((0x4013U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x6033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x6013U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x33U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x13U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x1bU 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x3bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x7033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x7013U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x23U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x3023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x1023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x2023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x63U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 1U
										 : 
										((0x5063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 5U
										 : 
										((0x7063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 6U
										 : 
										((0x4063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 3U
										 : 
										((0x6063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 4U
										 : 
										((0x1063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 2U
										 : 0U))))))))))))))))))))))))))))))))))))))))))))))))));
    // ALWAYS at top.v:1480
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mip_mti 
	= (1U & (~ (IData)(vlTOPp->reset)));
    // ALWAYS at top.v:2790
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_bim_ext = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir) {
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_bim_ext = VL_ULL(0);
	} else {
	    if (vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_bim_ext 
		    = ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)
		        ? VL_ULL(0) : ((0U != (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
				        ? VL_ULL(0)
				        : ((((0x80000000U 
					      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
					      ? VL_ULL(0x7ffffffffffff)
					      : VL_ULL(0)) 
					    << 0xdU) 
					   | (QData)((IData)(
							     ((0x1000U 
							       & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
								  >> 0x13U)) 
							      | ((0x800U 
								  & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
								     << 4U)) 
								 | ((0x7e0U 
								     & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
									>> 0x14U)) 
								    | (0x1eU 
								       & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
									  >> 7U))))))))));
	    }
	}
    }
    // ALWAYS at top.v:2821
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_jim_ext = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir) {
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_jim_ext = VL_ULL(0);
	} else {
	    if (vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_jim_ext 
		    = ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)
		        ? VL_ULL(0) : ((0U != (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
				        ? VL_ULL(0)
				        : ((((0x80000000U 
					      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
					      ? VL_ULL(0x7ffffffffff)
					      : VL_ULL(0)) 
					    << 0x15U) 
					   | (QData)((IData)(
							     ((0x100000U 
							       & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
								  >> 0xbU)) 
							      | ((0xff000U 
								  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
								 | ((0x800U 
								     & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
									>> 9U)) 
								    | (0x7feU 
								       & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
									  >> 0x14U))))))))));
	    }
	}
    }
    // ALWAYS at top.v:3126
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_ext_sel = 0U;
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir) {
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_ext_sel = 0U;
	} else {
	    if (vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_ext_sel 
		    = ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)
		        ? 0U : ((0U != (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
				 ? 0U : ((0x6fU == 
					  (0x7fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
					  ? 0U : ((0x2067U 
						   == 
						   (0x707fU 
						    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						   ? 0U
						   : 
						  ((3U 
						    == 
						    (0x707fU 
						     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						    ? 0U
						    : 
						   ((0x4003U 
						     == 
						     (0x707fU 
						      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						     ? 0U
						     : 
						    ((0x3003U 
						      == 
						      (0x707fU 
						       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						      ? 0U
						      : 
						     ((0x1003U 
						       == 
						       (0x707fU 
							& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						       ? 0U
						       : 
						      ((0x5003U 
							== 
							(0x707fU 
							 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						        ? 0U
						        : 
						       ((0x2003U 
							 == 
							 (0x707fU 
							  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							 ? 0U
							 : 
							((0x6003U 
							  == 
							  (0x707fU 
							   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							  ? 0U
							  : 
							 ((0x37U 
							   == 
							   (0x7fU 
							    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							   ? 0U
							   : 
							  ((0x17U 
							    == 
							    (0x7fU 
							     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							    ? 0U
							    : 
							   ((0x1033U 
							     == 
							     (0xfe00707fU 
							      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							     ? 0U
							     : 
							    ((0x1013U 
							      == 
							      (0xfc00707fU 
							       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							      ? 0U
							      : 
							     ((0x101bU 
							       == 
							       (0xfc00707fU 
								& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							       ? 5U
							       : 
							      ((0x103bU 
								== 
								(0xfe00707fU 
								 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							        ? 5U
							        : 
							       ((0x2033U 
								 == 
								 (0xfe00707fU 
								  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								 ? 0U
								 : 
								((0x2013U 
								  == 
								  (0x707fU 
								   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								  ? 0U
								  : 
								 ((0x3013U 
								   == 
								   (0x707fU 
								    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								   ? 0U
								   : 
								  ((0x3033U 
								    == 
								    (0xfe00707fU 
								     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								    ? 0U
								    : 
								   ((0x40005033U 
								     == 
								     (0xfe00707fU 
								      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								     ? 0U
								     : 
								    ((0x40005013U 
								      == 
								      (0xfc00707fU 
								       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								      ? 0U
								      : 
								     ((0x4000501bU 
								       == 
								       (0xfc00707fU 
									& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								       ? 5U
								       : 
								      ((0x4000503bU 
									== 
									(0xfe00707fU 
									 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								        ? 5U
								        : 
								       ((0x5033U 
									 == 
									 (0xfe00707fU 
									  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									 ? 0U
									 : 
									((0x5013U 
									  == 
									  (0xfc00707fU 
									   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									  ? 0U
									  : 
									 ((0x501bU 
									   == 
									   (0xfc00707fU 
									    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									   ? 5U
									   : 
									  ((0x503bU 
									    == 
									    (0xfe00707fU 
									     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									    ? 5U
									    : 
									   ((0x40000033U 
									     == 
									     (0xfe00707fU 
									      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									     ? 0U
									     : 
									    ((0x4000003bU 
									      == 
									      (0xfe00707fU 
									       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									      ? 5U
									      : 
									     ((0x4033U 
									       == 
									       (0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									       ? 0U
									       : 
									      ((0x4013U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									        ? 0U
									        : 
									       ((0x6033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x6013U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x33U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x13U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x1bU 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 5U
										 : 
										((0x3bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 5U
										 : 
										((0x7033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x7013U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x23U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x3023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x1023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x2023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x63U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x5063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x7063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x4063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x6063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x1063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x3073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x7073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x2073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x6073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x1073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x5073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x100073U 
										== vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
										 ? 0U
										 : 
										((0x73U 
										== vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
										 ? 0U
										 : 
										((0x10500073U 
										== vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
										 ? 0U
										 : 
										((0x10200073U 
										== vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
										 ? 0U
										 : 
										((0x30200073U 
										== vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
										 ? 0U
										 : 
										((0xfU 
										== 
										(0xf00fffffU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x100fU 
										== vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
										 ? 0U
										 : 
										((0x2000033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x2001033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x2002033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x2003033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x200003bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 5U
										 : 
										((0x2006033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x2007033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x200703bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 5U
										 : 
										((0x200603bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 5U
										 : 
										((0x2004033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x2005033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x200503bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 5U
										 : 
										((0x200403bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 5U
										 : 0U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
	    }
	}
    }
    // ALWAYS at top.v:4549
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_reg_mem_mem_valid 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_mem_valid));
    // ALWAYS at top.v:3061
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel = 0U;
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir) {
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel = 0U;
	} else {
	    if (vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel 
		    = ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)
		        ? 0U : ((0U != (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
				 ? 0U : ((0x6fU == 
					  (0x7fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
					  ? 0U : ((0x2067U 
						   == 
						   (0x707fU 
						    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						   ? 0U
						   : 
						  ((3U 
						    == 
						    (0x707fU 
						     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						    ? 0U
						    : 
						   ((0x4003U 
						     == 
						     (0x707fU 
						      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						     ? 0U
						     : 
						    ((0x3003U 
						      == 
						      (0x707fU 
						       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						      ? 0U
						      : 
						     ((0x1003U 
						       == 
						       (0x707fU 
							& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						       ? 0U
						       : 
						      ((0x5003U 
							== 
							(0x707fU 
							 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						        ? 0U
						        : 
						       ((0x2003U 
							 == 
							 (0x707fU 
							  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							 ? 0U
							 : 
							((0x6003U 
							  == 
							  (0x707fU 
							   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							  ? 0U
							  : 
							 ((0x37U 
							   == 
							   (0x7fU 
							    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							   ? 0xcU
							   : 
							  ((0x17U 
							    == 
							    (0x7fU 
							     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							    ? 0U
							    : 
							   ((0x1033U 
							     == 
							     (0xfe00707fU 
							      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							     ? 5U
							     : 
							    ((0x1013U 
							      == 
							      (0xfc00707fU 
							       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							      ? 5U
							      : 
							     ((0x101bU 
							       == 
							       (0xfc00707fU 
								& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							       ? 5U
							       : 
							      ((0x103bU 
								== 
								(0xfe00707fU 
								 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							        ? 5U
							        : 
							       ((0x2033U 
								 == 
								 (0xfe00707fU 
								  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								 ? 6U
								 : 
								((0x2013U 
								  == 
								  (0x707fU 
								   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								  ? 6U
								  : 
								 ((0x3013U 
								   == 
								   (0x707fU 
								    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								   ? 7U
								   : 
								  ((0x3033U 
								    == 
								    (0xfe00707fU 
								     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								    ? 7U
								    : 
								   ((0x40005033U 
								     == 
								     (0xfe00707fU 
								      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								     ? 8U
								     : 
								    ((0x40005013U 
								      == 
								      (0xfc00707fU 
								       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								      ? 8U
								      : 
								     ((0x4000501bU 
								       == 
								       (0xfc00707fU 
									& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								       ? 9U
								       : 
								      ((0x4000503bU 
									== 
									(0xfe00707fU 
									 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								        ? 9U
								        : 
								       ((0x5033U 
									 == 
									 (0xfe00707fU 
									  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									 ? 0xaU
									 : 
									((0x5013U 
									  == 
									  (0xfc00707fU 
									   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									  ? 0xaU
									  : 
									 ((0x501bU 
									   == 
									   (0xfc00707fU 
									    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									   ? 0xbU
									   : 
									  ((0x503bU 
									    == 
									    (0xfe00707fU 
									     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									    ? 0xbU
									    : 
									   ((0x40000033U 
									     == 
									     (0xfe00707fU 
									      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									     ? 1U
									     : 
									    ((0x4000003bU 
									      == 
									      (0xfe00707fU 
									       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									      ? 1U
									      : 
									     ((0x4033U 
									       == 
									       (0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									       ? 4U
									       : 
									      ((0x4013U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									        ? 4U
									        : 
									       ((0x6033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 3U
										 : 
										((0x6013U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 3U
										 : 
										((0x33U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x13U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x1bU 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x3bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x7033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 2U
										 : 
										((0x7013U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 2U
										 : 
										((0x23U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x3023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x1023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x2023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x63U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x5063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x7063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x4063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x6063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x1063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x3073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0xcU
										 : 
										((0x7073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0xcU
										 : 
										((0x2073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0xcU
										 : 
										((0x6073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0xcU
										 : 
										((0x1073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0xcU
										 : 
										((0x5073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0xcU
										 : 
										((0x100073U 
										== vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
										 ? 0U
										 : 
										((0x73U 
										== vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
										 ? 0U
										 : 
										((0x10500073U 
										== vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
										 ? 0U
										 : 
										((0x10200073U 
										== vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
										 ? 0U
										 : 
										((0x30200073U 
										== vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
										 ? 0U
										 : 
										((0xfU 
										== 
										(0xf00fffffU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x100fU 
										== vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
										 ? 0U
										 : 
										((0x2000033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0xdU
										 : 
										((0x2001033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0xeU
										 : 
										((0x2002033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0xfU
										 : 
										((0x2003033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0x10U
										 : 
										((0x200003bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0xdU
										 : 
										((0x2006033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0x11U
										 : 
										((0x2007033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0x12U
										 : 
										((0x200703bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0x13U
										 : 
										((0x200603bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0x14U
										 : 
										((0x2004033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0x15U
										 : 
										((0x2005033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0x16U
										 : 
										((0x200503bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0x17U
										 : 
										((0x200403bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0x18U
										 : 0U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
	    }
	}
    }
    // ALWAYS at top.v:3206
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_read_op = 0U;
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir) {
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_read_op = 0U;
	} else {
	    if (vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_read_op 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_read_op;
	    }
	}
    }
    // ALWAYS at top.v:1514
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp = 0U;
    } else {
	if ((1U & (~ (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_ismret)))) {
	    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasinterrupt) {
		if ((1U & (~ (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_ismret)))) {
		    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp = 3U;
		}
	    } else {
		if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasexception) {
		    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_illegal_ins_exception) {
			if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_illegal_ins_exception) {
			    if ((1U & (~ (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_ismret)))) {
				vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp = 3U;
			    }
			} else {
			    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall) {
				if ((1U & (~ (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_ismret)))) {
				    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp = 3U;
				}
			    } else {
				if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak) {
				    if ((1U & (~ (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_ismret)))) {
					vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp = 3U;
				    }
				}
			    }
			}
		    } else {
			if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall) {
			    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_illegal_ins_exception) {
				vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp 
				    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__prv_now;
			    } else {
				if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall) {
				    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp 
					= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__prv_now;
				} else {
				    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak) {
					vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp 
					    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__prv_now;
				    }
				}
			    }
			} else {
			    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak) {
				if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_illegal_ins_exception) {
				    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp 
					= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__prv_now;
				} else {
				    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall) {
					vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp 
					    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__prv_now;
				    } else {
					if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak) {
					    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp 
						= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__prv_now;
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at top.v:3247
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_instr 
	= ((IData)(vlTOPp->reset) ? 0x4033U : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr);
    // ALWAYS at top.v:1458
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mie_msi = 0U;
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x304U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mie_msi 
		    = (1U & (IData)((vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data 
				     >> 8U)));
	    }
	}
    }
    // ALWAYS at top.v:1472
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mip_msi = 0U;
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x344U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mip_msi 
		    = (1U & (IData)((vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data 
				     >> 8U)));
	    }
	}
    }
    // ALWAYS at top.v:1601
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_pmpcfg0 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x3a0U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_pmpcfg0 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1608
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_pmpcfg1 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x3a1U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_pmpcfg1 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1615
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_0 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x3b0U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_0 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1622
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_1 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x3b1U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_1 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1629
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_2 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x3b2U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_2 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1636
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_3 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x3b3U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_3 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1643
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_4 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x3b4U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_4 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1650
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_5 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x3b5U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_5 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1657
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_6 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x3b6U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_6 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1664
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_7 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x3b7U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_7 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1671
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_8 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x3b8U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_8 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1678
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_9 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x3b9U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_9 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1685
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_10 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x3baU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_10 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1692
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_11 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x3bbU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_11 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1699
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_12 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x3bcU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_12 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1706
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_13 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x3bdU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_13 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1713
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_14 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x3beU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_14 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1720
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_15 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x3bfU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_15 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1741
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_0 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb03U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_0 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1748
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_1 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb04U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_1 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1755
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_2 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb05U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_2 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1762
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_3 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb06U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_3 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1769
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_4 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb07U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_4 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1776
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_5 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb08U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_5 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1783
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_6 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb09U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_6 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1790
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_7 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb0aU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_7 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1797
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_8 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb0bU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_8 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1804
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_9 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb0cU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_9 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1811
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_10 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb0dU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_10 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1818
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_11 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb0eU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_11 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1825
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_12 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb0fU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_12 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1832
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_13 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb10U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_13 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1839
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_14 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb11U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_14 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1846
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_15 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb12U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_15 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1853
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_16 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb13U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_16 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1860
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_17 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb14U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_17 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1867
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_18 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb15U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_18 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1874
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_19 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb16U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_19 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1881
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_20 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb17U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_20 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1888
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_21 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb18U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_21 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1895
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_22 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb19U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_22 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1902
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_23 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb1aU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_23 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1909
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_24 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb1bU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_24 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1916
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_25 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb1cU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_25 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1923
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_26 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb1dU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_26 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1930
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_27 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb1eU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_27 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1937
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_28 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb1fU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_28 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1944
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcounterinhibit = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x320U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcounterinhibit 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1951
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_0 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x323U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_0 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1958
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_1 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x324U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_1 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1965
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_2 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x325U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_2 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1972
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_3 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x326U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_3 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1979
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_4 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x327U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_4 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1986
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_5 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x328U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_5 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1993
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_6 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x329U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_6 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:2000
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_7 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x32aU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_7 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:2007
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_8 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x32bU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_8 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:2014
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_9 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x32cU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_9 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:2021
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_10 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x32dU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_10 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:2028
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_11 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x32eU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_11 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:2035
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_12 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x32fU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_12 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:2042
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_13 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x330U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_13 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:2049
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_14 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x331U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_14 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:2056
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_15 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x332U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_15 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:2063
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_16 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x333U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_16 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:2070
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_17 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x334U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_17 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:2077
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_18 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x335U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_18 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:2084
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_19 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x336U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_19 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:2091
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_20 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x337U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_20 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:2098
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_21 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x338U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_21 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:2105
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_22 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x339U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_22 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:2112
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_23 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x33aU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_23 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:2119
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_24 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x33bU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_24 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:2126
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_25 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x33cU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_25 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:2133
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_26 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x33dU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_26 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:2140
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_27 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x33eU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_27 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:2147
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_28 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x33fU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_28 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1465
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mie_mti = 0U;
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x304U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mie_mti 
		    = (1U & (IData)((vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data 
				     >> 4U)));
	    }
	}
    }
    // ALWAYS at top.v:1732
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_minstret = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_instr_valid) {
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_minstret 
		= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_17724;
	} else {
	    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
		if ((0xb02U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					  >> 0x14U)))) {
		    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_minstret 
			= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
		}
	    }
	}
    }
    // ALWAYS at top.v:1560
    if (vlTOPp->reset) {
	__Vdly__v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie = 0U;
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_ismret) {
	    __Vdly__v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie 
		= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie;
	} else {
	    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasinterrupt) {
		__Vdly__v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie = 0U;
	    } else {
		if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasexception) {
		    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_illegal_ins_exception) {
			if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_illegal_ins_exception) {
			    __Vdly__v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie = 0U;
			} else {
			    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall) {
				__Vdly__v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie = 0U;
			    } else {
				if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak) {
				    __Vdly__v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie = 0U;
				}
			    }
			}
		    } else {
			if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall) {
			    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_illegal_ins_exception) {
				__Vdly__v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie = 0U;
			    } else {
				if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall) {
				    __Vdly__v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie = 0U;
				} else {
				    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak) {
					__Vdly__v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie = 0U;
				    }
				}
			    }
			} else {
			    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak) {
				if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_illegal_ins_exception) {
				    __Vdly__v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie = 0U;
				} else {
				    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall) {
					__Vdly__v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie = 0U;
				    } else {
					if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak) {
					    __Vdly__v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie = 0U;
					}
				    }
				}
			    } else {
				if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
				    if ((0x300U == 
					 (0xfffU & 
					  (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					   >> 0x14U)))) {
					__Vdly__v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie 
					    = (1U & (IData)(
							    (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data 
							     >> 3U)));
				    }
				}
			    }
			}
		    }
		} else {
		    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
			if ((0x300U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						  >> 0x14U)))) {
			    __Vdly__v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie 
				= (1U & (IData)((vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data 
						 >> 3U)));
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at top.v:1497
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mscratch = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x340U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mscratch 
		    = ((2U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op))
		        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out
		        : ((4U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op))
			    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9477
			    : ((3U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op))
			        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9480
			        : ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_enable)
				    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9473
				    : VL_ULL(0)))));
	    }
	}
    }
    // ALWAYS at top.v:1417
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcause = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasinterrupt) {
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcause = VL_ULL(0x8000000000000007);
	} else {
	    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasexception) {
		if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_illegal_ins_exception) {
		    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcause = VL_ULL(2);
		} else {
		    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall) {
			vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcause = VL_ULL(0xb);
		    } else {
			if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak) {
			    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcause = VL_ULL(3);
			} else {
			    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
				if ((0x342U == (0xfffU 
						& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						   >> 0x14U)))) {
				    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcause 
					= ((2U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op))
					    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out
					    : ((4U 
						== (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op))
					        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9477
					        : (
						   (3U 
						    == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op))
						    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9480
						    : 
						   ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_enable)
						     ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9473
						     : VL_ULL(0)))));
				}
			    }
			}
		    }
		}
	    } else {
		if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
		    if ((0x342U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					      >> 0x14U)))) {
			vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcause 
			    = ((2U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op))
			        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out
			        : ((4U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op))
				    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9477
				    : ((3U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op))
				        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9480
				        : ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_enable)
					    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9473
					    : VL_ULL(0)))));
		    }
		}
	    }
	}
    }
    // ALWAYS at top.v:3242
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_pc 
	= ((IData)(vlTOPp->reset) ? VL_ULL(0x80000000)
	    : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_pc);
    // ALWAYS at top.v:305
    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_rf_wen) {
	__Vdlyvval__v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs__v0 
	    = ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_rd_addr))
	        ? VL_ULL(0) : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_wb_data);
	__Vdlyvset__v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs__v0 = 1U;
	__Vdlyvdim0__v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs__v0 
	    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_rd_addr;
    }
    // ALWAYS at top.v:1484
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtval = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasinterrupt) {
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtval 
		= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_pc;
	} else {
	    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasexception) {
		if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_illegal_ins_exception) {
		    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtval 
			= (QData)((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr));
		} else {
		    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall) {
			vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtval 
			    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_pc;
		    } else {
			if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak) {
			    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtval 
				= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_pc;
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at top.v:1396
    if (vlTOPp->reset) {
	__Vdly__v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasinterrupt) {
	    __Vdly__v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc 
		= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_pc;
	} else {
	    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasexception) {
		if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_illegal_ins_exception) {
		    __Vdly__v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc 
			= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_pc;
		} else {
		    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall) {
			__Vdly__v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc 
			    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_pc;
		    } else {
			if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak) {
			    __Vdly__v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc 
				= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_pc;
			} else {
			    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
				if ((0x341U == (0xfffU 
						& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						   >> 0x14U)))) {
				    __Vdly__v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc 
					= (VL_ULL(0xfffffffffffffffc) 
					   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data);
				}
			    }
			}
		    }
		}
	    } else {
		if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
		    if ((0x341U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					      >> 0x14U)))) {
			__Vdly__v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc 
			    = (VL_ULL(0xfffffffffffffffc) 
			       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data);
		    }
		}
	    }
	}
    }
    // ALWAYS at top.v:2925
    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379) {
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
		= ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)
		    ? VL_ULL(0) : ((0U != (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
				    ? VL_ULL(0) : (
						   (1U 
						    == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op1_sel))
						    ? (QData)((IData)(
								      (0x1fU 
								       & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
									  >> 0xfU))))
						    : 
						   ((2U 
						     == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op1_sel))
						     ? 
						    (((QData)((IData)(
								      ((0x80000000U 
									& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
								        ? 0xffffffffU
								        : 0U))) 
						      << 0x20U) 
						     | (QData)((IData)(
								       (0xfffff000U 
									& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))))
						     : 
						    (((((0x1fU 
							 & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
							    >> 0xfU)) 
							== (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rd_addr)) 
						       & (0U 
							  != 
							  (0x1fU 
							   & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
							      >> 0xfU)))) 
						      & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rf_wen))
						      ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res
						      : 
						     (((((0x1fU 
							  & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
							     >> 0xfU)) 
							 == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rd_addr)) 
							& (0U 
							   != 
							   (0x1fU 
							    & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
							       >> 0xfU)))) 
						       & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rf_wen))
						       ? 
						      ((0U 
							== (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_wb_sel))
						        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out
						        : 
						       ((1U 
							 == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_wb_sel))
							 ? vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_1_resp_bits_rdata
							 : 
							((2U 
							  == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_wb_sel))
							  ? 
							 (VL_ULL(4) 
							  + vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_pc)
							  : 
							 ((3U 
							   == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_wb_sel))
							   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_data
							   : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out))))
						       : 
						      (((((0x1fU 
							   & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
							      >> 0xfU)) 
							  == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_rd_addr)) 
							 & (0U 
							    != 
							    (0x1fU 
							     & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
								>> 0xfU)))) 
							& (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_rf_wen))
						        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_wb_data
						        : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp1_data)))))));
	}
    }
    // ALWAYS at top.v:2956
    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379) {
	    VL_EXTEND_WQ(66,64, __Vtemp2, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp2_data);
	    VL_EXTEND_WQ(66,64, __Vtemp3, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_pc);
	    VL_EXTEND_WQ(66,64, __Vtemp4, ((3U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))
					    ? ((((0x80000000U 
						  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
						  ? VL_ULL(0xfffffffffffff)
						  : VL_ULL(0)) 
						<< 0xcU) 
					       | (QData)((IData)(
								 ((0xfe0U 
								   & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
								      >> 0x14U)) 
								  | (0x1fU 
								     & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
									>> 7U))))))
					    : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp2_data));
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source 
		= ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)
		    ? VL_ULL(0) : ((0U != (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
				    ? VL_ULL(0) : (
						   ((((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_75) 
						      & (0U 
							 == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))) 
						     & (0U 
							!= 
							(0x1fU 
							 & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
							    >> 0x14U)))) 
						    & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rf_wen))
						    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res
						    : 
						   (((((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_81) 
						       & (0U 
							  == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))) 
						      & (0U 
							 != 
							 (0x1fU 
							  & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
							     >> 0x14U)))) 
						     & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rf_wen))
						     ? 
						    ((0U 
						      == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_wb_sel))
						      ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out
						      : 
						     ((1U 
						       == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_wb_sel))
						       ? vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_1_resp_bits_rdata
						       : 
						      ((2U 
							== (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_wb_sel))
						        ? 
						       (VL_ULL(4) 
							+ vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_pc)
						        : 
						       ((3U 
							 == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_wb_sel))
							 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_data
							 : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out))))
						     : 
						    (((((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_87) 
							& (0U 
							   == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))) 
						       & (0U 
							  != 
							  (0x1fU 
							   & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
							      >> 0x14U)))) 
						      & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_rf_wen))
						      ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_wb_data
						      : 
						     (((QData)((IData)(
								       ((0U 
									 == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))
									 ? 
									__Vtemp2[1U]
									 : 
									((1U 
									  == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))
									  ? 
									 __Vtemp3[1U]
									  : 
									 ((2U 
									   == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))
									   ? 
									  vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_dec_iim_ext[1U]
									   : 
									  __Vtemp4[1U]))))) 
						       << 0x20U) 
						      | (QData)((IData)(
									((0U 
									  == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))
									  ? 
									 __Vtemp2[0U]
									  : 
									 ((1U 
									   == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))
									   ? 
									  __Vtemp3[0U]
									   : 
									  ((2U 
									    == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))
									    ? 
									   vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_dec_iim_ext[0U]
									    : 
									   __Vtemp4[0U])))))))))));
	}
    }
    // ALWAYS at top.v:4866
    if (((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_en) 
	 & ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_wen) 
	    & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_write_mask)))) {
	__Vdlyvval__v__DOT__mycore__DOT__mymem__DOT__mem__v0 
	    = (0xffU & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rs2_data));
	__Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v0 = 1U;
	__Vdlyvdim0__v__DOT__mycore__DOT__mymem__DOT__mem__v0 
	    = (0xffffffU & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out));
    }
    if (((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_en) 
	 & ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_wen) 
	    & ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_write_mask) 
	       >> 1U)))) {
	__Vdlyvval__v__DOT__mycore__DOT__mymem__DOT__mem__v1 
	    = (0xffU & (IData)((vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rs2_data 
				>> 8U)));
	__Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v1 = 1U;
	__Vdlyvdim0__v__DOT__mycore__DOT__mymem__DOT__mem__v1 
	    = (0xffffffU & ((IData)(1U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out)));
    }
    if (((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_en) 
	 & ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_wen) 
	    & ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_write_mask) 
	       >> 2U)))) {
	__Vdlyvval__v__DOT__mycore__DOT__mymem__DOT__mem__v2 
	    = (0xffU & (IData)((vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rs2_data 
				>> 0x10U)));
	__Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v2 = 1U;
	__Vdlyvdim0__v__DOT__mycore__DOT__mymem__DOT__mem__v2 
	    = (0xffffffU & ((IData)(2U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out)));
    }
    if (((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_en) 
	 & ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_wen) 
	    & ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_write_mask) 
	       >> 3U)))) {
	__Vdlyvval__v__DOT__mycore__DOT__mymem__DOT__mem__v3 
	    = (0xffU & (IData)((vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rs2_data 
				>> 0x18U)));
	__Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v3 = 1U;
	__Vdlyvdim0__v__DOT__mycore__DOT__mymem__DOT__mem__v3 
	    = (0xffffffU & ((IData)(3U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out)));
    }
    if (((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_en) 
	 & ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_wen) 
	    & ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_write_mask) 
	       >> 4U)))) {
	__Vdlyvval__v__DOT__mycore__DOT__mymem__DOT__mem__v4 
	    = (0xffU & (IData)((vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rs2_data 
				>> 0x20U)));
	__Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v4 = 1U;
	__Vdlyvdim0__v__DOT__mycore__DOT__mymem__DOT__mem__v4 
	    = (0xffffffU & ((IData)(4U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out)));
    }
    if (((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_en) 
	 & ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_wen) 
	    & ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_write_mask) 
	       >> 5U)))) {
	__Vdlyvval__v__DOT__mycore__DOT__mymem__DOT__mem__v5 
	    = (0xffU & (IData)((vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rs2_data 
				>> 0x28U)));
	__Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v5 = 1U;
	__Vdlyvdim0__v__DOT__mycore__DOT__mymem__DOT__mem__v5 
	    = (0xffffffU & ((IData)(5U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out)));
    }
    if (((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_en) 
	 & ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_wen) 
	    & ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_write_mask) 
	       >> 6U)))) {
	__Vdlyvval__v__DOT__mycore__DOT__mymem__DOT__mem__v6 
	    = (0xffU & (IData)((vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rs2_data 
				>> 0x30U)));
	__Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v6 = 1U;
	__Vdlyvdim0__v__DOT__mycore__DOT__mymem__DOT__mem__v6 
	    = (0xffffffU & ((IData)(6U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out)));
    }
    if (((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_en) 
	 & ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_wen) 
	    & ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_write_mask) 
	       >> 7U)))) {
	__Vdlyvval__v__DOT__mycore__DOT__mymem__DOT__mem__v7 
	    = (0xffU & (IData)((vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rs2_data 
				>> 0x38U)));
	__Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v7 = 1U;
	__Vdlyvdim0__v__DOT__mycore__DOT__mymem__DOT__mem__v7 
	    = (0xffffffU & ((IData)(7U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out)));
    }
    // ALWAYSPOST at top.v:307
    if (__Vdlyvset__v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs__v0) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs[__Vdlyvdim0__v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs__v0] 
	    = __Vdlyvval__v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs__v0;
    }
    // ALWAYSPOST at top.v:4892
    if (__Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v0) {
	vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem[__Vdlyvdim0__v__DOT__mycore__DOT__mymem__DOT__mem__v0] 
	    = __Vdlyvval__v__DOT__mycore__DOT__mymem__DOT__mem__v0;
    }
    if (__Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v1) {
	vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem[__Vdlyvdim0__v__DOT__mycore__DOT__mymem__DOT__mem__v1] 
	    = __Vdlyvval__v__DOT__mycore__DOT__mymem__DOT__mem__v1;
    }
    if (__Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v2) {
	vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem[__Vdlyvdim0__v__DOT__mycore__DOT__mymem__DOT__mem__v2] 
	    = __Vdlyvval__v__DOT__mycore__DOT__mymem__DOT__mem__v2;
    }
    if (__Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v3) {
	vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem[__Vdlyvdim0__v__DOT__mycore__DOT__mymem__DOT__mem__v3] 
	    = __Vdlyvval__v__DOT__mycore__DOT__mymem__DOT__mem__v3;
    }
    if (__Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v4) {
	vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem[__Vdlyvdim0__v__DOT__mycore__DOT__mymem__DOT__mem__v4] 
	    = __Vdlyvval__v__DOT__mycore__DOT__mymem__DOT__mem__v4;
    }
    if (__Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v5) {
	vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem[__Vdlyvdim0__v__DOT__mycore__DOT__mymem__DOT__mem__v5] 
	    = __Vdlyvval__v__DOT__mycore__DOT__mymem__DOT__mem__v5;
    }
    if (__Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v6) {
	vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem[__Vdlyvdim0__v__DOT__mycore__DOT__mymem__DOT__mem__v6] 
	    = __Vdlyvval__v__DOT__mycore__DOT__mymem__DOT__mem__v6;
    }
    if (__Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v7) {
	vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem[__Vdlyvdim0__v__DOT__mycore__DOT__mymem__DOT__mem__v7] 
	    = __Vdlyvval__v__DOT__mycore__DOT__mymem__DOT__mem__v7;
    }
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_17722 
	= (VL_ULL(1) + vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcycle);
    // ALWAYS at top.v:4530
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_exception 
	= ((~ (IData)(vlTOPp->reset)) & ((~ (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_valid_inst)) 
					 & (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1376)));
    // ALWAYS at top.v:4540
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_mem_valid 
	= ((~ (IData)(vlTOPp->reset)) & ((0x6fU != 
					  (0x7fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
					 & ((0x2067U 
					     != (0x707fU 
						 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
					    & (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_666))));
    // ALWAYS at top.v:3087
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_read_op = 0U;
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir) {
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_read_op = 0U;
	} else {
	    if (vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_read_op 
		    = ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)
		        ? 0U : ((0U != (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
				 ? 0U : ((0x6fU == 
					  (0x7fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
					  ? 0U : ((0x2067U 
						   == 
						   (0x707fU 
						    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						   ? 0U
						   : 
						  ((3U 
						    == 
						    (0x707fU 
						     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						    ? 0U
						    : 
						   ((0x4003U 
						     == 
						     (0x707fU 
						      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						     ? 1U
						     : 
						    ((0x3003U 
						      == 
						      (0x707fU 
						       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						      ? 6U
						      : 
						     ((0x1003U 
						       == 
						       (0x707fU 
							& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						       ? 2U
						       : 
						      ((0x5003U 
							== 
							(0x707fU 
							 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						        ? 3U
						        : 
						       ((0x2003U 
							 == 
							 (0x707fU 
							  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							 ? 4U
							 : 
							((0x6003U 
							  == 
							  (0x707fU 
							   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							  ? 5U
							  : 0U)))))))))));
	    }
	}
    }
    vlTOPp->io_diff_instr_in_wb = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_instr;
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_17724 
	= (VL_ULL(1) + vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_minstret);
    // ALWAYS at top.v:3235
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_instr_valid 
	= ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379) 
					 & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr_valid)));
    // ALWAYS at top.v:1556
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie 
	= ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_ismret) 
					 | ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasinterrupt)
					     ? (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie)
					     : ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasexception)
						 ? 
						((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_illegal_ins_exception)
						  ? (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___GEN_241)
						  : 
						 ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall)
						   ? (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___GEN_241)
						   : 
						  ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak)
						    ? (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___GEN_241)
						    : (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___GEN_92))))
						 : (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___GEN_92)))));
    vlTOPp->io_diff_pc_data = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_pc;
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_9_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_10_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[1U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_11_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[2U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_12_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[3U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_13_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[4U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_14_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[5U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_15_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[6U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_16_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[7U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_17_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[8U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_18_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[9U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_19_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0xaU];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_20_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0xbU];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_21_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0xcU];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_22_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0xdU];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_23_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0xeU];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_24_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0xfU];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_25_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0x10U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_26_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0x11U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_27_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0x12U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_28_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0x13U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_29_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0x14U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_30_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0x15U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_31_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0x16U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_32_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0x17U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_33_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0x18U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_34_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0x19U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_35_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0x1aU];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_36_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0x1bU];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_37_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0x1cU];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_38_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0x1dU];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_39_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0x1eU];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_40_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0x1fU];
    // ALWAYS at top.v:2892
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_rd_addr 
	= ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379)
					   ? (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rd_addr)
					   : 0U));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__add_res 
	= (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
	   + vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source);
    VL_EXTENDS_WQ(128,64, __Vtemp11, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source);
    VL_EXTENDS_WQ(128,64, __Vtemp12, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source);
    VL_MULS_WWW(128,128,128, __Vtemp13, __Vtemp11, __Vtemp12);
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[0U] 
	= __Vtemp13[0U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[1U] 
	= __Vtemp13[1U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[2U] 
	= __Vtemp13[2U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[3U] 
	= __Vtemp13[3U];
    vlTOPp->v__DOT__mycore__DOT__dpath_io_d2c_islt 
	= VL_LTS_IQQ(1,64,64, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source);
    vlTOPp->v__DOT__mycore__DOT__dpath_io_d2c_isltu 
	= (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
	   < vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source);
    vlTOPp->v__DOT__mycore__DOT__dpath_io_d2c_iseq 
	= (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
	   == vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source);
    // ALWAYS at top.v:3213
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_write_mask = 0U;
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir) {
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_write_mask = 0U;
	} else {
	    if (vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_write_mask 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_write_mask;
	    }
	}
    }
    // ALWAYS at top.v:3220
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_wen = 0U;
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir) {
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_wen = 0U;
	} else {
	    if (vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_wen 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_wen;
	    }
	}
    }
    // ALWAYS at top.v:3199
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_en = 0U;
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir) {
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_en = 0U;
	} else {
	    if (vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_en 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_en;
	    }
	}
    }
    // ALWAYS at top.v:3192
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rs2_data = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir) {
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rs2_data = VL_ULL(0);
	} else {
	    if (vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rs2_data 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rs2_data;
	    }
	}
    }
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie 
	= __Vdly__v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie;
    // ALWAYS at top.v:4525
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1376 
	= (1U & (~ (IData)(vlTOPp->reset)));
    vlTOPp->io_diff_is_retire = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_instr_valid;
    // ALWAYS at top.v:3185
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr_valid = 0U;
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir) {
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr_valid = 0U;
	} else {
	    if (vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr_valid 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_instr_valid;
	    }
	}
    }
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasinterrupt 
	= (((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mip_mti) 
	    & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mie_mti)) 
	   & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_28 
	= (((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie) 
	    << 7U) | ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie) 
		      << 3U));
    // ALWAYS at top.v:2884
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rd_addr = 0U;
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir) {
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rd_addr = 0U;
	} else {
	    if (vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rd_addr 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rd_addr;
	    }
	}
    }
    // ALWAYS at top.v:3100
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_write_mask = 0U;
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir) {
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_write_mask = 0U;
	} else {
	    if (vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_write_mask 
		    = ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)
		        ? 0U : ((0U != (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
				 ? 0U : ((0x6fU == 
					  (0x7fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
					  ? 1U : ((0x2067U 
						   == 
						   (0x707fU 
						    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						   ? 1U
						   : 
						  ((3U 
						    == 
						    (0x707fU 
						     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						    ? 1U
						    : 
						   ((0x4003U 
						     == 
						     (0x707fU 
						      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						     ? 1U
						     : 
						    ((0x3003U 
						      == 
						      (0x707fU 
						       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						      ? 1U
						      : 
						     ((0x1003U 
						       == 
						       (0x707fU 
							& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						       ? 1U
						       : 
						      ((0x5003U 
							== 
							(0x707fU 
							 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						        ? 1U
						        : 
						       ((0x2003U 
							 == 
							 (0x707fU 
							  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							 ? 1U
							 : 
							((0x6003U 
							  == 
							  (0x707fU 
							   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							  ? 1U
							  : 
							 ((0x37U 
							   == 
							   (0x7fU 
							    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							   ? 1U
							   : 
							  ((0x17U 
							    == 
							    (0x7fU 
							     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							    ? 1U
							    : 
							   ((0x1033U 
							     == 
							     (0xfe00707fU 
							      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							     ? 1U
							     : 
							    ((0x1013U 
							      == 
							      (0xfc00707fU 
							       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							      ? 1U
							      : 
							     ((0x101bU 
							       == 
							       (0xfc00707fU 
								& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							       ? 1U
							       : 
							      ((0x103bU 
								== 
								(0xfe00707fU 
								 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							        ? 1U
							        : 
							       ((0x2033U 
								 == 
								 (0xfe00707fU 
								  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								 ? 1U
								 : 
								((0x2013U 
								  == 
								  (0x707fU 
								   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								  ? 1U
								  : 
								 ((0x3013U 
								   == 
								   (0x707fU 
								    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								   ? 1U
								   : 
								  ((0x3033U 
								    == 
								    (0xfe00707fU 
								     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								    ? 1U
								    : 
								   ((0x40005033U 
								     == 
								     (0xfe00707fU 
								      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								     ? 1U
								     : 
								    ((0x40005013U 
								      == 
								      (0xfc00707fU 
								       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								      ? 1U
								      : 
								     ((0x4000501bU 
								       == 
								       (0xfc00707fU 
									& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								       ? 1U
								       : 
								      ((0x4000503bU 
									== 
									(0xfe00707fU 
									 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								        ? 1U
								        : 
								       ((0x5033U 
									 == 
									 (0xfe00707fU 
									  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									 ? 1U
									 : 
									((0x5013U 
									  == 
									  (0xfc00707fU 
									   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									  ? 1U
									  : 
									 ((0x501bU 
									   == 
									   (0xfc00707fU 
									    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									   ? 1U
									   : 
									  ((0x503bU 
									    == 
									    (0xfe00707fU 
									     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									    ? 1U
									    : 
									   ((0x40000033U 
									     == 
									     (0xfe00707fU 
									      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									     ? 1U
									     : 
									    ((0x4000003bU 
									      == 
									      (0xfe00707fU 
									       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									      ? 1U
									      : 
									     ((0x4033U 
									       == 
									       (0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									       ? 1U
									       : 
									      ((0x4013U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									        ? 1U
									        : 
									       ((0x6033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 1U
										 : 
										((0x6013U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 1U
										 : 
										((0x33U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 1U
										 : 
										((0x13U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 1U
										 : 
										((0x1bU 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 1U
										 : 
										((0x3bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 1U
										 : 
										((0x7033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 1U
										 : 
										((0x7013U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 1U
										 : 
										((0x23U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 1U
										 : 
										((0x3023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0xffU
										 : 
										((0x1023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 3U
										 : 
										((0x2023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0xfU
										 : 1U)))))))))))))))))))))))))))))))))))))))))))));
	    }
	}
    }
    // ALWAYS at top.v:3113
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_wen = 0U;
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir) {
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_wen = 0U;
	} else {
	    if (vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_wen 
		    = ((~ (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)) 
		       & ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel)) 
			  & ((0x6fU != (0x7fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
			     & (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_889))));
	    }
	}
    }
    // ALWAYS at top.v:3074
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_en = 0U;
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir) {
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_en = 0U;
	} else {
	    if (vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_en 
		    = ((~ (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)) 
		       & ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel)) 
			  & ((0x6fU != (0x7fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
			     & (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_667))));
	    }
	}
    }
    // ALWAYS at top.v:3032
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rs2_data = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir) {
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rs2_data = VL_ULL(0);
	} else {
	    if (vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rs2_data 
		    = ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)
		        ? VL_ULL(0) : ((0U != (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
				        ? VL_ULL(0)
				        : ((((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_75) 
					     & (0U 
						!= 
						(0x1fU 
						 & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
						    >> 0x14U)))) 
					    & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rf_wen))
					    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res
					    : ((((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_81) 
						 & (0U 
						    != 
						    (0x1fU 
						     & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
							>> 0x14U)))) 
						& (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rf_wen))
					        ? (
						   (0U 
						    == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_wb_sel))
						    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out
						    : 
						   ((1U 
						     == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_wb_sel))
						     ? vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_1_resp_bits_rdata
						     : 
						    ((2U 
						      == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_wb_sel))
						      ? 
						     (VL_ULL(4) 
						      + vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_pc)
						      : 
						     ((3U 
						       == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_wb_sel))
						       ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_data
						       : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out))))
					        : (
						   (((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_87) 
						     & (0U 
							!= 
							(0x1fU 
							 & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
							    >> 0x14U)))) 
						    & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_rf_wen))
						    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_wb_data
						    : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp2_data)))));
	    }
	}
    }
    // ALWAYS at top.v:3165
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_instr_valid = 0U;
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir) {
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_instr_valid = 0U;
	} else {
	    if (vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_instr_valid 
		    = ((~ (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)) 
		       & ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel)) 
			  & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr_valid)));
	    }
	}
    }
    // ALWAYS at top.v:2871
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rd_addr = 0U;
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir) {
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rd_addr = 0U;
	} else {
	    if (vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rd_addr 
		    = (0x1fU & ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)
				 ? 0U : ((0U != (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
					  ? 0U : (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
						  >> 7U))));
	    }
	}
    }
    // ALWAYS at top.v:2919
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_rf_wen 
	= ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379) 
					 & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rf_wen)));
    // ALWAYS at top.v:2997
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_wb_data 
	= ((IData)(vlTOPp->reset) ? VL_ULL(0) : ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379)
						  ? 
						 ((0U 
						   == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_wb_sel))
						   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out
						   : 
						  ((1U 
						    == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_wb_sel))
						    ? vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_1_resp_bits_rdata
						    : 
						   ((2U 
						     == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_wb_sel))
						     ? 
						    (VL_ULL(4) 
						     + vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_pc)
						     : 
						    ((3U 
						      == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_wb_sel))
						      ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_data
						      : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out))))
						  : VL_ULL(0)));
    // ALWAYS at top.v:2849
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr_valid = 0U;
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir) {
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr_valid = 0U;
	} else {
	    if (vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr_valid 
		    = ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard) 
		       | ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel)) 
			  & (~ (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_if_kill))));
	    }
	}
    }
    // ALWAYS at top.v:2911
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rf_wen = 0U;
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir) {
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rf_wen = 0U;
	} else {
	    if (vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rf_wen 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rf_wen;
	    }
	}
    }
    // ALWAYS at top.v:3011
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_wb_sel = 0U;
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir) {
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_wb_sel = 0U;
	} else {
	    if (vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_wb_sel 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_wb_sel;
	    }
	}
    }
    // ALWAYS at top.v:3025
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_pc = VL_ULL(0x80000000);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir) {
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_pc = VL_ULL(0);
	} else {
	    if (vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_pc 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_pc;
	    }
	}
    }
    // ALWAYS at top.v:2898
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rf_wen = 0U;
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir) {
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rf_wen = 0U;
	} else {
	    if (vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rf_wen 
		    = ((~ (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)) 
		       & ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel)) 
			  & ((0x6fU == (0x7fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
			     | ((0x2067U == (0x707fU 
					     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
				| ((3U == (0x707fU 
					   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
				   | ((0x4003U == (0x707fU 
						   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
				      | ((0x3003U == 
					  (0x707fU 
					   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
					 | ((0x1003U 
					     == (0x707fU 
						 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
					    | ((0x5003U 
						== 
						(0x707fU 
						 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
					       | ((0x2003U 
						   == 
						   (0x707fU 
						    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
						  | ((0x6003U 
						      == 
						      (0x707fU 
						       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
						     | ((0x37U 
							 == 
							 (0x7fU 
							  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
							| ((0x17U 
							    == 
							    (0x7fU 
							     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
							   | ((0x1033U 
							       == 
							       (0xfe00707fU 
								& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
							      | ((0x1013U 
								  == 
								  (0xfc00707fU 
								   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
								 | ((0x101bU 
								     == 
								     (0xfc00707fU 
								      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
								    | ((0x103bU 
									== 
									(0xfe00707fU 
									 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
								       | ((0x2033U 
									   == 
									   (0xfe00707fU 
									    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
									  | ((0x2013U 
									      == 
									      (0x707fU 
									       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
									     | ((0x3013U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x3033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x40005033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x40005013U 
										== 
										(0xfc00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x4000501bU 
										== 
										(0xfc00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x4000503bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x5033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x5013U 
										== 
										(0xfc00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x501bU 
										== 
										(0xfc00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x503bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x40000033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x4000003bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x4033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x4013U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x6033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x6013U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x33U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x13U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x1bU 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x3bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x7033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x7013U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x23U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x3023U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x1023U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x2023U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x63U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x5063U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x7063U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x4063U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x6063U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x1063U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x3073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x7073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x2073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x6073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x1073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x5073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_539))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
	    }
	}
    }
    // ALWAYS at top.v:3139
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_wb_sel = 0U;
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir) {
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_wb_sel = 0U;
	} else {
	    if (vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_wb_sel 
		    = ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)
		        ? 0U : ((0U != (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
				 ? 0U : ((0x6fU == 
					  (0x7fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
					  ? 2U : ((0x2067U 
						   == 
						   (0x707fU 
						    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						   ? 2U
						   : 
						  ((3U 
						    == 
						    (0x707fU 
						     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						    ? 1U
						    : 
						   ((0x4003U 
						     == 
						     (0x707fU 
						      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						     ? 1U
						     : 
						    ((0x3003U 
						      == 
						      (0x707fU 
						       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						      ? 1U
						      : 
						     ((0x1003U 
						       == 
						       (0x707fU 
							& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						       ? 1U
						       : 
						      ((0x5003U 
							== 
							(0x707fU 
							 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						        ? 1U
						        : 
						       ((0x2003U 
							 == 
							 (0x707fU 
							  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							 ? 1U
							 : 
							((0x6003U 
							  == 
							  (0x707fU 
							   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							  ? 1U
							  : 
							 ((0x37U 
							   == 
							   (0x7fU 
							    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							   ? 0U
							   : 
							  ((0x17U 
							    == 
							    (0x7fU 
							     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							    ? 0U
							    : 
							   ((0x1033U 
							     == 
							     (0xfe00707fU 
							      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							     ? 0U
							     : 
							    ((0x1013U 
							      == 
							      (0xfc00707fU 
							       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							      ? 0U
							      : 
							     ((0x101bU 
							       == 
							       (0xfc00707fU 
								& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							       ? 0U
							       : 
							      ((0x103bU 
								== 
								(0xfe00707fU 
								 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							        ? 0U
							        : 
							       ((0x2033U 
								 == 
								 (0xfe00707fU 
								  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								 ? 0U
								 : 
								((0x2013U 
								  == 
								  (0x707fU 
								   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								  ? 0U
								  : 
								 ((0x3013U 
								   == 
								   (0x707fU 
								    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								   ? 0U
								   : 
								  ((0x3033U 
								    == 
								    (0xfe00707fU 
								     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								    ? 0U
								    : 
								   ((0x40005033U 
								     == 
								     (0xfe00707fU 
								      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								     ? 0U
								     : 
								    ((0x40005013U 
								      == 
								      (0xfc00707fU 
								       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								      ? 0U
								      : 
								     ((0x4000501bU 
								       == 
								       (0xfc00707fU 
									& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								       ? 0U
								       : 
								      ((0x4000503bU 
									== 
									(0xfe00707fU 
									 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								        ? 0U
								        : 
								       ((0x5033U 
									 == 
									 (0xfe00707fU 
									  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									 ? 0U
									 : 
									((0x5013U 
									  == 
									  (0xfc00707fU 
									   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									  ? 0U
									  : 
									 ((0x501bU 
									   == 
									   (0xfc00707fU 
									    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									   ? 0U
									   : 
									  ((0x503bU 
									    == 
									    (0xfe00707fU 
									     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									    ? 0U
									    : 
									   ((0x40000033U 
									     == 
									     (0xfe00707fU 
									      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									     ? 0U
									     : 
									    ((0x4000003bU 
									      == 
									      (0xfe00707fU 
									       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									      ? 0U
									      : 
									     ((0x4033U 
									       == 
									       (0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									       ? 0U
									       : 
									      ((0x4013U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									        ? 0U
									        : 
									       ((0x6033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x6013U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x33U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x13U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x1bU 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x3bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x7033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x7013U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x23U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x3023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x1023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x2023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x63U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x5063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x7063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x4063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x6063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x1063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x3073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 3U
										 : 
										((0x7073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 3U
										 : 
										((0x2073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 3U
										 : 
										((0x6073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 3U
										 : 
										((0x1073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 3U
										 : 
										((0x5073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 3U
										 : 0U)))))))))))))))))))))))))))))))))))))))))))))))))))))))));
	    }
	}
    }
    // ALWAYS at top.v:2777
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_pc = VL_ULL(0x80000000);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir) {
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_pc = VL_ULL(0);
	} else {
	    if (vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_pc 
		    = ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)
		        ? VL_ULL(0) : ((0U != (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
				        ? VL_ULL(0)
				        : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_pc));
	    }
	}
    }
    // ALWAYS at top.v:2856
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_pc = VL_ULL(0x80000000);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir) {
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_pc = VL_ULL(0);
	} else {
	    if (vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379) {
		if ((1U & (~ (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)))) {
		    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_pc 
			= ((0U != (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
			    ? VL_ULL(0) : ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_if_kill)
					    ? VL_ULL(0)
					    : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_if_pc));
		}
	    }
	}
    }
    // ALWAYS at top.v:2728
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_if_pc = VL_ULL(0x80000000);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir) {
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_if_pc 
		= ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
		    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__wire_pc_next_4
		    : ((4U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
		        ? ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_17734)
			    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtvec
			    : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc)
		        : ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
			    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__wire_pc_jump_target
			    : ((3U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
			        ? (VL_ULL(0xfffffffffffffffe) 
				   & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rs1_data 
				      + vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_iim_ext))
			        : ((2U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
				    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__wire_pc_branch_target
				    : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__wire_pc_next_4)))));
	} else {
	    if (vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379) {
		if ((1U & (~ (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)))) {
		    if ((0U != (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))) {
			vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_if_pc 
			    = ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
			        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__wire_pc_next_4
			        : ((4U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
				    ? ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_17734)
				        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtvec
				        : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc)
				    : ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
				        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__wire_pc_jump_target
				        : ((3U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
					    ? (VL_ULL(0xfffffffffffffffe) 
					       & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rs1_data 
						  + vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_iim_ext))
					    : ((2U 
						== (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
					        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__wire_pc_branch_target
					        : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__wire_pc_next_4)))));
		    } else {
			if ((1U & (~ (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_if_kill)))) {
			    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_if_pc 
				= ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
				    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__wire_pc_next_4
				    : ((4U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
				        ? ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_17734)
					    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtvec
					    : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc)
				        : ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
					    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__wire_pc_jump_target
					    : ((3U 
						== (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
					        ? (VL_ULL(0xfffffffffffffffe) 
						   & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rs1_data 
						      + vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_iim_ext))
					        : (
						   (2U 
						    == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
						    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__wire_pc_branch_target
						    : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__wire_pc_next_4)))));
			}
		    }
		}
	    }
	}
    }
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__wire_pc_jump_target 
	= (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_pc 
	   + vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_jim_ext);
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__wire_pc_branch_target 
	= (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_pc 
	   + vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_bim_ext);
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc 
	= __Vdly__v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc;
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__wire_pc_next_4 
	= (VL_ULL(4) + vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_if_pc);
    // ALWAYS at top.v:2817
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_iim_ext 
	= ((IData)(vlTOPp->reset) ? VL_ULL(0) : (((QData)((IData)(
								  vlTOPp->v__DOT__mycore__DOT__dpath__DOT___GEN_96[1U])) 
						  << 0x20U) 
						 | (QData)((IData)(
								   vlTOPp->v__DOT__mycore__DOT__dpath__DOT___GEN_96[0U]))));
    // ALWAYS at top.v:2803
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rs1_data = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir) {
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rs1_data = VL_ULL(0);
	} else {
	    if (vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rs1_data 
		    = ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)
		        ? VL_ULL(0) : ((0U != (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
				        ? VL_ULL(0)
				        : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp1_data));
	    }
	}
    }
    // ALWAYS at top.v:1379
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtvec = VL_ULL(0x8000000c);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x305U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtvec 
		    = ((2U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op))
		        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out
		        : ((4U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op))
			    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9477
			    : ((3U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op))
			        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9480
			        : ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_enable)
				    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9473
				    : VL_ULL(0)))));
	    }
	}
    }
    // ALWAYS at top.v:3018
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir) {
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out = VL_ULL(0);
	} else {
	    if (vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res;
	    }
	}
    }
    // ALWAYS at top.v:3227
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op = 0U;
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir) {
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op = 0U;
	} else {
	    if (vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_csr_op;
	    }
	}
    }
    // ALWAYS at top.v:3178
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr = 0x4033U;
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir) {
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr = 0x4033U;
	} else {
	    if (vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_instr;
	    }
	}
    }
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_112_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out))];
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_114_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & ((IData)(1U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out)))];
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_116_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & ((IData)(2U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out)))];
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_118_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & ((IData)(3U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out)))];
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_120_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & ((IData)(4U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out)))];
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_122_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & ((IData)(5U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out)))];
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_124_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & ((IData)(6U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out)))];
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_126_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & ((IData)(7U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out)))];
    // ALWAYS at top.v:3152
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_csr_op = 0U;
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir) {
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_csr_op = 0U;
	} else {
	    if (vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_csr_op 
		    = ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)
		        ? 0U : ((0U != (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
				 ? 0U : ((0x6fU == 
					  (0x7fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
					  ? 0U : (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1037))));
	    }
	}
    }
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_254 
	= ((0U != (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op)) 
	   & (5U != (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op)));
    // ALWAYS at top.v:2983
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_instr = 0x4033U;
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir) {
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_instr = 0x4033U;
	} else {
	    if (vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_instr 
		    = ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)
		        ? 0x4033U : ((0U != (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
				      ? 0x4033U : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr));
	    }
	}
    }
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_ismret 
	= ((5U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op)) 
	   & (0x302U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				   >> 0x14U))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall 
	= ((5U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op)) 
	   & (0U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
			       >> 0x14U))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak 
	= ((5U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op)) 
	   & (1U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
			       >> 0x14U))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__wire_csr_op 
	= ((((3U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op)) 
	     | (4U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op))) 
	    & (0U == (0x1fU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
			       >> 0xfU)))) ? 1U : (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__legalcsrnumber 
	= (((((((((((((((((((((((((((((((((((((((((
						   ((((((((((((((((((((((((((((((((((((((((((((((((((((((0xf11U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U))) 
										| (0xf12U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0xf13U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0xf14U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0x300U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0x301U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0x302U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0x303U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0x304U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0x344U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0x305U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0x306U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0x340U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0x341U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0x342U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0x343U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0x3a0U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0x3a1U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0xb00U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0xb02U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0x320U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0x3b0U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0x3b1U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0x3b2U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0x3b3U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0x3b4U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
									       | (0x3b5U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
									      | (0x3b6U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
									     | (0x3b7U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
									    | (0x3b8U 
									       == 
									       (0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
									   | (0x3b9U 
									      == 
									      (0xfffU 
									       & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
									  | (0x3baU 
									     == 
									     (0xfffU 
									      & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
									 | (0x3bbU 
									    == 
									    (0xfffU 
									     & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
									| (0x3bcU 
									   == 
									   (0xfffU 
									    & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
									       >> 0x14U)))) 
								       | (0x3bdU 
									  == 
									  (0xfffU 
									   & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
									      >> 0x14U)))) 
								      | (0x3beU 
									 == 
									 (0xfffU 
									  & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
									     >> 0x14U)))) 
								     | (0x3bfU 
									== 
									(0xfffU 
									 & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
									    >> 0x14U)))) 
								    | (0xb03U 
								       == 
								       (0xfffU 
									& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
									   >> 0x14U)))) 
								   | (0xb04U 
								      == 
								      (0xfffU 
								       & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
									  >> 0x14U)))) 
								  | (0xb05U 
								     == 
								     (0xfffU 
								      & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
									 >> 0x14U)))) 
								 | (0xb06U 
								    == 
								    (0xfffU 
								     & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
									>> 0x14U)))) 
								| (0xb07U 
								   == 
								   (0xfffU 
								    & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
								       >> 0x14U)))) 
							       | (0xb08U 
								  == 
								  (0xfffU 
								   & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
								      >> 0x14U)))) 
							      | (0xb09U 
								 == 
								 (0xfffU 
								  & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
								     >> 0x14U)))) 
							     | (0xb0aU 
								== 
								(0xfffU 
								 & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
								    >> 0x14U)))) 
							    | (0xb0bU 
							       == 
							       (0xfffU 
								& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
								   >> 0x14U)))) 
							   | (0xb0cU 
							      == 
							      (0xfffU 
							       & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
								  >> 0x14U)))) 
							  | (0xb0dU 
							     == 
							     (0xfffU 
							      & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
								 >> 0x14U)))) 
							 | (0xb0eU 
							    == 
							    (0xfffU 
							     & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
								>> 0x14U)))) 
							| (0xb0fU 
							   == 
							   (0xfffU 
							    & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
							       >> 0x14U)))) 
						       | (0xb10U 
							  == 
							  (0xfffU 
							   & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
							      >> 0x14U)))) 
						      | (0xb11U 
							 == 
							 (0xfffU 
							  & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
							     >> 0x14U)))) 
						     | (0xb12U 
							== 
							(0xfffU 
							 & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
							    >> 0x14U)))) 
						    | (0xb13U 
						       == 
						       (0xfffU 
							& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
							   >> 0x14U)))) 
						   | (0xb14U 
						      == 
						      (0xfffU 
						       & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
							  >> 0x14U)))) 
						  | (0xb15U 
						     == 
						     (0xfffU 
						      & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
							 >> 0x14U)))) 
						 | (0xb16U 
						    == 
						    (0xfffU 
						     & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
							>> 0x14U)))) 
						| (0xb17U 
						   == 
						   (0xfffU 
						    & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						       >> 0x14U)))) 
					       | (0xb18U 
						  == 
						  (0xfffU 
						   & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						      >> 0x14U)))) 
					      | (0xb19U 
						 == 
						 (0xfffU 
						  & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						     >> 0x14U)))) 
					     | (0xb1aU 
						== 
						(0xfffU 
						 & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						    >> 0x14U)))) 
					    | (0xb1bU 
					       == (0xfffU 
						   & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						      >> 0x14U)))) 
					   | (0xb1cU 
					      == (0xfffU 
						  & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						     >> 0x14U)))) 
					  | (0xb1dU 
					     == (0xfffU 
						 & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						    >> 0x14U)))) 
					 | (0xb1eU 
					    == (0xfffU 
						& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						   >> 0x14U)))) 
					| (0xb1fU == 
					   (0xfffU 
					    & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					       >> 0x14U)))) 
				       | (0x323U == 
					  (0xfffU & 
					   (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					    >> 0x14U)))) 
				      | (0x324U == 
					 (0xfffU & 
					  (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					   >> 0x14U)))) 
				     | (0x325U == (0xfffU 
						   & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						      >> 0x14U)))) 
				    | (0x326U == (0xfffU 
						  & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						     >> 0x14U)))) 
				   | (0x327U == (0xfffU 
						 & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						    >> 0x14U)))) 
				  | (0x328U == (0xfffU 
						& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						   >> 0x14U)))) 
				 | (0x329U == (0xfffU 
					       & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						  >> 0x14U)))) 
				| (0x32aU == (0xfffU 
					      & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						 >> 0x14U)))) 
			       | (0x32bU == (0xfffU 
					     & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						>> 0x14U)))) 
			      | (0x32cU == (0xfffU 
					    & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					       >> 0x14U)))) 
			     | (0x32dU == (0xfffU & 
					   (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					    >> 0x14U)))) 
			    | (0x32eU == (0xfffU & 
					  (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					   >> 0x14U)))) 
			   | (0x32fU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						   >> 0x14U)))) 
			  | (0x330U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						  >> 0x14U)))) 
			 | (0x331U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						 >> 0x14U)))) 
			| (0x332U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						>> 0x14U)))) 
		       | (0x333U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					       >> 0x14U)))) 
		      | (0x334U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					      >> 0x14U)))) 
		     | (0x335U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					     >> 0x14U)))) 
		    | (0x336U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					    >> 0x14U)))) 
		   | (0x337U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					   >> 0x14U)))) 
		  | (0x338U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					  >> 0x14U)))) 
		 | (0x339U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					 >> 0x14U)))) 
		| (0x33aU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					>> 0x14U)))) 
	       | (0x33bU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				       >> 0x14U)))) 
	      | (0x33cU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) 
	     | (0x33dU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				     >> 0x14U)))) | 
	    (0x33eU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				  >> 0x14U)))) | (0x33fU 
						  == 
						  (0xfffU 
						   & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						      >> 0x14U))));
    // ALWAYS at top.v:2834
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr = 0x4033U;
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir) {
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr = 0x4033U;
	} else {
	    if (vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379) {
		if ((1U & (~ (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)))) {
		    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
			= ((0U != (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
			    ? 0x4033U : ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_if_kill)
					  ? 0x4033U
					  : ((((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_102_data) 
					       << 0x18U) 
					      | ((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_100_data) 
						 << 0x10U)) 
					     | (((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_98_data) 
						 << 8U) 
						| (IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_96_data)))));
		}
	    }
	}
    }
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_102_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & ((IData)(3U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_if_pc)))];
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_100_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & ((IData)(2U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_if_pc)))];
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_98_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & ((IData)(1U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_if_pc)))];
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_96_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_if_pc))];
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379 
	= (1U & ((~ (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_reg_mem_mem_valid)) 
		 | ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_reg_mem_mem_valid) 
		    & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_en))));
    vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op1_sel 
	= ((0x6fU == (0x7fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
	    ? 0U : ((0x2067U == (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
		     ? 0U : ((3U == (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
			      ? 0U : ((0x4003U == (0x707fU 
						   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
				       ? 0U : ((0x3003U 
						== 
						(0x707fU 
						 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
					        ? 0U
					        : (
						   (0x1003U 
						    == 
						    (0x707fU 
						     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						    ? 0U
						    : 
						   ((0x5003U 
						     == 
						     (0x707fU 
						      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						     ? 0U
						     : 
						    ((0x2003U 
						      == 
						      (0x707fU 
						       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						      ? 0U
						      : 
						     ((0x6003U 
						       == 
						       (0x707fU 
							& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						       ? 0U
						       : 
						      ((0x37U 
							== 
							(0x7fU 
							 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						        ? 2U
						        : 
						       ((0x17U 
							 == 
							 (0x7fU 
							  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							 ? 2U
							 : 
							((0x1033U 
							  == 
							  (0xfe00707fU 
							   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							  ? 0U
							  : 
							 ((0x1013U 
							   == 
							   (0xfc00707fU 
							    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							   ? 0U
							   : 
							  ((0x101bU 
							    == 
							    (0xfc00707fU 
							     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							    ? 0U
							    : 
							   ((0x103bU 
							     == 
							     (0xfe00707fU 
							      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							     ? 0U
							     : 
							    ((0x2033U 
							      == 
							      (0xfe00707fU 
							       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							      ? 0U
							      : 
							     ((0x2013U 
							       == 
							       (0x707fU 
								& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							       ? 0U
							       : 
							      ((0x3013U 
								== 
								(0x707fU 
								 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							        ? 0U
							        : 
							       ((0x3033U 
								 == 
								 (0xfe00707fU 
								  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								 ? 0U
								 : 
								((0x40005033U 
								  == 
								  (0xfe00707fU 
								   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								  ? 0U
								  : 
								 ((0x40005013U 
								   == 
								   (0xfc00707fU 
								    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								   ? 0U
								   : 
								  ((0x4000501bU 
								    == 
								    (0xfc00707fU 
								     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								    ? 0U
								    : 
								   ((0x4000503bU 
								     == 
								     (0xfe00707fU 
								      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								     ? 0U
								     : 
								    ((0x5033U 
								      == 
								      (0xfe00707fU 
								       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								      ? 0U
								      : 
								     ((0x5013U 
								       == 
								       (0xfc00707fU 
									& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								       ? 0U
								       : 
								      ((0x501bU 
									== 
									(0xfc00707fU 
									 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								        ? 0U
								        : 
								       ((0x503bU 
									 == 
									 (0xfe00707fU 
									  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									 ? 0U
									 : 
									((0x40000033U 
									  == 
									  (0xfe00707fU 
									   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									  ? 0U
									  : 
									 ((0x4000003bU 
									   == 
									   (0xfe00707fU 
									    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									   ? 0U
									   : 
									  ((0x4033U 
									    == 
									    (0xfe00707fU 
									     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									    ? 0U
									    : 
									   ((0x4013U 
									     == 
									     (0x707fU 
									      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									     ? 0U
									     : 
									    ((0x6033U 
									      == 
									      (0xfe00707fU 
									       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									      ? 0U
									      : 
									     ((0x6013U 
									       == 
									       (0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									       ? 0U
									       : 
									      ((0x33U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									        ? 0U
									        : 
									       ((0x13U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x1bU 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x3bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x7033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x7013U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x23U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x3023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x1023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x2023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x63U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x5063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x7063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x4063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x6063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x1063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x3073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x7073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 1U
										 : 
										((0x2073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x6073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 1U
										 : 
										((0x1073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x5073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 1U
										 : 0U)))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel 
	= ((0x6fU == (0x7fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
	    ? 0U : ((0x2067U == (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
		     ? 0U : ((3U == (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
			      ? 2U : ((0x4003U == (0x707fU 
						   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
				       ? 2U : ((0x3003U 
						== 
						(0x707fU 
						 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
					        ? 2U
					        : (
						   (0x1003U 
						    == 
						    (0x707fU 
						     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						    ? 2U
						    : 
						   ((0x5003U 
						     == 
						     (0x707fU 
						      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						     ? 2U
						     : 
						    ((0x2003U 
						      == 
						      (0x707fU 
						       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						      ? 2U
						      : 
						     ((0x6003U 
						       == 
						       (0x707fU 
							& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						       ? 2U
						       : 
						      ((0x37U 
							== 
							(0x7fU 
							 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						        ? 0U
						        : 
						       ((0x17U 
							 == 
							 (0x7fU 
							  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							 ? 1U
							 : 
							((0x1033U 
							  == 
							  (0xfe00707fU 
							   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							  ? 0U
							  : 
							 ((0x1013U 
							   == 
							   (0xfc00707fU 
							    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							   ? 2U
							   : 
							  ((0x101bU 
							    == 
							    (0xfc00707fU 
							     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							    ? 2U
							    : 
							   ((0x103bU 
							     == 
							     (0xfe00707fU 
							      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							     ? 0U
							     : 
							    ((0x2033U 
							      == 
							      (0xfe00707fU 
							       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							      ? 0U
							      : 
							     ((0x2013U 
							       == 
							       (0x707fU 
								& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							       ? 2U
							       : 
							      ((0x3013U 
								== 
								(0x707fU 
								 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							        ? 2U
							        : 
							       ((0x3033U 
								 == 
								 (0xfe00707fU 
								  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								 ? 0U
								 : 
								((0x40005033U 
								  == 
								  (0xfe00707fU 
								   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								  ? 0U
								  : 
								 ((0x40005013U 
								   == 
								   (0xfc00707fU 
								    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								   ? 2U
								   : 
								  ((0x4000501bU 
								    == 
								    (0xfc00707fU 
								     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								    ? 2U
								    : 
								   ((0x4000503bU 
								     == 
								     (0xfe00707fU 
								      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								     ? 0U
								     : 
								    ((0x5033U 
								      == 
								      (0xfe00707fU 
								       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								      ? 0U
								      : 
								     ((0x5013U 
								       == 
								       (0xfc00707fU 
									& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								       ? 2U
								       : 
								      ((0x501bU 
									== 
									(0xfc00707fU 
									 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								        ? 2U
								        : 
								       ((0x503bU 
									 == 
									 (0xfe00707fU 
									  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									 ? 0U
									 : 
									((0x40000033U 
									  == 
									  (0xfe00707fU 
									   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									  ? 0U
									  : 
									 ((0x4000003bU 
									   == 
									   (0xfe00707fU 
									    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									   ? 0U
									   : 
									  ((0x4033U 
									    == 
									    (0xfe00707fU 
									     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									    ? 0U
									    : 
									   ((0x4013U 
									     == 
									     (0x707fU 
									      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									     ? 2U
									     : 
									    ((0x6033U 
									      == 
									      (0xfe00707fU 
									       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									      ? 0U
									      : 
									     ((0x6013U 
									       == 
									       (0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									       ? 2U
									       : 
									      ((0x33U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									        ? 0U
									        : 
									       ((0x13U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 2U
										 : 
										((0x1bU 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 2U
										 : 
										((0x3bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x7033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x7013U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 2U
										 : 
										((0x23U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 3U
										 : 
										((0x3023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 3U
										 : 
										((0x1023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 3U
										 : 
										((0x2023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 3U
										 : 0U)))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_75 
	= ((0x1fU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
		     >> 0x14U)) == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rd_addr));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_81 
	= ((0x1fU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
		     >> 0x14U)) == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rd_addr));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_87 
	= ((0x1fU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
		     >> 0x14U)) == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_rd_addr));
    vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_if_kill 
	= (((0x6fU != (0x7fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
	    & ((0x2067U != (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
	       & ((3U != (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
		  & ((0x4003U != (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
		     & ((0x3003U != (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
			& ((0x1003U != (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
			   & ((0x5003U != (0x707fU 
					   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
			      & ((0x2003U != (0x707fU 
					      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
				 & ((0x6003U != (0x707fU 
						 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
				    & ((0x37U != (0x7fU 
						  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
				       & ((0x17U != 
					   (0x7fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
					  & ((0x1033U 
					      != (0xfe00707fU 
						  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
					     & ((0x1013U 
						 != 
						 (0xfc00707fU 
						  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
						& ((0x101bU 
						    != 
						    (0xfc00707fU 
						     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
						   & ((0x103bU 
						       != 
						       (0xfe00707fU 
							& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
						      & ((0x2033U 
							  != 
							  (0xfe00707fU 
							   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
							 & ((0x2013U 
							     != 
							     (0x707fU 
							      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
							    & ((0x3013U 
								!= 
								(0x707fU 
								 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
							       & ((0x3033U 
								   != 
								   (0xfe00707fU 
								    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
								  & ((0x40005033U 
								      != 
								      (0xfe00707fU 
								       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
								     & ((0x40005013U 
									 != 
									 (0xfc00707fU 
									  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
									& ((0x4000501bU 
									    != 
									    (0xfc00707fU 
									     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
									   & ((0x4000503bU 
									       != 
									       (0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
									      & ((0x5033U 
										!= 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x5013U 
										!= 
										(0xfc00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x501bU 
										!= 
										(0xfc00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x503bU 
										!= 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x40000033U 
										!= 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x4000003bU 
										!= 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x4033U 
										!= 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x4013U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x6033U 
										!= 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x6013U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x33U 
										!= 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x13U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x1bU 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x3bU 
										!= 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x7033U 
										!= 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x7013U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x23U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x3023U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x1023U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x2023U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x63U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x5063U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x7063U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x4063U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x6063U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x1063U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x3073U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x7073U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x2073U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x6073U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x1073U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x5073U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x100073U 
										!= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
										& ((0x73U 
										!= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
										& ((0x10500073U 
										!= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
										& ((0x10200073U 
										!= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
										& ((0x30200073U 
										!= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
										& ((0xfU 
										!= 
										(0xf00fffffU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& (0x100fU 
										== vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
	   | (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1366));
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1037 
	= ((0x2067U == (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
	    ? 0U : ((3U == (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
		     ? 0U : ((0x4003U == (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
			      ? 0U : ((0x3003U == (0x707fU 
						   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
				       ? 0U : ((0x1003U 
						== 
						(0x707fU 
						 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
					        ? 0U
					        : (
						   (0x5003U 
						    == 
						    (0x707fU 
						     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						    ? 0U
						    : 
						   ((0x2003U 
						     == 
						     (0x707fU 
						      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						     ? 0U
						     : 
						    ((0x6003U 
						      == 
						      (0x707fU 
						       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						      ? 0U
						      : 
						     ((0x37U 
						       == 
						       (0x7fU 
							& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						       ? 0U
						       : 
						      ((0x17U 
							== 
							(0x7fU 
							 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						        ? 0U
						        : 
						       ((0x1033U 
							 == 
							 (0xfe00707fU 
							  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							 ? 0U
							 : 
							((0x1013U 
							  == 
							  (0xfc00707fU 
							   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							  ? 0U
							  : 
							 ((0x101bU 
							   == 
							   (0xfc00707fU 
							    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							   ? 0U
							   : 
							  ((0x103bU 
							    == 
							    (0xfe00707fU 
							     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							    ? 0U
							    : 
							   ((0x2033U 
							     == 
							     (0xfe00707fU 
							      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							     ? 0U
							     : 
							    ((0x2013U 
							      == 
							      (0x707fU 
							       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							      ? 0U
							      : 
							     ((0x3013U 
							       == 
							       (0x707fU 
								& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							       ? 0U
							       : 
							      ((0x3033U 
								== 
								(0xfe00707fU 
								 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							        ? 0U
							        : 
							       ((0x40005033U 
								 == 
								 (0xfe00707fU 
								  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								 ? 0U
								 : 
								((0x40005013U 
								  == 
								  (0xfc00707fU 
								   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								  ? 0U
								  : 
								 ((0x4000501bU 
								   == 
								   (0xfc00707fU 
								    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								   ? 0U
								   : 
								  ((0x4000503bU 
								    == 
								    (0xfe00707fU 
								     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								    ? 0U
								    : 
								   ((0x5033U 
								     == 
								     (0xfe00707fU 
								      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								     ? 0U
								     : 
								    ((0x5013U 
								      == 
								      (0xfc00707fU 
								       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								      ? 0U
								      : 
								     ((0x501bU 
								       == 
								       (0xfc00707fU 
									& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								       ? 0U
								       : 
								      ((0x503bU 
									== 
									(0xfe00707fU 
									 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								        ? 0U
								        : 
								       ((0x40000033U 
									 == 
									 (0xfe00707fU 
									  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									 ? 0U
									 : 
									((0x4000003bU 
									  == 
									  (0xfe00707fU 
									   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									  ? 0U
									  : 
									 ((0x4033U 
									   == 
									   (0xfe00707fU 
									    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									   ? 0U
									   : 
									  ((0x4013U 
									    == 
									    (0x707fU 
									     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									    ? 0U
									    : 
									   ((0x6033U 
									     == 
									     (0xfe00707fU 
									      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									     ? 0U
									     : 
									    ((0x6013U 
									      == 
									      (0x707fU 
									       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									      ? 0U
									      : 
									     ((0x33U 
									       == 
									       (0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									       ? 0U
									       : 
									      ((0x13U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									        ? 0U
									        : 
									       ((0x1bU 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x3bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x7033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x7013U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x23U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x3023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x1023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x2023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x63U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x5063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x7063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x4063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x6063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x1063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x3073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 3U
										 : 
										((0x7073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 3U
										 : 
										((0x2073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 4U
										 : 
										((0x6073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 4U
										 : 
										((0x1073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 2U
										 : 
										((0x5073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 2U
										 : 
										((0x100073U 
										== vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
										 ? 5U
										 : 
										((0x73U 
										== vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
										 ? 5U
										 : 
										((0x10500073U 
										== vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
										 ? 0U
										 : 
										((0x10200073U 
										== vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
										 ? 5U
										 : 
										((0x30200073U 
										== vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
										 ? 5U
										 : 0U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_4_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[(0x1fU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
		   >> 0xfU))];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_7_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[(0x1fU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
		   >> 0x14U))];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_dec_iim_ext[0U] 
	= ((0xfffff000U & ((IData)(((0x80000000U & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
				     ? VL_ULL(0x3fffffffffffff)
				     : VL_ULL(0))) 
			   << 0xcU)) | (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
						  >> 0x14U)));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_dec_iim_ext[1U] 
	= ((0xfffU & ((IData)(((0x80000000U & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
			        ? VL_ULL(0x3fffffffffffff)
			        : VL_ULL(0))) >> 0x14U)) 
	   | (0xfffff000U & ((IData)((((0x80000000U 
					& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
				        ? VL_ULL(0x3fffffffffffff)
				        : VL_ULL(0)) 
				      >> 0x20U)) << 0xcU)));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_dec_iim_ext[2U] 
	= (0xfffU & ((IData)((((0x80000000U & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
			        ? VL_ULL(0x3fffffffffffff)
			        : VL_ULL(0)) >> 0x20U)) 
		     >> 0x14U));
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_659 
	= ((0x37U != (0x7fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
	   & ((0x17U != (0x7fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
	      & ((0x1033U != (0xfe00707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
		 & ((0x1013U != (0xfc00707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
		    & ((0x101bU != (0xfc00707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
		       & ((0x103bU != (0xfe00707fU 
				       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
			  & ((0x2033U != (0xfe00707fU 
					  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
			     & ((0x2013U != (0x707fU 
					     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
				& ((0x3013U != (0x707fU 
						& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
				   & ((0x3033U != (0xfe00707fU 
						   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
				      & ((0x40005033U 
					  != (0xfe00707fU 
					      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
					 & ((0x40005013U 
					     != (0xfc00707fU 
						 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
					    & ((0x4000501bU 
						!= 
						(0xfc00707fU 
						 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
					       & ((0x4000503bU 
						   != 
						   (0xfe00707fU 
						    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
						  & ((0x5033U 
						      != 
						      (0xfe00707fU 
						       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
						     & ((0x5013U 
							 != 
							 (0xfc00707fU 
							  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
							& ((0x501bU 
							    != 
							    (0xfc00707fU 
							     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
							   & ((0x503bU 
							       != 
							       (0xfe00707fU 
								& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
							      & ((0x40000033U 
								  != 
								  (0xfe00707fU 
								   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
								 & ((0x4000003bU 
								     != 
								     (0xfe00707fU 
								      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
								    & ((0x4033U 
									!= 
									(0xfe00707fU 
									 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
								       & ((0x4013U 
									   != 
									   (0x707fU 
									    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
									  & ((0x6033U 
									      != 
									      (0xfe00707fU 
									       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
									     & ((0x6013U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x33U 
										!= 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x13U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x1bU 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x3bU 
										!= 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x7033U 
										!= 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x7013U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x23U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x3023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x1023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| (0x2023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)))))))))))))))))))))))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_162 
	= ((0x2000033U == (0xfe00707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
	   | ((0x2001033U == (0xfe00707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
	      | ((0x2002033U == (0xfe00707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
		 | ((0x2003033U == (0xfe00707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
		    | ((0x200003bU == (0xfe00707fU 
				       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
		       | ((0x2006033U == (0xfe00707fU 
					  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
			  | ((0x2007033U == (0xfe00707fU 
					     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
			     | ((0x200703bU == (0xfe00707fU 
						& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
				| ((0x200603bU == (0xfe00707fU 
						   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
				   | ((0x2004033U == 
				       (0xfe00707fU 
					& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
				      | ((0x2005033U 
					  == (0xfe00707fU 
					      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
					 | ((0x200503bU 
					     == (0xfe00707fU 
						 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
					    | (0x200403bU 
					       == (0xfe00707fU 
						   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))))))))))))));
}

void Vtop::_settle__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_settle__TOP__3\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    //char	__VpadToAlign228[4];
    VL_SIGW(__Vtemp15,127,0,4);
    VL_SIGW(__Vtemp16,127,0,4);
    VL_SIGW(__Vtemp17,127,0,4);
    VL_SIGW(__Vtemp20,95,0,3);
    //char	__VpadToAlign292[4];
    VL_SIGW(__Vtemp21,95,0,3);
    //char	__VpadToAlign308[4];
    VL_SIGW(__Vtemp22,95,0,3);
    //char	__VpadToAlign324[4];
    VL_SIGW(__Vtemp23,95,0,3);
    //char	__VpadToAlign340[4];
    VL_SIGW(__Vtemp24,95,0,3);
    //char	__VpadToAlign356[4];
    VL_SIGW(__Vtemp26,127,0,4);
    VL_SIGW(__Vtemp27,127,0,4);
    VL_SIGW(__Vtemp29,95,0,3);
    //char	__VpadToAlign404[4];
    VL_SIGW(__Vtemp30,95,0,3);
    //char	__VpadToAlign420[4];
    VL_SIGW(__Vtemp31,95,0,3);
    //char	__VpadToAlign436[4];
    VL_SIGW(__Vtemp32,95,0,3);
    //char	__VpadToAlign452[4];
    VL_SIGW(__Vtemp33,95,0,3);
    //char	__VpadToAlign468[4];
    VL_SIGW(__Vtemp34,95,0,3);
    //char	__VpadToAlign484[4];
    VL_SIGW(__Vtemp35,95,0,3);
    //char	__VpadToAlign500[4];
    VL_SIGW(__Vtemp36,95,0,3);
    //char	__VpadToAlign516[4];
    VL_SIGW(__Vtemp37,95,0,3);
    //char	__VpadToAlign532[4];
    VL_SIGW(__Vtemp38,95,0,3);
    //char	__VpadToAlign548[4];
    VL_SIGW(__Vtemp41,95,0,3);
    //char	__VpadToAlign564[4];
    VL_SIGW(__Vtemp42,159,0,5);
    //char	__VpadToAlign588[4];
    VL_SIGW(__Vtemp43,159,0,5);
    //char	__VpadToAlign612[4];
    VL_SIGW(__Vtemp45,95,0,3);
    //char	__VpadToAlign628[4];
    VL_SIGW(__Vtemp46,159,0,5);
    //char	__VpadToAlign652[4];
    VL_SIGW(__Vtemp47,159,0,5);
    //char	__VpadToAlign676[4];
    VL_SIGW(__Vtemp48,159,0,5);
    //char	__VpadToAlign700[4];
    VL_SIGW(__Vtemp50,95,0,3);
    //char	__VpadToAlign716[4];
    VL_SIGW(__Vtemp51,127,0,4);
    VL_SIGW(__Vtemp52,127,0,4);
    VL_SIGW(__Vtemp53,127,0,4);
    VL_SIGW(__Vtemp54,95,0,3);
    //char	__VpadToAlign780[4];
    VL_SIGW(__Vtemp55,95,0,3);
    //char	__VpadToAlign796[4];
    VL_SIGW(__Vtemp56,95,0,3);
    //char	__VpadToAlign812[4];
    VL_SIGW(__Vtemp57,95,0,3);
    //char	__VpadToAlign828[4];
    VL_SIGW(__Vtemp58,95,0,3);
    //char	__VpadToAlign844[4];
    VL_SIGW(__Vtemp60,95,0,3);
    //char	__VpadToAlign860[4];
    VL_SIGW(__Vtemp61,95,0,3);
    //char	__VpadToAlign876[4];
    VL_SIGW(__Vtemp63,95,0,3);
    //char	__VpadToAlign892[4];
    VL_SIGW(__Vtemp64,95,0,3);
    //char	__VpadToAlign908[4];
    VL_SIGW(__Vtemp65,95,0,3);
    //char	__VpadToAlign924[4];
    VL_SIGW(__Vtemp66,95,0,3);
    //char	__VpadToAlign940[4];
    VL_SIGW(__Vtemp98,95,0,3);
    // Body
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_17722 
	= (VL_ULL(1) + vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcycle);
    vlTOPp->io_diff_instr_in_wb = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_instr;
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_17724 
	= (VL_ULL(1) + vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_minstret);
    vlTOPp->io_diff_pc_data = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_pc;
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_9_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_10_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[1U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_11_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[2U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_12_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[3U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_13_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[4U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_14_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[5U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_15_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[6U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_16_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[7U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_17_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[8U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_18_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[9U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_19_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0xaU];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_20_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0xbU];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_21_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0xcU];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_22_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0xdU];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_23_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0xeU];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_24_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0xfU];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_25_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0x10U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_26_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0x11U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_27_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0x12U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_28_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0x13U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_29_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0x14U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_30_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0x15U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_31_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0x16U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_32_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0x17U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_33_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0x18U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_34_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0x19U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_35_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0x1aU];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_36_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0x1bU];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_37_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0x1cU];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_38_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0x1dU];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_39_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0x1eU];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_40_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[0x1fU];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__add_res 
	= (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
	   + vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source);
    VL_EXTENDS_WQ(128,64, __Vtemp15, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source);
    VL_EXTENDS_WQ(128,64, __Vtemp16, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source);
    VL_MULS_WWW(128,128,128, __Vtemp17, __Vtemp15, __Vtemp16);
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[0U] 
	= __Vtemp17[0U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[1U] 
	= __Vtemp17[1U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[2U] 
	= __Vtemp17[2U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[3U] 
	= __Vtemp17[3U];
    vlTOPp->v__DOT__mycore__DOT__dpath_io_d2c_islt 
	= VL_LTS_IQQ(1,64,64, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source);
    vlTOPp->v__DOT__mycore__DOT__dpath_io_d2c_isltu 
	= (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
	   < vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source);
    vlTOPp->v__DOT__mycore__DOT__dpath_io_d2c_iseq 
	= (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
	   == vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source);
    vlTOPp->io_diff_is_retire = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_instr_valid;
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasinterrupt 
	= (((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mip_mti) 
	    & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mie_mti)) 
	   & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_28 
	= (((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie) 
	    << 7U) | ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie) 
		      << 3U));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__wire_pc_jump_target 
	= (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_pc 
	   + vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_jim_ext);
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__wire_pc_branch_target 
	= (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_pc 
	   + vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_bim_ext);
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__wire_pc_next_4 
	= (VL_ULL(4) + vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_if_pc);
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_112_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out))];
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_114_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & ((IData)(1U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out)))];
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_116_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & ((IData)(2U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out)))];
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_118_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & ((IData)(3U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out)))];
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_120_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & ((IData)(4U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out)))];
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_122_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & ((IData)(5U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out)))];
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_124_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & ((IData)(6U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out)))];
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_126_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & ((IData)(7U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out)))];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_254 
	= ((0U != (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op)) 
	   & (5U != (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op)));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_ismret 
	= ((5U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op)) 
	   & (0x302U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				   >> 0x14U))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall 
	= ((5U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op)) 
	   & (0U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
			       >> 0x14U))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak 
	= ((5U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op)) 
	   & (1U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
			       >> 0x14U))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__wire_csr_op 
	= ((((3U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op)) 
	     | (4U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op))) 
	    & (0U == (0x1fU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
			       >> 0xfU)))) ? 1U : (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__legalcsrnumber 
	= (((((((((((((((((((((((((((((((((((((((((
						   ((((((((((((((((((((((((((((((((((((((((((((((((((((((0xf11U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U))) 
										| (0xf12U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0xf13U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0xf14U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0x300U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0x301U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0x302U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0x303U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0x304U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0x344U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0x305U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0x306U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0x340U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0x341U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0x342U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0x343U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0x3a0U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0x3a1U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0xb00U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0xb02U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0x320U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0x3b0U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0x3b1U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0x3b2U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0x3b3U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
										| (0x3b4U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
									       | (0x3b5U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
									      | (0x3b6U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
									     | (0x3b7U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
									    | (0x3b8U 
									       == 
									       (0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
									   | (0x3b9U 
									      == 
									      (0xfffU 
									       & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
									  | (0x3baU 
									     == 
									     (0xfffU 
									      & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
									 | (0x3bbU 
									    == 
									    (0xfffU 
									     & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))) 
									| (0x3bcU 
									   == 
									   (0xfffU 
									    & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
									       >> 0x14U)))) 
								       | (0x3bdU 
									  == 
									  (0xfffU 
									   & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
									      >> 0x14U)))) 
								      | (0x3beU 
									 == 
									 (0xfffU 
									  & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
									     >> 0x14U)))) 
								     | (0x3bfU 
									== 
									(0xfffU 
									 & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
									    >> 0x14U)))) 
								    | (0xb03U 
								       == 
								       (0xfffU 
									& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
									   >> 0x14U)))) 
								   | (0xb04U 
								      == 
								      (0xfffU 
								       & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
									  >> 0x14U)))) 
								  | (0xb05U 
								     == 
								     (0xfffU 
								      & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
									 >> 0x14U)))) 
								 | (0xb06U 
								    == 
								    (0xfffU 
								     & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
									>> 0x14U)))) 
								| (0xb07U 
								   == 
								   (0xfffU 
								    & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
								       >> 0x14U)))) 
							       | (0xb08U 
								  == 
								  (0xfffU 
								   & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
								      >> 0x14U)))) 
							      | (0xb09U 
								 == 
								 (0xfffU 
								  & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
								     >> 0x14U)))) 
							     | (0xb0aU 
								== 
								(0xfffU 
								 & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
								    >> 0x14U)))) 
							    | (0xb0bU 
							       == 
							       (0xfffU 
								& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
								   >> 0x14U)))) 
							   | (0xb0cU 
							      == 
							      (0xfffU 
							       & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
								  >> 0x14U)))) 
							  | (0xb0dU 
							     == 
							     (0xfffU 
							      & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
								 >> 0x14U)))) 
							 | (0xb0eU 
							    == 
							    (0xfffU 
							     & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
								>> 0x14U)))) 
							| (0xb0fU 
							   == 
							   (0xfffU 
							    & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
							       >> 0x14U)))) 
						       | (0xb10U 
							  == 
							  (0xfffU 
							   & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
							      >> 0x14U)))) 
						      | (0xb11U 
							 == 
							 (0xfffU 
							  & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
							     >> 0x14U)))) 
						     | (0xb12U 
							== 
							(0xfffU 
							 & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
							    >> 0x14U)))) 
						    | (0xb13U 
						       == 
						       (0xfffU 
							& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
							   >> 0x14U)))) 
						   | (0xb14U 
						      == 
						      (0xfffU 
						       & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
							  >> 0x14U)))) 
						  | (0xb15U 
						     == 
						     (0xfffU 
						      & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
							 >> 0x14U)))) 
						 | (0xb16U 
						    == 
						    (0xfffU 
						     & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
							>> 0x14U)))) 
						| (0xb17U 
						   == 
						   (0xfffU 
						    & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						       >> 0x14U)))) 
					       | (0xb18U 
						  == 
						  (0xfffU 
						   & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						      >> 0x14U)))) 
					      | (0xb19U 
						 == 
						 (0xfffU 
						  & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						     >> 0x14U)))) 
					     | (0xb1aU 
						== 
						(0xfffU 
						 & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						    >> 0x14U)))) 
					    | (0xb1bU 
					       == (0xfffU 
						   & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						      >> 0x14U)))) 
					   | (0xb1cU 
					      == (0xfffU 
						  & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						     >> 0x14U)))) 
					  | (0xb1dU 
					     == (0xfffU 
						 & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						    >> 0x14U)))) 
					 | (0xb1eU 
					    == (0xfffU 
						& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						   >> 0x14U)))) 
					| (0xb1fU == 
					   (0xfffU 
					    & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					       >> 0x14U)))) 
				       | (0x323U == 
					  (0xfffU & 
					   (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					    >> 0x14U)))) 
				      | (0x324U == 
					 (0xfffU & 
					  (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					   >> 0x14U)))) 
				     | (0x325U == (0xfffU 
						   & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						      >> 0x14U)))) 
				    | (0x326U == (0xfffU 
						  & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						     >> 0x14U)))) 
				   | (0x327U == (0xfffU 
						 & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						    >> 0x14U)))) 
				  | (0x328U == (0xfffU 
						& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						   >> 0x14U)))) 
				 | (0x329U == (0xfffU 
					       & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						  >> 0x14U)))) 
				| (0x32aU == (0xfffU 
					      & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						 >> 0x14U)))) 
			       | (0x32bU == (0xfffU 
					     & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						>> 0x14U)))) 
			      | (0x32cU == (0xfffU 
					    & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					       >> 0x14U)))) 
			     | (0x32dU == (0xfffU & 
					   (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					    >> 0x14U)))) 
			    | (0x32eU == (0xfffU & 
					  (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					   >> 0x14U)))) 
			   | (0x32fU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						   >> 0x14U)))) 
			  | (0x330U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						  >> 0x14U)))) 
			 | (0x331U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						 >> 0x14U)))) 
			| (0x332U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						>> 0x14U)))) 
		       | (0x333U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					       >> 0x14U)))) 
		      | (0x334U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					      >> 0x14U)))) 
		     | (0x335U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					     >> 0x14U)))) 
		    | (0x336U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					    >> 0x14U)))) 
		   | (0x337U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					   >> 0x14U)))) 
		  | (0x338U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					  >> 0x14U)))) 
		 | (0x339U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					 >> 0x14U)))) 
		| (0x33aU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					>> 0x14U)))) 
	       | (0x33bU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				       >> 0x14U)))) 
	      | (0x33cU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U)))) 
	     | (0x33dU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				     >> 0x14U)))) | 
	    (0x33eU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				  >> 0x14U)))) | (0x33fU 
						  == 
						  (0xfffU 
						   & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						      >> 0x14U))));
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_102_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & ((IData)(3U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_if_pc)))];
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_100_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & ((IData)(2U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_if_pc)))];
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_98_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & ((IData)(1U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_if_pc)))];
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_96_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_if_pc))];
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379 
	= (1U & ((~ (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_reg_mem_mem_valid)) 
		 | ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_reg_mem_mem_valid) 
		    & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_en))));
    vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op1_sel 
	= ((0x6fU == (0x7fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
	    ? 0U : ((0x2067U == (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
		     ? 0U : ((3U == (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
			      ? 0U : ((0x4003U == (0x707fU 
						   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
				       ? 0U : ((0x3003U 
						== 
						(0x707fU 
						 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
					        ? 0U
					        : (
						   (0x1003U 
						    == 
						    (0x707fU 
						     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						    ? 0U
						    : 
						   ((0x5003U 
						     == 
						     (0x707fU 
						      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						     ? 0U
						     : 
						    ((0x2003U 
						      == 
						      (0x707fU 
						       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						      ? 0U
						      : 
						     ((0x6003U 
						       == 
						       (0x707fU 
							& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						       ? 0U
						       : 
						      ((0x37U 
							== 
							(0x7fU 
							 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						        ? 2U
						        : 
						       ((0x17U 
							 == 
							 (0x7fU 
							  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							 ? 2U
							 : 
							((0x1033U 
							  == 
							  (0xfe00707fU 
							   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							  ? 0U
							  : 
							 ((0x1013U 
							   == 
							   (0xfc00707fU 
							    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							   ? 0U
							   : 
							  ((0x101bU 
							    == 
							    (0xfc00707fU 
							     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							    ? 0U
							    : 
							   ((0x103bU 
							     == 
							     (0xfe00707fU 
							      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							     ? 0U
							     : 
							    ((0x2033U 
							      == 
							      (0xfe00707fU 
							       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							      ? 0U
							      : 
							     ((0x2013U 
							       == 
							       (0x707fU 
								& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							       ? 0U
							       : 
							      ((0x3013U 
								== 
								(0x707fU 
								 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							        ? 0U
							        : 
							       ((0x3033U 
								 == 
								 (0xfe00707fU 
								  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								 ? 0U
								 : 
								((0x40005033U 
								  == 
								  (0xfe00707fU 
								   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								  ? 0U
								  : 
								 ((0x40005013U 
								   == 
								   (0xfc00707fU 
								    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								   ? 0U
								   : 
								  ((0x4000501bU 
								    == 
								    (0xfc00707fU 
								     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								    ? 0U
								    : 
								   ((0x4000503bU 
								     == 
								     (0xfe00707fU 
								      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								     ? 0U
								     : 
								    ((0x5033U 
								      == 
								      (0xfe00707fU 
								       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								      ? 0U
								      : 
								     ((0x5013U 
								       == 
								       (0xfc00707fU 
									& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								       ? 0U
								       : 
								      ((0x501bU 
									== 
									(0xfc00707fU 
									 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								        ? 0U
								        : 
								       ((0x503bU 
									 == 
									 (0xfe00707fU 
									  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									 ? 0U
									 : 
									((0x40000033U 
									  == 
									  (0xfe00707fU 
									   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									  ? 0U
									  : 
									 ((0x4000003bU 
									   == 
									   (0xfe00707fU 
									    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									   ? 0U
									   : 
									  ((0x4033U 
									    == 
									    (0xfe00707fU 
									     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									    ? 0U
									    : 
									   ((0x4013U 
									     == 
									     (0x707fU 
									      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									     ? 0U
									     : 
									    ((0x6033U 
									      == 
									      (0xfe00707fU 
									       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									      ? 0U
									      : 
									     ((0x6013U 
									       == 
									       (0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									       ? 0U
									       : 
									      ((0x33U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									        ? 0U
									        : 
									       ((0x13U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x1bU 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x3bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x7033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x7013U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x23U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x3023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x1023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x2023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x63U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x5063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x7063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x4063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x6063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x1063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x3073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x7073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 1U
										 : 
										((0x2073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x6073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 1U
										 : 
										((0x1073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x5073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 1U
										 : 0U)))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel 
	= ((0x6fU == (0x7fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
	    ? 0U : ((0x2067U == (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
		     ? 0U : ((3U == (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
			      ? 2U : ((0x4003U == (0x707fU 
						   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
				       ? 2U : ((0x3003U 
						== 
						(0x707fU 
						 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
					        ? 2U
					        : (
						   (0x1003U 
						    == 
						    (0x707fU 
						     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						    ? 2U
						    : 
						   ((0x5003U 
						     == 
						     (0x707fU 
						      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						     ? 2U
						     : 
						    ((0x2003U 
						      == 
						      (0x707fU 
						       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						      ? 2U
						      : 
						     ((0x6003U 
						       == 
						       (0x707fU 
							& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						       ? 2U
						       : 
						      ((0x37U 
							== 
							(0x7fU 
							 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						        ? 0U
						        : 
						       ((0x17U 
							 == 
							 (0x7fU 
							  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							 ? 1U
							 : 
							((0x1033U 
							  == 
							  (0xfe00707fU 
							   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							  ? 0U
							  : 
							 ((0x1013U 
							   == 
							   (0xfc00707fU 
							    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							   ? 2U
							   : 
							  ((0x101bU 
							    == 
							    (0xfc00707fU 
							     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							    ? 2U
							    : 
							   ((0x103bU 
							     == 
							     (0xfe00707fU 
							      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							     ? 0U
							     : 
							    ((0x2033U 
							      == 
							      (0xfe00707fU 
							       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							      ? 0U
							      : 
							     ((0x2013U 
							       == 
							       (0x707fU 
								& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							       ? 2U
							       : 
							      ((0x3013U 
								== 
								(0x707fU 
								 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							        ? 2U
							        : 
							       ((0x3033U 
								 == 
								 (0xfe00707fU 
								  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								 ? 0U
								 : 
								((0x40005033U 
								  == 
								  (0xfe00707fU 
								   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								  ? 0U
								  : 
								 ((0x40005013U 
								   == 
								   (0xfc00707fU 
								    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								   ? 2U
								   : 
								  ((0x4000501bU 
								    == 
								    (0xfc00707fU 
								     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								    ? 2U
								    : 
								   ((0x4000503bU 
								     == 
								     (0xfe00707fU 
								      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								     ? 0U
								     : 
								    ((0x5033U 
								      == 
								      (0xfe00707fU 
								       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								      ? 0U
								      : 
								     ((0x5013U 
								       == 
								       (0xfc00707fU 
									& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								       ? 2U
								       : 
								      ((0x501bU 
									== 
									(0xfc00707fU 
									 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								        ? 2U
								        : 
								       ((0x503bU 
									 == 
									 (0xfe00707fU 
									  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									 ? 0U
									 : 
									((0x40000033U 
									  == 
									  (0xfe00707fU 
									   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									  ? 0U
									  : 
									 ((0x4000003bU 
									   == 
									   (0xfe00707fU 
									    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									   ? 0U
									   : 
									  ((0x4033U 
									    == 
									    (0xfe00707fU 
									     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									    ? 0U
									    : 
									   ((0x4013U 
									     == 
									     (0x707fU 
									      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									     ? 2U
									     : 
									    ((0x6033U 
									      == 
									      (0xfe00707fU 
									       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									      ? 0U
									      : 
									     ((0x6013U 
									       == 
									       (0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									       ? 2U
									       : 
									      ((0x33U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									        ? 0U
									        : 
									       ((0x13U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 2U
										 : 
										((0x1bU 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 2U
										 : 
										((0x3bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x7033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x7013U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 2U
										 : 
										((0x23U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 3U
										 : 
										((0x3023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 3U
										 : 
										((0x1023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 3U
										 : 
										((0x2023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 3U
										 : 0U)))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_75 
	= ((0x1fU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
		     >> 0x14U)) == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rd_addr));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_81 
	= ((0x1fU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
		     >> 0x14U)) == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rd_addr));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_87 
	= ((0x1fU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
		     >> 0x14U)) == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_rd_addr));
    vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_if_kill 
	= (((0x6fU != (0x7fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
	    & ((0x2067U != (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
	       & ((3U != (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
		  & ((0x4003U != (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
		     & ((0x3003U != (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
			& ((0x1003U != (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
			   & ((0x5003U != (0x707fU 
					   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
			      & ((0x2003U != (0x707fU 
					      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
				 & ((0x6003U != (0x707fU 
						 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
				    & ((0x37U != (0x7fU 
						  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
				       & ((0x17U != 
					   (0x7fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
					  & ((0x1033U 
					      != (0xfe00707fU 
						  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
					     & ((0x1013U 
						 != 
						 (0xfc00707fU 
						  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
						& ((0x101bU 
						    != 
						    (0xfc00707fU 
						     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
						   & ((0x103bU 
						       != 
						       (0xfe00707fU 
							& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
						      & ((0x2033U 
							  != 
							  (0xfe00707fU 
							   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
							 & ((0x2013U 
							     != 
							     (0x707fU 
							      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
							    & ((0x3013U 
								!= 
								(0x707fU 
								 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
							       & ((0x3033U 
								   != 
								   (0xfe00707fU 
								    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
								  & ((0x40005033U 
								      != 
								      (0xfe00707fU 
								       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
								     & ((0x40005013U 
									 != 
									 (0xfc00707fU 
									  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
									& ((0x4000501bU 
									    != 
									    (0xfc00707fU 
									     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
									   & ((0x4000503bU 
									       != 
									       (0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
									      & ((0x5033U 
										!= 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x5013U 
										!= 
										(0xfc00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x501bU 
										!= 
										(0xfc00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x503bU 
										!= 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x40000033U 
										!= 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x4000003bU 
										!= 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x4033U 
										!= 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x4013U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x6033U 
										!= 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x6013U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x33U 
										!= 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x13U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x1bU 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x3bU 
										!= 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x7033U 
										!= 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x7013U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x23U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x3023U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x1023U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x2023U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x63U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x5063U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x7063U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x4063U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x6063U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x1063U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x3073U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x7073U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x2073U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x6073U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x1073U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x5073U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x100073U 
										!= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
										& ((0x73U 
										!= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
										& ((0x10500073U 
										!= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
										& ((0x10200073U 
										!= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
										& ((0x30200073U 
										!= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
										& ((0xfU 
										!= 
										(0xf00fffffU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& (0x100fU 
										== vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
	   | (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1366));
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1037 
	= ((0x2067U == (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
	    ? 0U : ((3U == (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
		     ? 0U : ((0x4003U == (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
			      ? 0U : ((0x3003U == (0x707fU 
						   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
				       ? 0U : ((0x1003U 
						== 
						(0x707fU 
						 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
					        ? 0U
					        : (
						   (0x5003U 
						    == 
						    (0x707fU 
						     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						    ? 0U
						    : 
						   ((0x2003U 
						     == 
						     (0x707fU 
						      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						     ? 0U
						     : 
						    ((0x6003U 
						      == 
						      (0x707fU 
						       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						      ? 0U
						      : 
						     ((0x37U 
						       == 
						       (0x7fU 
							& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						       ? 0U
						       : 
						      ((0x17U 
							== 
							(0x7fU 
							 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
						        ? 0U
						        : 
						       ((0x1033U 
							 == 
							 (0xfe00707fU 
							  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							 ? 0U
							 : 
							((0x1013U 
							  == 
							  (0xfc00707fU 
							   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							  ? 0U
							  : 
							 ((0x101bU 
							   == 
							   (0xfc00707fU 
							    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							   ? 0U
							   : 
							  ((0x103bU 
							    == 
							    (0xfe00707fU 
							     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							    ? 0U
							    : 
							   ((0x2033U 
							     == 
							     (0xfe00707fU 
							      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							     ? 0U
							     : 
							    ((0x2013U 
							      == 
							      (0x707fU 
							       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							      ? 0U
							      : 
							     ((0x3013U 
							       == 
							       (0x707fU 
								& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							       ? 0U
							       : 
							      ((0x3033U 
								== 
								(0xfe00707fU 
								 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
							        ? 0U
							        : 
							       ((0x40005033U 
								 == 
								 (0xfe00707fU 
								  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								 ? 0U
								 : 
								((0x40005013U 
								  == 
								  (0xfc00707fU 
								   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								  ? 0U
								  : 
								 ((0x4000501bU 
								   == 
								   (0xfc00707fU 
								    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								   ? 0U
								   : 
								  ((0x4000503bU 
								    == 
								    (0xfe00707fU 
								     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								    ? 0U
								    : 
								   ((0x5033U 
								     == 
								     (0xfe00707fU 
								      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								     ? 0U
								     : 
								    ((0x5013U 
								      == 
								      (0xfc00707fU 
								       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								      ? 0U
								      : 
								     ((0x501bU 
								       == 
								       (0xfc00707fU 
									& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								       ? 0U
								       : 
								      ((0x503bU 
									== 
									(0xfe00707fU 
									 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
								        ? 0U
								        : 
								       ((0x40000033U 
									 == 
									 (0xfe00707fU 
									  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									 ? 0U
									 : 
									((0x4000003bU 
									  == 
									  (0xfe00707fU 
									   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									  ? 0U
									  : 
									 ((0x4033U 
									   == 
									   (0xfe00707fU 
									    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									   ? 0U
									   : 
									  ((0x4013U 
									    == 
									    (0x707fU 
									     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									    ? 0U
									    : 
									   ((0x6033U 
									     == 
									     (0xfe00707fU 
									      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									     ? 0U
									     : 
									    ((0x6013U 
									      == 
									      (0x707fU 
									       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									      ? 0U
									      : 
									     ((0x33U 
									       == 
									       (0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									       ? 0U
									       : 
									      ((0x13U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
									        ? 0U
									        : 
									       ((0x1bU 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x3bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x7033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x7013U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x23U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x3023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x1023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x2023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x63U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x5063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x7063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x4063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x6063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x1063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 0U
										 : 
										((0x3073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 3U
										 : 
										((0x7073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 3U
										 : 
										((0x2073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 4U
										 : 
										((0x6073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 4U
										 : 
										((0x1073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 2U
										 : 
										((0x5073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
										 ? 2U
										 : 
										((0x100073U 
										== vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
										 ? 5U
										 : 
										((0x73U 
										== vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
										 ? 5U
										 : 
										((0x10500073U 
										== vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
										 ? 0U
										 : 
										((0x10200073U 
										== vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
										 ? 5U
										 : 
										((0x30200073U 
										== vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
										 ? 5U
										 : 0U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_4_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[(0x1fU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
		   >> 0xfU))];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_7_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[(0x1fU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
		   >> 0x14U))];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_dec_iim_ext[0U] 
	= ((0xfffff000U & ((IData)(((0x80000000U & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
				     ? VL_ULL(0x3fffffffffffff)
				     : VL_ULL(0))) 
			   << 0xcU)) | (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
						  >> 0x14U)));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_dec_iim_ext[1U] 
	= ((0xfffU & ((IData)(((0x80000000U & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
			        ? VL_ULL(0x3fffffffffffff)
			        : VL_ULL(0))) >> 0x14U)) 
	   | (0xfffff000U & ((IData)((((0x80000000U 
					& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
				        ? VL_ULL(0x3fffffffffffff)
				        : VL_ULL(0)) 
				      >> 0x20U)) << 0xcU)));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_dec_iim_ext[2U] 
	= (0xfffU & ((IData)((((0x80000000U & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
			        ? VL_ULL(0x3fffffffffffff)
			        : VL_ULL(0)) >> 0x20U)) 
		     >> 0x14U));
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_659 
	= ((0x37U != (0x7fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
	   & ((0x17U != (0x7fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
	      & ((0x1033U != (0xfe00707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
		 & ((0x1013U != (0xfc00707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
		    & ((0x101bU != (0xfc00707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
		       & ((0x103bU != (0xfe00707fU 
				       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
			  & ((0x2033U != (0xfe00707fU 
					  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
			     & ((0x2013U != (0x707fU 
					     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
				& ((0x3013U != (0x707fU 
						& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
				   & ((0x3033U != (0xfe00707fU 
						   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
				      & ((0x40005033U 
					  != (0xfe00707fU 
					      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
					 & ((0x40005013U 
					     != (0xfc00707fU 
						 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
					    & ((0x4000501bU 
						!= 
						(0xfc00707fU 
						 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
					       & ((0x4000503bU 
						   != 
						   (0xfe00707fU 
						    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
						  & ((0x5033U 
						      != 
						      (0xfe00707fU 
						       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
						     & ((0x5013U 
							 != 
							 (0xfc00707fU 
							  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
							& ((0x501bU 
							    != 
							    (0xfc00707fU 
							     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
							   & ((0x503bU 
							       != 
							       (0xfe00707fU 
								& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
							      & ((0x40000033U 
								  != 
								  (0xfe00707fU 
								   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
								 & ((0x4000003bU 
								     != 
								     (0xfe00707fU 
								      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
								    & ((0x4033U 
									!= 
									(0xfe00707fU 
									 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
								       & ((0x4013U 
									   != 
									   (0x707fU 
									    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
									  & ((0x6033U 
									      != 
									      (0xfe00707fU 
									       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
									     & ((0x6013U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x33U 
										!= 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x13U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x1bU 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x3bU 
										!= 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x7033U 
										!= 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x7013U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x23U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x3023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x1023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| (0x2023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)))))))))))))))))))))))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_162 
	= ((0x2000033U == (0xfe00707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
	   | ((0x2001033U == (0xfe00707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
	      | ((0x2002033U == (0xfe00707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
		 | ((0x2003033U == (0xfe00707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
		    | ((0x200003bU == (0xfe00707fU 
				       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
		       | ((0x2006033U == (0xfe00707fU 
					  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
			  | ((0x2007033U == (0xfe00707fU 
					     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
			     | ((0x200703bU == (0xfe00707fU 
						& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
				| ((0x200603bU == (0xfe00707fU 
						   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
				   | ((0x2004033U == 
				       (0xfe00707fU 
					& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
				      | ((0x2005033U 
					  == (0xfe00707fU 
					      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
					 | ((0x200503bU 
					     == (0xfe00707fU 
						 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
					    | (0x200403bU 
					       == (0xfe00707fU 
						   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))))))))))))));
    vlTOPp->io_diff_r_0 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_9_data;
    vlTOPp->io_diff_r_1 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_10_data;
    vlTOPp->io_diff_r_2 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_11_data;
    vlTOPp->io_diff_r_3 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_12_data;
    vlTOPp->io_diff_r_4 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_13_data;
    vlTOPp->io_diff_r_5 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_14_data;
    vlTOPp->io_diff_r_6 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_15_data;
    vlTOPp->io_diff_r_7 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_16_data;
    vlTOPp->io_diff_r_8 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_17_data;
    vlTOPp->io_diff_r_9 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_18_data;
    vlTOPp->io_diff_r_10 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_19_data;
    vlTOPp->io_diff_r_11 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_20_data;
    vlTOPp->io_diff_r_12 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_21_data;
    vlTOPp->io_diff_r_13 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_22_data;
    vlTOPp->io_diff_r_14 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_23_data;
    vlTOPp->io_diff_r_15 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_24_data;
    vlTOPp->io_diff_r_16 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_25_data;
    vlTOPp->io_diff_r_17 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_26_data;
    vlTOPp->io_diff_r_18 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_27_data;
    vlTOPp->io_diff_r_19 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_28_data;
    vlTOPp->io_diff_r_20 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_29_data;
    vlTOPp->io_diff_r_21 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_30_data;
    vlTOPp->io_diff_r_22 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_31_data;
    vlTOPp->io_diff_r_23 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_32_data;
    vlTOPp->io_diff_r_24 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_33_data;
    vlTOPp->io_diff_r_25 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_34_data;
    vlTOPp->io_diff_r_26 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_35_data;
    vlTOPp->io_diff_r_27 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_36_data;
    vlTOPp->io_diff_r_28 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_37_data;
    vlTOPp->io_diff_r_29 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_38_data;
    vlTOPp->io_diff_r_30 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_39_data;
    vlTOPp->io_diff_r_31 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_40_data;
    VL_EXTEND_WQ(65,64, __Vtemp20, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__add_res);
    VL_EXTEND_WQ(65,64, __Vtemp21, (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
				    - vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source));
    VL_EXTEND_WQ(65,64, __Vtemp22, (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
				    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source));
    VL_EXTEND_WQ(65,64, __Vtemp23, (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
				    | vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source));
    VL_EXTEND_WQ(65,64, __Vtemp24, (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
				    ^ vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source));
    VL_EXTEND_WQ(127,64, __Vtemp26, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source);
    VL_SHIFTL_WWI(127,127,6, __Vtemp27, __Vtemp26, 
		  (0x3fU & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)));
    VL_EXTEND_WQ(65,64, __Vtemp29, (((QData)((IData)(
						     __Vtemp27[1U])) 
				     << 0x20U) | (QData)((IData)(
								 __Vtemp27[0U]))));
    VL_EXTEND_WI(65,1, __Vtemp30, VL_LTS_IQQ(1,64,64, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source));
    VL_EXTEND_WI(65,1, __Vtemp31, (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
				   < vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source));
    VL_EXTEND_WQ(65,64, __Vtemp32, VL_SHIFTRS_QQI(64,64,6, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source, 
						  (0x3fU 
						   & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source))));
    VL_EXTEND_WI(65,32, __Vtemp33, ((0x1fU >= (0x3fU 
					       & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)))
				     ? VL_SHIFTRS_III(32,32,6, (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source), 
						      (0x3fU 
						       & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)))
				     : VL_NEGATE_I(
						   ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source) 
						    >> 0x1fU))));
    VL_EXTEND_WQ(65,64, __Vtemp34, (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
				    >> (0x3fU & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source))));
    VL_EXTEND_WI(65,32, __Vtemp35, ((0x1fU >= (0x3fU 
					       & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)))
				     ? ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source) 
					>> (0x3fU & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)))
				     : 0U));
    VL_EXTEND_WQ(65,64, __Vtemp36, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source);
    VL_EXTEND_WQ(65,64, __Vtemp37, (((QData)((IData)(
						     vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[1U])) 
				     << 0x20U) | (QData)((IData)(
								 vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp38, (((QData)((IData)(
						     vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[3U])) 
				     << 0x20U) | (QData)((IData)(
								 vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[2U]))));
    __Vtemp41[0U] = (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source);
    __Vtemp41[1U] = (IData)((vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
			     >> 0x20U));
    __Vtemp41[2U] = (1U & (IData)((vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
				   >> 0x3fU)));
    VL_EXTENDS_WW(129,65, __Vtemp42, __Vtemp41);
    __Vtemp43[0U] = __Vtemp42[0U];
    __Vtemp43[1U] = __Vtemp42[1U];
    __Vtemp43[2U] = __Vtemp42[2U];
    __Vtemp43[3U] = __Vtemp42[3U];
    __Vtemp43[4U] = (1U & __Vtemp42[4U]);
    VL_EXTEND_WQ(65,64, __Vtemp45, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source);
    VL_EXTENDS_WW(129,65, __Vtemp46, __Vtemp45);
    __Vtemp47[0U] = __Vtemp46[0U];
    __Vtemp47[1U] = __Vtemp46[1U];
    __Vtemp47[2U] = __Vtemp46[2U];
    __Vtemp47[3U] = __Vtemp46[3U];
    __Vtemp47[4U] = (1U & __Vtemp46[4U]);
    VL_MULS_WWW(129,129,129, __Vtemp48, __Vtemp43, __Vtemp47);
    VL_EXTEND_WQ(65,64, __Vtemp50, (((QData)((IData)(
						     __Vtemp48[3U])) 
				     << 0x20U) | (QData)((IData)(
								 __Vtemp48[2U]))));
    VL_EXTEND_WQ(128,64, __Vtemp51, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source);
    VL_EXTEND_WQ(128,64, __Vtemp52, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source);
    VL_MUL_W(4, __Vtemp53, __Vtemp51, __Vtemp52);
    VL_EXTEND_WQ(65,64, __Vtemp54, (((QData)((IData)(
						     __Vtemp53[3U])) 
				     << 0x20U) | (QData)((IData)(
								 __Vtemp53[2U]))));
    VL_EXTEND_WQ(65,64, __Vtemp55, VL_MODDIVS_QQQ(64, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source));
    VL_EXTEND_WQ(65,64, __Vtemp56, VL_MODDIV_QQQ(64, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source));
    VL_EXTEND_WI(65,32, __Vtemp57, VL_MODDIV_III(32, (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source), (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)));
    VL_EXTEND_WI(65,32, __Vtemp58, VL_MODDIVS_III(32, (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source), (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)));
    VL_EXTENDS_WQ(65,64, __Vtemp60, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source);
    __Vtemp61[0U] = __Vtemp60[0U];
    __Vtemp61[1U] = __Vtemp60[1U];
    __Vtemp61[2U] = (1U & __Vtemp60[2U]);
    VL_EXTENDS_WQ(65,64, __Vtemp63, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source);
    __Vtemp64[0U] = __Vtemp63[0U];
    __Vtemp64[1U] = __Vtemp63[1U];
    __Vtemp64[2U] = (1U & __Vtemp63[2U]);
    VL_DIVS_WWW(65, __Vtemp65, __Vtemp61, __Vtemp64);
    VL_EXTEND_WQ(65,64, __Vtemp66, ((0x16U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
				     ? VL_DIV_QQQ(64, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)
				     : ((0x17U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
					 ? (QData)((IData)(
							   VL_DIV_III(32, (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source), (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source))))
					 : ((0x18U 
					     == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
					     ? (VL_ULL(0x1ffffffff) 
						& VL_DIVS_QQQ(33, 
							      (VL_ULL(0x1ffffffff) 
							       & VL_EXTENDS_QI(33,32, (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source))), 
							      (VL_ULL(0x1ffffffff) 
							       & VL_EXTENDS_QI(33,32, (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)))))
					     : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__add_res))));
    __Vtemp98[0U] = ((6U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
		      ? __Vtemp30[0U] : ((7U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
					  ? __Vtemp31[0U]
					  : ((8U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
					      ? __Vtemp32[0U]
					      : ((9U 
						  == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						  ? 
						 __Vtemp33[0U]
						  : 
						 ((0xaU 
						   == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						   ? 
						  __Vtemp34[0U]
						   : 
						  ((0xbU 
						    == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						    ? 
						   __Vtemp35[0U]
						    : 
						   ((0xcU 
						     == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						     ? 
						    __Vtemp36[0U]
						     : 
						    ((0xdU 
						      == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						      ? 
						     __Vtemp37[0U]
						      : 
						     ((0xeU 
						       == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						       ? 
						      __Vtemp38[0U]
						       : 
						      ((0xfU 
							== (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						        ? 
						       __Vtemp50[0U]
						        : 
						       ((0x10U 
							 == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
							 ? 
							__Vtemp54[0U]
							 : 
							((0x11U 
							  == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
							  ? 
							 __Vtemp55[0U]
							  : 
							 ((0x12U 
							   == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
							   ? 
							  __Vtemp56[0U]
							   : 
							  ((0x13U 
							    == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
							    ? 
							   __Vtemp57[0U]
							    : 
							   ((0x14U 
							     == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
							     ? 
							    __Vtemp58[0U]
							     : 
							    ((0x15U 
							      == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
							      ? 
							     __Vtemp65[0U]
							      : 
							     __Vtemp66[0U]))))))))))))))));
    __Vtemp98[1U] = ((6U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
		      ? __Vtemp30[1U] : ((7U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
					  ? __Vtemp31[1U]
					  : ((8U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
					      ? __Vtemp32[1U]
					      : ((9U 
						  == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						  ? 
						 __Vtemp33[1U]
						  : 
						 ((0xaU 
						   == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						   ? 
						  __Vtemp34[1U]
						   : 
						  ((0xbU 
						    == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						    ? 
						   __Vtemp35[1U]
						    : 
						   ((0xcU 
						     == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						     ? 
						    __Vtemp36[1U]
						     : 
						    ((0xdU 
						      == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						      ? 
						     __Vtemp37[1U]
						      : 
						     ((0xeU 
						       == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						       ? 
						      __Vtemp38[1U]
						       : 
						      ((0xfU 
							== (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						        ? 
						       __Vtemp50[1U]
						        : 
						       ((0x10U 
							 == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
							 ? 
							__Vtemp54[1U]
							 : 
							((0x11U 
							  == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
							  ? 
							 __Vtemp55[1U]
							  : 
							 ((0x12U 
							   == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
							   ? 
							  __Vtemp56[1U]
							   : 
							  ((0x13U 
							    == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
							    ? 
							   __Vtemp57[1U]
							    : 
							   ((0x14U 
							     == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
							     ? 
							    __Vtemp58[1U]
							     : 
							    ((0x15U 
							      == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
							      ? 
							     __Vtemp65[1U]
							      : 
							     __Vtemp66[1U]))))))))))))))));
    __Vtemp98[2U] = ((6U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
		      ? __Vtemp30[2U] : ((7U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
					  ? __Vtemp31[2U]
					  : ((8U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
					      ? __Vtemp32[2U]
					      : ((9U 
						  == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						  ? 
						 __Vtemp33[2U]
						  : 
						 ((0xaU 
						   == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						   ? 
						  __Vtemp34[2U]
						   : 
						  ((0xbU 
						    == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						    ? 
						   __Vtemp35[2U]
						    : 
						   ((0xcU 
						     == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						     ? 
						    __Vtemp36[2U]
						     : 
						    ((0xdU 
						      == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						      ? 
						     __Vtemp37[2U]
						      : 
						     ((0xeU 
						       == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						       ? 
						      __Vtemp38[2U]
						       : 
						      ((0xfU 
							== (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						        ? 
						       __Vtemp50[2U]
						        : 
						       ((0x10U 
							 == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
							 ? 
							__Vtemp54[2U]
							 : 
							((0x11U 
							  == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
							  ? 
							 __Vtemp55[2U]
							  : 
							 ((0x12U 
							   == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
							   ? 
							  __Vtemp56[2U]
							   : 
							  ((0x13U 
							    == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
							    ? 
							   __Vtemp57[2U]
							    : 
							   ((0x14U 
							     == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
							     ? 
							    __Vtemp58[2U]
							     : 
							    ((0x15U 
							      == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
							      ? 
							     __Vtemp65[2U]
							      : 
							     __Vtemp66[2U]))))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U] 
	= ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
	    ? __Vtemp20[0U] : ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
			        ? __Vtemp21[0U] : (
						   (2U 
						    == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						    ? 
						   __Vtemp22[0U]
						    : 
						   ((3U 
						     == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						     ? 
						    __Vtemp23[0U]
						     : 
						    ((4U 
						      == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						      ? 
						     __Vtemp24[0U]
						      : 
						     ((5U 
						       == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						       ? 
						      __Vtemp29[0U]
						       : 
						      __Vtemp98[0U]))))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[1U] 
	= ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
	    ? __Vtemp20[1U] : ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
			        ? __Vtemp21[1U] : (
						   (2U 
						    == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						    ? 
						   __Vtemp22[1U]
						    : 
						   ((3U 
						     == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						     ? 
						    __Vtemp23[1U]
						     : 
						    ((4U 
						      == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						      ? 
						     __Vtemp24[1U]
						      : 
						     ((5U 
						       == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						       ? 
						      __Vtemp29[1U]
						       : 
						      __Vtemp98[1U]))))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[2U] 
	= (1U & ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
		  ? __Vtemp20[2U] : ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
				      ? __Vtemp21[2U]
				      : ((2U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
					  ? __Vtemp22[2U]
					  : ((3U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
					      ? __Vtemp23[2U]
					      : ((4U 
						  == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						  ? 
						 __Vtemp24[2U]
						  : 
						 ((5U 
						   == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						   ? 
						  __Vtemp29[2U]
						   : 
						  __Vtemp98[2U])))))));
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1360 
	= ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
	    ? 0U : ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
		     ? ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath_io_d2c_iseq)
			 ? 2U : 0U) : ((2U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
				        ? ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath_io_d2c_iseq)
					    ? 0U : 2U)
				        : ((5U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
					    ? ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath_io_d2c_islt)
					        ? 0U
					        : 2U)
					    : ((6U 
						== (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
					        ? ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath_io_d2c_isltu)
						    ? 0U
						    : 2U)
					        : (
						   (3U 
						    == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
						    ? 
						   ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath_io_d2c_islt)
						     ? 2U
						     : 0U)
						    : 
						   ((4U 
						     == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
						     ? 
						    ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath_io_d2c_isltu)
						      ? 2U
						      : 0U)
						     : 
						    ((7U 
						      == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
						      ? 1U
						      : 
						     ((8U 
						       == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
						       ? 3U
						       : 0U)))))))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_39 
	= (((QData)((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp)) 
	    << 0xbU) | (QData)((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_28)));
    vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_1_resp_bits_rdata 
	= ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_read_op))
	    ? ((((0x80U & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_112_data))
		  ? VL_ULL(0xffffffffffffff) : VL_ULL(0)) 
		<< 8U) | (QData)((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_112_data)))
	    : ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_read_op))
	        ? (QData)((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_112_data))
	        : ((2U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_read_op))
		    ? ((((0x80U & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_114_data))
			  ? VL_ULL(0xffffffffffff) : VL_ULL(0)) 
			<< 0x10U) | (QData)((IData)(
						    (((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_114_data) 
						      << 8U) 
						     | (IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_112_data)))))
		    : ((3U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_read_op))
		        ? (((QData)((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_114_data)) 
			    << 8U) | (QData)((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_112_data)))
		        : ((4U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_read_op))
			    ? (((QData)((IData)(((0x80U 
						  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_118_data))
						  ? 0xffffffffU
						  : 0U))) 
				<< 0x20U) | (QData)((IData)(
							    (((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_118_data) 
							      << 0x18U) 
							     | (((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_116_data) 
								 << 0x10U) 
								| (((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_114_data) 
								    << 8U) 
								   | (IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_112_data)))))))
			    : ((5U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_read_op))
			        ? (((QData)((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_118_data)) 
				    << 0x18U) | (QData)((IData)(
								(((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_116_data) 
								  << 0x10U) 
								 | (((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_114_data) 
								     << 8U) 
								    | (IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_112_data))))))
			        : (((QData)((IData)(
						    (((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_126_data) 
						      << 0x18U) 
						     | (((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_124_data) 
							 << 0x10U) 
							| (((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_122_data) 
							    << 8U) 
							   | (IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_120_data)))))) 
				    << 0x20U) | (QData)((IData)(
								(((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_118_data) 
								  << 0x18U) 
								 | (((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_116_data) 
								     << 0x10U) 
								    | (((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_114_data) 
									<< 8U) 
								       | (IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_112_data)))))))))))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__prv_now 
	= ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_ismret)
	    ? (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp)
	    : 3U);
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__write_illgal 
	= ((((2U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__wire_csr_op)) 
	     | (3U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__wire_csr_op))) 
	    | (4U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__wire_csr_op))) 
	   & (3U == (3U & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
			   >> 0x1eU))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__read_illegal 
	= ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_254) 
	   & (~ (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__legalcsrnumber)));
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_csr_op 
	= ((0x6fU == (0x7fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
	    ? 0U : (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1037));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp1_data 
	= ((0U == (0x1fU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
			    >> 0xfU))) ? VL_ULL(0) : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_4_data);
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp2_data 
	= ((0U == (0x1fU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
			    >> 0x14U))) ? VL_ULL(0)
	    : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_7_data);
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_889 
	= ((0x2067U != (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
	   & ((3U != (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
	      & ((0x4003U != (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
		 & ((0x3003U != (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
		    & ((0x1003U != (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
		       & ((0x5003U != (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
			  & ((0x2003U != (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
			     & ((0x6003U != (0x707fU 
					     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
				& (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_659)))))))));
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_666 
	= ((3U == (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
	   | ((0x4003U == (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
	      | ((0x3003U == (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
		 | ((0x1003U == (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
		    | ((0x5003U == (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
		       | ((0x2003U == (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
			  | ((0x6003U == (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
			     | (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_659))))))));
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_valid_inst 
	= ((0x6fU == (0x7fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
	   | ((0x2067U == (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
	      | ((3U == (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
		 | ((0x4003U == (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
		    | ((0x3003U == (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
		       | ((0x1003U == (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
			  | ((0x5003U == (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
			     | ((0x2003U == (0x707fU 
					     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
				| ((0x6003U == (0x707fU 
						& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
				   | ((0x37U == (0x7fU 
						 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
				      | ((0x17U == 
					  (0x7fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
					 | ((0x1033U 
					     == (0xfe00707fU 
						 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
					    | ((0x1013U 
						== 
						(0xfc00707fU 
						 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
					       | ((0x101bU 
						   == 
						   (0xfc00707fU 
						    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
						  | ((0x103bU 
						      == 
						      (0xfe00707fU 
						       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
						     | ((0x2033U 
							 == 
							 (0xfe00707fU 
							  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
							| ((0x2013U 
							    == 
							    (0x707fU 
							     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
							   | ((0x3013U 
							       == 
							       (0x707fU 
								& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
							      | ((0x3033U 
								  == 
								  (0xfe00707fU 
								   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
								 | ((0x40005033U 
								     == 
								     (0xfe00707fU 
								      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
								    | ((0x40005013U 
									== 
									(0xfc00707fU 
									 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
								       | ((0x4000501bU 
									   == 
									   (0xfc00707fU 
									    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
									  | ((0x4000503bU 
									      == 
									      (0xfe00707fU 
									       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
									     | ((0x5033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x5013U 
										== 
										(0xfc00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x501bU 
										== 
										(0xfc00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x503bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x40000033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x4000003bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x4033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x4013U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x6033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x6013U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x33U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x13U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x1bU 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x3bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x7033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x7013U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x23U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x3023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x1023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x2023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x63U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x5063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x7063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x4063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x6063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x1063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x3073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x7073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x2073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x6073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x1073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x5073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x100073U 
										== vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
										| ((0x73U 
										== vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
										| ((0x10500073U 
										== vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
										| ((0x10200073U 
										== vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
										| ((0x30200073U 
										== vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
										| ((0xfU 
										== 
										(0xf00fffffU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x100fU 
										== vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
										| (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_162)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_539 
	= ((0x100073U != vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
	   & ((0x73U != vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
	      & ((0x10500073U != vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
		 & ((0x10200073U != vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
		    & ((0x30200073U != vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
		       & ((0xfU != (0xf00fffffU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
			  & ((0x100fU != vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
			     & (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_162))))))));
}

VL_INLINE_OPT void Vtop::_sequent__TOP__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_sequent__TOP__4\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp113,95,0,3);
    //char	__VpadToAlign988[4];
    VL_SIGW(__Vtemp114,95,0,3);
    //char	__VpadToAlign1004[4];
    VL_SIGW(__Vtemp115,95,0,3);
    //char	__VpadToAlign1020[4];
    VL_SIGW(__Vtemp116,95,0,3);
    //char	__VpadToAlign1036[4];
    VL_SIGW(__Vtemp117,95,0,3);
    //char	__VpadToAlign1052[4];
    VL_SIGW(__Vtemp119,127,0,4);
    VL_SIGW(__Vtemp120,127,0,4);
    VL_SIGW(__Vtemp122,95,0,3);
    //char	__VpadToAlign1100[4];
    VL_SIGW(__Vtemp123,95,0,3);
    //char	__VpadToAlign1116[4];
    VL_SIGW(__Vtemp124,95,0,3);
    //char	__VpadToAlign1132[4];
    VL_SIGW(__Vtemp125,95,0,3);
    //char	__VpadToAlign1148[4];
    VL_SIGW(__Vtemp126,95,0,3);
    //char	__VpadToAlign1164[4];
    VL_SIGW(__Vtemp127,95,0,3);
    //char	__VpadToAlign1180[4];
    VL_SIGW(__Vtemp128,95,0,3);
    //char	__VpadToAlign1196[4];
    VL_SIGW(__Vtemp129,95,0,3);
    //char	__VpadToAlign1212[4];
    VL_SIGW(__Vtemp130,95,0,3);
    //char	__VpadToAlign1228[4];
    VL_SIGW(__Vtemp131,95,0,3);
    //char	__VpadToAlign1244[4];
    VL_SIGW(__Vtemp134,95,0,3);
    //char	__VpadToAlign1260[4];
    VL_SIGW(__Vtemp135,159,0,5);
    //char	__VpadToAlign1284[4];
    VL_SIGW(__Vtemp136,159,0,5);
    //char	__VpadToAlign1308[4];
    VL_SIGW(__Vtemp138,95,0,3);
    //char	__VpadToAlign1324[4];
    VL_SIGW(__Vtemp139,159,0,5);
    //char	__VpadToAlign1348[4];
    VL_SIGW(__Vtemp140,159,0,5);
    //char	__VpadToAlign1372[4];
    VL_SIGW(__Vtemp141,159,0,5);
    //char	__VpadToAlign1396[4];
    VL_SIGW(__Vtemp143,95,0,3);
    //char	__VpadToAlign1412[4];
    VL_SIGW(__Vtemp144,127,0,4);
    VL_SIGW(__Vtemp145,127,0,4);
    VL_SIGW(__Vtemp146,127,0,4);
    VL_SIGW(__Vtemp147,95,0,3);
    //char	__VpadToAlign1476[4];
    VL_SIGW(__Vtemp148,95,0,3);
    //char	__VpadToAlign1492[4];
    VL_SIGW(__Vtemp149,95,0,3);
    //char	__VpadToAlign1508[4];
    VL_SIGW(__Vtemp150,95,0,3);
    //char	__VpadToAlign1524[4];
    VL_SIGW(__Vtemp151,95,0,3);
    //char	__VpadToAlign1540[4];
    VL_SIGW(__Vtemp153,95,0,3);
    //char	__VpadToAlign1556[4];
    VL_SIGW(__Vtemp154,95,0,3);
    //char	__VpadToAlign1572[4];
    VL_SIGW(__Vtemp156,95,0,3);
    //char	__VpadToAlign1588[4];
    VL_SIGW(__Vtemp157,95,0,3);
    //char	__VpadToAlign1604[4];
    VL_SIGW(__Vtemp158,95,0,3);
    //char	__VpadToAlign1620[4];
    VL_SIGW(__Vtemp159,95,0,3);
    //char	__VpadToAlign1636[4];
    VL_SIGW(__Vtemp191,95,0,3);
    // Body
    vlTOPp->io_diff_r_0 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_9_data;
    vlTOPp->io_diff_r_1 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_10_data;
    vlTOPp->io_diff_r_2 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_11_data;
    vlTOPp->io_diff_r_3 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_12_data;
    vlTOPp->io_diff_r_4 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_13_data;
    vlTOPp->io_diff_r_5 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_14_data;
    vlTOPp->io_diff_r_6 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_15_data;
    vlTOPp->io_diff_r_7 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_16_data;
    vlTOPp->io_diff_r_8 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_17_data;
    vlTOPp->io_diff_r_9 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_18_data;
    vlTOPp->io_diff_r_10 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_19_data;
    vlTOPp->io_diff_r_11 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_20_data;
    vlTOPp->io_diff_r_12 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_21_data;
    vlTOPp->io_diff_r_13 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_22_data;
    vlTOPp->io_diff_r_14 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_23_data;
    vlTOPp->io_diff_r_15 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_24_data;
    vlTOPp->io_diff_r_16 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_25_data;
    vlTOPp->io_diff_r_17 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_26_data;
    vlTOPp->io_diff_r_18 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_27_data;
    vlTOPp->io_diff_r_19 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_28_data;
    vlTOPp->io_diff_r_20 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_29_data;
    vlTOPp->io_diff_r_21 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_30_data;
    vlTOPp->io_diff_r_22 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_31_data;
    vlTOPp->io_diff_r_23 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_32_data;
    vlTOPp->io_diff_r_24 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_33_data;
    vlTOPp->io_diff_r_25 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_34_data;
    vlTOPp->io_diff_r_26 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_35_data;
    vlTOPp->io_diff_r_27 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_36_data;
    vlTOPp->io_diff_r_28 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_37_data;
    vlTOPp->io_diff_r_29 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_38_data;
    vlTOPp->io_diff_r_30 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_39_data;
    vlTOPp->io_diff_r_31 = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_40_data;
    VL_EXTEND_WQ(65,64, __Vtemp113, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__add_res);
    VL_EXTEND_WQ(65,64, __Vtemp114, (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
				     - vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source));
    VL_EXTEND_WQ(65,64, __Vtemp115, (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
				     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source));
    VL_EXTEND_WQ(65,64, __Vtemp116, (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
				     | vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source));
    VL_EXTEND_WQ(65,64, __Vtemp117, (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
				     ^ vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source));
    VL_EXTEND_WQ(127,64, __Vtemp119, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source);
    VL_SHIFTL_WWI(127,127,6, __Vtemp120, __Vtemp119, 
		  (0x3fU & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)));
    VL_EXTEND_WQ(65,64, __Vtemp122, (((QData)((IData)(
						      __Vtemp120[1U])) 
				      << 0x20U) | (QData)((IData)(
								  __Vtemp120[0U]))));
    VL_EXTEND_WI(65,1, __Vtemp123, VL_LTS_IQQ(1,64,64, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source));
    VL_EXTEND_WI(65,1, __Vtemp124, (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
				    < vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source));
    VL_EXTEND_WQ(65,64, __Vtemp125, VL_SHIFTRS_QQI(64,64,6, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source, 
						   (0x3fU 
						    & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source))));
    VL_EXTEND_WI(65,32, __Vtemp126, ((0x1fU >= (0x3fU 
						& (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)))
				      ? VL_SHIFTRS_III(32,32,6, (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source), 
						       (0x3fU 
							& (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)))
				      : VL_NEGATE_I(
						    ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source) 
						     >> 0x1fU))));
    VL_EXTEND_WQ(65,64, __Vtemp127, (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
				     >> (0x3fU & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source))));
    VL_EXTEND_WI(65,32, __Vtemp128, ((0x1fU >= (0x3fU 
						& (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)))
				      ? ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source) 
					 >> (0x3fU 
					     & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)))
				      : 0U));
    VL_EXTEND_WQ(65,64, __Vtemp129, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source);
    VL_EXTEND_WQ(65,64, __Vtemp130, (((QData)((IData)(
						      vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp131, (((QData)((IData)(
						      vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[3U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[2U]))));
    __Vtemp134[0U] = (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source);
    __Vtemp134[1U] = (IData)((vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
			      >> 0x20U));
    __Vtemp134[2U] = (1U & (IData)((vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
				    >> 0x3fU)));
    VL_EXTENDS_WW(129,65, __Vtemp135, __Vtemp134);
    __Vtemp136[0U] = __Vtemp135[0U];
    __Vtemp136[1U] = __Vtemp135[1U];
    __Vtemp136[2U] = __Vtemp135[2U];
    __Vtemp136[3U] = __Vtemp135[3U];
    __Vtemp136[4U] = (1U & __Vtemp135[4U]);
    VL_EXTEND_WQ(65,64, __Vtemp138, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source);
    VL_EXTENDS_WW(129,65, __Vtemp139, __Vtemp138);
    __Vtemp140[0U] = __Vtemp139[0U];
    __Vtemp140[1U] = __Vtemp139[1U];
    __Vtemp140[2U] = __Vtemp139[2U];
    __Vtemp140[3U] = __Vtemp139[3U];
    __Vtemp140[4U] = (1U & __Vtemp139[4U]);
    VL_MULS_WWW(129,129,129, __Vtemp141, __Vtemp136, __Vtemp140);
    VL_EXTEND_WQ(65,64, __Vtemp143, (((QData)((IData)(
						      __Vtemp141[3U])) 
				      << 0x20U) | (QData)((IData)(
								  __Vtemp141[2U]))));
    VL_EXTEND_WQ(128,64, __Vtemp144, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source);
    VL_EXTEND_WQ(128,64, __Vtemp145, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source);
    VL_MUL_W(4, __Vtemp146, __Vtemp144, __Vtemp145);
    VL_EXTEND_WQ(65,64, __Vtemp147, (((QData)((IData)(
						      __Vtemp146[3U])) 
				      << 0x20U) | (QData)((IData)(
								  __Vtemp146[2U]))));
    VL_EXTEND_WQ(65,64, __Vtemp148, VL_MODDIVS_QQQ(64, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source));
    VL_EXTEND_WQ(65,64, __Vtemp149, VL_MODDIV_QQQ(64, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source));
    VL_EXTEND_WI(65,32, __Vtemp150, VL_MODDIV_III(32, (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source), (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)));
    VL_EXTEND_WI(65,32, __Vtemp151, VL_MODDIVS_III(32, (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source), (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)));
    VL_EXTENDS_WQ(65,64, __Vtemp153, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source);
    __Vtemp154[0U] = __Vtemp153[0U];
    __Vtemp154[1U] = __Vtemp153[1U];
    __Vtemp154[2U] = (1U & __Vtemp153[2U]);
    VL_EXTENDS_WQ(65,64, __Vtemp156, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source);
    __Vtemp157[0U] = __Vtemp156[0U];
    __Vtemp157[1U] = __Vtemp156[1U];
    __Vtemp157[2U] = (1U & __Vtemp156[2U]);
    VL_DIVS_WWW(65, __Vtemp158, __Vtemp154, __Vtemp157);
    VL_EXTEND_WQ(65,64, __Vtemp159, ((0x16U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
				      ? VL_DIV_QQQ(64, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)
				      : ((0x17U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
					  ? (QData)((IData)(
							    VL_DIV_III(32, (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source), (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source))))
					  : ((0x18U 
					      == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
					      ? (VL_ULL(0x1ffffffff) 
						 & VL_DIVS_QQQ(33, 
							       (VL_ULL(0x1ffffffff) 
								& VL_EXTENDS_QI(33,32, (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source))), 
							       (VL_ULL(0x1ffffffff) 
								& VL_EXTENDS_QI(33,32, (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)))))
					      : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__add_res))));
    __Vtemp191[0U] = ((6U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
		       ? __Vtemp123[0U] : ((7U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
					    ? __Vtemp124[0U]
					    : ((8U 
						== (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
					        ? __Vtemp125[0U]
					        : (
						   (9U 
						    == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						    ? 
						   __Vtemp126[0U]
						    : 
						   ((0xaU 
						     == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						     ? 
						    __Vtemp127[0U]
						     : 
						    ((0xbU 
						      == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						      ? 
						     __Vtemp128[0U]
						      : 
						     ((0xcU 
						       == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						       ? 
						      __Vtemp129[0U]
						       : 
						      ((0xdU 
							== (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						        ? 
						       __Vtemp130[0U]
						        : 
						       ((0xeU 
							 == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
							 ? 
							__Vtemp131[0U]
							 : 
							((0xfU 
							  == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
							  ? 
							 __Vtemp143[0U]
							  : 
							 ((0x10U 
							   == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
							   ? 
							  __Vtemp147[0U]
							   : 
							  ((0x11U 
							    == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
							    ? 
							   __Vtemp148[0U]
							    : 
							   ((0x12U 
							     == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
							     ? 
							    __Vtemp149[0U]
							     : 
							    ((0x13U 
							      == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
							      ? 
							     __Vtemp150[0U]
							      : 
							     ((0x14U 
							       == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
							       ? 
							      __Vtemp151[0U]
							       : 
							      ((0x15U 
								== (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
							        ? 
							       __Vtemp158[0U]
							        : 
							       __Vtemp159[0U]))))))))))))))));
    __Vtemp191[1U] = ((6U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
		       ? __Vtemp123[1U] : ((7U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
					    ? __Vtemp124[1U]
					    : ((8U 
						== (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
					        ? __Vtemp125[1U]
					        : (
						   (9U 
						    == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						    ? 
						   __Vtemp126[1U]
						    : 
						   ((0xaU 
						     == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						     ? 
						    __Vtemp127[1U]
						     : 
						    ((0xbU 
						      == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						      ? 
						     __Vtemp128[1U]
						      : 
						     ((0xcU 
						       == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						       ? 
						      __Vtemp129[1U]
						       : 
						      ((0xdU 
							== (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						        ? 
						       __Vtemp130[1U]
						        : 
						       ((0xeU 
							 == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
							 ? 
							__Vtemp131[1U]
							 : 
							((0xfU 
							  == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
							  ? 
							 __Vtemp143[1U]
							  : 
							 ((0x10U 
							   == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
							   ? 
							  __Vtemp147[1U]
							   : 
							  ((0x11U 
							    == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
							    ? 
							   __Vtemp148[1U]
							    : 
							   ((0x12U 
							     == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
							     ? 
							    __Vtemp149[1U]
							     : 
							    ((0x13U 
							      == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
							      ? 
							     __Vtemp150[1U]
							      : 
							     ((0x14U 
							       == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
							       ? 
							      __Vtemp151[1U]
							       : 
							      ((0x15U 
								== (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
							        ? 
							       __Vtemp158[1U]
							        : 
							       __Vtemp159[1U]))))))))))))))));
    __Vtemp191[2U] = ((6U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
		       ? __Vtemp123[2U] : ((7U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
					    ? __Vtemp124[2U]
					    : ((8U 
						== (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
					        ? __Vtemp125[2U]
					        : (
						   (9U 
						    == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						    ? 
						   __Vtemp126[2U]
						    : 
						   ((0xaU 
						     == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						     ? 
						    __Vtemp127[2U]
						     : 
						    ((0xbU 
						      == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						      ? 
						     __Vtemp128[2U]
						      : 
						     ((0xcU 
						       == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						       ? 
						      __Vtemp129[2U]
						       : 
						      ((0xdU 
							== (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						        ? 
						       __Vtemp130[2U]
						        : 
						       ((0xeU 
							 == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
							 ? 
							__Vtemp131[2U]
							 : 
							((0xfU 
							  == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
							  ? 
							 __Vtemp143[2U]
							  : 
							 ((0x10U 
							   == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
							   ? 
							  __Vtemp147[2U]
							   : 
							  ((0x11U 
							    == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
							    ? 
							   __Vtemp148[2U]
							    : 
							   ((0x12U 
							     == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
							     ? 
							    __Vtemp149[2U]
							     : 
							    ((0x13U 
							      == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
							      ? 
							     __Vtemp150[2U]
							      : 
							     ((0x14U 
							       == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
							       ? 
							      __Vtemp151[2U]
							       : 
							      ((0x15U 
								== (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
							        ? 
							       __Vtemp158[2U]
							        : 
							       __Vtemp159[2U]))))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U] 
	= ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
	    ? __Vtemp113[0U] : ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
				 ? __Vtemp114[0U] : 
				((2U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
				  ? __Vtemp115[0U] : 
				 ((3U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
				   ? __Vtemp116[0U]
				   : ((4U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
				       ? __Vtemp117[0U]
				       : ((5U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
					   ? __Vtemp122[0U]
					   : __Vtemp191[0U]))))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[1U] 
	= ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
	    ? __Vtemp113[1U] : ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
				 ? __Vtemp114[1U] : 
				((2U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
				  ? __Vtemp115[1U] : 
				 ((3U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
				   ? __Vtemp116[1U]
				   : ((4U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
				       ? __Vtemp117[1U]
				       : ((5U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
					   ? __Vtemp122[1U]
					   : __Vtemp191[1U]))))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[2U] 
	= (1U & ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
		  ? __Vtemp113[2U] : ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
				       ? __Vtemp114[2U]
				       : ((2U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
					   ? __Vtemp115[2U]
					   : ((3U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
					       ? __Vtemp116[2U]
					       : ((4U 
						   == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						   ? 
						  __Vtemp117[2U]
						   : 
						  ((5U 
						    == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
						    ? 
						   __Vtemp122[2U]
						    : 
						   __Vtemp191[2U])))))));
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1360 
	= ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
	    ? 0U : ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
		     ? ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath_io_d2c_iseq)
			 ? 2U : 0U) : ((2U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
				        ? ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath_io_d2c_iseq)
					    ? 0U : 2U)
				        : ((5U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
					    ? ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath_io_d2c_islt)
					        ? 0U
					        : 2U)
					    : ((6U 
						== (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
					        ? ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath_io_d2c_isltu)
						    ? 0U
						    : 2U)
					        : (
						   (3U 
						    == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
						    ? 
						   ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath_io_d2c_islt)
						     ? 2U
						     : 0U)
						    : 
						   ((4U 
						     == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
						     ? 
						    ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath_io_d2c_isltu)
						      ? 2U
						      : 0U)
						     : 
						    ((7U 
						      == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
						      ? 1U
						      : 
						     ((8U 
						       == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
						       ? 3U
						       : 0U)))))))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_39 
	= (((QData)((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp)) 
	    << 0xbU) | (QData)((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_28)));
    vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_1_resp_bits_rdata 
	= ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_read_op))
	    ? ((((0x80U & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_112_data))
		  ? VL_ULL(0xffffffffffffff) : VL_ULL(0)) 
		<< 8U) | (QData)((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_112_data)))
	    : ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_read_op))
	        ? (QData)((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_112_data))
	        : ((2U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_read_op))
		    ? ((((0x80U & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_114_data))
			  ? VL_ULL(0xffffffffffff) : VL_ULL(0)) 
			<< 0x10U) | (QData)((IData)(
						    (((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_114_data) 
						      << 8U) 
						     | (IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_112_data)))))
		    : ((3U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_read_op))
		        ? (((QData)((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_114_data)) 
			    << 8U) | (QData)((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_112_data)))
		        : ((4U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_read_op))
			    ? (((QData)((IData)(((0x80U 
						  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_118_data))
						  ? 0xffffffffU
						  : 0U))) 
				<< 0x20U) | (QData)((IData)(
							    (((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_118_data) 
							      << 0x18U) 
							     | (((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_116_data) 
								 << 0x10U) 
								| (((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_114_data) 
								    << 8U) 
								   | (IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_112_data)))))))
			    : ((5U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_read_op))
			        ? (((QData)((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_118_data)) 
				    << 0x18U) | (QData)((IData)(
								(((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_116_data) 
								  << 0x10U) 
								 | (((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_114_data) 
								     << 8U) 
								    | (IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_112_data))))))
			        : (((QData)((IData)(
						    (((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_126_data) 
						      << 0x18U) 
						     | (((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_124_data) 
							 << 0x10U) 
							| (((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_122_data) 
							    << 8U) 
							   | (IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_120_data)))))) 
				    << 0x20U) | (QData)((IData)(
								(((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_118_data) 
								  << 0x18U) 
								 | (((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_116_data) 
								     << 0x10U) 
								    | (((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_114_data) 
									<< 8U) 
								       | (IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_112_data)))))))))))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__prv_now 
	= ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_ismret)
	    ? (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp)
	    : 3U);
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__write_illgal 
	= ((((2U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__wire_csr_op)) 
	     | (3U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__wire_csr_op))) 
	    | (4U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__wire_csr_op))) 
	   & (3U == (3U & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
			   >> 0x1eU))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__read_illegal 
	= ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_254) 
	   & (~ (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__legalcsrnumber)));
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_csr_op 
	= ((0x6fU == (0x7fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
	    ? 0U : (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1037));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp1_data 
	= ((0U == (0x1fU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
			    >> 0xfU))) ? VL_ULL(0) : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_4_data);
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp2_data 
	= ((0U == (0x1fU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
			    >> 0x14U))) ? VL_ULL(0)
	    : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_7_data);
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_889 
	= ((0x2067U != (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
	   & ((3U != (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
	      & ((0x4003U != (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
		 & ((0x3003U != (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
		    & ((0x1003U != (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
		       & ((0x5003U != (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
			  & ((0x2003U != (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
			     & ((0x6003U != (0x707fU 
					     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
				& (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_659)))))))));
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_666 
	= ((3U == (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
	   | ((0x4003U == (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
	      | ((0x3003U == (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
		 | ((0x1003U == (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
		    | ((0x5003U == (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
		       | ((0x2003U == (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
			  | ((0x6003U == (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
			     | (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_659))))))));
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_valid_inst 
	= ((0x6fU == (0x7fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
	   | ((0x2067U == (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
	      | ((3U == (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
		 | ((0x4003U == (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
		    | ((0x3003U == (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
		       | ((0x1003U == (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
			  | ((0x5003U == (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
			     | ((0x2003U == (0x707fU 
					     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
				| ((0x6003U == (0x707fU 
						& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
				   | ((0x37U == (0x7fU 
						 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
				      | ((0x17U == 
					  (0x7fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
					 | ((0x1033U 
					     == (0xfe00707fU 
						 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
					    | ((0x1013U 
						== 
						(0xfc00707fU 
						 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
					       | ((0x101bU 
						   == 
						   (0xfc00707fU 
						    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
						  | ((0x103bU 
						      == 
						      (0xfe00707fU 
						       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
						     | ((0x2033U 
							 == 
							 (0xfe00707fU 
							  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
							| ((0x2013U 
							    == 
							    (0x707fU 
							     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
							   | ((0x3013U 
							       == 
							       (0x707fU 
								& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
							      | ((0x3033U 
								  == 
								  (0xfe00707fU 
								   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
								 | ((0x40005033U 
								     == 
								     (0xfe00707fU 
								      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
								    | ((0x40005013U 
									== 
									(0xfc00707fU 
									 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
								       | ((0x4000501bU 
									   == 
									   (0xfc00707fU 
									    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
									  | ((0x4000503bU 
									      == 
									      (0xfe00707fU 
									       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
									     | ((0x5033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x5013U 
										== 
										(0xfc00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x501bU 
										== 
										(0xfc00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x503bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x40000033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x4000003bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x4033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x4013U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x6033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x6013U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x33U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x13U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x1bU 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x3bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x7033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x7013U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x23U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x3023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x1023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x2023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x63U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x5063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x7063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x4063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x6063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x1063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x3073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x7073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x2073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x6073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x1073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x5073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x100073U 
										== vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
										| ((0x73U 
										== vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
										| ((0x10500073U 
										== vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
										| ((0x10200073U 
										== vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
										| ((0x30200073U 
										== vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
										| ((0xfU 
										== 
										(0xf00fffffU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x100fU 
										== vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
										| (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_162)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_539 
	= ((0x100073U != vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
	   & ((0x73U != vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
	      & ((0x10500073U != vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
		 & ((0x10200073U != vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
		    & ((0x30200073U != vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
		       & ((0xfU != (0xf00fffffU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
			  & ((0x100fU != vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
			     & (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_162))))))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res 
	= ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_ext_sel))
	    ? (((QData)((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[1U])) 
		<< 0x20U) | (QData)((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U])))
	    : ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_ext_sel))
	        ? ((((0x80U & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U])
		      ? VL_ULL(0xffffffffffffff) : VL_ULL(0)) 
		    << 8U) | (QData)((IData)((0xffU 
					      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U]))))
	        : ((2U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_ext_sel))
		    ? (QData)((IData)((0xffU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U])))
		    : ((3U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_ext_sel))
		        ? ((((0x8000U & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U])
			      ? VL_ULL(0xffffffffffff)
			      : VL_ULL(0)) << 0x10U) 
			   | (QData)((IData)((0xffffU 
					      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U]))))
		        : ((4U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_ext_sel))
			    ? (QData)((IData)((0xffffU 
					       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U])))
			    : ((5U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_ext_sel))
			        ? (((QData)((IData)(
						    ((0x80000000U 
						      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U])
						      ? 0xffffffffU
						      : 0U))) 
				    << 0x20U) | (QData)((IData)(
								vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U])))
			        : ((6U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_ext_sel))
				    ? (QData)((IData)(
						      vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U]))
				    : (((QData)((IData)(
							vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[1U])) 
					<< 0x20U) | (QData)((IData)(
								    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U]))))))))));
    vlTOPp->io_diff_mstatus = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_39;
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9473 
	= (((((((((((((((((((((((((((((((((((((((((
						   ((((((((((((((((((((((((((((((((((((((((((((((((0x300U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_39
										 : VL_ULL(0)) 
										| ((0x301U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
										 ? VL_ULL(0x8000000000001100)
										 : VL_ULL(0))) 
										| ((0x304U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
										 ? (QData)((IData)(
										(((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mie_msi) 
										<< 8U) 
										| ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mie_mti) 
										<< 4U))))
										 : VL_ULL(0))) 
										| ((0x344U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
										 ? (QData)((IData)(
										(((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mip_msi) 
										<< 8U) 
										| ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mip_mti) 
										<< 4U))))
										 : VL_ULL(0))) 
										| ((0x305U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtvec
										 : VL_ULL(0))) 
										| ((0x340U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mscratch
										 : VL_ULL(0))) 
										| ((0x341U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc
										 : VL_ULL(0))) 
										| ((0x342U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcause
										 : VL_ULL(0))) 
										| ((0x343U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtval
										 : VL_ULL(0))) 
										| ((0x3a0U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_pmpcfg0
										 : VL_ULL(0))) 
										| ((0x3a1U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_pmpcfg1
										 : VL_ULL(0))) 
										| ((0xb00U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcycle
										 : VL_ULL(0))) 
										| ((0xb02U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_minstret
										 : VL_ULL(0))) 
										| ((0x320U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcounterinhibit
										 : VL_ULL(0))) 
										| ((0x3b0U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_0
										 : VL_ULL(0))) 
										| ((0x3b1U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_1
										 : VL_ULL(0))) 
										| ((0x3b2U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_2
										 : VL_ULL(0))) 
										| ((0x3b3U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_3
										 : VL_ULL(0))) 
										| ((0x3b4U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_4
										 : VL_ULL(0))) 
									       | ((0x3b5U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_5
										 : VL_ULL(0))) 
									      | ((0x3b6U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_6
										 : VL_ULL(0))) 
									     | ((0x3b7U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_7
										 : VL_ULL(0))) 
									    | ((0x3b8U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
									        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_8
									        : VL_ULL(0))) 
									   | ((0x3b9U 
									       == 
									       (0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
									       ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_9
									       : VL_ULL(0))) 
									  | ((0x3baU 
									      == 
									      (0xfffU 
									       & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
									      ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_10
									      : VL_ULL(0))) 
									 | ((0x3bbU 
									     == 
									     (0xfffU 
									      & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
									     ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_11
									     : VL_ULL(0))) 
									| ((0x3bcU 
									    == 
									    (0xfffU 
									     & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
									    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_12
									    : VL_ULL(0))) 
								       | ((0x3bdU 
									   == 
									   (0xfffU 
									    & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
									       >> 0x14U)))
									   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_13
									   : VL_ULL(0))) 
								      | ((0x3beU 
									  == 
									  (0xfffU 
									   & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
									      >> 0x14U)))
									  ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_14
									  : VL_ULL(0))) 
								     | ((0x3bfU 
									 == 
									 (0xfffU 
									  & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
									     >> 0x14U)))
									 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_15
									 : VL_ULL(0))) 
								    | ((0xb03U 
									== 
									(0xfffU 
									 & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
									    >> 0x14U)))
								        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_0
								        : VL_ULL(0))) 
								   | ((0xb04U 
								       == 
								       (0xfffU 
									& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
									   >> 0x14U)))
								       ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_1
								       : VL_ULL(0))) 
								  | ((0xb05U 
								      == 
								      (0xfffU 
								       & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
									  >> 0x14U)))
								      ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_2
								      : VL_ULL(0))) 
								 | ((0xb06U 
								     == 
								     (0xfffU 
								      & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
									 >> 0x14U)))
								     ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_3
								     : VL_ULL(0))) 
								| ((0xb07U 
								    == 
								    (0xfffU 
								     & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
									>> 0x14U)))
								    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_4
								    : VL_ULL(0))) 
							       | ((0xb08U 
								   == 
								   (0xfffU 
								    & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
								       >> 0x14U)))
								   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_5
								   : VL_ULL(0))) 
							      | ((0xb09U 
								  == 
								  (0xfffU 
								   & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
								      >> 0x14U)))
								  ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_6
								  : VL_ULL(0))) 
							     | ((0xb0aU 
								 == 
								 (0xfffU 
								  & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
								     >> 0x14U)))
								 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_7
								 : VL_ULL(0))) 
							    | ((0xb0bU 
								== 
								(0xfffU 
								 & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
								    >> 0x14U)))
							        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_8
							        : VL_ULL(0))) 
							   | ((0xb0cU 
							       == 
							       (0xfffU 
								& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
								   >> 0x14U)))
							       ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_9
							       : VL_ULL(0))) 
							  | ((0xb0dU 
							      == 
							      (0xfffU 
							       & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
								  >> 0x14U)))
							      ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_10
							      : VL_ULL(0))) 
							 | ((0xb0eU 
							     == 
							     (0xfffU 
							      & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
								 >> 0x14U)))
							     ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_11
							     : VL_ULL(0))) 
							| ((0xb0fU 
							    == 
							    (0xfffU 
							     & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
								>> 0x14U)))
							    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_12
							    : VL_ULL(0))) 
						       | ((0xb10U 
							   == 
							   (0xfffU 
							    & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
							       >> 0x14U)))
							   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_13
							   : VL_ULL(0))) 
						      | ((0xb11U 
							  == 
							  (0xfffU 
							   & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
							      >> 0x14U)))
							  ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_14
							  : VL_ULL(0))) 
						     | ((0xb12U 
							 == 
							 (0xfffU 
							  & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
							     >> 0x14U)))
							 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_15
							 : VL_ULL(0))) 
						    | ((0xb13U 
							== 
							(0xfffU 
							 & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
							    >> 0x14U)))
						        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_16
						        : VL_ULL(0))) 
						   | ((0xb14U 
						       == 
						       (0xfffU 
							& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
							   >> 0x14U)))
						       ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_17
						       : VL_ULL(0))) 
						  | ((0xb15U 
						      == 
						      (0xfffU 
						       & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
							  >> 0x14U)))
						      ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_18
						      : VL_ULL(0))) 
						 | ((0xb16U 
						     == 
						     (0xfffU 
						      & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
							 >> 0x14U)))
						     ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_19
						     : VL_ULL(0))) 
						| ((0xb17U 
						    == 
						    (0xfffU 
						     & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
							>> 0x14U)))
						    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_20
						    : VL_ULL(0))) 
					       | ((0xb18U 
						   == 
						   (0xfffU 
						    & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						       >> 0x14U)))
						   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_21
						   : VL_ULL(0))) 
					      | ((0xb19U 
						  == 
						  (0xfffU 
						   & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						      >> 0x14U)))
						  ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_22
						  : VL_ULL(0))) 
					     | ((0xb1aU 
						 == 
						 (0xfffU 
						  & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						     >> 0x14U)))
						 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_23
						 : VL_ULL(0))) 
					    | ((0xb1bU 
						== 
						(0xfffU 
						 & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						    >> 0x14U)))
					        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_24
					        : VL_ULL(0))) 
					   | ((0xb1cU 
					       == (0xfffU 
						   & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						      >> 0x14U)))
					       ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_25
					       : VL_ULL(0))) 
					  | ((0xb1dU 
					      == (0xfffU 
						  & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						     >> 0x14U)))
					      ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_26
					      : VL_ULL(0))) 
					 | ((0xb1eU 
					     == (0xfffU 
						 & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						    >> 0x14U)))
					     ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_27
					     : VL_ULL(0))) 
					| ((0xb1fU 
					    == (0xfffU 
						& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						   >> 0x14U)))
					    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_28
					    : VL_ULL(0))) 
				       | ((0x323U == 
					   (0xfffU 
					    & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					       >> 0x14U)))
					   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_0
					   : VL_ULL(0))) 
				      | ((0x324U == 
					  (0xfffU & 
					   (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					    >> 0x14U)))
					  ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_1
					  : VL_ULL(0))) 
				     | ((0x325U == 
					 (0xfffU & 
					  (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					   >> 0x14U)))
					 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_2
					 : VL_ULL(0))) 
				    | ((0x326U == (0xfffU 
						   & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						      >> 0x14U)))
				        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_3
				        : VL_ULL(0))) 
				   | ((0x327U == (0xfffU 
						  & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						     >> 0x14U)))
				       ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_4
				       : VL_ULL(0))) 
				  | ((0x328U == (0xfffU 
						 & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						    >> 0x14U)))
				      ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_5
				      : VL_ULL(0))) 
				 | ((0x329U == (0xfffU 
						& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						   >> 0x14U)))
				     ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_6
				     : VL_ULL(0))) 
				| ((0x32aU == (0xfffU 
					       & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						  >> 0x14U)))
				    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_7
				    : VL_ULL(0))) | 
			       ((0x32bU == (0xfffU 
					    & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					       >> 0x14U)))
				 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_8
				 : VL_ULL(0))) | ((0x32cU 
						   == 
						   (0xfffU 
						    & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						       >> 0x14U)))
						   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_9
						   : VL_ULL(0))) 
			     | ((0x32dU == (0xfffU 
					    & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					       >> 0x14U)))
				 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_10
				 : VL_ULL(0))) | ((0x32eU 
						   == 
						   (0xfffU 
						    & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						       >> 0x14U)))
						   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_11
						   : VL_ULL(0))) 
			   | ((0x32fU == (0xfffU & 
					  (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					   >> 0x14U)))
			       ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_12
			       : VL_ULL(0))) | ((0x330U 
						 == 
						 (0xfffU 
						  & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						     >> 0x14U)))
						 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_13
						 : VL_ULL(0))) 
			 | ((0x331U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						  >> 0x14U)))
			     ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_14
			     : VL_ULL(0))) | ((0x332U 
					       == (0xfffU 
						   & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						      >> 0x14U)))
					       ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_15
					       : VL_ULL(0))) 
		       | ((0x333U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						>> 0x14U)))
			   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_16
			   : VL_ULL(0))) | ((0x334U 
					     == (0xfffU 
						 & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						    >> 0x14U)))
					     ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_17
					     : VL_ULL(0))) 
		     | ((0x335U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					      >> 0x14U)))
			 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_18
			 : VL_ULL(0))) | ((0x336U == 
					   (0xfffU 
					    & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					       >> 0x14U)))
					   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_19
					   : VL_ULL(0))) 
		   | ((0x337U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					    >> 0x14U)))
		       ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_20
		       : VL_ULL(0))) | ((0x338U == 
					 (0xfffU & 
					  (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					   >> 0x14U)))
					 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_21
					 : VL_ULL(0))) 
		 | ((0x339U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					  >> 0x14U)))
		     ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_22
		     : VL_ULL(0))) | ((0x33aU == (0xfffU 
						  & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						     >> 0x14U)))
				       ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_23
				       : VL_ULL(0))) 
	       | ((0x33bU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					>> 0x14U)))
		   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_24
		   : VL_ULL(0))) | ((0x33cU == (0xfffU 
						& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						   >> 0x14U)))
				     ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_25
				     : VL_ULL(0))) 
	     | ((0x33dU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U))) ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_26
		 : VL_ULL(0))) | ((0x33eU == (0xfffU 
					      & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						 >> 0x14U)))
				   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_27
				   : VL_ULL(0))) | 
	   ((0x33fU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				  >> 0x14U))) ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_28
	     : VL_ULL(0)));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen 
	= ((((~ (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__write_illgal)) 
	     & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__legalcsrnumber)) 
	    & (~ (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_reg_mem_exception))) 
	   & (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_enable 
	= ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_254) 
	   & (~ (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__read_illegal)));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_illegal_ins_exception 
	= (((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__read_illegal) 
	    | (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__write_illgal)) 
	   | (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_reg_mem_exception));
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_667 
	= ((0x2067U != (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
	   & (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_666));
    vlTOPp->io_diff_is_valid = vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_valid_inst;
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1206 
	= ((0x5073U != (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
	   & (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_539));
}

void Vtop::_settle__TOP__5(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_settle__TOP__5\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res 
	= ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_ext_sel))
	    ? (((QData)((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[1U])) 
		<< 0x20U) | (QData)((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U])))
	    : ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_ext_sel))
	        ? ((((0x80U & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U])
		      ? VL_ULL(0xffffffffffffff) : VL_ULL(0)) 
		    << 8U) | (QData)((IData)((0xffU 
					      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U]))))
	        : ((2U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_ext_sel))
		    ? (QData)((IData)((0xffU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U])))
		    : ((3U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_ext_sel))
		        ? ((((0x8000U & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U])
			      ? VL_ULL(0xffffffffffff)
			      : VL_ULL(0)) << 0x10U) 
			   | (QData)((IData)((0xffffU 
					      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U]))))
		        : ((4U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_ext_sel))
			    ? (QData)((IData)((0xffffU 
					       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U])))
			    : ((5U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_ext_sel))
			        ? (((QData)((IData)(
						    ((0x80000000U 
						      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U])
						      ? 0xffffffffU
						      : 0U))) 
				    << 0x20U) | (QData)((IData)(
								vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U])))
			        : ((6U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_ext_sel))
				    ? (QData)((IData)(
						      vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U]))
				    : (((QData)((IData)(
							vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[1U])) 
					<< 0x20U) | (QData)((IData)(
								    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U]))))))))));
    vlTOPp->io_diff_mstatus = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_39;
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9473 
	= (((((((((((((((((((((((((((((((((((((((((
						   ((((((((((((((((((((((((((((((((((((((((((((((((0x300U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_39
										 : VL_ULL(0)) 
										| ((0x301U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
										 ? VL_ULL(0x8000000000001100)
										 : VL_ULL(0))) 
										| ((0x304U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
										 ? (QData)((IData)(
										(((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mie_msi) 
										<< 8U) 
										| ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mie_mti) 
										<< 4U))))
										 : VL_ULL(0))) 
										| ((0x344U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
										 ? (QData)((IData)(
										(((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mip_msi) 
										<< 8U) 
										| ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mip_mti) 
										<< 4U))))
										 : VL_ULL(0))) 
										| ((0x305U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtvec
										 : VL_ULL(0))) 
										| ((0x340U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mscratch
										 : VL_ULL(0))) 
										| ((0x341U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc
										 : VL_ULL(0))) 
										| ((0x342U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcause
										 : VL_ULL(0))) 
										| ((0x343U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtval
										 : VL_ULL(0))) 
										| ((0x3a0U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_pmpcfg0
										 : VL_ULL(0))) 
										| ((0x3a1U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_pmpcfg1
										 : VL_ULL(0))) 
										| ((0xb00U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcycle
										 : VL_ULL(0))) 
										| ((0xb02U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_minstret
										 : VL_ULL(0))) 
										| ((0x320U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcounterinhibit
										 : VL_ULL(0))) 
										| ((0x3b0U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_0
										 : VL_ULL(0))) 
										| ((0x3b1U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_1
										 : VL_ULL(0))) 
										| ((0x3b2U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_2
										 : VL_ULL(0))) 
										| ((0x3b3U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_3
										 : VL_ULL(0))) 
										| ((0x3b4U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_4
										 : VL_ULL(0))) 
									       | ((0x3b5U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_5
										 : VL_ULL(0))) 
									      | ((0x3b6U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_6
										 : VL_ULL(0))) 
									     | ((0x3b7U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_7
										 : VL_ULL(0))) 
									    | ((0x3b8U 
										== 
										(0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
									        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_8
									        : VL_ULL(0))) 
									   | ((0x3b9U 
									       == 
									       (0xfffU 
										& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
									       ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_9
									       : VL_ULL(0))) 
									  | ((0x3baU 
									      == 
									      (0xfffU 
									       & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
									      ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_10
									      : VL_ULL(0))) 
									 | ((0x3bbU 
									     == 
									     (0xfffU 
									      & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
									     ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_11
									     : VL_ULL(0))) 
									| ((0x3bcU 
									    == 
									    (0xfffU 
									     & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
										>> 0x14U)))
									    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_12
									    : VL_ULL(0))) 
								       | ((0x3bdU 
									   == 
									   (0xfffU 
									    & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
									       >> 0x14U)))
									   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_13
									   : VL_ULL(0))) 
								      | ((0x3beU 
									  == 
									  (0xfffU 
									   & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
									      >> 0x14U)))
									  ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_14
									  : VL_ULL(0))) 
								     | ((0x3bfU 
									 == 
									 (0xfffU 
									  & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
									     >> 0x14U)))
									 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_15
									 : VL_ULL(0))) 
								    | ((0xb03U 
									== 
									(0xfffU 
									 & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
									    >> 0x14U)))
								        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_0
								        : VL_ULL(0))) 
								   | ((0xb04U 
								       == 
								       (0xfffU 
									& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
									   >> 0x14U)))
								       ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_1
								       : VL_ULL(0))) 
								  | ((0xb05U 
								      == 
								      (0xfffU 
								       & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
									  >> 0x14U)))
								      ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_2
								      : VL_ULL(0))) 
								 | ((0xb06U 
								     == 
								     (0xfffU 
								      & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
									 >> 0x14U)))
								     ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_3
								     : VL_ULL(0))) 
								| ((0xb07U 
								    == 
								    (0xfffU 
								     & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
									>> 0x14U)))
								    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_4
								    : VL_ULL(0))) 
							       | ((0xb08U 
								   == 
								   (0xfffU 
								    & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
								       >> 0x14U)))
								   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_5
								   : VL_ULL(0))) 
							      | ((0xb09U 
								  == 
								  (0xfffU 
								   & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
								      >> 0x14U)))
								  ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_6
								  : VL_ULL(0))) 
							     | ((0xb0aU 
								 == 
								 (0xfffU 
								  & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
								     >> 0x14U)))
								 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_7
								 : VL_ULL(0))) 
							    | ((0xb0bU 
								== 
								(0xfffU 
								 & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
								    >> 0x14U)))
							        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_8
							        : VL_ULL(0))) 
							   | ((0xb0cU 
							       == 
							       (0xfffU 
								& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
								   >> 0x14U)))
							       ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_9
							       : VL_ULL(0))) 
							  | ((0xb0dU 
							      == 
							      (0xfffU 
							       & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
								  >> 0x14U)))
							      ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_10
							      : VL_ULL(0))) 
							 | ((0xb0eU 
							     == 
							     (0xfffU 
							      & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
								 >> 0x14U)))
							     ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_11
							     : VL_ULL(0))) 
							| ((0xb0fU 
							    == 
							    (0xfffU 
							     & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
								>> 0x14U)))
							    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_12
							    : VL_ULL(0))) 
						       | ((0xb10U 
							   == 
							   (0xfffU 
							    & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
							       >> 0x14U)))
							   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_13
							   : VL_ULL(0))) 
						      | ((0xb11U 
							  == 
							  (0xfffU 
							   & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
							      >> 0x14U)))
							  ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_14
							  : VL_ULL(0))) 
						     | ((0xb12U 
							 == 
							 (0xfffU 
							  & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
							     >> 0x14U)))
							 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_15
							 : VL_ULL(0))) 
						    | ((0xb13U 
							== 
							(0xfffU 
							 & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
							    >> 0x14U)))
						        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_16
						        : VL_ULL(0))) 
						   | ((0xb14U 
						       == 
						       (0xfffU 
							& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
							   >> 0x14U)))
						       ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_17
						       : VL_ULL(0))) 
						  | ((0xb15U 
						      == 
						      (0xfffU 
						       & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
							  >> 0x14U)))
						      ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_18
						      : VL_ULL(0))) 
						 | ((0xb16U 
						     == 
						     (0xfffU 
						      & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
							 >> 0x14U)))
						     ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_19
						     : VL_ULL(0))) 
						| ((0xb17U 
						    == 
						    (0xfffU 
						     & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
							>> 0x14U)))
						    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_20
						    : VL_ULL(0))) 
					       | ((0xb18U 
						   == 
						   (0xfffU 
						    & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						       >> 0x14U)))
						   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_21
						   : VL_ULL(0))) 
					      | ((0xb19U 
						  == 
						  (0xfffU 
						   & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						      >> 0x14U)))
						  ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_22
						  : VL_ULL(0))) 
					     | ((0xb1aU 
						 == 
						 (0xfffU 
						  & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						     >> 0x14U)))
						 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_23
						 : VL_ULL(0))) 
					    | ((0xb1bU 
						== 
						(0xfffU 
						 & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						    >> 0x14U)))
					        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_24
					        : VL_ULL(0))) 
					   | ((0xb1cU 
					       == (0xfffU 
						   & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						      >> 0x14U)))
					       ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_25
					       : VL_ULL(0))) 
					  | ((0xb1dU 
					      == (0xfffU 
						  & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						     >> 0x14U)))
					      ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_26
					      : VL_ULL(0))) 
					 | ((0xb1eU 
					     == (0xfffU 
						 & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						    >> 0x14U)))
					     ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_27
					     : VL_ULL(0))) 
					| ((0xb1fU 
					    == (0xfffU 
						& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						   >> 0x14U)))
					    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_28
					    : VL_ULL(0))) 
				       | ((0x323U == 
					   (0xfffU 
					    & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					       >> 0x14U)))
					   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_0
					   : VL_ULL(0))) 
				      | ((0x324U == 
					  (0xfffU & 
					   (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					    >> 0x14U)))
					  ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_1
					  : VL_ULL(0))) 
				     | ((0x325U == 
					 (0xfffU & 
					  (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					   >> 0x14U)))
					 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_2
					 : VL_ULL(0))) 
				    | ((0x326U == (0xfffU 
						   & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						      >> 0x14U)))
				        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_3
				        : VL_ULL(0))) 
				   | ((0x327U == (0xfffU 
						  & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						     >> 0x14U)))
				       ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_4
				       : VL_ULL(0))) 
				  | ((0x328U == (0xfffU 
						 & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						    >> 0x14U)))
				      ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_5
				      : VL_ULL(0))) 
				 | ((0x329U == (0xfffU 
						& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						   >> 0x14U)))
				     ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_6
				     : VL_ULL(0))) 
				| ((0x32aU == (0xfffU 
					       & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						  >> 0x14U)))
				    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_7
				    : VL_ULL(0))) | 
			       ((0x32bU == (0xfffU 
					    & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					       >> 0x14U)))
				 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_8
				 : VL_ULL(0))) | ((0x32cU 
						   == 
						   (0xfffU 
						    & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						       >> 0x14U)))
						   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_9
						   : VL_ULL(0))) 
			     | ((0x32dU == (0xfffU 
					    & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					       >> 0x14U)))
				 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_10
				 : VL_ULL(0))) | ((0x32eU 
						   == 
						   (0xfffU 
						    & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						       >> 0x14U)))
						   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_11
						   : VL_ULL(0))) 
			   | ((0x32fU == (0xfffU & 
					  (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					   >> 0x14U)))
			       ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_12
			       : VL_ULL(0))) | ((0x330U 
						 == 
						 (0xfffU 
						  & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						     >> 0x14U)))
						 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_13
						 : VL_ULL(0))) 
			 | ((0x331U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						  >> 0x14U)))
			     ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_14
			     : VL_ULL(0))) | ((0x332U 
					       == (0xfffU 
						   & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						      >> 0x14U)))
					       ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_15
					       : VL_ULL(0))) 
		       | ((0x333U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						>> 0x14U)))
			   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_16
			   : VL_ULL(0))) | ((0x334U 
					     == (0xfffU 
						 & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						    >> 0x14U)))
					     ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_17
					     : VL_ULL(0))) 
		     | ((0x335U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					      >> 0x14U)))
			 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_18
			 : VL_ULL(0))) | ((0x336U == 
					   (0xfffU 
					    & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					       >> 0x14U)))
					   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_19
					   : VL_ULL(0))) 
		   | ((0x337U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					    >> 0x14U)))
		       ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_20
		       : VL_ULL(0))) | ((0x338U == 
					 (0xfffU & 
					  (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					   >> 0x14U)))
					 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_21
					 : VL_ULL(0))) 
		 | ((0x339U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					  >> 0x14U)))
		     ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_22
		     : VL_ULL(0))) | ((0x33aU == (0xfffU 
						  & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						     >> 0x14U)))
				       ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_23
				       : VL_ULL(0))) 
	       | ((0x33bU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					>> 0x14U)))
		   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_24
		   : VL_ULL(0))) | ((0x33cU == (0xfffU 
						& (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						   >> 0x14U)))
				     ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_25
				     : VL_ULL(0))) 
	     | ((0x33dU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				      >> 0x14U))) ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_26
		 : VL_ULL(0))) | ((0x33eU == (0xfffU 
					      & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
						 >> 0x14U)))
				   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_27
				   : VL_ULL(0))) | 
	   ((0x33fU == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
				  >> 0x14U))) ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_28
	     : VL_ULL(0)));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen 
	= ((((~ (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__write_illgal)) 
	     & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__legalcsrnumber)) 
	    & (~ (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_reg_mem_exception))) 
	   & (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_enable 
	= ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_254) 
	   & (~ (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__read_illegal)));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_illegal_ins_exception 
	= (((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__read_illegal) 
	    | (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__write_illgal)) 
	   | (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_reg_mem_exception));
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_667 
	= ((0x2067U != (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
	   & (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_666));
    vlTOPp->io_diff_is_valid = vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_valid_inst;
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1206 
	= ((0x5073U != (0x707fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
	   & (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_539));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_data 
	= ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_enable)
	    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9473
	    : VL_ULL(0));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___GEN_241 
	= ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_illegal_ins_exception)
	    ? (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie)
	    : ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall)
	        ? (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie)
	        : ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak)
		    ? (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie)
		    : (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasexception 
	= (((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_illegal_ins_exception) 
	    | (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall)) 
	   | (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak));
    vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard 
	= (((IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_is_load) 
	    | (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_is_csr)) 
	   & ((((IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_rd_addr) 
		== (0x1fU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
			     >> 0xfU))) & ((0x6fU != 
					    (0x7fU 
					     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
					   & ((0x2067U 
					       == (0x707fU 
						   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
					      | ((3U 
						  == 
						  (0x707fU 
						   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
						 | ((0x4003U 
						     == 
						     (0x707fU 
						      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
						    | ((0x3003U 
							== 
							(0x707fU 
							 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
						       | ((0x1003U 
							   == 
							   (0x707fU 
							    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
							  | ((0x5003U 
							      == 
							      (0x707fU 
							       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
							     | ((0x2003U 
								 == 
								 (0x707fU 
								  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
								| ((0x6003U 
								    == 
								    (0x707fU 
								     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
								   | ((0x37U 
								       != 
								       (0x7fU 
									& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
								      & ((0x17U 
									  != 
									  (0x7fU 
									   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
									 & ((0x1033U 
									     == 
									     (0xfe00707fU 
									      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
									    | ((0x1013U 
										== 
										(0xfc00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
									       | ((0x101bU 
										== 
										(0xfc00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x103bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x2033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x2013U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x3013U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x3033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x40005033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x40005013U 
										== 
										(0xfc00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x4000501bU 
										== 
										(0xfc00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x4000503bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x5033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x5013U 
										== 
										(0xfc00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x501bU 
										== 
										(0xfc00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x503bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x40000033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x4000003bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x4033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x4013U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x6033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x6013U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x33U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x13U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x1bU 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x3bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x7033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x7013U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x23U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x3023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x1023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x2023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x63U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x5063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x7063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x4063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x6063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x1063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x3073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x7073U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x2073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x6073U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x1073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1206)))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
	      | (((IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_rd_addr) 
		  == (0x1fU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
			       >> 0x14U))) & ((0x6fU 
					       != (0x7fU 
						   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
					      & ((0x2067U 
						  != 
						  (0x707fU 
						   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
						 & ((3U 
						     != 
						     (0x707fU 
						      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
						    & ((0x4003U 
							!= 
							(0x707fU 
							 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
						       & ((0x3003U 
							   != 
							   (0x707fU 
							    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
							  & ((0x1003U 
							      != 
							      (0x707fU 
							       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
							     & ((0x5003U 
								 != 
								 (0x707fU 
								  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
								& ((0x2003U 
								    != 
								    (0x707fU 
								     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
								   & ((0x6003U 
								       != 
								       (0x707fU 
									& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
								      & ((0x37U 
									  != 
									  (0x7fU 
									   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
									 & ((0x17U 
									     != 
									     (0x7fU 
									      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
									    & ((0x1033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
									       | ((0x1013U 
										!= 
										(0xfc00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x101bU 
										!= 
										(0xfc00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x103bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x2033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x2013U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x3013U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x3033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x40005033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x40005013U 
										!= 
										(0xfc00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x4000501bU 
										!= 
										(0xfc00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x4000503bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x5033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x5013U 
										!= 
										(0xfc00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x501bU 
										!= 
										(0xfc00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x503bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x40000033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x4000003bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x4033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x4013U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x6033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x6013U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x33U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x13U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x1bU 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x3bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x7033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x7013U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x23U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x3023U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x1023U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x2023U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x63U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x5063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x7063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x4063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x6063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x1063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x3073U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x7073U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x2073U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x6073U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x1073U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1206))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void Vtop::_sequent__TOP__6(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_sequent__TOP__6\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_data 
	= ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_enable)
	    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9473
	    : VL_ULL(0));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___GEN_241 
	= ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_illegal_ins_exception)
	    ? (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie)
	    : ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall)
	        ? (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie)
	        : ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak)
		    ? (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie)
		    : (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasexception 
	= (((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_illegal_ins_exception) 
	    | (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall)) 
	   | (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak));
    vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard 
	= (((IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_is_load) 
	    | (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_is_csr)) 
	   & ((((IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_rd_addr) 
		== (0x1fU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
			     >> 0xfU))) & ((0x6fU != 
					    (0x7fU 
					     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
					   & ((0x2067U 
					       == (0x707fU 
						   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
					      | ((3U 
						  == 
						  (0x707fU 
						   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
						 | ((0x4003U 
						     == 
						     (0x707fU 
						      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
						    | ((0x3003U 
							== 
							(0x707fU 
							 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
						       | ((0x1003U 
							   == 
							   (0x707fU 
							    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
							  | ((0x5003U 
							      == 
							      (0x707fU 
							       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
							     | ((0x2003U 
								 == 
								 (0x707fU 
								  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
								| ((0x6003U 
								    == 
								    (0x707fU 
								     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
								   | ((0x37U 
								       != 
								       (0x7fU 
									& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
								      & ((0x17U 
									  != 
									  (0x7fU 
									   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
									 & ((0x1033U 
									     == 
									     (0xfe00707fU 
									      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
									    | ((0x1013U 
										== 
										(0xfc00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
									       | ((0x101bU 
										== 
										(0xfc00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x103bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x2033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x2013U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x3013U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x3033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x40005033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x40005013U 
										== 
										(0xfc00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x4000501bU 
										== 
										(0xfc00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x4000503bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x5033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x5013U 
										== 
										(0xfc00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x501bU 
										== 
										(0xfc00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x503bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x40000033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x4000003bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x4033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x4013U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x6033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x6013U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x33U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x13U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x1bU 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x3bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x7033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x7013U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x23U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x3023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x1023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x2023U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x63U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x5063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x7063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x4063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x6063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x1063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x3073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x7073U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x2073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x6073U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x1073U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1206)))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
	      | (((IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_rd_addr) 
		  == (0x1fU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
			       >> 0x14U))) & ((0x6fU 
					       != (0x7fU 
						   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
					      & ((0x2067U 
						  != 
						  (0x707fU 
						   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
						 & ((3U 
						     != 
						     (0x707fU 
						      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
						    & ((0x4003U 
							!= 
							(0x707fU 
							 & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
						       & ((0x3003U 
							   != 
							   (0x707fU 
							    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
							  & ((0x1003U 
							      != 
							      (0x707fU 
							       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
							     & ((0x5003U 
								 != 
								 (0x707fU 
								  & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
								& ((0x2003U 
								    != 
								    (0x707fU 
								     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
								   & ((0x6003U 
								       != 
								       (0x707fU 
									& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
								      & ((0x37U 
									  != 
									  (0x7fU 
									   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
									 & ((0x17U 
									     != 
									     (0x7fU 
									      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
									    & ((0x1033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
									       | ((0x1013U 
										!= 
										(0xfc00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x101bU 
										!= 
										(0xfc00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x103bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x2033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x2013U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x3013U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x3033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x40005033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x40005013U 
										!= 
										(0xfc00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x4000501bU 
										!= 
										(0xfc00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x4000503bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x5033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x5013U 
										!= 
										(0xfc00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x501bU 
										!= 
										(0xfc00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x503bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x40000033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x4000003bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x4033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x4013U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x6033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x6013U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x33U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x13U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x1bU 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x3bU 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x7033U 
										== 
										(0xfe00707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x7013U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x23U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x3023U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x1023U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x2023U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x63U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x5063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x7063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x4063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x6063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x1063U 
										== 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										| ((0x3073U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x7073U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x2073U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x6073U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& ((0x1073U 
										!= 
										(0x707fU 
										& vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1206))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9477 
	= (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out 
	   | vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_data);
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9480 
	= (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out 
	   & (~ vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_data));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_17734 
	= ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasexception) 
	   | (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasinterrupt));
}

void Vtop::_settle__TOP__7(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_settle__TOP__7\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9477 
	= (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out 
	   | vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_data);
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9480 
	= (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out 
	   & (~ vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_data));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_17734 
	= ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasexception) 
	   | (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasinterrupt));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data 
	= ((2U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op))
	    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out
	    : ((4U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op))
	        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9477
	        : ((3U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op))
		    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9480
		    : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_data)));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir 
	= ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_17734) 
	   | (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_ismret));
}

VL_INLINE_OPT void Vtop::_sequent__TOP__8(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_sequent__TOP__8\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data 
	= ((2U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op))
	    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out
	    : ((4U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op))
	        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9477
	        : ((3U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op))
		    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9480
		    : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_data)));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir 
	= ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_17734) 
	   | (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_ismret));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___GEN_92 
	= (1U & ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen)
		  ? ((0x300U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					   >> 0x14U)))
		      ? (IData)((vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data 
				 >> 7U)) : (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie))
		  : (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie)));
    vlTOPp->io_diff_isredir = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir;
    vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel 
	= ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)
	    ? 4U : (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1360));
}

void Vtop::_settle__TOP__9(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_settle__TOP__9\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp211,95,0,3);
    // Body
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___GEN_92 
	= (1U & ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen)
		  ? ((0x300U == (0xfffU & (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
					   >> 0x14U)))
		      ? (IData)((vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data 
				 >> 7U)) : (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie))
		  : (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie)));
    vlTOPp->io_diff_isredir = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir;
    vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel 
	= ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)
	    ? 4U : (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1360));
    VL_EXTEND_WQ(66,64, __Vtemp211, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_iim_ext);
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___GEN_96[0U] 
	= ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)
	    ? 0U : ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379)
		     ? ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)
			 ? 0U : ((0U != (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
				  ? 0U : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_dec_iim_ext[0U]))
		     : __Vtemp211[0U]));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___GEN_96[1U] 
	= ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)
	    ? 0U : ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379)
		     ? ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)
			 ? 0U : ((0U != (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
				  ? 0U : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_dec_iim_ext[1U]))
		     : __Vtemp211[1U]));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___GEN_96[2U] 
	= ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)
	    ? 0U : ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379)
		     ? ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)
			 ? 0U : ((0U != (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
				  ? 0U : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_dec_iim_ext[2U]))
		     : __Vtemp211[2U]));
}

VL_INLINE_OPT void Vtop::_sequent__TOP__10(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_sequent__TOP__10\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp220,95,0,3);
    // Body
    VL_EXTEND_WQ(66,64, __Vtemp220, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_iim_ext);
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___GEN_96[0U] 
	= ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)
	    ? 0U : ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379)
		     ? ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)
			 ? 0U : ((0U != (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
				  ? 0U : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_dec_iim_ext[0U]))
		     : __Vtemp220[0U]));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___GEN_96[1U] 
	= ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)
	    ? 0U : ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379)
		     ? ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)
			 ? 0U : ((0U != (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
				  ? 0U : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_dec_iim_ext[1U]))
		     : __Vtemp220[1U]));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___GEN_96[2U] 
	= ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)
	    ? 0U : ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1379)
		     ? ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)
			 ? 0U : ((0U != (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
				  ? 0U : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_dec_iim_ext[2U]))
		     : __Vtemp220[2U]));
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_eval\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__2(vlSymsp);
	vlTOPp->_sequent__TOP__4(vlSymsp);
	vlTOPp->_sequent__TOP__6(vlSymsp);
	vlTOPp->_sequent__TOP__8(vlSymsp);
	vlTOPp->_sequent__TOP__10(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_eval_initial\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
}

void Vtop::final() {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::final\n"); );
    // Variables
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop::_eval_settle(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_eval_settle\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->_settle__TOP__5(vlSymsp);
    vlTOPp->_settle__TOP__7(vlSymsp);
    vlTOPp->_settle__TOP__9(vlSymsp);
}

VL_INLINE_OPT QData Vtop::_change_request(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_change_request\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
