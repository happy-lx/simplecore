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
    io_diff_rf_wen = VL_RAND_RESET_I(1);
    io_diff_rf_cp_wen = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__cpath_io_c2d_cp_op1_sel = VL_RAND_RESET_I(2);
    v__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel = VL_RAND_RESET_I(2);
    v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel = VL_RAND_RESET_I(5);
    v__DOT__mycore__DOT__cpath_io_c2d_cp_reg_wen = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__cpath_io_c2d_cp_mem_read_op = VL_RAND_RESET_I(3);
    v__DOT__mycore__DOT__cpath_io_c2d_cp_mem_write_mask = VL_RAND_RESET_I(8);
    v__DOT__mycore__DOT__cpath_io_c2d_cp_mem_wen = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_ext_sel = VL_RAND_RESET_I(3);
    v__DOT__mycore__DOT__cpath_io_c2d_cp_wb_sel = VL_RAND_RESET_I(2);
    v__DOT__mycore__DOT__cpath_io_c2d_cp_csr_op = VL_RAND_RESET_I(3);
    v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp1_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp2_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__reg_pc = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__temp_pc_next_4 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(66,v__DOT__mycore__DOT__dpath__DOT___T_82);
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
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_illegal_ins_exception = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_ismret = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasexception = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_17726 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasinterrupt = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__dpath__DOT__csr__DOT__prv_now = VL_RAND_RESET_I(2);
    v__DOT__mycore__DOT__cpath__DOT___T_162 = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__cpath__DOT__cs_valid_inst = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__cpath__DOT___T_659 = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__cpath__DOT___T_667 = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__cpath__DOT__cs_mem_valid = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__cpath__DOT___T_1144 = VL_RAND_RESET_I(1);
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
    // INITIAL at top.v:4018
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
    //char	__VpadToAlign58[2];
    VL_SIG(__Vdlyvdim0__v__DOT__mycore__DOT__mymem__DOT__mem__v0,23,0);
    VL_SIG(__Vdlyvdim0__v__DOT__mycore__DOT__mymem__DOT__mem__v1,23,0);
    VL_SIG(__Vdlyvdim0__v__DOT__mycore__DOT__mymem__DOT__mem__v2,23,0);
    VL_SIG(__Vdlyvdim0__v__DOT__mycore__DOT__mymem__DOT__mem__v3,23,0);
    VL_SIG(__Vdlyvdim0__v__DOT__mycore__DOT__mymem__DOT__mem__v4,23,0);
    VL_SIG(__Vdlyvdim0__v__DOT__mycore__DOT__mymem__DOT__mem__v5,23,0);
    VL_SIG(__Vdlyvdim0__v__DOT__mycore__DOT__mymem__DOT__mem__v6,23,0);
    VL_SIG(__Vdlyvdim0__v__DOT__mycore__DOT__mymem__DOT__mem__v7,23,0);
    //char	__VpadToAlign92[4];
    VL_SIG64(__Vdlyvval__v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs__v0,63,0);
    // Body
    __Vdlyvset__v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs__v0 = 0U;
    __Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v0 = 0U;
    __Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v1 = 0U;
    __Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v2 = 0U;
    __Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v3 = 0U;
    __Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v4 = 0U;
    __Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v5 = 0U;
    __Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v6 = 0U;
    __Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v7 = 0U;
    // ALWAYS at top.v:1456
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mip_mti 
	= (1U & (~ (IData)(vlTOPp->reset)));
    // ALWAYS at top.v:1490
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp = 0U;
    } else {
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
    // ALWAYS at top.v:1434
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mie_msi = 0U;
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x304U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mie_msi 
		    = (1U & (IData)((vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data 
				     >> 8U)));
	    }
	}
    }
    // ALWAYS at top.v:1448
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mip_msi = 0U;
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x344U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mip_msi 
		    = (1U & (IData)((vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data 
				     >> 8U)));
	    }
	}
    }
    // ALWAYS at top.v:1607
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_pmpcfg0 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x3a0U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_pmpcfg0 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1614
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_pmpcfg1 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x3a1U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_pmpcfg1 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1621
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_0 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x3b0U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_0 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1628
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_1 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x3b1U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_1 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1635
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_2 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x3b2U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_2 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1642
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_3 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x3b3U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_3 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1649
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_4 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x3b4U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_4 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1656
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_5 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x3b5U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_5 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1663
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_6 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x3b6U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_6 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1670
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_7 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x3b7U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_7 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1677
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_8 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x3b8U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_8 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1684
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_9 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x3b9U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_9 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1691
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_10 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x3baU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_10 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1698
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_11 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x3bbU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_11 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1705
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_12 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x3bcU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_12 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1712
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_13 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x3bdU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_13 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1719
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_14 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x3beU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_14 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1726
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_15 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x3bfU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_15 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1733
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcycle = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb00U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcycle 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1749
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_0 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb03U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_0 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1756
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_1 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb04U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_1 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1763
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_2 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb05U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_2 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1770
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_3 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb06U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_3 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1777
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_4 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb07U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_4 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1784
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_5 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb08U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_5 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1791
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_6 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb09U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_6 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1798
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_7 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb0aU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_7 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1805
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_8 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb0bU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_8 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1812
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_9 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb0cU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_9 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1819
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_10 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb0dU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_10 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1826
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_11 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb0eU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_11 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1833
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_12 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb0fU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_12 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1840
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_13 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb10U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_13 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1847
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_14 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb11U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_14 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1854
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_15 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb12U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_15 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1861
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_16 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb13U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_16 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1868
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_17 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb14U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_17 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1875
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_18 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb15U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_18 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1882
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_19 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb16U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_19 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1889
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_20 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb17U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_20 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1896
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_21 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb18U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_21 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1903
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_22 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb19U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_22 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1910
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_23 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb1aU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_23 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1917
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_24 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb1bU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_24 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1924
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_25 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb1cU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_25 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1931
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_26 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb1dU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_26 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1938
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_27 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb1eU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_27 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1945
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_28 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0xb1fU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_28 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1952
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcounterinhibit = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x320U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcounterinhibit 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1959
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_0 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x323U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_0 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1966
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_1 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x324U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_1 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1973
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_2 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x325U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_2 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1980
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_3 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x326U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_3 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1987
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_4 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x327U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_4 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1994
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_5 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x328U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_5 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:2001
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_6 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x329U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_6 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:2008
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_7 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x32aU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_7 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:2015
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_8 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x32bU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_8 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:2022
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_9 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x32cU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_9 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:2029
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_10 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x32dU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_10 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:2036
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_11 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x32eU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_11 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:2043
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_12 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x32fU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_12 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:2050
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_13 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x330U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_13 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:2057
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_14 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x331U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_14 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:2064
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_15 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x332U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_15 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:2071
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_16 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x333U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_16 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:2078
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_17 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x334U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_17 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:2085
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_18 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x335U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_18 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:2092
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_19 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x336U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_19 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:2099
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_20 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x337U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_20 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:2106
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_21 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x338U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_21 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:2113
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_22 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x339U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_22 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:2120
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_23 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x33aU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_23 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:2127
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_24 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x33bU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_24 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:2134
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_25 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x33cU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_25 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:2141
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_26 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x33dU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_26 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:2148
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_27 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x33eU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_27 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:2155
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_28 = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x33fU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_28 
		    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
	    }
	}
    }
    // ALWAYS at top.v:1441
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mie_mti = 0U;
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x304U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mie_mti 
		    = (1U & (IData)((vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data 
				     >> 4U)));
	    }
	}
    }
    // ALWAYS at top.v:1740
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_minstret = VL_ULL(0);
    } else {
	if (((IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1144) 
	     & (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_valid_inst))) {
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_minstret 
		= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_17726;
	} else {
	    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
		if ((0xb02U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						  >> 0x14U))))) {
		    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_minstret 
			= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
		}
	    }
	}
    }
    // ALWAYS at top.v:1355
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtvec = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x305U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtvec 
		    = ((2U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_csr_op))
		        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res
		        : ((4U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_csr_op))
			    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9477
			    : ((3U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_csr_op))
			        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9480
			        : ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_enable)
				    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9473
				    : VL_ULL(0)))));
	    }
	}
    }
    // ALWAYS at top.v:1473
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mscratch = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
	    if ((0x340U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) {
		vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mscratch 
		    = ((2U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_csr_op))
		        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res
		        : ((4U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_csr_op))
			    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9477
			    : ((3U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_csr_op))
			        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9480
			        : ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_enable)
				    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9473
				    : VL_ULL(0)))));
	    }
	}
    }
    // ALWAYS at top.v:1393
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
						& (IData)(
							  (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							   >> 0x14U))))) {
				    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcause 
					= ((2U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_csr_op))
					    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res
					    : ((4U 
						== (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_csr_op))
					        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9477
					        : (
						   (3U 
						    == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_csr_op))
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
		    if ((0x342U == (0xfffU & (IData)(
						     (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						      >> 0x14U))))) {
			vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcause 
			    = ((2U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_csr_op))
			        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res
			        : ((4U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_csr_op))
				    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9477
				    : ((3U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_csr_op))
				        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9480
				        : ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_enable)
					    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9473
					    : VL_ULL(0)))));
		    }
		}
	    }
	}
    }
    // ALWAYS at top.v:1529
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie = 0U;
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasinterrupt) {
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie 
		= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie;
	} else {
	    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasexception) {
		if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_illegal_ins_exception) {
		    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_illegal_ins_exception) {
			vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie 
			    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie;
		    } else {
			if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall) {
			    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie 
				= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie;
			} else {
			    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak) {
				vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie 
				    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie;
			    }
			}
		    }
		} else {
		    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall) {
			if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_illegal_ins_exception) {
			    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie 
				= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie;
			} else {
			    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall) {
				vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie 
				    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie;
			    } else {
				if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak) {
				    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie 
					= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie;
				}
			    }
			}
		    } else {
			if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak) {
			    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_illegal_ins_exception) {
				vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie 
				    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie;
			    } else {
				if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall) {
				    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie 
					= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie;
				} else {
				    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak) {
					vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie 
					    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie;
				    }
				}
			    }
			} else {
			    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
				if ((0x300U == (0xfffU 
						& (IData)(
							  (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							   >> 0x14U))))) {
				    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie 
					= (1U & (IData)(
							(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data 
							 >> 7U)));
				}
			    }
			}
		    }
		}
	    } else {
		if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
		    if ((0x300U == (0xfffU & (IData)(
						     (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						      >> 0x14U))))) {
			vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie 
			    = (1U & (IData)((vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data 
					     >> 7U)));
		    }
		}
	    }
	}
    }
    // ALWAYS at top.v:1460
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtval = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasinterrupt) {
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtval 
		= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_pc;
	} else {
	    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasexception) {
		if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_illegal_ins_exception) {
		    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtval 
			= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_pc;
		} else {
		    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall) {
			vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtval 
			    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_pc;
		    } else {
			if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak) {
			    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtval 
				= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_pc;
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at top.v:1372
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasinterrupt) {
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc 
		= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_pc;
	} else {
	    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasexception) {
		if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_illegal_ins_exception) {
		    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc 
			= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_pc;
		} else {
		    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall) {
			vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc 
			    = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_pc;
		    } else {
			if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak) {
			    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc 
				= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_pc;
			} else {
			    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
				if ((0x341U == (0xfffU 
						& (IData)(
							  (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							   >> 0x14U))))) {
				    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc 
					= (VL_ULL(0xfffffffffffffffc) 
					   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data);
				}
			    }
			}
		    }
		}
	    } else {
		if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
		    if ((0x341U == (0xfffU & (IData)(
						     (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						      >> 0x14U))))) {
			vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc 
			    = (VL_ULL(0xfffffffffffffffc) 
			       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data);
		    }
		}
	    }
	}
    }
    // ALWAYS at top.v:305
    if ((((IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_valid_inst) 
	  & (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1144)) 
	 & (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_reg_wen))) {
	__Vdlyvval__v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs__v0 
	    = ((0U == (0x1fU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					>> 7U)))) ? VL_ULL(0)
	        : ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_wb_sel))
		    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res
		    : ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_wb_sel))
		        ? ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_mem_read_op))
			    ? ((((0x80U & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_112_data))
				  ? VL_ULL(0xffffffffffffff)
				  : VL_ULL(0)) << 8U) 
			       | (QData)((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_112_data)))
			    : ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_mem_read_op))
			        ? (QData)((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_112_data))
			        : ((2U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_mem_read_op))
				    ? ((((0x80U & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_114_data))
					  ? VL_ULL(0xffffffffffff)
					  : VL_ULL(0)) 
					<< 0x10U) | (QData)((IData)(
								    (((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_114_data) 
								      << 8U) 
								     | (IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_112_data)))))
				    : ((3U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_mem_read_op))
				        ? (((QData)((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_114_data)) 
					    << 8U) 
					   | (QData)((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_112_data)))
				        : ((4U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_mem_read_op))
					    ? (((QData)((IData)(
								((0x80U 
								  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_118_data))
								  ? 0xffffffffU
								  : 0U))) 
						<< 0x20U) 
					       | (QData)((IData)(
								 (((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_118_data) 
								   << 0x18U) 
								  | (((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_116_data) 
								      << 0x10U) 
								     | (((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_114_data) 
									 << 8U) 
									| (IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_112_data)))))))
					    : ((5U 
						== (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_mem_read_op))
					        ? (
						   ((QData)((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_118_data)) 
						    << 0x18U) 
						   | (QData)((IData)(
								     (((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_116_data) 
								       << 0x10U) 
								      | (((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_114_data) 
									  << 8U) 
									 | (IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_112_data))))))
					        : (
						   ((QData)((IData)(
								    (((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_126_data) 
								      << 0x18U) 
								     | (((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_124_data) 
									 << 0x10U) 
									| (((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_122_data) 
									    << 8U) 
									   | (IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_120_data)))))) 
						    << 0x20U) 
						   | (QData)((IData)(
								     (((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_118_data) 
								       << 0x18U) 
								      | (((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_116_data) 
									  << 0x10U) 
									 | (((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_114_data) 
									     << 8U) 
									    | (IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_112_data)))))))))))))
		        : ((2U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_wb_sel))
			    ? (VL_ULL(4) + vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_pc)
			    : ((3U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_wb_sel))
			        ? ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_enable)
				    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9473
				    : VL_ULL(0)) : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res)))));
	__Vdlyvset__v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs__v0 = 1U;
	__Vdlyvdim0__v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs__v0 
	    = (0x1fU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
				>> 7U)));
    }
    // ALWAYS at top.v:3513
    if (((IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_mem_valid) 
	 & ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_mem_wen) 
	    & (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_mem_write_mask)))) {
	__Vdlyvval__v__DOT__mycore__DOT__mymem__DOT__mem__v0 
	    = (0xffU & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp2_data));
	__Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v0 = 1U;
	__Vdlyvdim0__v__DOT__mycore__DOT__mymem__DOT__mem__v0 
	    = (0xffffffU & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res));
    }
    if (((IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_mem_valid) 
	 & ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_mem_wen) 
	    & ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_mem_write_mask) 
	       >> 1U)))) {
	__Vdlyvval__v__DOT__mycore__DOT__mymem__DOT__mem__v1 
	    = (0xffU & (IData)((vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp2_data 
				>> 8U)));
	__Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v1 = 1U;
	__Vdlyvdim0__v__DOT__mycore__DOT__mymem__DOT__mem__v1 
	    = (0xffffffU & ((IData)(1U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res)));
    }
    if (((IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_mem_valid) 
	 & ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_mem_wen) 
	    & ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_mem_write_mask) 
	       >> 2U)))) {
	__Vdlyvval__v__DOT__mycore__DOT__mymem__DOT__mem__v2 
	    = (0xffU & (IData)((vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp2_data 
				>> 0x10U)));
	__Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v2 = 1U;
	__Vdlyvdim0__v__DOT__mycore__DOT__mymem__DOT__mem__v2 
	    = (0xffffffU & ((IData)(2U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res)));
    }
    if (((IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_mem_valid) 
	 & ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_mem_wen) 
	    & ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_mem_write_mask) 
	       >> 3U)))) {
	__Vdlyvval__v__DOT__mycore__DOT__mymem__DOT__mem__v3 
	    = (0xffU & (IData)((vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp2_data 
				>> 0x18U)));
	__Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v3 = 1U;
	__Vdlyvdim0__v__DOT__mycore__DOT__mymem__DOT__mem__v3 
	    = (0xffffffU & ((IData)(3U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res)));
    }
    if (((IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_mem_valid) 
	 & ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_mem_wen) 
	    & ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_mem_write_mask) 
	       >> 4U)))) {
	__Vdlyvval__v__DOT__mycore__DOT__mymem__DOT__mem__v4 
	    = (0xffU & (IData)((vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp2_data 
				>> 0x20U)));
	__Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v4 = 1U;
	__Vdlyvdim0__v__DOT__mycore__DOT__mymem__DOT__mem__v4 
	    = (0xffffffU & ((IData)(4U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res)));
    }
    if (((IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_mem_valid) 
	 & ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_mem_wen) 
	    & ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_mem_write_mask) 
	       >> 5U)))) {
	__Vdlyvval__v__DOT__mycore__DOT__mymem__DOT__mem__v5 
	    = (0xffU & (IData)((vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp2_data 
				>> 0x28U)));
	__Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v5 = 1U;
	__Vdlyvdim0__v__DOT__mycore__DOT__mymem__DOT__mem__v5 
	    = (0xffffffU & ((IData)(5U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res)));
    }
    if (((IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_mem_valid) 
	 & ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_mem_wen) 
	    & ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_mem_write_mask) 
	       >> 6U)))) {
	__Vdlyvval__v__DOT__mycore__DOT__mymem__DOT__mem__v6 
	    = (0xffU & (IData)((vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp2_data 
				>> 0x30U)));
	__Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v6 = 1U;
	__Vdlyvdim0__v__DOT__mycore__DOT__mymem__DOT__mem__v6 
	    = (0xffffffU & ((IData)(6U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res)));
    }
    if (((IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_mem_valid) 
	 & ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_mem_wen) 
	    & ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_mem_write_mask) 
	       >> 7U)))) {
	__Vdlyvval__v__DOT__mycore__DOT__mymem__DOT__mem__v7 
	    = (0xffU & (IData)((vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp2_data 
				>> 0x38U)));
	__Vdlyvset__v__DOT__mycore__DOT__mymem__DOT__mem__v7 = 1U;
	__Vdlyvdim0__v__DOT__mycore__DOT__mymem__DOT__mem__v7 
	    = (0xffffffU & ((IData)(7U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res)));
    }
    // ALWAYSPOST at top.v:307
    if (__Vdlyvset__v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs__v0) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs[__Vdlyvdim0__v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs__v0] 
	    = __Vdlyvval__v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs__v0;
    }
    // ALWAYSPOST at top.v:3539
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
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_17726 
	= (VL_ULL(1) + vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_minstret);
    // ALWAYS at top.v:1568
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie = 0U;
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasinterrupt) {
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie = 0U;
	} else {
	    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasexception) {
		if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_illegal_ins_exception) {
		    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_illegal_ins_exception) {
			vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie = 0U;
		    } else {
			if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall) {
			    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie = 0U;
			} else {
			    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak) {
				vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie = 0U;
			    }
			}
		    }
		} else {
		    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall) {
			if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_illegal_ins_exception) {
			    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie = 0U;
			} else {
			    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall) {
				vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie = 0U;
			    } else {
				if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak) {
				    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie = 0U;
				}
			    }
			}
		    } else {
			if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak) {
			    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_illegal_ins_exception) {
				vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie = 0U;
			    } else {
				if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall) {
				    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie = 0U;
				} else {
				    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak) {
					vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie = 0U;
				    }
				}
			    }
			} else {
			    if (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
				if ((0x300U == (0xfffU 
						& (IData)(
							  (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							   >> 0x14U))))) {
				    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie 
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
		    if ((0x300U == (0xfffU & (IData)(
						     (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						      >> 0x14U))))) {
			vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie 
			    = (1U & (IData)((vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data 
					     >> 3U)));
		    }
		}
	    }
	}
    }
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
    // ALWAYS at top.v:2486
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_pc = VL_ULL(0x80000000);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1144) {
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_pc 
		= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__temp_pc_next_4;
	}
    }
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasinterrupt 
	= (((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mip_mti) 
	    & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mie_mti)) 
	   & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie));
    vlTOPp->io_diff_pc_data = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_pc;
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__temp_pc_next_4 
	= (VL_ULL(4) + vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_pc);
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_96_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_pc))];
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_98_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & ((IData)(1U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_pc)))];
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_100_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & ((IData)(2U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_pc)))];
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_102_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & ((IData)(3U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_pc)))];
}

void Vtop::_settle__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_settle__TOP__3\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_17726 
	= (VL_ULL(1) + vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_minstret);
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
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasinterrupt 
	= (((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mip_mti) 
	    & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mie_mti)) 
	   & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie));
    vlTOPp->io_diff_pc_data = vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_pc;
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__temp_pc_next_4 
	= (VL_ULL(4) + vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_pc);
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_96_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_pc))];
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_98_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & ((IData)(1U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_pc)))];
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_100_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & ((IData)(2U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_pc)))];
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_102_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & ((IData)(3U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_pc)))];
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
    vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
	= ((((QData)((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_102_data)) 
	     << 0x18U) | ((QData)((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_100_data)) 
			  << 0x10U)) | (QData)((IData)(
						       (((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_98_data) 
							 << 8U) 
							| (IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_96_data)))));
}

VL_INLINE_OPT void Vtop::_sequent__TOP__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_sequent__TOP__4\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
    vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
	= ((((QData)((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_102_data)) 
	     << 0x18U) | ((QData)((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_100_data)) 
			  << 0x10U)) | (QData)((IData)(
						       (((IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_98_data) 
							 << 8U) 
							| (IData)(vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_96_data)))));
    vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_mem_read_op 
	= ((0x6fU == (0x7fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
	    ? 0U : ((0x2067U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
		     ? 0U : ((3U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
			      ? 0U : ((0x4003U == (0x707fU 
						   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
				       ? 1U : ((0x3003U 
						== 
						(0x707fU 
						 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
					        ? 6U
					        : (
						   (0x1003U 
						    == 
						    (0x707fU 
						     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						    ? 2U
						    : 
						   ((0x5003U 
						     == 
						     (0x707fU 
						      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						     ? 3U
						     : 
						    ((0x2003U 
						      == 
						      (0x707fU 
						       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						      ? 4U
						      : 
						     ((0x6003U 
						       == 
						       (0x707fU 
							& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						       ? 5U
						       : 0U)))))))));
    vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_mem_write_mask 
	= ((0x6fU == (0x7fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
	    ? 1U : ((0x2067U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
		     ? 1U : ((3U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
			      ? 1U : ((0x4003U == (0x707fU 
						   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
				       ? 1U : ((0x3003U 
						== 
						(0x707fU 
						 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
					        ? 1U
					        : (
						   (0x1003U 
						    == 
						    (0x707fU 
						     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						    ? 1U
						    : 
						   ((0x5003U 
						     == 
						     (0x707fU 
						      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						     ? 1U
						     : 
						    ((0x2003U 
						      == 
						      (0x707fU 
						       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						      ? 1U
						      : 
						     ((0x6003U 
						       == 
						       (0x707fU 
							& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						       ? 1U
						       : 
						      ((0x37U 
							== 
							(0x7fU 
							 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						        ? 1U
						        : 
						       ((0x17U 
							 == 
							 (0x7fU 
							  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							 ? 1U
							 : 
							((0x1033U 
							  == 
							  (0xfe00707fU 
							   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							  ? 1U
							  : 
							 ((0x1013U 
							   == 
							   (0xfc00707fU 
							    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							   ? 1U
							   : 
							  ((0x101bU 
							    == 
							    (0xfc00707fU 
							     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							    ? 1U
							    : 
							   ((0x103bU 
							     == 
							     (0xfe00707fU 
							      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							     ? 1U
							     : 
							    ((0x2033U 
							      == 
							      (0xfe00707fU 
							       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							      ? 1U
							      : 
							     ((0x2013U 
							       == 
							       (0x707fU 
								& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							       ? 1U
							       : 
							      ((0x3013U 
								== 
								(0x707fU 
								 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							        ? 1U
							        : 
							       ((0x3033U 
								 == 
								 (0xfe00707fU 
								  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								 ? 1U
								 : 
								((0x40005033U 
								  == 
								  (0xfe00707fU 
								   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								  ? 1U
								  : 
								 ((0x40005013U 
								   == 
								   (0xfc00707fU 
								    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								   ? 1U
								   : 
								  ((0x4000501bU 
								    == 
								    (0xfc00707fU 
								     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								    ? 1U
								    : 
								   ((0x4000503bU 
								     == 
								     (0xfe00707fU 
								      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								     ? 1U
								     : 
								    ((0x5033U 
								      == 
								      (0xfe00707fU 
								       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								      ? 1U
								      : 
								     ((0x5013U 
								       == 
								       (0xfc00707fU 
									& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								       ? 1U
								       : 
								      ((0x501bU 
									== 
									(0xfc00707fU 
									 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								        ? 1U
								        : 
								       ((0x503bU 
									 == 
									 (0xfe00707fU 
									  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									 ? 1U
									 : 
									((0x40000033U 
									  == 
									  (0xfe00707fU 
									   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									  ? 1U
									  : 
									 ((0x4000003bU 
									   == 
									   (0xfe00707fU 
									    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									   ? 1U
									   : 
									  ((0x4033U 
									    == 
									    (0xfe00707fU 
									     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									    ? 1U
									    : 
									   ((0x4013U 
									     == 
									     (0x707fU 
									      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									     ? 1U
									     : 
									    ((0x6033U 
									      == 
									      (0xfe00707fU 
									       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									      ? 1U
									      : 
									     ((0x6013U 
									       == 
									       (0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									       ? 1U
									       : 
									      ((0x33U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									        ? 1U
									        : 
									       ((0x13U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 1U
										 : 
										((0x1bU 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 1U
										 : 
										((0x3bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 1U
										 : 
										((0x7033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 1U
										 : 
										((0x7013U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 1U
										 : 
										((0x23U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 1U
										 : 
										((0x3023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0xffU
										 : 
										((0x1023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 3U
										 : 
										((0x2023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0xfU
										 : 1U)))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_wb_sel 
	= ((0x6fU == (0x7fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
	    ? 2U : ((0x2067U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
		     ? 2U : ((3U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
			      ? 1U : ((0x4003U == (0x707fU 
						   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
				       ? 1U : ((0x3003U 
						== 
						(0x707fU 
						 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
					        ? 1U
					        : (
						   (0x1003U 
						    == 
						    (0x707fU 
						     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						    ? 1U
						    : 
						   ((0x5003U 
						     == 
						     (0x707fU 
						      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						     ? 1U
						     : 
						    ((0x2003U 
						      == 
						      (0x707fU 
						       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						      ? 1U
						      : 
						     ((0x6003U 
						       == 
						       (0x707fU 
							& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						       ? 1U
						       : 
						      ((0x37U 
							== 
							(0x7fU 
							 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						        ? 0U
						        : 
						       ((0x17U 
							 == 
							 (0x7fU 
							  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							 ? 0U
							 : 
							((0x1033U 
							  == 
							  (0xfe00707fU 
							   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							  ? 0U
							  : 
							 ((0x1013U 
							   == 
							   (0xfc00707fU 
							    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							   ? 0U
							   : 
							  ((0x101bU 
							    == 
							    (0xfc00707fU 
							     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							    ? 0U
							    : 
							   ((0x103bU 
							     == 
							     (0xfe00707fU 
							      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							     ? 0U
							     : 
							    ((0x2033U 
							      == 
							      (0xfe00707fU 
							       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							      ? 0U
							      : 
							     ((0x2013U 
							       == 
							       (0x707fU 
								& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							       ? 0U
							       : 
							      ((0x3013U 
								== 
								(0x707fU 
								 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							        ? 0U
							        : 
							       ((0x3033U 
								 == 
								 (0xfe00707fU 
								  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								 ? 0U
								 : 
								((0x40005033U 
								  == 
								  (0xfe00707fU 
								   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								  ? 0U
								  : 
								 ((0x40005013U 
								   == 
								   (0xfc00707fU 
								    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								   ? 0U
								   : 
								  ((0x4000501bU 
								    == 
								    (0xfc00707fU 
								     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								    ? 0U
								    : 
								   ((0x4000503bU 
								     == 
								     (0xfe00707fU 
								      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								     ? 0U
								     : 
								    ((0x5033U 
								      == 
								      (0xfe00707fU 
								       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								      ? 0U
								      : 
								     ((0x5013U 
								       == 
								       (0xfc00707fU 
									& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								       ? 0U
								       : 
								      ((0x501bU 
									== 
									(0xfc00707fU 
									 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								        ? 0U
								        : 
								       ((0x503bU 
									 == 
									 (0xfe00707fU 
									  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									 ? 0U
									 : 
									((0x40000033U 
									  == 
									  (0xfe00707fU 
									   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									  ? 0U
									  : 
									 ((0x4000003bU 
									   == 
									   (0xfe00707fU 
									    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									   ? 0U
									   : 
									  ((0x4033U 
									    == 
									    (0xfe00707fU 
									     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									    ? 0U
									    : 
									   ((0x4013U 
									     == 
									     (0x707fU 
									      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									     ? 0U
									     : 
									    ((0x6033U 
									      == 
									      (0xfe00707fU 
									       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									      ? 0U
									      : 
									     ((0x6013U 
									       == 
									       (0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									       ? 0U
									       : 
									      ((0x33U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									        ? 0U
									        : 
									       ((0x13U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x1bU 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x3bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x7033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x7013U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x23U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x3023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x1023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x2023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x63U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x5063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x7063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x4063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x6063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x1063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x3073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 3U
										 : 
										((0x7073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 3U
										 : 
										((0x2073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 3U
										 : 
										((0x6073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 3U
										 : 
										((0x1073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 3U
										 : 
										((0x5073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 3U
										 : 0U)))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_162 
	= ((0x2000033U == (0xfe00707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
	   | ((0x2001033U == (0xfe00707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
	      | ((0x2002033U == (0xfe00707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		 | ((0x2003033U == (0xfe00707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		    | ((0x200003bU == (0xfe00707fU 
				       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		       | ((0x2006033U == (0xfe00707fU 
					  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
			  | ((0x2007033U == (0xfe00707fU 
					     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
			     | ((0x200703bU == (0xfe00707fU 
						& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
				| ((0x200603bU == (0xfe00707fU 
						   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
				   | ((0x2004033U == 
				       (0xfe00707fU 
					& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
				      | ((0x2005033U 
					  == (0xfe00707fU 
					      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
					 | ((0x200503bU 
					     == (0xfe00707fU 
						 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
					    | (0x200403bU 
					       == (0xfe00707fU 
						   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_659 
	= ((0x37U != (0x7fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
	   & ((0x17U != (0x7fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
	      & ((0x1033U != (0xfe00707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		 & ((0x1013U != (0xfc00707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		    & ((0x101bU != (0xfc00707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		       & ((0x103bU != (0xfe00707fU 
				       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
			  & ((0x2033U != (0xfe00707fU 
					  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
			     & ((0x2013U != (0x707fU 
					     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
				& ((0x3013U != (0x707fU 
						& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
				   & ((0x3033U != (0xfe00707fU 
						   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
				      & ((0x40005033U 
					  != (0xfe00707fU 
					      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
					 & ((0x40005013U 
					     != (0xfc00707fU 
						 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
					    & ((0x4000501bU 
						!= 
						(0xfc00707fU 
						 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
					       & ((0x4000503bU 
						   != 
						   (0xfe00707fU 
						    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
						  & ((0x5033U 
						      != 
						      (0xfe00707fU 
						       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
						     & ((0x5013U 
							 != 
							 (0xfc00707fU 
							  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
							& ((0x501bU 
							    != 
							    (0xfc00707fU 
							     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
							   & ((0x503bU 
							       != 
							       (0xfe00707fU 
								& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
							      & ((0x40000033U 
								  != 
								  (0xfe00707fU 
								   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
								 & ((0x4000003bU 
								     != 
								     (0xfe00707fU 
								      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
								    & ((0x4033U 
									!= 
									(0xfe00707fU 
									 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
								       & ((0x4013U 
									   != 
									   (0x707fU 
									    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
									  & ((0x6033U 
									      != 
									      (0xfe00707fU 
									       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
									     & ((0x6013U 
										!= 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										& ((0x33U 
										!= 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										& ((0x13U 
										!= 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										& ((0x1bU 
										!= 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										& ((0x3bU 
										!= 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										& ((0x7033U 
										!= 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										& ((0x7013U 
										!= 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										& ((0x23U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x3023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x1023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| (0x2023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))))))))))))))))))))))))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9473 
	= (((((((((((((((((((((((((((((((((((((((((
						   ((((((((((((((((((((((((((((((((((((((((((((((((0x300U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
										 ? 
										(((QData)((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp)) 
										<< 0xbU) 
										| (QData)((IData)(
										(((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie) 
										<< 7U) 
										| ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie) 
										<< 3U)))))
										 : VL_ULL(0)) 
										| ((0x301U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
										 ? VL_ULL(0x8000000000001100)
										 : VL_ULL(0))) 
										| ((0x304U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
										 ? (QData)((IData)(
										(((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mie_msi) 
										<< 8U) 
										| ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mie_mti) 
										<< 4U))))
										 : VL_ULL(0))) 
										| ((0x344U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
										 ? (QData)((IData)(
										(((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mip_msi) 
										<< 8U) 
										| ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mip_mti) 
										<< 4U))))
										 : VL_ULL(0))) 
										| ((0x305U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtvec
										 : VL_ULL(0))) 
										| ((0x340U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mscratch
										 : VL_ULL(0))) 
										| ((0x341U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc
										 : VL_ULL(0))) 
										| ((0x342U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcause
										 : VL_ULL(0))) 
										| ((0x343U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtval
										 : VL_ULL(0))) 
										| ((0x3a0U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_pmpcfg0
										 : VL_ULL(0))) 
										| ((0x3a1U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_pmpcfg1
										 : VL_ULL(0))) 
										| ((0xb00U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcycle
										 : VL_ULL(0))) 
										| ((0xb02U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_minstret
										 : VL_ULL(0))) 
										| ((0x320U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcounterinhibit
										 : VL_ULL(0))) 
										| ((0x3b0U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_0
										 : VL_ULL(0))) 
										| ((0x3b1U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_1
										 : VL_ULL(0))) 
										| ((0x3b2U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_2
										 : VL_ULL(0))) 
										| ((0x3b3U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_3
										 : VL_ULL(0))) 
										| ((0x3b4U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_4
										 : VL_ULL(0))) 
									       | ((0x3b5U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_5
										 : VL_ULL(0))) 
									      | ((0x3b6U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_6
										 : VL_ULL(0))) 
									     | ((0x3b7U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_7
										 : VL_ULL(0))) 
									    | ((0x3b8U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
									        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_8
									        : VL_ULL(0))) 
									   | ((0x3b9U 
									       == 
									       (0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
									       ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_9
									       : VL_ULL(0))) 
									  | ((0x3baU 
									      == 
									      (0xfffU 
									       & (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
									      ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_10
									      : VL_ULL(0))) 
									 | ((0x3bbU 
									     == 
									     (0xfffU 
									      & (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
									     ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_11
									     : VL_ULL(0))) 
									| ((0x3bcU 
									    == 
									    (0xfffU 
									     & (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
									    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_12
									    : VL_ULL(0))) 
								       | ((0x3bdU 
									   == 
									   (0xfffU 
									    & (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
									   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_13
									   : VL_ULL(0))) 
								      | ((0x3beU 
									  == 
									  (0xfffU 
									   & (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
									  ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_14
									  : VL_ULL(0))) 
								     | ((0x3bfU 
									 == 
									 (0xfffU 
									  & (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
									 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_15
									 : VL_ULL(0))) 
								    | ((0xb03U 
									== 
									(0xfffU 
									 & (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
								        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_0
								        : VL_ULL(0))) 
								   | ((0xb04U 
								       == 
								       (0xfffU 
									& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
								       ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_1
								       : VL_ULL(0))) 
								  | ((0xb05U 
								      == 
								      (0xfffU 
								       & (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
								      ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_2
								      : VL_ULL(0))) 
								 | ((0xb06U 
								     == 
								     (0xfffU 
								      & (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
								     ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_3
								     : VL_ULL(0))) 
								| ((0xb07U 
								    == 
								    (0xfffU 
								     & (IData)(
									       (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
								    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_4
								    : VL_ULL(0))) 
							       | ((0xb08U 
								   == 
								   (0xfffU 
								    & (IData)(
									      (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									       >> 0x14U))))
								   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_5
								   : VL_ULL(0))) 
							      | ((0xb09U 
								  == 
								  (0xfffU 
								   & (IData)(
									     (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									      >> 0x14U))))
								  ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_6
								  : VL_ULL(0))) 
							     | ((0xb0aU 
								 == 
								 (0xfffU 
								  & (IData)(
									    (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									     >> 0x14U))))
								 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_7
								 : VL_ULL(0))) 
							    | ((0xb0bU 
								== 
								(0xfffU 
								 & (IData)(
									   (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									    >> 0x14U))))
							        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_8
							        : VL_ULL(0))) 
							   | ((0xb0cU 
							       == 
							       (0xfffU 
								& (IData)(
									  (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									   >> 0x14U))))
							       ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_9
							       : VL_ULL(0))) 
							  | ((0xb0dU 
							      == 
							      (0xfffU 
							       & (IData)(
									 (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									  >> 0x14U))))
							      ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_10
							      : VL_ULL(0))) 
							 | ((0xb0eU 
							     == 
							     (0xfffU 
							      & (IData)(
									(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									 >> 0x14U))))
							     ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_11
							     : VL_ULL(0))) 
							| ((0xb0fU 
							    == 
							    (0xfffU 
							     & (IData)(
								       (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									>> 0x14U))))
							    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_12
							    : VL_ULL(0))) 
						       | ((0xb10U 
							   == 
							   (0xfffU 
							    & (IData)(
								      (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
								       >> 0x14U))))
							   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_13
							   : VL_ULL(0))) 
						      | ((0xb11U 
							  == 
							  (0xfffU 
							   & (IData)(
								     (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
								      >> 0x14U))))
							  ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_14
							  : VL_ULL(0))) 
						     | ((0xb12U 
							 == 
							 (0xfffU 
							  & (IData)(
								    (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
								     >> 0x14U))))
							 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_15
							 : VL_ULL(0))) 
						    | ((0xb13U 
							== 
							(0xfffU 
							 & (IData)(
								   (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
								    >> 0x14U))))
						        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_16
						        : VL_ULL(0))) 
						   | ((0xb14U 
						       == 
						       (0xfffU 
							& (IData)(
								  (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
								   >> 0x14U))))
						       ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_17
						       : VL_ULL(0))) 
						  | ((0xb15U 
						      == 
						      (0xfffU 
						       & (IData)(
								 (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
								  >> 0x14U))))
						      ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_18
						      : VL_ULL(0))) 
						 | ((0xb16U 
						     == 
						     (0xfffU 
						      & (IData)(
								(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
								 >> 0x14U))))
						     ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_19
						     : VL_ULL(0))) 
						| ((0xb17U 
						    == 
						    (0xfffU 
						     & (IData)(
							       (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
								>> 0x14U))))
						    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_20
						    : VL_ULL(0))) 
					       | ((0xb18U 
						   == 
						   (0xfffU 
						    & (IData)(
							      (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							       >> 0x14U))))
						   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_21
						   : VL_ULL(0))) 
					      | ((0xb19U 
						  == 
						  (0xfffU 
						   & (IData)(
							     (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							      >> 0x14U))))
						  ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_22
						  : VL_ULL(0))) 
					     | ((0xb1aU 
						 == 
						 (0xfffU 
						  & (IData)(
							    (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							     >> 0x14U))))
						 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_23
						 : VL_ULL(0))) 
					    | ((0xb1bU 
						== 
						(0xfffU 
						 & (IData)(
							   (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							    >> 0x14U))))
					        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_24
					        : VL_ULL(0))) 
					   | ((0xb1cU 
					       == (0xfffU 
						   & (IData)(
							     (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							      >> 0x14U))))
					       ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_25
					       : VL_ULL(0))) 
					  | ((0xb1dU 
					      == (0xfffU 
						  & (IData)(
							    (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							     >> 0x14U))))
					      ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_26
					      : VL_ULL(0))) 
					 | ((0xb1eU 
					     == (0xfffU 
						 & (IData)(
							   (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							    >> 0x14U))))
					     ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_27
					     : VL_ULL(0))) 
					| ((0xb1fU 
					    == (0xfffU 
						& (IData)(
							  (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							   >> 0x14U))))
					    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_28
					    : VL_ULL(0))) 
				       | ((0x323U == 
					   (0xfffU 
					    & (IData)(
						      (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						       >> 0x14U))))
					   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_0
					   : VL_ULL(0))) 
				      | ((0x324U == 
					  (0xfffU & (IData)(
							    (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							     >> 0x14U))))
					  ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_1
					  : VL_ULL(0))) 
				     | ((0x325U == 
					 (0xfffU & (IData)(
							   (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							    >> 0x14U))))
					 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_2
					 : VL_ULL(0))) 
				    | ((0x326U == (0xfffU 
						   & (IData)(
							     (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							      >> 0x14U))))
				        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_3
				        : VL_ULL(0))) 
				   | ((0x327U == (0xfffU 
						  & (IData)(
							    (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							     >> 0x14U))))
				       ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_4
				       : VL_ULL(0))) 
				  | ((0x328U == (0xfffU 
						 & (IData)(
							   (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							    >> 0x14U))))
				      ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_5
				      : VL_ULL(0))) 
				 | ((0x329U == (0xfffU 
						& (IData)(
							  (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							   >> 0x14U))))
				     ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_6
				     : VL_ULL(0))) 
				| ((0x32aU == (0xfffU 
					       & (IData)(
							 (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							  >> 0x14U))))
				    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_7
				    : VL_ULL(0))) | 
			       ((0x32bU == (0xfffU 
					    & (IData)(
						      (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						       >> 0x14U))))
				 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_8
				 : VL_ULL(0))) | ((0x32cU 
						   == 
						   (0xfffU 
						    & (IData)(
							      (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							       >> 0x14U))))
						   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_9
						   : VL_ULL(0))) 
			     | ((0x32dU == (0xfffU 
					    & (IData)(
						      (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						       >> 0x14U))))
				 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_10
				 : VL_ULL(0))) | ((0x32eU 
						   == 
						   (0xfffU 
						    & (IData)(
							      (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							       >> 0x14U))))
						   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_11
						   : VL_ULL(0))) 
			   | ((0x32fU == (0xfffU & (IData)(
							   (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							    >> 0x14U))))
			       ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_12
			       : VL_ULL(0))) | ((0x330U 
						 == 
						 (0xfffU 
						  & (IData)(
							    (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							     >> 0x14U))))
						 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_13
						 : VL_ULL(0))) 
			 | ((0x331U == (0xfffU & (IData)(
							 (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							  >> 0x14U))))
			     ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_14
			     : VL_ULL(0))) | ((0x332U 
					       == (0xfffU 
						   & (IData)(
							     (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							      >> 0x14U))))
					       ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_15
					       : VL_ULL(0))) 
		       | ((0x333U == (0xfffU & (IData)(
						       (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							>> 0x14U))))
			   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_16
			   : VL_ULL(0))) | ((0x334U 
					     == (0xfffU 
						 & (IData)(
							   (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							    >> 0x14U))))
					     ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_17
					     : VL_ULL(0))) 
		     | ((0x335U == (0xfffU & (IData)(
						     (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						      >> 0x14U))))
			 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_18
			 : VL_ULL(0))) | ((0x336U == 
					   (0xfffU 
					    & (IData)(
						      (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						       >> 0x14U))))
					   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_19
					   : VL_ULL(0))) 
		   | ((0x337U == (0xfffU & (IData)(
						   (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						    >> 0x14U))))
		       ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_20
		       : VL_ULL(0))) | ((0x338U == 
					 (0xfffU & (IData)(
							   (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							    >> 0x14U))))
					 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_21
					 : VL_ULL(0))) 
		 | ((0x339U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						  >> 0x14U))))
		     ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_22
		     : VL_ULL(0))) | ((0x33aU == (0xfffU 
						  & (IData)(
							    (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							     >> 0x14U))))
				       ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_23
				       : VL_ULL(0))) 
	       | ((0x33bU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						>> 0x14U))))
		   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_24
		   : VL_ULL(0))) | ((0x33cU == (0xfffU 
						& (IData)(
							  (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							   >> 0x14U))))
				     ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_25
				     : VL_ULL(0))) 
	     | ((0x33dU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))
		 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_26
		 : VL_ULL(0))) | ((0x33eU == (0xfffU 
					      & (IData)(
							(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							 >> 0x14U))))
				   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_27
				   : VL_ULL(0))) | 
	   ((0x33fU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					  >> 0x14U))))
	     ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_28
	     : VL_ULL(0)));
    vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_ext_sel 
	= ((0x6fU == (0x7fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
	    ? 0U : ((0x2067U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
		     ? 0U : ((3U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
			      ? 0U : ((0x4003U == (0x707fU 
						   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
				       ? 0U : ((0x3003U 
						== 
						(0x707fU 
						 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
					        ? 0U
					        : (
						   (0x1003U 
						    == 
						    (0x707fU 
						     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						    ? 0U
						    : 
						   ((0x5003U 
						     == 
						     (0x707fU 
						      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						     ? 0U
						     : 
						    ((0x2003U 
						      == 
						      (0x707fU 
						       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						      ? 0U
						      : 
						     ((0x6003U 
						       == 
						       (0x707fU 
							& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						       ? 0U
						       : 
						      ((0x37U 
							== 
							(0x7fU 
							 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						        ? 0U
						        : 
						       ((0x17U 
							 == 
							 (0x7fU 
							  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							 ? 0U
							 : 
							((0x1033U 
							  == 
							  (0xfe00707fU 
							   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							  ? 0U
							  : 
							 ((0x1013U 
							   == 
							   (0xfc00707fU 
							    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							   ? 0U
							   : 
							  ((0x101bU 
							    == 
							    (0xfc00707fU 
							     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							    ? 5U
							    : 
							   ((0x103bU 
							     == 
							     (0xfe00707fU 
							      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							     ? 5U
							     : 
							    ((0x2033U 
							      == 
							      (0xfe00707fU 
							       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							      ? 0U
							      : 
							     ((0x2013U 
							       == 
							       (0x707fU 
								& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							       ? 0U
							       : 
							      ((0x3013U 
								== 
								(0x707fU 
								 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							        ? 0U
							        : 
							       ((0x3033U 
								 == 
								 (0xfe00707fU 
								  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								 ? 0U
								 : 
								((0x40005033U 
								  == 
								  (0xfe00707fU 
								   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								  ? 0U
								  : 
								 ((0x40005013U 
								   == 
								   (0xfc00707fU 
								    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								   ? 0U
								   : 
								  ((0x4000501bU 
								    == 
								    (0xfc00707fU 
								     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								    ? 5U
								    : 
								   ((0x4000503bU 
								     == 
								     (0xfe00707fU 
								      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								     ? 5U
								     : 
								    ((0x5033U 
								      == 
								      (0xfe00707fU 
								       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								      ? 0U
								      : 
								     ((0x5013U 
								       == 
								       (0xfc00707fU 
									& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								       ? 0U
								       : 
								      ((0x501bU 
									== 
									(0xfc00707fU 
									 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								        ? 5U
								        : 
								       ((0x503bU 
									 == 
									 (0xfe00707fU 
									  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									 ? 5U
									 : 
									((0x40000033U 
									  == 
									  (0xfe00707fU 
									   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									  ? 0U
									  : 
									 ((0x4000003bU 
									   == 
									   (0xfe00707fU 
									    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									   ? 5U
									   : 
									  ((0x4033U 
									    == 
									    (0xfe00707fU 
									     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									    ? 0U
									    : 
									   ((0x4013U 
									     == 
									     (0x707fU 
									      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									     ? 0U
									     : 
									    ((0x6033U 
									      == 
									      (0xfe00707fU 
									       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									      ? 0U
									      : 
									     ((0x6013U 
									       == 
									       (0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									       ? 0U
									       : 
									      ((0x33U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									        ? 0U
									        : 
									       ((0x13U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x1bU 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 5U
										 : 
										((0x3bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 5U
										 : 
										((0x7033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x7013U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x23U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x3023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x1023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x2023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x63U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x5063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x7063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x4063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x6063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x1063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x3073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x7073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x2073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x6073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x1073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x5073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x105073U 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))
										 ? 0U
										 : 
										((0x73U 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))
										 ? 0U
										 : 
										((0x10500073U 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))
										 ? 0U
										 : 
										((0x10200073U 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))
										 ? 0U
										 : 
										((0x30200073U 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))
										 ? 0U
										 : 
										((0xfU 
										== 
										(0xf00fffffU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x100fU 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))
										 ? 0U
										 : 
										((0x2000033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x2001033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x2002033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x2003033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x200003bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 5U
										 : 
										((0x2006033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x2007033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x200703bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 5U
										 : 
										((0x200603bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 5U
										 : 
										((0x2004033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x2005033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x200503bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 5U
										 : 
										((0x200403bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 5U
										 : 0U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel 
	= ((0x6fU == (0x7fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
	    ? 0U : ((0x2067U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
		     ? 0U : ((3U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
			      ? 0U : ((0x4003U == (0x707fU 
						   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
				       ? 0U : ((0x3003U 
						== 
						(0x707fU 
						 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
					        ? 0U
					        : (
						   (0x1003U 
						    == 
						    (0x707fU 
						     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						    ? 0U
						    : 
						   ((0x5003U 
						     == 
						     (0x707fU 
						      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						     ? 0U
						     : 
						    ((0x2003U 
						      == 
						      (0x707fU 
						       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						      ? 0U
						      : 
						     ((0x6003U 
						       == 
						       (0x707fU 
							& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						       ? 0U
						       : 
						      ((0x37U 
							== 
							(0x7fU 
							 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						        ? 0xcU
						        : 
						       ((0x17U 
							 == 
							 (0x7fU 
							  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							 ? 0U
							 : 
							((0x1033U 
							  == 
							  (0xfe00707fU 
							   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							  ? 5U
							  : 
							 ((0x1013U 
							   == 
							   (0xfc00707fU 
							    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							   ? 5U
							   : 
							  ((0x101bU 
							    == 
							    (0xfc00707fU 
							     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							    ? 5U
							    : 
							   ((0x103bU 
							     == 
							     (0xfe00707fU 
							      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							     ? 5U
							     : 
							    ((0x2033U 
							      == 
							      (0xfe00707fU 
							       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							      ? 6U
							      : 
							     ((0x2013U 
							       == 
							       (0x707fU 
								& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							       ? 6U
							       : 
							      ((0x3013U 
								== 
								(0x707fU 
								 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							        ? 7U
							        : 
							       ((0x3033U 
								 == 
								 (0xfe00707fU 
								  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								 ? 7U
								 : 
								((0x40005033U 
								  == 
								  (0xfe00707fU 
								   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								  ? 8U
								  : 
								 ((0x40005013U 
								   == 
								   (0xfc00707fU 
								    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								   ? 8U
								   : 
								  ((0x4000501bU 
								    == 
								    (0xfc00707fU 
								     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								    ? 9U
								    : 
								   ((0x4000503bU 
								     == 
								     (0xfe00707fU 
								      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								     ? 9U
								     : 
								    ((0x5033U 
								      == 
								      (0xfe00707fU 
								       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								      ? 0xaU
								      : 
								     ((0x5013U 
								       == 
								       (0xfc00707fU 
									& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								       ? 0xaU
								       : 
								      ((0x501bU 
									== 
									(0xfc00707fU 
									 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								        ? 0xbU
								        : 
								       ((0x503bU 
									 == 
									 (0xfe00707fU 
									  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									 ? 0xbU
									 : 
									((0x40000033U 
									  == 
									  (0xfe00707fU 
									   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									  ? 1U
									  : 
									 ((0x4000003bU 
									   == 
									   (0xfe00707fU 
									    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									   ? 1U
									   : 
									  ((0x4033U 
									    == 
									    (0xfe00707fU 
									     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									    ? 4U
									    : 
									   ((0x4013U 
									     == 
									     (0x707fU 
									      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									     ? 4U
									     : 
									    ((0x6033U 
									      == 
									      (0xfe00707fU 
									       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									      ? 3U
									      : 
									     ((0x6013U 
									       == 
									       (0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									       ? 3U
									       : 
									      ((0x33U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									        ? 0U
									        : 
									       ((0x13U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x1bU 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x3bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x7033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 2U
										 : 
										((0x7013U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 2U
										 : 
										((0x23U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x3023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x1023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x2023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x63U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x5063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x7063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x4063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x6063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x1063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x3073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0xcU
										 : 
										((0x7073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0xcU
										 : 
										((0x2073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0xcU
										 : 
										((0x6073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0xcU
										 : 
										((0x1073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0xcU
										 : 
										((0x5073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0xcU
										 : 
										((0x105073U 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))
										 ? 0U
										 : 
										((0x73U 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))
										 ? 0U
										 : 
										((0x10500073U 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))
										 ? 0U
										 : 
										((0x10200073U 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))
										 ? 0U
										 : 
										((0x30200073U 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))
										 ? 0U
										 : 
										((0xfU 
										== 
										(0xf00fffffU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x100fU 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))
										 ? 0U
										 : 
										((0x2000033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0xdU
										 : 
										((0x2001033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0xeU
										 : 
										((0x2002033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0xfU
										 : 
										((0x2003033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0x10U
										 : 
										((0x200003bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0xdU
										 : 
										((0x2006033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0x11U
										 : 
										((0x2007033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0x12U
										 : 
										((0x200703bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0x13U
										 : 
										((0x200603bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0x14U
										 : 
										((0x2004033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0x15U
										 : 
										((0x2005033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0x16U
										 : 
										((0x200503bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0x17U
										 : 
										((0x200403bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0x18U
										 : 0U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__legalcsrnumber 
	= (((((((((((((((((((((((((((((((((((((((((
						   ((((((((((((((((((((((((((((((((((((((((((((((((((((((0xf11U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U)))) 
										| (0xf12U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0xf13U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0xf14U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0x300U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0x301U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0x302U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0x303U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0x304U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0x344U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0x305U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0x306U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0x340U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0x341U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0x342U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0x343U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0x3a0U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0x3a1U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0xb00U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0xb02U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0x320U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0x3b0U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0x3b1U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0x3b2U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0x3b3U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0x3b4U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
									       | (0x3b5U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
									      | (0x3b6U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
									     | (0x3b7U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
									    | (0x3b8U 
									       == 
									       (0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
									   | (0x3b9U 
									      == 
									      (0xfffU 
									       & (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
									  | (0x3baU 
									     == 
									     (0xfffU 
									      & (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
									 | (0x3bbU 
									    == 
									    (0xfffU 
									     & (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
									| (0x3bcU 
									   == 
									   (0xfffU 
									    & (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
								       | (0x3bdU 
									  == 
									  (0xfffU 
									   & (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
								      | (0x3beU 
									 == 
									 (0xfffU 
									  & (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
								     | (0x3bfU 
									== 
									(0xfffU 
									 & (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
								    | (0xb03U 
								       == 
								       (0xfffU 
									& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
								   | (0xb04U 
								      == 
								      (0xfffU 
								       & (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
								  | (0xb05U 
								     == 
								     (0xfffU 
								      & (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
								 | (0xb06U 
								    == 
								    (0xfffU 
								     & (IData)(
									       (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
								| (0xb07U 
								   == 
								   (0xfffU 
								    & (IData)(
									      (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									       >> 0x14U))))) 
							       | (0xb08U 
								  == 
								  (0xfffU 
								   & (IData)(
									     (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									      >> 0x14U))))) 
							      | (0xb09U 
								 == 
								 (0xfffU 
								  & (IData)(
									    (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									     >> 0x14U))))) 
							     | (0xb0aU 
								== 
								(0xfffU 
								 & (IData)(
									   (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									    >> 0x14U))))) 
							    | (0xb0bU 
							       == 
							       (0xfffU 
								& (IData)(
									  (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									   >> 0x14U))))) 
							   | (0xb0cU 
							      == 
							      (0xfffU 
							       & (IData)(
									 (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									  >> 0x14U))))) 
							  | (0xb0dU 
							     == 
							     (0xfffU 
							      & (IData)(
									(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									 >> 0x14U))))) 
							 | (0xb0eU 
							    == 
							    (0xfffU 
							     & (IData)(
								       (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									>> 0x14U))))) 
							| (0xb0fU 
							   == 
							   (0xfffU 
							    & (IData)(
								      (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
								       >> 0x14U))))) 
						       | (0xb10U 
							  == 
							  (0xfffU 
							   & (IData)(
								     (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
								      >> 0x14U))))) 
						      | (0xb11U 
							 == 
							 (0xfffU 
							  & (IData)(
								    (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
								     >> 0x14U))))) 
						     | (0xb12U 
							== 
							(0xfffU 
							 & (IData)(
								   (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
								    >> 0x14U))))) 
						    | (0xb13U 
						       == 
						       (0xfffU 
							& (IData)(
								  (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
								   >> 0x14U))))) 
						   | (0xb14U 
						      == 
						      (0xfffU 
						       & (IData)(
								 (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
								  >> 0x14U))))) 
						  | (0xb15U 
						     == 
						     (0xfffU 
						      & (IData)(
								(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
								 >> 0x14U))))) 
						 | (0xb16U 
						    == 
						    (0xfffU 
						     & (IData)(
							       (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
								>> 0x14U))))) 
						| (0xb17U 
						   == 
						   (0xfffU 
						    & (IData)(
							      (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							       >> 0x14U))))) 
					       | (0xb18U 
						  == 
						  (0xfffU 
						   & (IData)(
							     (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							      >> 0x14U))))) 
					      | (0xb19U 
						 == 
						 (0xfffU 
						  & (IData)(
							    (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							     >> 0x14U))))) 
					     | (0xb1aU 
						== 
						(0xfffU 
						 & (IData)(
							   (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							    >> 0x14U))))) 
					    | (0xb1bU 
					       == (0xfffU 
						   & (IData)(
							     (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							      >> 0x14U))))) 
					   | (0xb1cU 
					      == (0xfffU 
						  & (IData)(
							    (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							     >> 0x14U))))) 
					  | (0xb1dU 
					     == (0xfffU 
						 & (IData)(
							   (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							    >> 0x14U))))) 
					 | (0xb1eU 
					    == (0xfffU 
						& (IData)(
							  (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							   >> 0x14U))))) 
					| (0xb1fU == 
					   (0xfffU 
					    & (IData)(
						      (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						       >> 0x14U))))) 
				       | (0x323U == 
					  (0xfffU & (IData)(
							    (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							     >> 0x14U))))) 
				      | (0x324U == 
					 (0xfffU & (IData)(
							   (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							    >> 0x14U))))) 
				     | (0x325U == (0xfffU 
						   & (IData)(
							     (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							      >> 0x14U))))) 
				    | (0x326U == (0xfffU 
						  & (IData)(
							    (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							     >> 0x14U))))) 
				   | (0x327U == (0xfffU 
						 & (IData)(
							   (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							    >> 0x14U))))) 
				  | (0x328U == (0xfffU 
						& (IData)(
							  (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							   >> 0x14U))))) 
				 | (0x329U == (0xfffU 
					       & (IData)(
							 (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							  >> 0x14U))))) 
				| (0x32aU == (0xfffU 
					      & (IData)(
							(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							 >> 0x14U))))) 
			       | (0x32bU == (0xfffU 
					     & (IData)(
						       (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							>> 0x14U))))) 
			      | (0x32cU == (0xfffU 
					    & (IData)(
						      (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						       >> 0x14U))))) 
			     | (0x32dU == (0xfffU & (IData)(
							    (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							     >> 0x14U))))) 
			    | (0x32eU == (0xfffU & (IData)(
							   (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							    >> 0x14U))))) 
			   | (0x32fU == (0xfffU & (IData)(
							  (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							   >> 0x14U))))) 
			  | (0x330U == (0xfffU & (IData)(
							 (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							  >> 0x14U))))) 
			 | (0x331U == (0xfffU & (IData)(
							(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							 >> 0x14U))))) 
			| (0x332U == (0xfffU & (IData)(
						       (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							>> 0x14U))))) 
		       | (0x333U == (0xfffU & (IData)(
						      (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						       >> 0x14U))))) 
		      | (0x334U == (0xfffU & (IData)(
						     (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						      >> 0x14U))))) 
		     | (0x335U == (0xfffU & (IData)(
						    (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						     >> 0x14U))))) 
		    | (0x336U == (0xfffU & (IData)(
						   (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						    >> 0x14U))))) 
		   | (0x337U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						   >> 0x14U))))) 
		  | (0x338U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						  >> 0x14U))))) 
		 | (0x339U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						 >> 0x14U))))) 
		| (0x33aU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						>> 0x14U))))) 
	       | (0x33bU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					       >> 0x14U))))) 
	      | (0x33cU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) 
	     | (0x33dU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					     >> 0x14U))))) 
	    | (0x33eU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					    >> 0x14U))))) 
	   | (0x33fU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					   >> 0x14U)))));
    vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_csr_op 
	= ((0x6fU == (0x7fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
	    ? 0U : ((0x2067U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
		     ? 0U : ((3U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
			      ? 0U : ((0x4003U == (0x707fU 
						   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
				       ? 0U : ((0x3003U 
						== 
						(0x707fU 
						 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
					        ? 0U
					        : (
						   (0x1003U 
						    == 
						    (0x707fU 
						     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						    ? 0U
						    : 
						   ((0x5003U 
						     == 
						     (0x707fU 
						      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						     ? 0U
						     : 
						    ((0x2003U 
						      == 
						      (0x707fU 
						       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						      ? 0U
						      : 
						     ((0x6003U 
						       == 
						       (0x707fU 
							& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						       ? 0U
						       : 
						      ((0x37U 
							== 
							(0x7fU 
							 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						        ? 0U
						        : 
						       ((0x17U 
							 == 
							 (0x7fU 
							  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							 ? 0U
							 : 
							((0x1033U 
							  == 
							  (0xfe00707fU 
							   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							  ? 0U
							  : 
							 ((0x1013U 
							   == 
							   (0xfc00707fU 
							    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							   ? 0U
							   : 
							  ((0x101bU 
							    == 
							    (0xfc00707fU 
							     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							    ? 0U
							    : 
							   ((0x103bU 
							     == 
							     (0xfe00707fU 
							      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							     ? 0U
							     : 
							    ((0x2033U 
							      == 
							      (0xfe00707fU 
							       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							      ? 0U
							      : 
							     ((0x2013U 
							       == 
							       (0x707fU 
								& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							       ? 0U
							       : 
							      ((0x3013U 
								== 
								(0x707fU 
								 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							        ? 0U
							        : 
							       ((0x3033U 
								 == 
								 (0xfe00707fU 
								  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								 ? 0U
								 : 
								((0x40005033U 
								  == 
								  (0xfe00707fU 
								   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								  ? 0U
								  : 
								 ((0x40005013U 
								   == 
								   (0xfc00707fU 
								    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								   ? 0U
								   : 
								  ((0x4000501bU 
								    == 
								    (0xfc00707fU 
								     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								    ? 0U
								    : 
								   ((0x4000503bU 
								     == 
								     (0xfe00707fU 
								      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								     ? 0U
								     : 
								    ((0x5033U 
								      == 
								      (0xfe00707fU 
								       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								      ? 0U
								      : 
								     ((0x5013U 
								       == 
								       (0xfc00707fU 
									& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								       ? 0U
								       : 
								      ((0x501bU 
									== 
									(0xfc00707fU 
									 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								        ? 0U
								        : 
								       ((0x503bU 
									 == 
									 (0xfe00707fU 
									  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									 ? 0U
									 : 
									((0x40000033U 
									  == 
									  (0xfe00707fU 
									   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									  ? 0U
									  : 
									 ((0x4000003bU 
									   == 
									   (0xfe00707fU 
									    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									   ? 0U
									   : 
									  ((0x4033U 
									    == 
									    (0xfe00707fU 
									     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									    ? 0U
									    : 
									   ((0x4013U 
									     == 
									     (0x707fU 
									      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									     ? 0U
									     : 
									    ((0x6033U 
									      == 
									      (0xfe00707fU 
									       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									      ? 0U
									      : 
									     ((0x6013U 
									       == 
									       (0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									       ? 0U
									       : 
									      ((0x33U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									        ? 0U
									        : 
									       ((0x13U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x1bU 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x3bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x7033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x7013U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x23U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x3023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x1023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x2023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x63U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x5063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x7063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x4063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x6063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x1063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x3073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 3U
										 : 
										((0x7073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 3U
										 : 
										((0x2073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 4U
										 : 
										((0x6073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 4U
										 : 
										((0x1073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 2U
										 : 
										((0x5073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 2U
										 : 
										((0x105073U 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))
										 ? 5U
										 : 
										((0x73U 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))
										 ? 5U
										 : 
										((0x10500073U 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))
										 ? 0U
										 : 
										((0x10200073U 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))
										 ? 5U
										 : 
										((0x30200073U 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))
										 ? 5U
										 : 0U))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op1_sel 
	= ((0x6fU == (0x7fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
	    ? 0U : ((0x2067U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
		     ? 0U : ((3U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
			      ? 0U : ((0x4003U == (0x707fU 
						   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
				       ? 0U : ((0x3003U 
						== 
						(0x707fU 
						 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
					        ? 0U
					        : (
						   (0x1003U 
						    == 
						    (0x707fU 
						     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						    ? 0U
						    : 
						   ((0x5003U 
						     == 
						     (0x707fU 
						      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						     ? 0U
						     : 
						    ((0x2003U 
						      == 
						      (0x707fU 
						       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						      ? 0U
						      : 
						     ((0x6003U 
						       == 
						       (0x707fU 
							& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						       ? 0U
						       : 
						      ((0x37U 
							== 
							(0x7fU 
							 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						        ? 2U
						        : 
						       ((0x17U 
							 == 
							 (0x7fU 
							  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							 ? 2U
							 : 
							((0x1033U 
							  == 
							  (0xfe00707fU 
							   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							  ? 0U
							  : 
							 ((0x1013U 
							   == 
							   (0xfc00707fU 
							    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							   ? 0U
							   : 
							  ((0x101bU 
							    == 
							    (0xfc00707fU 
							     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							    ? 0U
							    : 
							   ((0x103bU 
							     == 
							     (0xfe00707fU 
							      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							     ? 0U
							     : 
							    ((0x2033U 
							      == 
							      (0xfe00707fU 
							       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							      ? 0U
							      : 
							     ((0x2013U 
							       == 
							       (0x707fU 
								& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							       ? 0U
							       : 
							      ((0x3013U 
								== 
								(0x707fU 
								 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							        ? 0U
							        : 
							       ((0x3033U 
								 == 
								 (0xfe00707fU 
								  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								 ? 0U
								 : 
								((0x40005033U 
								  == 
								  (0xfe00707fU 
								   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								  ? 0U
								  : 
								 ((0x40005013U 
								   == 
								   (0xfc00707fU 
								    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								   ? 0U
								   : 
								  ((0x4000501bU 
								    == 
								    (0xfc00707fU 
								     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								    ? 0U
								    : 
								   ((0x4000503bU 
								     == 
								     (0xfe00707fU 
								      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								     ? 0U
								     : 
								    ((0x5033U 
								      == 
								      (0xfe00707fU 
								       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								      ? 0U
								      : 
								     ((0x5013U 
								       == 
								       (0xfc00707fU 
									& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								       ? 0U
								       : 
								      ((0x501bU 
									== 
									(0xfc00707fU 
									 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								        ? 0U
								        : 
								       ((0x503bU 
									 == 
									 (0xfe00707fU 
									  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									 ? 0U
									 : 
									((0x40000033U 
									  == 
									  (0xfe00707fU 
									   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									  ? 0U
									  : 
									 ((0x4000003bU 
									   == 
									   (0xfe00707fU 
									    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									   ? 0U
									   : 
									  ((0x4033U 
									    == 
									    (0xfe00707fU 
									     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									    ? 0U
									    : 
									   ((0x4013U 
									     == 
									     (0x707fU 
									      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									     ? 0U
									     : 
									    ((0x6033U 
									      == 
									      (0xfe00707fU 
									       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									      ? 0U
									      : 
									     ((0x6013U 
									       == 
									       (0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									       ? 0U
									       : 
									      ((0x33U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									        ? 0U
									        : 
									       ((0x13U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x1bU 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x3bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x7033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x7013U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x23U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x3023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x1023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x2023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x63U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x5063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x7063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x4063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x6063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x1063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x3073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x7073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 1U
										 : 
										((0x2073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x6073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 1U
										 : 
										((0x1073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x5073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 1U
										 : 0U)))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel 
	= ((0x6fU == (0x7fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
	    ? 0U : ((0x2067U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
		     ? 0U : ((3U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
			      ? 2U : ((0x4003U == (0x707fU 
						   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
				       ? 2U : ((0x3003U 
						== 
						(0x707fU 
						 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
					        ? 2U
					        : (
						   (0x1003U 
						    == 
						    (0x707fU 
						     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						    ? 2U
						    : 
						   ((0x5003U 
						     == 
						     (0x707fU 
						      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						     ? 2U
						     : 
						    ((0x2003U 
						      == 
						      (0x707fU 
						       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						      ? 2U
						      : 
						     ((0x6003U 
						       == 
						       (0x707fU 
							& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						       ? 2U
						       : 
						      ((0x37U 
							== 
							(0x7fU 
							 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						        ? 0U
						        : 
						       ((0x17U 
							 == 
							 (0x7fU 
							  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							 ? 1U
							 : 
							((0x1033U 
							  == 
							  (0xfe00707fU 
							   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							  ? 0U
							  : 
							 ((0x1013U 
							   == 
							   (0xfc00707fU 
							    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							   ? 2U
							   : 
							  ((0x101bU 
							    == 
							    (0xfc00707fU 
							     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							    ? 2U
							    : 
							   ((0x103bU 
							     == 
							     (0xfe00707fU 
							      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							     ? 0U
							     : 
							    ((0x2033U 
							      == 
							      (0xfe00707fU 
							       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							      ? 0U
							      : 
							     ((0x2013U 
							       == 
							       (0x707fU 
								& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							       ? 2U
							       : 
							      ((0x3013U 
								== 
								(0x707fU 
								 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							        ? 2U
							        : 
							       ((0x3033U 
								 == 
								 (0xfe00707fU 
								  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								 ? 0U
								 : 
								((0x40005033U 
								  == 
								  (0xfe00707fU 
								   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								  ? 0U
								  : 
								 ((0x40005013U 
								   == 
								   (0xfc00707fU 
								    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								   ? 2U
								   : 
								  ((0x4000501bU 
								    == 
								    (0xfc00707fU 
								     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								    ? 2U
								    : 
								   ((0x4000503bU 
								     == 
								     (0xfe00707fU 
								      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								     ? 0U
								     : 
								    ((0x5033U 
								      == 
								      (0xfe00707fU 
								       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								      ? 0U
								      : 
								     ((0x5013U 
								       == 
								       (0xfc00707fU 
									& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								       ? 2U
								       : 
								      ((0x501bU 
									== 
									(0xfc00707fU 
									 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								        ? 2U
								        : 
								       ((0x503bU 
									 == 
									 (0xfe00707fU 
									  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									 ? 0U
									 : 
									((0x40000033U 
									  == 
									  (0xfe00707fU 
									   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									  ? 0U
									  : 
									 ((0x4000003bU 
									   == 
									   (0xfe00707fU 
									    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									   ? 0U
									   : 
									  ((0x4033U 
									    == 
									    (0xfe00707fU 
									     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									    ? 0U
									    : 
									   ((0x4013U 
									     == 
									     (0x707fU 
									      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									     ? 2U
									     : 
									    ((0x6033U 
									      == 
									      (0xfe00707fU 
									       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									      ? 0U
									      : 
									     ((0x6013U 
									       == 
									       (0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									       ? 2U
									       : 
									      ((0x33U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									        ? 0U
									        : 
									       ((0x13U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 2U
										 : 
										((0x1bU 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 2U
										 : 
										((0x3bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x7033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x7013U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 2U
										 : 
										((0x23U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 3U
										 : 
										((0x3023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 3U
										 : 
										((0x1023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 3U
										 : 
										((0x2023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 3U
										 : 0U)))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_4_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[(0x1fU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
			   >> 0xfU)))];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_7_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[(0x1fU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
			   >> 0x14U)))];
}

void Vtop::_settle__TOP__5(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_settle__TOP__5\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_mem_read_op 
	= ((0x6fU == (0x7fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
	    ? 0U : ((0x2067U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
		     ? 0U : ((3U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
			      ? 0U : ((0x4003U == (0x707fU 
						   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
				       ? 1U : ((0x3003U 
						== 
						(0x707fU 
						 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
					        ? 6U
					        : (
						   (0x1003U 
						    == 
						    (0x707fU 
						     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						    ? 2U
						    : 
						   ((0x5003U 
						     == 
						     (0x707fU 
						      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						     ? 3U
						     : 
						    ((0x2003U 
						      == 
						      (0x707fU 
						       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						      ? 4U
						      : 
						     ((0x6003U 
						       == 
						       (0x707fU 
							& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						       ? 5U
						       : 0U)))))))));
    vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_mem_write_mask 
	= ((0x6fU == (0x7fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
	    ? 1U : ((0x2067U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
		     ? 1U : ((3U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
			      ? 1U : ((0x4003U == (0x707fU 
						   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
				       ? 1U : ((0x3003U 
						== 
						(0x707fU 
						 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
					        ? 1U
					        : (
						   (0x1003U 
						    == 
						    (0x707fU 
						     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						    ? 1U
						    : 
						   ((0x5003U 
						     == 
						     (0x707fU 
						      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						     ? 1U
						     : 
						    ((0x2003U 
						      == 
						      (0x707fU 
						       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						      ? 1U
						      : 
						     ((0x6003U 
						       == 
						       (0x707fU 
							& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						       ? 1U
						       : 
						      ((0x37U 
							== 
							(0x7fU 
							 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						        ? 1U
						        : 
						       ((0x17U 
							 == 
							 (0x7fU 
							  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							 ? 1U
							 : 
							((0x1033U 
							  == 
							  (0xfe00707fU 
							   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							  ? 1U
							  : 
							 ((0x1013U 
							   == 
							   (0xfc00707fU 
							    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							   ? 1U
							   : 
							  ((0x101bU 
							    == 
							    (0xfc00707fU 
							     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							    ? 1U
							    : 
							   ((0x103bU 
							     == 
							     (0xfe00707fU 
							      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							     ? 1U
							     : 
							    ((0x2033U 
							      == 
							      (0xfe00707fU 
							       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							      ? 1U
							      : 
							     ((0x2013U 
							       == 
							       (0x707fU 
								& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							       ? 1U
							       : 
							      ((0x3013U 
								== 
								(0x707fU 
								 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							        ? 1U
							        : 
							       ((0x3033U 
								 == 
								 (0xfe00707fU 
								  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								 ? 1U
								 : 
								((0x40005033U 
								  == 
								  (0xfe00707fU 
								   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								  ? 1U
								  : 
								 ((0x40005013U 
								   == 
								   (0xfc00707fU 
								    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								   ? 1U
								   : 
								  ((0x4000501bU 
								    == 
								    (0xfc00707fU 
								     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								    ? 1U
								    : 
								   ((0x4000503bU 
								     == 
								     (0xfe00707fU 
								      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								     ? 1U
								     : 
								    ((0x5033U 
								      == 
								      (0xfe00707fU 
								       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								      ? 1U
								      : 
								     ((0x5013U 
								       == 
								       (0xfc00707fU 
									& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								       ? 1U
								       : 
								      ((0x501bU 
									== 
									(0xfc00707fU 
									 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								        ? 1U
								        : 
								       ((0x503bU 
									 == 
									 (0xfe00707fU 
									  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									 ? 1U
									 : 
									((0x40000033U 
									  == 
									  (0xfe00707fU 
									   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									  ? 1U
									  : 
									 ((0x4000003bU 
									   == 
									   (0xfe00707fU 
									    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									   ? 1U
									   : 
									  ((0x4033U 
									    == 
									    (0xfe00707fU 
									     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									    ? 1U
									    : 
									   ((0x4013U 
									     == 
									     (0x707fU 
									      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									     ? 1U
									     : 
									    ((0x6033U 
									      == 
									      (0xfe00707fU 
									       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									      ? 1U
									      : 
									     ((0x6013U 
									       == 
									       (0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									       ? 1U
									       : 
									      ((0x33U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									        ? 1U
									        : 
									       ((0x13U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 1U
										 : 
										((0x1bU 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 1U
										 : 
										((0x3bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 1U
										 : 
										((0x7033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 1U
										 : 
										((0x7013U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 1U
										 : 
										((0x23U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 1U
										 : 
										((0x3023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0xffU
										 : 
										((0x1023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 3U
										 : 
										((0x2023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0xfU
										 : 1U)))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_wb_sel 
	= ((0x6fU == (0x7fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
	    ? 2U : ((0x2067U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
		     ? 2U : ((3U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
			      ? 1U : ((0x4003U == (0x707fU 
						   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
				       ? 1U : ((0x3003U 
						== 
						(0x707fU 
						 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
					        ? 1U
					        : (
						   (0x1003U 
						    == 
						    (0x707fU 
						     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						    ? 1U
						    : 
						   ((0x5003U 
						     == 
						     (0x707fU 
						      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						     ? 1U
						     : 
						    ((0x2003U 
						      == 
						      (0x707fU 
						       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						      ? 1U
						      : 
						     ((0x6003U 
						       == 
						       (0x707fU 
							& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						       ? 1U
						       : 
						      ((0x37U 
							== 
							(0x7fU 
							 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						        ? 0U
						        : 
						       ((0x17U 
							 == 
							 (0x7fU 
							  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							 ? 0U
							 : 
							((0x1033U 
							  == 
							  (0xfe00707fU 
							   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							  ? 0U
							  : 
							 ((0x1013U 
							   == 
							   (0xfc00707fU 
							    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							   ? 0U
							   : 
							  ((0x101bU 
							    == 
							    (0xfc00707fU 
							     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							    ? 0U
							    : 
							   ((0x103bU 
							     == 
							     (0xfe00707fU 
							      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							     ? 0U
							     : 
							    ((0x2033U 
							      == 
							      (0xfe00707fU 
							       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							      ? 0U
							      : 
							     ((0x2013U 
							       == 
							       (0x707fU 
								& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							       ? 0U
							       : 
							      ((0x3013U 
								== 
								(0x707fU 
								 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							        ? 0U
							        : 
							       ((0x3033U 
								 == 
								 (0xfe00707fU 
								  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								 ? 0U
								 : 
								((0x40005033U 
								  == 
								  (0xfe00707fU 
								   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								  ? 0U
								  : 
								 ((0x40005013U 
								   == 
								   (0xfc00707fU 
								    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								   ? 0U
								   : 
								  ((0x4000501bU 
								    == 
								    (0xfc00707fU 
								     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								    ? 0U
								    : 
								   ((0x4000503bU 
								     == 
								     (0xfe00707fU 
								      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								     ? 0U
								     : 
								    ((0x5033U 
								      == 
								      (0xfe00707fU 
								       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								      ? 0U
								      : 
								     ((0x5013U 
								       == 
								       (0xfc00707fU 
									& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								       ? 0U
								       : 
								      ((0x501bU 
									== 
									(0xfc00707fU 
									 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								        ? 0U
								        : 
								       ((0x503bU 
									 == 
									 (0xfe00707fU 
									  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									 ? 0U
									 : 
									((0x40000033U 
									  == 
									  (0xfe00707fU 
									   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									  ? 0U
									  : 
									 ((0x4000003bU 
									   == 
									   (0xfe00707fU 
									    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									   ? 0U
									   : 
									  ((0x4033U 
									    == 
									    (0xfe00707fU 
									     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									    ? 0U
									    : 
									   ((0x4013U 
									     == 
									     (0x707fU 
									      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									     ? 0U
									     : 
									    ((0x6033U 
									      == 
									      (0xfe00707fU 
									       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									      ? 0U
									      : 
									     ((0x6013U 
									       == 
									       (0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									       ? 0U
									       : 
									      ((0x33U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									        ? 0U
									        : 
									       ((0x13U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x1bU 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x3bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x7033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x7013U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x23U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x3023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x1023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x2023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x63U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x5063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x7063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x4063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x6063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x1063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x3073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 3U
										 : 
										((0x7073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 3U
										 : 
										((0x2073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 3U
										 : 
										((0x6073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 3U
										 : 
										((0x1073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 3U
										 : 
										((0x5073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 3U
										 : 0U)))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_162 
	= ((0x2000033U == (0xfe00707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
	   | ((0x2001033U == (0xfe00707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
	      | ((0x2002033U == (0xfe00707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		 | ((0x2003033U == (0xfe00707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		    | ((0x200003bU == (0xfe00707fU 
				       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		       | ((0x2006033U == (0xfe00707fU 
					  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
			  | ((0x2007033U == (0xfe00707fU 
					     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
			     | ((0x200703bU == (0xfe00707fU 
						& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
				| ((0x200603bU == (0xfe00707fU 
						   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
				   | ((0x2004033U == 
				       (0xfe00707fU 
					& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
				      | ((0x2005033U 
					  == (0xfe00707fU 
					      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
					 | ((0x200503bU 
					     == (0xfe00707fU 
						 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
					    | (0x200403bU 
					       == (0xfe00707fU 
						   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_659 
	= ((0x37U != (0x7fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
	   & ((0x17U != (0x7fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
	      & ((0x1033U != (0xfe00707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		 & ((0x1013U != (0xfc00707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		    & ((0x101bU != (0xfc00707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		       & ((0x103bU != (0xfe00707fU 
				       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
			  & ((0x2033U != (0xfe00707fU 
					  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
			     & ((0x2013U != (0x707fU 
					     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
				& ((0x3013U != (0x707fU 
						& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
				   & ((0x3033U != (0xfe00707fU 
						   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
				      & ((0x40005033U 
					  != (0xfe00707fU 
					      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
					 & ((0x40005013U 
					     != (0xfc00707fU 
						 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
					    & ((0x4000501bU 
						!= 
						(0xfc00707fU 
						 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
					       & ((0x4000503bU 
						   != 
						   (0xfe00707fU 
						    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
						  & ((0x5033U 
						      != 
						      (0xfe00707fU 
						       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
						     & ((0x5013U 
							 != 
							 (0xfc00707fU 
							  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
							& ((0x501bU 
							    != 
							    (0xfc00707fU 
							     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
							   & ((0x503bU 
							       != 
							       (0xfe00707fU 
								& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
							      & ((0x40000033U 
								  != 
								  (0xfe00707fU 
								   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
								 & ((0x4000003bU 
								     != 
								     (0xfe00707fU 
								      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
								    & ((0x4033U 
									!= 
									(0xfe00707fU 
									 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
								       & ((0x4013U 
									   != 
									   (0x707fU 
									    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
									  & ((0x6033U 
									      != 
									      (0xfe00707fU 
									       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
									     & ((0x6013U 
										!= 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										& ((0x33U 
										!= 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										& ((0x13U 
										!= 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										& ((0x1bU 
										!= 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										& ((0x3bU 
										!= 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										& ((0x7033U 
										!= 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										& ((0x7013U 
										!= 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										& ((0x23U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x3023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x1023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| (0x2023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))))))))))))))))))))))))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9473 
	= (((((((((((((((((((((((((((((((((((((((((
						   ((((((((((((((((((((((((((((((((((((((((((((((((0x300U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
										 ? 
										(((QData)((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp)) 
										<< 0xbU) 
										| (QData)((IData)(
										(((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie) 
										<< 7U) 
										| ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie) 
										<< 3U)))))
										 : VL_ULL(0)) 
										| ((0x301U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
										 ? VL_ULL(0x8000000000001100)
										 : VL_ULL(0))) 
										| ((0x304U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
										 ? (QData)((IData)(
										(((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mie_msi) 
										<< 8U) 
										| ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mie_mti) 
										<< 4U))))
										 : VL_ULL(0))) 
										| ((0x344U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
										 ? (QData)((IData)(
										(((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mip_msi) 
										<< 8U) 
										| ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mip_mti) 
										<< 4U))))
										 : VL_ULL(0))) 
										| ((0x305U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtvec
										 : VL_ULL(0))) 
										| ((0x340U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mscratch
										 : VL_ULL(0))) 
										| ((0x341U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc
										 : VL_ULL(0))) 
										| ((0x342U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcause
										 : VL_ULL(0))) 
										| ((0x343U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtval
										 : VL_ULL(0))) 
										| ((0x3a0U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_pmpcfg0
										 : VL_ULL(0))) 
										| ((0x3a1U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_pmpcfg1
										 : VL_ULL(0))) 
										| ((0xb00U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcycle
										 : VL_ULL(0))) 
										| ((0xb02U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_minstret
										 : VL_ULL(0))) 
										| ((0x320U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcounterinhibit
										 : VL_ULL(0))) 
										| ((0x3b0U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_0
										 : VL_ULL(0))) 
										| ((0x3b1U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_1
										 : VL_ULL(0))) 
										| ((0x3b2U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_2
										 : VL_ULL(0))) 
										| ((0x3b3U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_3
										 : VL_ULL(0))) 
										| ((0x3b4U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_4
										 : VL_ULL(0))) 
									       | ((0x3b5U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_5
										 : VL_ULL(0))) 
									      | ((0x3b6U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_6
										 : VL_ULL(0))) 
									     | ((0x3b7U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
										 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_7
										 : VL_ULL(0))) 
									    | ((0x3b8U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
									        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_8
									        : VL_ULL(0))) 
									   | ((0x3b9U 
									       == 
									       (0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
									       ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_9
									       : VL_ULL(0))) 
									  | ((0x3baU 
									      == 
									      (0xfffU 
									       & (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
									      ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_10
									      : VL_ULL(0))) 
									 | ((0x3bbU 
									     == 
									     (0xfffU 
									      & (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
									     ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_11
									     : VL_ULL(0))) 
									| ((0x3bcU 
									    == 
									    (0xfffU 
									     & (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
									    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_12
									    : VL_ULL(0))) 
								       | ((0x3bdU 
									   == 
									   (0xfffU 
									    & (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
									   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_13
									   : VL_ULL(0))) 
								      | ((0x3beU 
									  == 
									  (0xfffU 
									   & (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
									  ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_14
									  : VL_ULL(0))) 
								     | ((0x3bfU 
									 == 
									 (0xfffU 
									  & (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
									 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_15
									 : VL_ULL(0))) 
								    | ((0xb03U 
									== 
									(0xfffU 
									 & (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
								        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_0
								        : VL_ULL(0))) 
								   | ((0xb04U 
								       == 
								       (0xfffU 
									& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
								       ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_1
								       : VL_ULL(0))) 
								  | ((0xb05U 
								      == 
								      (0xfffU 
								       & (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
								      ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_2
								      : VL_ULL(0))) 
								 | ((0xb06U 
								     == 
								     (0xfffU 
								      & (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
								     ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_3
								     : VL_ULL(0))) 
								| ((0xb07U 
								    == 
								    (0xfffU 
								     & (IData)(
									       (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))
								    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_4
								    : VL_ULL(0))) 
							       | ((0xb08U 
								   == 
								   (0xfffU 
								    & (IData)(
									      (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									       >> 0x14U))))
								   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_5
								   : VL_ULL(0))) 
							      | ((0xb09U 
								  == 
								  (0xfffU 
								   & (IData)(
									     (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									      >> 0x14U))))
								  ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_6
								  : VL_ULL(0))) 
							     | ((0xb0aU 
								 == 
								 (0xfffU 
								  & (IData)(
									    (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									     >> 0x14U))))
								 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_7
								 : VL_ULL(0))) 
							    | ((0xb0bU 
								== 
								(0xfffU 
								 & (IData)(
									   (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									    >> 0x14U))))
							        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_8
							        : VL_ULL(0))) 
							   | ((0xb0cU 
							       == 
							       (0xfffU 
								& (IData)(
									  (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									   >> 0x14U))))
							       ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_9
							       : VL_ULL(0))) 
							  | ((0xb0dU 
							      == 
							      (0xfffU 
							       & (IData)(
									 (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									  >> 0x14U))))
							      ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_10
							      : VL_ULL(0))) 
							 | ((0xb0eU 
							     == 
							     (0xfffU 
							      & (IData)(
									(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									 >> 0x14U))))
							     ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_11
							     : VL_ULL(0))) 
							| ((0xb0fU 
							    == 
							    (0xfffU 
							     & (IData)(
								       (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									>> 0x14U))))
							    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_12
							    : VL_ULL(0))) 
						       | ((0xb10U 
							   == 
							   (0xfffU 
							    & (IData)(
								      (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
								       >> 0x14U))))
							   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_13
							   : VL_ULL(0))) 
						      | ((0xb11U 
							  == 
							  (0xfffU 
							   & (IData)(
								     (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
								      >> 0x14U))))
							  ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_14
							  : VL_ULL(0))) 
						     | ((0xb12U 
							 == 
							 (0xfffU 
							  & (IData)(
								    (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
								     >> 0x14U))))
							 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_15
							 : VL_ULL(0))) 
						    | ((0xb13U 
							== 
							(0xfffU 
							 & (IData)(
								   (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
								    >> 0x14U))))
						        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_16
						        : VL_ULL(0))) 
						   | ((0xb14U 
						       == 
						       (0xfffU 
							& (IData)(
								  (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
								   >> 0x14U))))
						       ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_17
						       : VL_ULL(0))) 
						  | ((0xb15U 
						      == 
						      (0xfffU 
						       & (IData)(
								 (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
								  >> 0x14U))))
						      ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_18
						      : VL_ULL(0))) 
						 | ((0xb16U 
						     == 
						     (0xfffU 
						      & (IData)(
								(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
								 >> 0x14U))))
						     ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_19
						     : VL_ULL(0))) 
						| ((0xb17U 
						    == 
						    (0xfffU 
						     & (IData)(
							       (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
								>> 0x14U))))
						    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_20
						    : VL_ULL(0))) 
					       | ((0xb18U 
						   == 
						   (0xfffU 
						    & (IData)(
							      (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							       >> 0x14U))))
						   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_21
						   : VL_ULL(0))) 
					      | ((0xb19U 
						  == 
						  (0xfffU 
						   & (IData)(
							     (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							      >> 0x14U))))
						  ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_22
						  : VL_ULL(0))) 
					     | ((0xb1aU 
						 == 
						 (0xfffU 
						  & (IData)(
							    (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							     >> 0x14U))))
						 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_23
						 : VL_ULL(0))) 
					    | ((0xb1bU 
						== 
						(0xfffU 
						 & (IData)(
							   (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							    >> 0x14U))))
					        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_24
					        : VL_ULL(0))) 
					   | ((0xb1cU 
					       == (0xfffU 
						   & (IData)(
							     (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							      >> 0x14U))))
					       ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_25
					       : VL_ULL(0))) 
					  | ((0xb1dU 
					      == (0xfffU 
						  & (IData)(
							    (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							     >> 0x14U))))
					      ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_26
					      : VL_ULL(0))) 
					 | ((0xb1eU 
					     == (0xfffU 
						 & (IData)(
							   (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							    >> 0x14U))))
					     ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_27
					     : VL_ULL(0))) 
					| ((0xb1fU 
					    == (0xfffU 
						& (IData)(
							  (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							   >> 0x14U))))
					    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_28
					    : VL_ULL(0))) 
				       | ((0x323U == 
					   (0xfffU 
					    & (IData)(
						      (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						       >> 0x14U))))
					   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_0
					   : VL_ULL(0))) 
				      | ((0x324U == 
					  (0xfffU & (IData)(
							    (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							     >> 0x14U))))
					  ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_1
					  : VL_ULL(0))) 
				     | ((0x325U == 
					 (0xfffU & (IData)(
							   (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							    >> 0x14U))))
					 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_2
					 : VL_ULL(0))) 
				    | ((0x326U == (0xfffU 
						   & (IData)(
							     (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							      >> 0x14U))))
				        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_3
				        : VL_ULL(0))) 
				   | ((0x327U == (0xfffU 
						  & (IData)(
							    (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							     >> 0x14U))))
				       ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_4
				       : VL_ULL(0))) 
				  | ((0x328U == (0xfffU 
						 & (IData)(
							   (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							    >> 0x14U))))
				      ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_5
				      : VL_ULL(0))) 
				 | ((0x329U == (0xfffU 
						& (IData)(
							  (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							   >> 0x14U))))
				     ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_6
				     : VL_ULL(0))) 
				| ((0x32aU == (0xfffU 
					       & (IData)(
							 (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							  >> 0x14U))))
				    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_7
				    : VL_ULL(0))) | 
			       ((0x32bU == (0xfffU 
					    & (IData)(
						      (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						       >> 0x14U))))
				 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_8
				 : VL_ULL(0))) | ((0x32cU 
						   == 
						   (0xfffU 
						    & (IData)(
							      (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							       >> 0x14U))))
						   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_9
						   : VL_ULL(0))) 
			     | ((0x32dU == (0xfffU 
					    & (IData)(
						      (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						       >> 0x14U))))
				 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_10
				 : VL_ULL(0))) | ((0x32eU 
						   == 
						   (0xfffU 
						    & (IData)(
							      (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							       >> 0x14U))))
						   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_11
						   : VL_ULL(0))) 
			   | ((0x32fU == (0xfffU & (IData)(
							   (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							    >> 0x14U))))
			       ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_12
			       : VL_ULL(0))) | ((0x330U 
						 == 
						 (0xfffU 
						  & (IData)(
							    (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							     >> 0x14U))))
						 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_13
						 : VL_ULL(0))) 
			 | ((0x331U == (0xfffU & (IData)(
							 (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							  >> 0x14U))))
			     ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_14
			     : VL_ULL(0))) | ((0x332U 
					       == (0xfffU 
						   & (IData)(
							     (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							      >> 0x14U))))
					       ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_15
					       : VL_ULL(0))) 
		       | ((0x333U == (0xfffU & (IData)(
						       (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							>> 0x14U))))
			   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_16
			   : VL_ULL(0))) | ((0x334U 
					     == (0xfffU 
						 & (IData)(
							   (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							    >> 0x14U))))
					     ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_17
					     : VL_ULL(0))) 
		     | ((0x335U == (0xfffU & (IData)(
						     (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						      >> 0x14U))))
			 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_18
			 : VL_ULL(0))) | ((0x336U == 
					   (0xfffU 
					    & (IData)(
						      (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						       >> 0x14U))))
					   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_19
					   : VL_ULL(0))) 
		   | ((0x337U == (0xfffU & (IData)(
						   (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						    >> 0x14U))))
		       ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_20
		       : VL_ULL(0))) | ((0x338U == 
					 (0xfffU & (IData)(
							   (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							    >> 0x14U))))
					 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_21
					 : VL_ULL(0))) 
		 | ((0x339U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						  >> 0x14U))))
		     ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_22
		     : VL_ULL(0))) | ((0x33aU == (0xfffU 
						  & (IData)(
							    (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							     >> 0x14U))))
				       ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_23
				       : VL_ULL(0))) 
	       | ((0x33bU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						>> 0x14U))))
		   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_24
		   : VL_ULL(0))) | ((0x33cU == (0xfffU 
						& (IData)(
							  (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							   >> 0x14U))))
				     ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_25
				     : VL_ULL(0))) 
	     | ((0x33dU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))
		 ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_26
		 : VL_ULL(0))) | ((0x33eU == (0xfffU 
					      & (IData)(
							(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							 >> 0x14U))))
				   ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_27
				   : VL_ULL(0))) | 
	   ((0x33fU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					  >> 0x14U))))
	     ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_28
	     : VL_ULL(0)));
    vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_ext_sel 
	= ((0x6fU == (0x7fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
	    ? 0U : ((0x2067U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
		     ? 0U : ((3U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
			      ? 0U : ((0x4003U == (0x707fU 
						   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
				       ? 0U : ((0x3003U 
						== 
						(0x707fU 
						 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
					        ? 0U
					        : (
						   (0x1003U 
						    == 
						    (0x707fU 
						     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						    ? 0U
						    : 
						   ((0x5003U 
						     == 
						     (0x707fU 
						      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						     ? 0U
						     : 
						    ((0x2003U 
						      == 
						      (0x707fU 
						       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						      ? 0U
						      : 
						     ((0x6003U 
						       == 
						       (0x707fU 
							& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						       ? 0U
						       : 
						      ((0x37U 
							== 
							(0x7fU 
							 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						        ? 0U
						        : 
						       ((0x17U 
							 == 
							 (0x7fU 
							  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							 ? 0U
							 : 
							((0x1033U 
							  == 
							  (0xfe00707fU 
							   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							  ? 0U
							  : 
							 ((0x1013U 
							   == 
							   (0xfc00707fU 
							    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							   ? 0U
							   : 
							  ((0x101bU 
							    == 
							    (0xfc00707fU 
							     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							    ? 5U
							    : 
							   ((0x103bU 
							     == 
							     (0xfe00707fU 
							      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							     ? 5U
							     : 
							    ((0x2033U 
							      == 
							      (0xfe00707fU 
							       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							      ? 0U
							      : 
							     ((0x2013U 
							       == 
							       (0x707fU 
								& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							       ? 0U
							       : 
							      ((0x3013U 
								== 
								(0x707fU 
								 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							        ? 0U
							        : 
							       ((0x3033U 
								 == 
								 (0xfe00707fU 
								  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								 ? 0U
								 : 
								((0x40005033U 
								  == 
								  (0xfe00707fU 
								   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								  ? 0U
								  : 
								 ((0x40005013U 
								   == 
								   (0xfc00707fU 
								    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								   ? 0U
								   : 
								  ((0x4000501bU 
								    == 
								    (0xfc00707fU 
								     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								    ? 5U
								    : 
								   ((0x4000503bU 
								     == 
								     (0xfe00707fU 
								      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								     ? 5U
								     : 
								    ((0x5033U 
								      == 
								      (0xfe00707fU 
								       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								      ? 0U
								      : 
								     ((0x5013U 
								       == 
								       (0xfc00707fU 
									& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								       ? 0U
								       : 
								      ((0x501bU 
									== 
									(0xfc00707fU 
									 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								        ? 5U
								        : 
								       ((0x503bU 
									 == 
									 (0xfe00707fU 
									  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									 ? 5U
									 : 
									((0x40000033U 
									  == 
									  (0xfe00707fU 
									   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									  ? 0U
									  : 
									 ((0x4000003bU 
									   == 
									   (0xfe00707fU 
									    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									   ? 5U
									   : 
									  ((0x4033U 
									    == 
									    (0xfe00707fU 
									     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									    ? 0U
									    : 
									   ((0x4013U 
									     == 
									     (0x707fU 
									      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									     ? 0U
									     : 
									    ((0x6033U 
									      == 
									      (0xfe00707fU 
									       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									      ? 0U
									      : 
									     ((0x6013U 
									       == 
									       (0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									       ? 0U
									       : 
									      ((0x33U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									        ? 0U
									        : 
									       ((0x13U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x1bU 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 5U
										 : 
										((0x3bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 5U
										 : 
										((0x7033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x7013U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x23U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x3023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x1023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x2023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x63U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x5063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x7063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x4063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x6063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x1063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x3073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x7073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x2073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x6073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x1073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x5073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x105073U 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))
										 ? 0U
										 : 
										((0x73U 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))
										 ? 0U
										 : 
										((0x10500073U 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))
										 ? 0U
										 : 
										((0x10200073U 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))
										 ? 0U
										 : 
										((0x30200073U 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))
										 ? 0U
										 : 
										((0xfU 
										== 
										(0xf00fffffU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x100fU 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))
										 ? 0U
										 : 
										((0x2000033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x2001033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x2002033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x2003033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x200003bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 5U
										 : 
										((0x2006033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x2007033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x200703bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 5U
										 : 
										((0x200603bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 5U
										 : 
										((0x2004033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x2005033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x200503bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 5U
										 : 
										((0x200403bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 5U
										 : 0U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel 
	= ((0x6fU == (0x7fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
	    ? 0U : ((0x2067U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
		     ? 0U : ((3U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
			      ? 0U : ((0x4003U == (0x707fU 
						   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
				       ? 0U : ((0x3003U 
						== 
						(0x707fU 
						 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
					        ? 0U
					        : (
						   (0x1003U 
						    == 
						    (0x707fU 
						     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						    ? 0U
						    : 
						   ((0x5003U 
						     == 
						     (0x707fU 
						      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						     ? 0U
						     : 
						    ((0x2003U 
						      == 
						      (0x707fU 
						       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						      ? 0U
						      : 
						     ((0x6003U 
						       == 
						       (0x707fU 
							& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						       ? 0U
						       : 
						      ((0x37U 
							== 
							(0x7fU 
							 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						        ? 0xcU
						        : 
						       ((0x17U 
							 == 
							 (0x7fU 
							  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							 ? 0U
							 : 
							((0x1033U 
							  == 
							  (0xfe00707fU 
							   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							  ? 5U
							  : 
							 ((0x1013U 
							   == 
							   (0xfc00707fU 
							    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							   ? 5U
							   : 
							  ((0x101bU 
							    == 
							    (0xfc00707fU 
							     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							    ? 5U
							    : 
							   ((0x103bU 
							     == 
							     (0xfe00707fU 
							      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							     ? 5U
							     : 
							    ((0x2033U 
							      == 
							      (0xfe00707fU 
							       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							      ? 6U
							      : 
							     ((0x2013U 
							       == 
							       (0x707fU 
								& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							       ? 6U
							       : 
							      ((0x3013U 
								== 
								(0x707fU 
								 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							        ? 7U
							        : 
							       ((0x3033U 
								 == 
								 (0xfe00707fU 
								  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								 ? 7U
								 : 
								((0x40005033U 
								  == 
								  (0xfe00707fU 
								   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								  ? 8U
								  : 
								 ((0x40005013U 
								   == 
								   (0xfc00707fU 
								    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								   ? 8U
								   : 
								  ((0x4000501bU 
								    == 
								    (0xfc00707fU 
								     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								    ? 9U
								    : 
								   ((0x4000503bU 
								     == 
								     (0xfe00707fU 
								      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								     ? 9U
								     : 
								    ((0x5033U 
								      == 
								      (0xfe00707fU 
								       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								      ? 0xaU
								      : 
								     ((0x5013U 
								       == 
								       (0xfc00707fU 
									& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								       ? 0xaU
								       : 
								      ((0x501bU 
									== 
									(0xfc00707fU 
									 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								        ? 0xbU
								        : 
								       ((0x503bU 
									 == 
									 (0xfe00707fU 
									  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									 ? 0xbU
									 : 
									((0x40000033U 
									  == 
									  (0xfe00707fU 
									   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									  ? 1U
									  : 
									 ((0x4000003bU 
									   == 
									   (0xfe00707fU 
									    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									   ? 1U
									   : 
									  ((0x4033U 
									    == 
									    (0xfe00707fU 
									     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									    ? 4U
									    : 
									   ((0x4013U 
									     == 
									     (0x707fU 
									      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									     ? 4U
									     : 
									    ((0x6033U 
									      == 
									      (0xfe00707fU 
									       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									      ? 3U
									      : 
									     ((0x6013U 
									       == 
									       (0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									       ? 3U
									       : 
									      ((0x33U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									        ? 0U
									        : 
									       ((0x13U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x1bU 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x3bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x7033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 2U
										 : 
										((0x7013U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 2U
										 : 
										((0x23U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x3023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x1023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x2023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x63U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x5063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x7063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x4063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x6063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x1063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x3073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0xcU
										 : 
										((0x7073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0xcU
										 : 
										((0x2073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0xcU
										 : 
										((0x6073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0xcU
										 : 
										((0x1073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0xcU
										 : 
										((0x5073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0xcU
										 : 
										((0x105073U 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))
										 ? 0U
										 : 
										((0x73U 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))
										 ? 0U
										 : 
										((0x10500073U 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))
										 ? 0U
										 : 
										((0x10200073U 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))
										 ? 0U
										 : 
										((0x30200073U 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))
										 ? 0U
										 : 
										((0xfU 
										== 
										(0xf00fffffU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x100fU 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))
										 ? 0U
										 : 
										((0x2000033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0xdU
										 : 
										((0x2001033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0xeU
										 : 
										((0x2002033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0xfU
										 : 
										((0x2003033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0x10U
										 : 
										((0x200003bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0xdU
										 : 
										((0x2006033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0x11U
										 : 
										((0x2007033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0x12U
										 : 
										((0x200703bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0x13U
										 : 
										((0x200603bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0x14U
										 : 
										((0x2004033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0x15U
										 : 
										((0x2005033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0x16U
										 : 
										((0x200503bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0x17U
										 : 
										((0x200403bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0x18U
										 : 0U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__legalcsrnumber 
	= (((((((((((((((((((((((((((((((((((((((((
						   ((((((((((((((((((((((((((((((((((((((((((((((((((((((0xf11U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U)))) 
										| (0xf12U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0xf13U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0xf14U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0x300U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0x301U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0x302U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0x303U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0x304U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0x344U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0x305U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0x306U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0x340U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0x341U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0x342U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0x343U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0x3a0U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0x3a1U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0xb00U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0xb02U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0x320U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0x3b0U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0x3b1U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0x3b2U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0x3b3U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
										| (0x3b4U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
									       | (0x3b5U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
									      | (0x3b6U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
									     | (0x3b7U 
										== 
										(0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
									    | (0x3b8U 
									       == 
									       (0xfffU 
										& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
									   | (0x3b9U 
									      == 
									      (0xfffU 
									       & (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
									  | (0x3baU 
									     == 
									     (0xfffU 
									      & (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
									 | (0x3bbU 
									    == 
									    (0xfffU 
									     & (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
									| (0x3bcU 
									   == 
									   (0xfffU 
									    & (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
								       | (0x3bdU 
									  == 
									  (0xfffU 
									   & (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
								      | (0x3beU 
									 == 
									 (0xfffU 
									  & (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
								     | (0x3bfU 
									== 
									(0xfffU 
									 & (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
								    | (0xb03U 
								       == 
								       (0xfffU 
									& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
								   | (0xb04U 
								      == 
								      (0xfffU 
								       & (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
								  | (0xb05U 
								     == 
								     (0xfffU 
								      & (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
								 | (0xb06U 
								    == 
								    (0xfffU 
								     & (IData)(
									       (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x14U))))) 
								| (0xb07U 
								   == 
								   (0xfffU 
								    & (IData)(
									      (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									       >> 0x14U))))) 
							       | (0xb08U 
								  == 
								  (0xfffU 
								   & (IData)(
									     (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									      >> 0x14U))))) 
							      | (0xb09U 
								 == 
								 (0xfffU 
								  & (IData)(
									    (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									     >> 0x14U))))) 
							     | (0xb0aU 
								== 
								(0xfffU 
								 & (IData)(
									   (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									    >> 0x14U))))) 
							    | (0xb0bU 
							       == 
							       (0xfffU 
								& (IData)(
									  (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									   >> 0x14U))))) 
							   | (0xb0cU 
							      == 
							      (0xfffU 
							       & (IData)(
									 (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									  >> 0x14U))))) 
							  | (0xb0dU 
							     == 
							     (0xfffU 
							      & (IData)(
									(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									 >> 0x14U))))) 
							 | (0xb0eU 
							    == 
							    (0xfffU 
							     & (IData)(
								       (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									>> 0x14U))))) 
							| (0xb0fU 
							   == 
							   (0xfffU 
							    & (IData)(
								      (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
								       >> 0x14U))))) 
						       | (0xb10U 
							  == 
							  (0xfffU 
							   & (IData)(
								     (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
								      >> 0x14U))))) 
						      | (0xb11U 
							 == 
							 (0xfffU 
							  & (IData)(
								    (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
								     >> 0x14U))))) 
						     | (0xb12U 
							== 
							(0xfffU 
							 & (IData)(
								   (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
								    >> 0x14U))))) 
						    | (0xb13U 
						       == 
						       (0xfffU 
							& (IData)(
								  (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
								   >> 0x14U))))) 
						   | (0xb14U 
						      == 
						      (0xfffU 
						       & (IData)(
								 (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
								  >> 0x14U))))) 
						  | (0xb15U 
						     == 
						     (0xfffU 
						      & (IData)(
								(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
								 >> 0x14U))))) 
						 | (0xb16U 
						    == 
						    (0xfffU 
						     & (IData)(
							       (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
								>> 0x14U))))) 
						| (0xb17U 
						   == 
						   (0xfffU 
						    & (IData)(
							      (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							       >> 0x14U))))) 
					       | (0xb18U 
						  == 
						  (0xfffU 
						   & (IData)(
							     (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							      >> 0x14U))))) 
					      | (0xb19U 
						 == 
						 (0xfffU 
						  & (IData)(
							    (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							     >> 0x14U))))) 
					     | (0xb1aU 
						== 
						(0xfffU 
						 & (IData)(
							   (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							    >> 0x14U))))) 
					    | (0xb1bU 
					       == (0xfffU 
						   & (IData)(
							     (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							      >> 0x14U))))) 
					   | (0xb1cU 
					      == (0xfffU 
						  & (IData)(
							    (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							     >> 0x14U))))) 
					  | (0xb1dU 
					     == (0xfffU 
						 & (IData)(
							   (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							    >> 0x14U))))) 
					 | (0xb1eU 
					    == (0xfffU 
						& (IData)(
							  (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							   >> 0x14U))))) 
					| (0xb1fU == 
					   (0xfffU 
					    & (IData)(
						      (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						       >> 0x14U))))) 
				       | (0x323U == 
					  (0xfffU & (IData)(
							    (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							     >> 0x14U))))) 
				      | (0x324U == 
					 (0xfffU & (IData)(
							   (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							    >> 0x14U))))) 
				     | (0x325U == (0xfffU 
						   & (IData)(
							     (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							      >> 0x14U))))) 
				    | (0x326U == (0xfffU 
						  & (IData)(
							    (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							     >> 0x14U))))) 
				   | (0x327U == (0xfffU 
						 & (IData)(
							   (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							    >> 0x14U))))) 
				  | (0x328U == (0xfffU 
						& (IData)(
							  (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							   >> 0x14U))))) 
				 | (0x329U == (0xfffU 
					       & (IData)(
							 (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							  >> 0x14U))))) 
				| (0x32aU == (0xfffU 
					      & (IData)(
							(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							 >> 0x14U))))) 
			       | (0x32bU == (0xfffU 
					     & (IData)(
						       (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							>> 0x14U))))) 
			      | (0x32cU == (0xfffU 
					    & (IData)(
						      (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						       >> 0x14U))))) 
			     | (0x32dU == (0xfffU & (IData)(
							    (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							     >> 0x14U))))) 
			    | (0x32eU == (0xfffU & (IData)(
							   (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							    >> 0x14U))))) 
			   | (0x32fU == (0xfffU & (IData)(
							  (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							   >> 0x14U))))) 
			  | (0x330U == (0xfffU & (IData)(
							 (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							  >> 0x14U))))) 
			 | (0x331U == (0xfffU & (IData)(
							(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							 >> 0x14U))))) 
			| (0x332U == (0xfffU & (IData)(
						       (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							>> 0x14U))))) 
		       | (0x333U == (0xfffU & (IData)(
						      (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						       >> 0x14U))))) 
		      | (0x334U == (0xfffU & (IData)(
						     (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						      >> 0x14U))))) 
		     | (0x335U == (0xfffU & (IData)(
						    (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						     >> 0x14U))))) 
		    | (0x336U == (0xfffU & (IData)(
						   (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						    >> 0x14U))))) 
		   | (0x337U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						   >> 0x14U))))) 
		  | (0x338U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						  >> 0x14U))))) 
		 | (0x339U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						 >> 0x14U))))) 
		| (0x33aU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						>> 0x14U))))) 
	       | (0x33bU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					       >> 0x14U))))) 
	      | (0x33cU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					      >> 0x14U))))) 
	     | (0x33dU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					     >> 0x14U))))) 
	    | (0x33eU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					    >> 0x14U))))) 
	   | (0x33fU == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					   >> 0x14U)))));
    vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_csr_op 
	= ((0x6fU == (0x7fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
	    ? 0U : ((0x2067U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
		     ? 0U : ((3U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
			      ? 0U : ((0x4003U == (0x707fU 
						   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
				       ? 0U : ((0x3003U 
						== 
						(0x707fU 
						 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
					        ? 0U
					        : (
						   (0x1003U 
						    == 
						    (0x707fU 
						     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						    ? 0U
						    : 
						   ((0x5003U 
						     == 
						     (0x707fU 
						      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						     ? 0U
						     : 
						    ((0x2003U 
						      == 
						      (0x707fU 
						       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						      ? 0U
						      : 
						     ((0x6003U 
						       == 
						       (0x707fU 
							& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						       ? 0U
						       : 
						      ((0x37U 
							== 
							(0x7fU 
							 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						        ? 0U
						        : 
						       ((0x17U 
							 == 
							 (0x7fU 
							  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							 ? 0U
							 : 
							((0x1033U 
							  == 
							  (0xfe00707fU 
							   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							  ? 0U
							  : 
							 ((0x1013U 
							   == 
							   (0xfc00707fU 
							    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							   ? 0U
							   : 
							  ((0x101bU 
							    == 
							    (0xfc00707fU 
							     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							    ? 0U
							    : 
							   ((0x103bU 
							     == 
							     (0xfe00707fU 
							      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							     ? 0U
							     : 
							    ((0x2033U 
							      == 
							      (0xfe00707fU 
							       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							      ? 0U
							      : 
							     ((0x2013U 
							       == 
							       (0x707fU 
								& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							       ? 0U
							       : 
							      ((0x3013U 
								== 
								(0x707fU 
								 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							        ? 0U
							        : 
							       ((0x3033U 
								 == 
								 (0xfe00707fU 
								  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								 ? 0U
								 : 
								((0x40005033U 
								  == 
								  (0xfe00707fU 
								   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								  ? 0U
								  : 
								 ((0x40005013U 
								   == 
								   (0xfc00707fU 
								    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								   ? 0U
								   : 
								  ((0x4000501bU 
								    == 
								    (0xfc00707fU 
								     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								    ? 0U
								    : 
								   ((0x4000503bU 
								     == 
								     (0xfe00707fU 
								      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								     ? 0U
								     : 
								    ((0x5033U 
								      == 
								      (0xfe00707fU 
								       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								      ? 0U
								      : 
								     ((0x5013U 
								       == 
								       (0xfc00707fU 
									& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								       ? 0U
								       : 
								      ((0x501bU 
									== 
									(0xfc00707fU 
									 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								        ? 0U
								        : 
								       ((0x503bU 
									 == 
									 (0xfe00707fU 
									  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									 ? 0U
									 : 
									((0x40000033U 
									  == 
									  (0xfe00707fU 
									   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									  ? 0U
									  : 
									 ((0x4000003bU 
									   == 
									   (0xfe00707fU 
									    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									   ? 0U
									   : 
									  ((0x4033U 
									    == 
									    (0xfe00707fU 
									     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									    ? 0U
									    : 
									   ((0x4013U 
									     == 
									     (0x707fU 
									      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									     ? 0U
									     : 
									    ((0x6033U 
									      == 
									      (0xfe00707fU 
									       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									      ? 0U
									      : 
									     ((0x6013U 
									       == 
									       (0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									       ? 0U
									       : 
									      ((0x33U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									        ? 0U
									        : 
									       ((0x13U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x1bU 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x3bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x7033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x7013U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x23U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x3023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x1023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x2023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x63U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x5063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x7063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x4063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x6063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x1063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x3073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 3U
										 : 
										((0x7073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 3U
										 : 
										((0x2073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 4U
										 : 
										((0x6073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 4U
										 : 
										((0x1073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 2U
										 : 
										((0x5073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 2U
										 : 
										((0x105073U 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))
										 ? 5U
										 : 
										((0x73U 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))
										 ? 5U
										 : 
										((0x10500073U 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))
										 ? 0U
										 : 
										((0x10200073U 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))
										 ? 5U
										 : 
										((0x30200073U 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))
										 ? 5U
										 : 0U))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op1_sel 
	= ((0x6fU == (0x7fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
	    ? 0U : ((0x2067U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
		     ? 0U : ((3U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
			      ? 0U : ((0x4003U == (0x707fU 
						   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
				       ? 0U : ((0x3003U 
						== 
						(0x707fU 
						 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
					        ? 0U
					        : (
						   (0x1003U 
						    == 
						    (0x707fU 
						     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						    ? 0U
						    : 
						   ((0x5003U 
						     == 
						     (0x707fU 
						      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						     ? 0U
						     : 
						    ((0x2003U 
						      == 
						      (0x707fU 
						       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						      ? 0U
						      : 
						     ((0x6003U 
						       == 
						       (0x707fU 
							& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						       ? 0U
						       : 
						      ((0x37U 
							== 
							(0x7fU 
							 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						        ? 2U
						        : 
						       ((0x17U 
							 == 
							 (0x7fU 
							  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							 ? 2U
							 : 
							((0x1033U 
							  == 
							  (0xfe00707fU 
							   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							  ? 0U
							  : 
							 ((0x1013U 
							   == 
							   (0xfc00707fU 
							    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							   ? 0U
							   : 
							  ((0x101bU 
							    == 
							    (0xfc00707fU 
							     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							    ? 0U
							    : 
							   ((0x103bU 
							     == 
							     (0xfe00707fU 
							      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							     ? 0U
							     : 
							    ((0x2033U 
							      == 
							      (0xfe00707fU 
							       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							      ? 0U
							      : 
							     ((0x2013U 
							       == 
							       (0x707fU 
								& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							       ? 0U
							       : 
							      ((0x3013U 
								== 
								(0x707fU 
								 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							        ? 0U
							        : 
							       ((0x3033U 
								 == 
								 (0xfe00707fU 
								  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								 ? 0U
								 : 
								((0x40005033U 
								  == 
								  (0xfe00707fU 
								   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								  ? 0U
								  : 
								 ((0x40005013U 
								   == 
								   (0xfc00707fU 
								    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								   ? 0U
								   : 
								  ((0x4000501bU 
								    == 
								    (0xfc00707fU 
								     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								    ? 0U
								    : 
								   ((0x4000503bU 
								     == 
								     (0xfe00707fU 
								      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								     ? 0U
								     : 
								    ((0x5033U 
								      == 
								      (0xfe00707fU 
								       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								      ? 0U
								      : 
								     ((0x5013U 
								       == 
								       (0xfc00707fU 
									& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								       ? 0U
								       : 
								      ((0x501bU 
									== 
									(0xfc00707fU 
									 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								        ? 0U
								        : 
								       ((0x503bU 
									 == 
									 (0xfe00707fU 
									  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									 ? 0U
									 : 
									((0x40000033U 
									  == 
									  (0xfe00707fU 
									   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									  ? 0U
									  : 
									 ((0x4000003bU 
									   == 
									   (0xfe00707fU 
									    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									   ? 0U
									   : 
									  ((0x4033U 
									    == 
									    (0xfe00707fU 
									     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									    ? 0U
									    : 
									   ((0x4013U 
									     == 
									     (0x707fU 
									      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									     ? 0U
									     : 
									    ((0x6033U 
									      == 
									      (0xfe00707fU 
									       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									      ? 0U
									      : 
									     ((0x6013U 
									       == 
									       (0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									       ? 0U
									       : 
									      ((0x33U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									        ? 0U
									        : 
									       ((0x13U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x1bU 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x3bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x7033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x7013U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x23U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x3023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x1023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x2023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x63U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x5063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x7063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x4063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x6063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x1063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x3073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x7073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 1U
										 : 
										((0x2073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x6073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 1U
										 : 
										((0x1073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x5073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 1U
										 : 0U)))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel 
	= ((0x6fU == (0x7fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
	    ? 0U : ((0x2067U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
		     ? 0U : ((3U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
			      ? 2U : ((0x4003U == (0x707fU 
						   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
				       ? 2U : ((0x3003U 
						== 
						(0x707fU 
						 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
					        ? 2U
					        : (
						   (0x1003U 
						    == 
						    (0x707fU 
						     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						    ? 2U
						    : 
						   ((0x5003U 
						     == 
						     (0x707fU 
						      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						     ? 2U
						     : 
						    ((0x2003U 
						      == 
						      (0x707fU 
						       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						      ? 2U
						      : 
						     ((0x6003U 
						       == 
						       (0x707fU 
							& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						       ? 2U
						       : 
						      ((0x37U 
							== 
							(0x7fU 
							 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
						        ? 0U
						        : 
						       ((0x17U 
							 == 
							 (0x7fU 
							  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							 ? 1U
							 : 
							((0x1033U 
							  == 
							  (0xfe00707fU 
							   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							  ? 0U
							  : 
							 ((0x1013U 
							   == 
							   (0xfc00707fU 
							    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							   ? 2U
							   : 
							  ((0x101bU 
							    == 
							    (0xfc00707fU 
							     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							    ? 2U
							    : 
							   ((0x103bU 
							     == 
							     (0xfe00707fU 
							      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							     ? 0U
							     : 
							    ((0x2033U 
							      == 
							      (0xfe00707fU 
							       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							      ? 0U
							      : 
							     ((0x2013U 
							       == 
							       (0x707fU 
								& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							       ? 2U
							       : 
							      ((0x3013U 
								== 
								(0x707fU 
								 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
							        ? 2U
							        : 
							       ((0x3033U 
								 == 
								 (0xfe00707fU 
								  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								 ? 0U
								 : 
								((0x40005033U 
								  == 
								  (0xfe00707fU 
								   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								  ? 0U
								  : 
								 ((0x40005013U 
								   == 
								   (0xfc00707fU 
								    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								   ? 2U
								   : 
								  ((0x4000501bU 
								    == 
								    (0xfc00707fU 
								     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								    ? 2U
								    : 
								   ((0x4000503bU 
								     == 
								     (0xfe00707fU 
								      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								     ? 0U
								     : 
								    ((0x5033U 
								      == 
								      (0xfe00707fU 
								       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								      ? 0U
								      : 
								     ((0x5013U 
								       == 
								       (0xfc00707fU 
									& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								       ? 2U
								       : 
								      ((0x501bU 
									== 
									(0xfc00707fU 
									 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
								        ? 2U
								        : 
								       ((0x503bU 
									 == 
									 (0xfe00707fU 
									  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									 ? 0U
									 : 
									((0x40000033U 
									  == 
									  (0xfe00707fU 
									   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									  ? 0U
									  : 
									 ((0x4000003bU 
									   == 
									   (0xfe00707fU 
									    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									   ? 0U
									   : 
									  ((0x4033U 
									    == 
									    (0xfe00707fU 
									     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									    ? 0U
									    : 
									   ((0x4013U 
									     == 
									     (0x707fU 
									      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									     ? 2U
									     : 
									    ((0x6033U 
									      == 
									      (0xfe00707fU 
									       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									      ? 0U
									      : 
									     ((0x6013U 
									       == 
									       (0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									       ? 2U
									       : 
									      ((0x33U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
									        ? 0U
									        : 
									       ((0x13U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 2U
										 : 
										((0x1bU 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 2U
										 : 
										((0x3bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x7033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 0U
										 : 
										((0x7013U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 2U
										 : 
										((0x23U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 3U
										 : 
										((0x3023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 3U
										 : 
										((0x1023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 3U
										 : 
										((0x2023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 3U
										 : 0U)))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_4_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[(0x1fU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
			   >> 0xfU)))];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_7_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[(0x1fU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
			   >> 0x14U)))];
    vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_reg_wen 
	= ((0x6fU == (0x7fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
	   | ((0x2067U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
	      | ((3U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		 | ((0x4003U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		    | ((0x3003U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		       | ((0x1003U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
			  | ((0x5003U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
			     | ((0x2003U == (0x707fU 
					     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
				| ((0x6003U == (0x707fU 
						& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
				   | ((0x37U == (0x7fU 
						 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
				      | ((0x17U == 
					  (0x7fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
					 | ((0x1033U 
					     == (0xfe00707fU 
						 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
					    | ((0x1013U 
						== 
						(0xfc00707fU 
						 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
					       | ((0x101bU 
						   == 
						   (0xfc00707fU 
						    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
						  | ((0x103bU 
						      == 
						      (0xfe00707fU 
						       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
						     | ((0x2033U 
							 == 
							 (0xfe00707fU 
							  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
							| ((0x2013U 
							    == 
							    (0x707fU 
							     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
							   | ((0x3013U 
							       == 
							       (0x707fU 
								& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
							      | ((0x3033U 
								  == 
								  (0xfe00707fU 
								   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
								 | ((0x40005033U 
								     == 
								     (0xfe00707fU 
								      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
								    | ((0x40005013U 
									== 
									(0xfc00707fU 
									 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
								       | ((0x4000501bU 
									   == 
									   (0xfc00707fU 
									    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
									  | ((0x4000503bU 
									      == 
									      (0xfe00707fU 
									       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
									     | ((0x5033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x5013U 
										== 
										(0xfc00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x501bU 
										== 
										(0xfc00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x503bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x40000033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x4000003bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x4033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x4013U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x6033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x6013U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x33U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x13U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x1bU 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x3bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x7033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x7013U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x23U 
										!= 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										& ((0x3023U 
										!= 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										& ((0x1023U 
										!= 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										& ((0x2023U 
										!= 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										& ((0x63U 
										!= 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										& ((0x5063U 
										!= 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										& ((0x7063U 
										!= 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										& ((0x4063U 
										!= 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										& ((0x6063U 
										!= 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										& ((0x1063U 
										!= 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										& ((0x3073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x7073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x2073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x6073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x1073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x5073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x105073U 
										!= (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)) 
										& ((0x73U 
										!= (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)) 
										& ((0x10500073U 
										!= (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)) 
										& ((0x10200073U 
										!= (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)) 
										& ((0x30200073U 
										!= (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)) 
										& ((0xfU 
										!= 
										(0xf00fffffU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										& ((0x100fU 
										!= (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)) 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_162)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_valid_inst 
	= ((0x6fU == (0x7fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
	   | ((0x2067U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
	      | ((3U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		 | ((0x4003U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		    | ((0x3003U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		       | ((0x1003U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
			  | ((0x5003U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
			     | ((0x2003U == (0x707fU 
					     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
				| ((0x6003U == (0x707fU 
						& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
				   | ((0x37U == (0x7fU 
						 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
				      | ((0x17U == 
					  (0x7fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
					 | ((0x1033U 
					     == (0xfe00707fU 
						 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
					    | ((0x1013U 
						== 
						(0xfc00707fU 
						 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
					       | ((0x101bU 
						   == 
						   (0xfc00707fU 
						    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
						  | ((0x103bU 
						      == 
						      (0xfe00707fU 
						       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
						     | ((0x2033U 
							 == 
							 (0xfe00707fU 
							  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
							| ((0x2013U 
							    == 
							    (0x707fU 
							     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
							   | ((0x3013U 
							       == 
							       (0x707fU 
								& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
							      | ((0x3033U 
								  == 
								  (0xfe00707fU 
								   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
								 | ((0x40005033U 
								     == 
								     (0xfe00707fU 
								      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
								    | ((0x40005013U 
									== 
									(0xfc00707fU 
									 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
								       | ((0x4000501bU 
									   == 
									   (0xfc00707fU 
									    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
									  | ((0x4000503bU 
									      == 
									      (0xfe00707fU 
									       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
									     | ((0x5033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x5013U 
										== 
										(0xfc00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x501bU 
										== 
										(0xfc00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x503bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x40000033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x4000003bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x4033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x4013U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x6033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x6013U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x33U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x13U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x1bU 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x3bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x7033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x7013U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x23U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x3023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x1023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x2023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x63U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x5063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x7063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x4063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x6063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x1063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x3073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x7073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x2073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x6073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x1073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x5073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x105073U 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)) 
										| ((0x73U 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)) 
										| ((0x10500073U 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)) 
										| ((0x10200073U 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)) 
										| ((0x30200073U 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)) 
										| ((0xfU 
										== 
										(0xf00fffffU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x100fU 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)) 
										| (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_162)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_mem_wen 
	= ((0x6fU != (0x7fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
	   & ((0x2067U != (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
	      & ((3U != (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		 & ((0x4003U != (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		    & ((0x3003U != (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		       & ((0x1003U != (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
			  & ((0x5003U != (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
			     & ((0x2003U != (0x707fU 
					     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
				& ((0x6003U != (0x707fU 
						& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
				   & (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_659))))))))));
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_667 
	= ((0x2067U != (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
	   & ((3U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
	      | ((0x4003U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		 | ((0x3003U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		    | ((0x1003U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		       | ((0x5003U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
			  | ((0x2003U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
			     | ((0x6003U == (0x707fU 
					     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
				| (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_659)))))))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_ismret 
	= ((5U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_csr_op)) 
	   & (0x302U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					   >> 0x14U)))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall 
	= ((5U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_csr_op)) 
	   & (0U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
				       >> 0x14U)))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak 
	= ((5U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_csr_op)) 
	   & (1U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
				       >> 0x14U)))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__wire_csr_op 
	= ((((3U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_csr_op)) 
	     | (4U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_csr_op))) 
	    & (0U == (0x1fU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
				       >> 0xfU)))))
	    ? 1U : (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_csr_op));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_254 
	= ((0U != (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_csr_op)) 
	   & (5U != (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_csr_op)));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp1_data 
	= ((0U == (0x1fU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
				    >> 0xfU)))) ? VL_ULL(0)
	    : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_4_data);
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp2_data 
	= ((0U == (0x1fU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
				    >> 0x14U)))) ? VL_ULL(0)
	    : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_7_data);
}

VL_INLINE_OPT void Vtop::_sequent__TOP__6(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_sequent__TOP__6\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp2,95,0,3);
    //char	__VpadToAlign196[4];
    VL_SIGW(__Vtemp3,95,0,3);
    //char	__VpadToAlign212[4];
    VL_SIGW(__Vtemp5,95,0,3);
    // Body
    vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_reg_wen 
	= ((0x6fU == (0x7fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
	   | ((0x2067U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
	      | ((3U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		 | ((0x4003U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		    | ((0x3003U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		       | ((0x1003U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
			  | ((0x5003U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
			     | ((0x2003U == (0x707fU 
					     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
				| ((0x6003U == (0x707fU 
						& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
				   | ((0x37U == (0x7fU 
						 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
				      | ((0x17U == 
					  (0x7fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
					 | ((0x1033U 
					     == (0xfe00707fU 
						 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
					    | ((0x1013U 
						== 
						(0xfc00707fU 
						 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
					       | ((0x101bU 
						   == 
						   (0xfc00707fU 
						    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
						  | ((0x103bU 
						      == 
						      (0xfe00707fU 
						       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
						     | ((0x2033U 
							 == 
							 (0xfe00707fU 
							  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
							| ((0x2013U 
							    == 
							    (0x707fU 
							     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
							   | ((0x3013U 
							       == 
							       (0x707fU 
								& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
							      | ((0x3033U 
								  == 
								  (0xfe00707fU 
								   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
								 | ((0x40005033U 
								     == 
								     (0xfe00707fU 
								      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
								    | ((0x40005013U 
									== 
									(0xfc00707fU 
									 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
								       | ((0x4000501bU 
									   == 
									   (0xfc00707fU 
									    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
									  | ((0x4000503bU 
									      == 
									      (0xfe00707fU 
									       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
									     | ((0x5033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x5013U 
										== 
										(0xfc00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x501bU 
										== 
										(0xfc00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x503bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x40000033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x4000003bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x4033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x4013U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x6033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x6013U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x33U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x13U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x1bU 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x3bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x7033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x7013U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x23U 
										!= 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										& ((0x3023U 
										!= 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										& ((0x1023U 
										!= 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										& ((0x2023U 
										!= 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										& ((0x63U 
										!= 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										& ((0x5063U 
										!= 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										& ((0x7063U 
										!= 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										& ((0x4063U 
										!= 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										& ((0x6063U 
										!= 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										& ((0x1063U 
										!= 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										& ((0x3073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x7073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x2073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x6073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x1073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x5073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x105073U 
										!= (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)) 
										& ((0x73U 
										!= (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)) 
										& ((0x10500073U 
										!= (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)) 
										& ((0x10200073U 
										!= (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)) 
										& ((0x30200073U 
										!= (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)) 
										& ((0xfU 
										!= 
										(0xf00fffffU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										& ((0x100fU 
										!= (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)) 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_162)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_valid_inst 
	= ((0x6fU == (0x7fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
	   | ((0x2067U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
	      | ((3U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		 | ((0x4003U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		    | ((0x3003U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		       | ((0x1003U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
			  | ((0x5003U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
			     | ((0x2003U == (0x707fU 
					     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
				| ((0x6003U == (0x707fU 
						& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
				   | ((0x37U == (0x7fU 
						 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
				      | ((0x17U == 
					  (0x7fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
					 | ((0x1033U 
					     == (0xfe00707fU 
						 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
					    | ((0x1013U 
						== 
						(0xfc00707fU 
						 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
					       | ((0x101bU 
						   == 
						   (0xfc00707fU 
						    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
						  | ((0x103bU 
						      == 
						      (0xfe00707fU 
						       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
						     | ((0x2033U 
							 == 
							 (0xfe00707fU 
							  & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
							| ((0x2013U 
							    == 
							    (0x707fU 
							     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
							   | ((0x3013U 
							       == 
							       (0x707fU 
								& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
							      | ((0x3033U 
								  == 
								  (0xfe00707fU 
								   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
								 | ((0x40005033U 
								     == 
								     (0xfe00707fU 
								      & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
								    | ((0x40005013U 
									== 
									(0xfc00707fU 
									 & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
								       | ((0x4000501bU 
									   == 
									   (0xfc00707fU 
									    & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
									  | ((0x4000503bU 
									      == 
									      (0xfe00707fU 
									       & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
									     | ((0x5033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x5013U 
										== 
										(0xfc00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x501bU 
										== 
										(0xfc00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x503bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x40000033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x4000003bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x4033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x4013U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x6033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x6013U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x33U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x13U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x1bU 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x3bU 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x7033U 
										== 
										(0xfe00707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x7013U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x23U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x3023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x1023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x2023U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x63U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x5063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x7063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x4063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x6063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x1063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x3073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x7073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x2073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x6073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x1073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x5073U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x105073U 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)) 
										| ((0x73U 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)) 
										| ((0x10500073U 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)) 
										| ((0x10200073U 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)) 
										| ((0x30200073U 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)) 
										| ((0xfU 
										== 
										(0xf00fffffU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
										| ((0x100fU 
										== (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)) 
										| (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_162)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_mem_wen 
	= ((0x6fU != (0x7fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
	   & ((0x2067U != (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
	      & ((3U != (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		 & ((0x4003U != (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		    & ((0x3003U != (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		       & ((0x1003U != (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
			  & ((0x5003U != (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
			     & ((0x2003U != (0x707fU 
					     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
				& ((0x6003U != (0x707fU 
						& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
				   & (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_659))))))))));
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_667 
	= ((0x2067U != (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
	   & ((3U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
	      | ((0x4003U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		 | ((0x3003U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		    | ((0x1003U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		       | ((0x5003U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
			  | ((0x2003U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
			     | ((0x6003U == (0x707fU 
					     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
				| (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_659)))))))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_ismret 
	= ((5U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_csr_op)) 
	   & (0x302U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
					   >> 0x14U)))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall 
	= ((5U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_csr_op)) 
	   & (0U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
				       >> 0x14U)))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak 
	= ((5U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_csr_op)) 
	   & (1U == (0xfffU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
				       >> 0x14U)))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__wire_csr_op 
	= ((((3U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_csr_op)) 
	     | (4U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_csr_op))) 
	    & (0U == (0x1fU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
				       >> 0xfU)))))
	    ? 1U : (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_csr_op));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_254 
	= ((0U != (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_csr_op)) 
	   & (5U != (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_csr_op)));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp1_data 
	= ((0U == (0x1fU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
				    >> 0xfU)))) ? VL_ULL(0)
	    : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_4_data);
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp2_data 
	= ((0U == (0x1fU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
				    >> 0x14U)))) ? VL_ULL(0)
	    : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_7_data);
    vlTOPp->io_diff_rf_wen = vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_reg_wen;
    vlTOPp->io_diff_rf_cp_wen = vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_reg_wen;
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_mem_valid 
	= ((0x6fU != (0x7fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
	   & (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_667));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__prv_now 
	= ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_ismret)
	    ? (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp)
	    : 3U);
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__write_illgal 
	= ((((2U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__wire_csr_op)) 
	     | (3U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__wire_csr_op))) 
	    | (4U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__wire_csr_op))) 
	   & (3U == (3U & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
				   >> 0x1eU)))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__read_illegal 
	= ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_254) 
	   & (~ (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__legalcsrnumber)));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 
	= ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op1_sel))
	    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp1_data
	    : ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op1_sel))
	        ? (QData)((IData)((0x1fU & (IData)(
						   (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						    >> 0xfU)))))
	        : ((2U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op1_sel))
		    ? (((QData)((IData)(((1U & (IData)(
						       (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							>> 0x1fU)))
					  ? 0xffffffffU
					  : 0U))) << 0x20U) 
		       | (QData)((IData)((0xfffff000U 
					  & ((IData)(
						     (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						      >> 0xcU)) 
					     << 0xcU)))))
		    : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp1_data)));
    VL_EXTEND_WQ(66,64, __Vtemp2, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp2_data);
    VL_EXTEND_WQ(66,64, __Vtemp3, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_pc);
    VL_EXTEND_WQ(66,64, __Vtemp5, ((3U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))
				    ? ((((1U & (IData)(
						       (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							>> 0x1fU)))
					  ? VL_ULL(0xfffffffffffff)
					  : VL_ULL(0)) 
					<< 0xcU) | (QData)((IData)(
								   ((0xfe0U 
								     & ((IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x19U)) 
									<< 5U)) 
								    | (0x1fU 
								       & (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 7U)))))))
				    : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp2_data));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U] 
	= ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))
	    ? __Vtemp2[0U] : ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))
			       ? __Vtemp3[0U] : ((2U 
						  == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))
						  ? 
						 ((0xfffff000U 
						   & ((IData)(
							      ((1U 
								& (IData)(
									  (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									   >> 0x1fU)))
							        ? VL_ULL(0x3fffffffffffff)
							        : VL_ULL(0))) 
						      << 0xcU)) 
						  | (0xfffU 
						     & (IData)(
							       (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
								>> 0x14U))))
						  : 
						 __Vtemp5[0U])));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U] 
	= ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))
	    ? __Vtemp2[1U] : ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))
			       ? __Vtemp3[1U] : ((2U 
						  == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))
						  ? 
						 ((0xfffU 
						   & ((IData)(
							      ((1U 
								& (IData)(
									  (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									   >> 0x1fU)))
							        ? VL_ULL(0x3fffffffffffff)
							        : VL_ULL(0))) 
						      >> 0x14U)) 
						  | (0xfffff000U 
						     & ((IData)(
								(((1U 
								   & (IData)(
									     (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									      >> 0x1fU)))
								   ? VL_ULL(0x3fffffffffffff)
								   : VL_ULL(0)) 
								 >> 0x20U)) 
							<< 0xcU)))
						  : 
						 __Vtemp5[1U])));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[2U] 
	= ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))
	    ? __Vtemp2[2U] : ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))
			       ? __Vtemp3[2U] : ((2U 
						  == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))
						  ? 
						 (0xfffU 
						  & ((IData)(
							     (((1U 
								& (IData)(
									  (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									   >> 0x1fU)))
							        ? VL_ULL(0x3fffffffffffff)
							        : VL_ULL(0)) 
							      >> 0x20U)) 
						     >> 0x14U))
						  : 
						 __Vtemp5[2U])));
}

void Vtop::_settle__TOP__7(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_settle__TOP__7\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp12,95,0,3);
    //char	__VpadToAlign260[4];
    VL_SIGW(__Vtemp13,95,0,3);
    //char	__VpadToAlign276[4];
    VL_SIGW(__Vtemp15,95,0,3);
    //char	__VpadToAlign292[4];
    VL_SIGW(__Vtemp22,127,0,4);
    VL_SIGW(__Vtemp23,127,0,4);
    VL_SIGW(__Vtemp24,127,0,4);
    // Body
    vlTOPp->io_diff_rf_wen = vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_reg_wen;
    vlTOPp->io_diff_rf_cp_wen = vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_reg_wen;
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_mem_valid 
	= ((0x6fU != (0x7fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
	   & (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_667));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__prv_now 
	= ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_ismret)
	    ? (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp)
	    : 3U);
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__write_illgal 
	= ((((2U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__wire_csr_op)) 
	     | (3U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__wire_csr_op))) 
	    | (4U == (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__wire_csr_op))) 
	   & (3U == (3U & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
				   >> 0x1eU)))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__read_illegal 
	= ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_254) 
	   & (~ (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__legalcsrnumber)));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 
	= ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op1_sel))
	    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp1_data
	    : ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op1_sel))
	        ? (QData)((IData)((0x1fU & (IData)(
						   (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						    >> 0xfU)))))
	        : ((2U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op1_sel))
		    ? (((QData)((IData)(((1U & (IData)(
						       (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							>> 0x1fU)))
					  ? 0xffffffffU
					  : 0U))) << 0x20U) 
		       | (QData)((IData)((0xfffff000U 
					  & ((IData)(
						     (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						      >> 0xcU)) 
					     << 0xcU)))))
		    : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp1_data)));
    VL_EXTEND_WQ(66,64, __Vtemp12, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp2_data);
    VL_EXTEND_WQ(66,64, __Vtemp13, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_pc);
    VL_EXTEND_WQ(66,64, __Vtemp15, ((3U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))
				     ? ((((1U & (IData)(
							(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							 >> 0x1fU)))
					   ? VL_ULL(0xfffffffffffff)
					   : VL_ULL(0)) 
					 << 0xcU) | (QData)((IData)(
								    ((0xfe0U 
								      & ((IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x19U)) 
									 << 5U)) 
								     | (0x1fU 
									& (IData)(
										(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 7U)))))))
				     : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp2_data));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U] 
	= ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))
	    ? __Vtemp12[0U] : ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))
			        ? __Vtemp13[0U] : (
						   (2U 
						    == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))
						    ? 
						   ((0xfffff000U 
						     & ((IData)(
								((1U 
								  & (IData)(
									    (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									     >> 0x1fU)))
								  ? VL_ULL(0x3fffffffffffff)
								  : VL_ULL(0))) 
							<< 0xcU)) 
						    | (0xfffU 
						       & (IData)(
								 (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
								  >> 0x14U))))
						    : 
						   __Vtemp15[0U])));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U] 
	= ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))
	    ? __Vtemp12[1U] : ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))
			        ? __Vtemp13[1U] : (
						   (2U 
						    == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))
						    ? 
						   ((0xfffU 
						     & ((IData)(
								((1U 
								  & (IData)(
									    (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									     >> 0x1fU)))
								  ? VL_ULL(0x3fffffffffffff)
								  : VL_ULL(0))) 
							>> 0x14U)) 
						    | (0xfffff000U 
						       & ((IData)(
								  (((1U 
								     & (IData)(
									       (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x1fU)))
								     ? VL_ULL(0x3fffffffffffff)
								     : VL_ULL(0)) 
								   >> 0x20U)) 
							  << 0xcU)))
						    : 
						   __Vtemp15[1U])));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[2U] 
	= ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))
	    ? __Vtemp12[2U] : ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))
			        ? __Vtemp13[2U] : (
						   (2U 
						    == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))
						    ? 
						   (0xfffU 
						    & ((IData)(
							       (((1U 
								  & (IData)(
									    (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									     >> 0x1fU)))
								  ? VL_ULL(0x3fffffffffffff)
								  : VL_ULL(0)) 
								>> 0x20U)) 
						       >> 0x14U))
						    : 
						   __Vtemp15[2U])));
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1144 
	= (1U & ((~ (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_mem_valid)) 
		 | (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_mem_valid)));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_illegal_ins_exception 
	= (1U & (((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__read_illegal) 
		  | (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__write_illgal)) 
		 | (~ (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_valid_inst))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_enable 
	= ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_254) 
	   & (~ (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__read_illegal)));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__add_res 
	= (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 
	   + (((QData)((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
	       << 0x20U) | (QData)((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))));
    VL_EXTENDS_WQ(128,64, __Vtemp22, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1);
    VL_EXTENDS_WQ(128,64, __Vtemp23, (((QData)((IData)(
						       vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))));
    VL_MULS_WWW(128,128,128, __Vtemp24, __Vtemp22, __Vtemp23);
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[0U] 
	= __Vtemp24[0U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[1U] 
	= __Vtemp24[1U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[2U] 
	= __Vtemp24[2U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[3U] 
	= __Vtemp24[3U];
}

VL_INLINE_OPT void Vtop::_sequent__TOP__8(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_sequent__TOP__8\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    //char	__VpadToAlign364[4];
    VL_SIGW(__Vtemp25,127,0,4);
    VL_SIGW(__Vtemp26,127,0,4);
    VL_SIGW(__Vtemp27,127,0,4);
    VL_SIGW(__Vtemp29,95,0,3);
    //char	__VpadToAlign428[4];
    VL_SIGW(__Vtemp30,95,0,3);
    //char	__VpadToAlign444[4];
    VL_SIGW(__Vtemp31,95,0,3);
    //char	__VpadToAlign460[4];
    VL_SIGW(__Vtemp32,95,0,3);
    //char	__VpadToAlign476[4];
    VL_SIGW(__Vtemp33,95,0,3);
    //char	__VpadToAlign492[4];
    VL_SIGW(__Vtemp35,127,0,4);
    VL_SIGW(__Vtemp36,127,0,4);
    VL_SIGW(__Vtemp38,95,0,3);
    //char	__VpadToAlign540[4];
    VL_SIGW(__Vtemp39,95,0,3);
    //char	__VpadToAlign556[4];
    VL_SIGW(__Vtemp40,95,0,3);
    //char	__VpadToAlign572[4];
    VL_SIGW(__Vtemp41,95,0,3);
    //char	__VpadToAlign588[4];
    VL_SIGW(__Vtemp42,95,0,3);
    //char	__VpadToAlign604[4];
    VL_SIGW(__Vtemp43,95,0,3);
    //char	__VpadToAlign620[4];
    VL_SIGW(__Vtemp44,95,0,3);
    //char	__VpadToAlign636[4];
    VL_SIGW(__Vtemp45,95,0,3);
    //char	__VpadToAlign652[4];
    VL_SIGW(__Vtemp46,95,0,3);
    //char	__VpadToAlign668[4];
    VL_SIGW(__Vtemp47,95,0,3);
    //char	__VpadToAlign684[4];
    VL_SIGW(__Vtemp50,95,0,3);
    //char	__VpadToAlign700[4];
    VL_SIGW(__Vtemp51,159,0,5);
    //char	__VpadToAlign724[4];
    VL_SIGW(__Vtemp52,159,0,5);
    //char	__VpadToAlign748[4];
    VL_SIGW(__Vtemp54,95,0,3);
    //char	__VpadToAlign764[4];
    VL_SIGW(__Vtemp55,159,0,5);
    //char	__VpadToAlign788[4];
    VL_SIGW(__Vtemp56,159,0,5);
    //char	__VpadToAlign812[4];
    VL_SIGW(__Vtemp57,159,0,5);
    //char	__VpadToAlign836[4];
    VL_SIGW(__Vtemp59,95,0,3);
    //char	__VpadToAlign852[4];
    VL_SIGW(__Vtemp60,127,0,4);
    VL_SIGW(__Vtemp61,127,0,4);
    VL_SIGW(__Vtemp62,127,0,4);
    VL_SIGW(__Vtemp63,95,0,3);
    //char	__VpadToAlign916[4];
    VL_SIGW(__Vtemp64,95,0,3);
    //char	__VpadToAlign932[4];
    VL_SIGW(__Vtemp65,95,0,3);
    //char	__VpadToAlign948[4];
    VL_SIGW(__Vtemp66,95,0,3);
    //char	__VpadToAlign964[4];
    VL_SIGW(__Vtemp67,95,0,3);
    //char	__VpadToAlign980[4];
    VL_SIGW(__Vtemp69,95,0,3);
    //char	__VpadToAlign996[4];
    VL_SIGW(__Vtemp70,95,0,3);
    //char	__VpadToAlign1012[4];
    VL_SIGW(__Vtemp72,95,0,3);
    //char	__VpadToAlign1028[4];
    VL_SIGW(__Vtemp73,95,0,3);
    //char	__VpadToAlign1044[4];
    VL_SIGW(__Vtemp74,95,0,3);
    //char	__VpadToAlign1060[4];
    VL_SIGW(__Vtemp75,95,0,3);
    //char	__VpadToAlign1076[4];
    VL_SIGW(__Vtemp107,95,0,3);
    // Body
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1144 
	= (1U & ((~ (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_mem_valid)) 
		 | (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_mem_valid)));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_illegal_ins_exception 
	= (1U & (((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__read_illegal) 
		  | (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__write_illgal)) 
		 | (~ (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_valid_inst))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_enable 
	= ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_254) 
	   & (~ (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__read_illegal)));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__add_res 
	= (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 
	   + (((QData)((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
	       << 0x20U) | (QData)((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))));
    VL_EXTENDS_WQ(128,64, __Vtemp25, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1);
    VL_EXTENDS_WQ(128,64, __Vtemp26, (((QData)((IData)(
						       vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))));
    VL_MULS_WWW(128,128,128, __Vtemp27, __Vtemp25, __Vtemp26);
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[0U] 
	= __Vtemp27[0U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[1U] 
	= __Vtemp27[1U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[2U] 
	= __Vtemp27[2U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[3U] 
	= __Vtemp27[3U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen 
	= ((((~ (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__write_illgal)) 
	     & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__legalcsrnumber)) 
	    & (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_valid_inst)) 
	   & (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1144));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasexception 
	= (((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_illegal_ins_exception) 
	    | (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall)) 
	   | (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_data 
	= ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_enable)
	    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9473
	    : VL_ULL(0));
    VL_EXTEND_WQ(65,64, __Vtemp29, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__add_res);
    VL_EXTEND_WQ(65,64, __Vtemp30, (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 
				    - (((QData)((IData)(
							vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
					<< 0x20U) | (QData)((IData)(
								    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U])))));
    VL_EXTEND_WQ(65,64, __Vtemp31, (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 
				    & (((QData)((IData)(
							vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
					<< 0x20U) | (QData)((IData)(
								    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U])))));
    VL_EXTEND_WQ(65,64, __Vtemp32, (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 
				    | (((QData)((IData)(
							vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
					<< 0x20U) | (QData)((IData)(
								    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U])))));
    VL_EXTEND_WQ(65,64, __Vtemp33, (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 
				    ^ (((QData)((IData)(
							vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
					<< 0x20U) | (QData)((IData)(
								    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U])))));
    VL_EXTEND_WQ(127,64, __Vtemp35, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1);
    VL_SHIFTL_WWI(127,127,6, __Vtemp36, __Vtemp35, 
		  (0x3fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]));
    VL_EXTEND_WQ(65,64, __Vtemp38, (((QData)((IData)(
						     __Vtemp36[1U])) 
				     << 0x20U) | (QData)((IData)(
								 __Vtemp36[0U]))));
    VL_EXTEND_WI(65,1, __Vtemp39, VL_LTS_IQQ(1,64,64, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1, 
					     (((QData)((IData)(
							       vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
					       << 0x20U) 
					      | (QData)((IData)(
								vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U])))));
    VL_EXTEND_WI(65,1, __Vtemp40, (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 
				   < (((QData)((IData)(
						       vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U])))));
    VL_EXTEND_WQ(65,64, __Vtemp41, VL_SHIFTRS_QQI(64,64,6, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1, 
						  (0x3fU 
						   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U])));
    VL_EXTEND_WI(65,32, __Vtemp42, ((0x1fU >= (0x3fU 
					       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))
				     ? VL_SHIFTRS_III(32,32,6, (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1), 
						      (0x3fU 
						       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))
				     : VL_NEGATE_I(
						   ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1) 
						    >> 0x1fU))));
    VL_EXTEND_WQ(65,64, __Vtemp43, (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 
				    >> (0x3fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U])));
    VL_EXTEND_WI(65,32, __Vtemp44, ((0x1fU >= (0x3fU 
					       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))
				     ? ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1) 
					>> (0x3fU & 
					    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))
				     : 0U));
    VL_EXTEND_WQ(65,64, __Vtemp45, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1);
    VL_EXTEND_WQ(65,64, __Vtemp46, (((QData)((IData)(
						     vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[1U])) 
				     << 0x20U) | (QData)((IData)(
								 vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp47, (((QData)((IData)(
						     vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[3U])) 
				     << 0x20U) | (QData)((IData)(
								 vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[2U]))));
    __Vtemp50[0U] = (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1);
    __Vtemp50[1U] = (IData)((vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 
			     >> 0x20U));
    __Vtemp50[2U] = (1U & (IData)((vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 
				   >> 0x3fU)));
    VL_EXTENDS_WW(129,65, __Vtemp51, __Vtemp50);
    __Vtemp52[0U] = __Vtemp51[0U];
    __Vtemp52[1U] = __Vtemp51[1U];
    __Vtemp52[2U] = __Vtemp51[2U];
    __Vtemp52[3U] = __Vtemp51[3U];
    __Vtemp52[4U] = (1U & __Vtemp51[4U]);
    VL_EXTEND_WQ(65,64, __Vtemp54, (((QData)((IData)(
						     vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
				     << 0x20U) | (QData)((IData)(
								 vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))));
    VL_EXTENDS_WW(129,65, __Vtemp55, __Vtemp54);
    __Vtemp56[0U] = __Vtemp55[0U];
    __Vtemp56[1U] = __Vtemp55[1U];
    __Vtemp56[2U] = __Vtemp55[2U];
    __Vtemp56[3U] = __Vtemp55[3U];
    __Vtemp56[4U] = (1U & __Vtemp55[4U]);
    VL_MULS_WWW(129,129,129, __Vtemp57, __Vtemp52, __Vtemp56);
    VL_EXTEND_WQ(65,64, __Vtemp59, (((QData)((IData)(
						     __Vtemp57[3U])) 
				     << 0x20U) | (QData)((IData)(
								 __Vtemp57[2U]))));
    VL_EXTEND_WQ(128,64, __Vtemp60, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1);
    VL_EXTEND_WQ(128,64, __Vtemp61, (((QData)((IData)(
						      vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))));
    VL_MUL_W(4, __Vtemp62, __Vtemp60, __Vtemp61);
    VL_EXTEND_WQ(65,64, __Vtemp63, (((QData)((IData)(
						     __Vtemp62[3U])) 
				     << 0x20U) | (QData)((IData)(
								 __Vtemp62[2U]))));
    VL_EXTEND_WQ(65,64, __Vtemp64, VL_MODDIVS_QQQ(64, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1, 
						  (((QData)((IData)(
								    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
						    << 0x20U) 
						   | (QData)((IData)(
								     vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U])))));
    VL_EXTEND_WQ(65,64, __Vtemp65, VL_MODDIV_QQQ(64, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1, 
						 (((QData)((IData)(
								   vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
						   << 0x20U) 
						  | (QData)((IData)(
								    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U])))));
    VL_EXTEND_WI(65,32, __Vtemp66, VL_MODDIV_III(32, (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1), 
						 vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]));
    VL_EXTEND_WI(65,32, __Vtemp67, VL_MODDIVS_III(32, (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1), 
						  vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]));
    VL_EXTENDS_WQ(65,64, __Vtemp69, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1);
    __Vtemp70[0U] = __Vtemp69[0U];
    __Vtemp70[1U] = __Vtemp69[1U];
    __Vtemp70[2U] = (1U & __Vtemp69[2U]);
    VL_EXTENDS_WQ(65,64, __Vtemp72, (((QData)((IData)(
						      vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))));
    __Vtemp73[0U] = __Vtemp72[0U];
    __Vtemp73[1U] = __Vtemp72[1U];
    __Vtemp73[2U] = (1U & __Vtemp72[2U]);
    VL_DIVS_WWW(65, __Vtemp74, __Vtemp70, __Vtemp73);
    VL_EXTEND_WQ(65,64, __Vtemp75, ((0x16U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
				     ? VL_DIV_QQQ(64, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1, 
						  (((QData)((IData)(
								    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
						    << 0x20U) 
						   | (QData)((IData)(
								     vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))))
				     : ((0x17U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
					 ? (QData)((IData)(
							   VL_DIV_III(32, (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1), 
								      vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U])))
					 : ((0x18U 
					     == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
					     ? (VL_ULL(0x1ffffffff) 
						& VL_DIVS_QQQ(33, 
							      (VL_ULL(0x1ffffffff) 
							       & VL_EXTENDS_QI(33,32, (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1))), 
							      (VL_ULL(0x1ffffffff) 
							       & VL_EXTENDS_QI(33,32, 
									       vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))))
					     : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__add_res))));
    __Vtemp107[0U] = ((6U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
		       ? __Vtemp39[0U] : ((7U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
					   ? __Vtemp40[0U]
					   : ((8U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
					       ? __Vtemp41[0U]
					       : ((9U 
						   == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						   ? 
						  __Vtemp42[0U]
						   : 
						  ((0xaU 
						    == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						    ? 
						   __Vtemp43[0U]
						    : 
						   ((0xbU 
						     == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						     ? 
						    __Vtemp44[0U]
						     : 
						    ((0xcU 
						      == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						      ? 
						     __Vtemp45[0U]
						      : 
						     ((0xdU 
						       == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						       ? 
						      __Vtemp46[0U]
						       : 
						      ((0xeU 
							== (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						        ? 
						       __Vtemp47[0U]
						        : 
						       ((0xfU 
							 == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							 ? 
							__Vtemp59[0U]
							 : 
							((0x10U 
							  == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							  ? 
							 __Vtemp63[0U]
							  : 
							 ((0x11U 
							   == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							   ? 
							  __Vtemp64[0U]
							   : 
							  ((0x12U 
							    == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							    ? 
							   __Vtemp65[0U]
							    : 
							   ((0x13U 
							     == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							     ? 
							    __Vtemp66[0U]
							     : 
							    ((0x14U 
							      == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							      ? 
							     __Vtemp67[0U]
							      : 
							     ((0x15U 
							       == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							       ? 
							      __Vtemp74[0U]
							       : 
							      __Vtemp75[0U]))))))))))))))));
    __Vtemp107[1U] = ((6U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
		       ? __Vtemp39[1U] : ((7U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
					   ? __Vtemp40[1U]
					   : ((8U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
					       ? __Vtemp41[1U]
					       : ((9U 
						   == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						   ? 
						  __Vtemp42[1U]
						   : 
						  ((0xaU 
						    == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						    ? 
						   __Vtemp43[1U]
						    : 
						   ((0xbU 
						     == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						     ? 
						    __Vtemp44[1U]
						     : 
						    ((0xcU 
						      == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						      ? 
						     __Vtemp45[1U]
						      : 
						     ((0xdU 
						       == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						       ? 
						      __Vtemp46[1U]
						       : 
						      ((0xeU 
							== (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						        ? 
						       __Vtemp47[1U]
						        : 
						       ((0xfU 
							 == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							 ? 
							__Vtemp59[1U]
							 : 
							((0x10U 
							  == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							  ? 
							 __Vtemp63[1U]
							  : 
							 ((0x11U 
							   == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							   ? 
							  __Vtemp64[1U]
							   : 
							  ((0x12U 
							    == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							    ? 
							   __Vtemp65[1U]
							    : 
							   ((0x13U 
							     == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							     ? 
							    __Vtemp66[1U]
							     : 
							    ((0x14U 
							      == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							      ? 
							     __Vtemp67[1U]
							      : 
							     ((0x15U 
							       == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							       ? 
							      __Vtemp74[1U]
							       : 
							      __Vtemp75[1U]))))))))))))))));
    __Vtemp107[2U] = ((6U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
		       ? __Vtemp39[2U] : ((7U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
					   ? __Vtemp40[2U]
					   : ((8U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
					       ? __Vtemp41[2U]
					       : ((9U 
						   == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						   ? 
						  __Vtemp42[2U]
						   : 
						  ((0xaU 
						    == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						    ? 
						   __Vtemp43[2U]
						    : 
						   ((0xbU 
						     == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						     ? 
						    __Vtemp44[2U]
						     : 
						    ((0xcU 
						      == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						      ? 
						     __Vtemp45[2U]
						      : 
						     ((0xdU 
						       == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						       ? 
						      __Vtemp46[2U]
						       : 
						      ((0xeU 
							== (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						        ? 
						       __Vtemp47[2U]
						        : 
						       ((0xfU 
							 == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							 ? 
							__Vtemp59[2U]
							 : 
							((0x10U 
							  == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							  ? 
							 __Vtemp63[2U]
							  : 
							 ((0x11U 
							   == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							   ? 
							  __Vtemp64[2U]
							   : 
							  ((0x12U 
							    == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							    ? 
							   __Vtemp65[2U]
							    : 
							   ((0x13U 
							     == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							     ? 
							    __Vtemp66[2U]
							     : 
							    ((0x14U 
							      == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							      ? 
							     __Vtemp67[2U]
							      : 
							     ((0x15U 
							       == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							       ? 
							      __Vtemp74[2U]
							       : 
							      __Vtemp75[2U]))))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U] 
	= ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
	    ? __Vtemp29[0U] : ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
			        ? __Vtemp30[0U] : (
						   (2U 
						    == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						    ? 
						   __Vtemp31[0U]
						    : 
						   ((3U 
						     == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						     ? 
						    __Vtemp32[0U]
						     : 
						    ((4U 
						      == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						      ? 
						     __Vtemp33[0U]
						      : 
						     ((5U 
						       == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						       ? 
						      __Vtemp38[0U]
						       : 
						      __Vtemp107[0U]))))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[1U] 
	= ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
	    ? __Vtemp29[1U] : ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
			        ? __Vtemp30[1U] : (
						   (2U 
						    == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						    ? 
						   __Vtemp31[1U]
						    : 
						   ((3U 
						     == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						     ? 
						    __Vtemp32[1U]
						     : 
						    ((4U 
						      == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						      ? 
						     __Vtemp33[1U]
						      : 
						     ((5U 
						       == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						       ? 
						      __Vtemp38[1U]
						       : 
						      __Vtemp107[1U]))))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[2U] 
	= (1U & ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
		  ? __Vtemp29[2U] : ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
				      ? __Vtemp30[2U]
				      : ((2U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
					  ? __Vtemp31[2U]
					  : ((3U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
					      ? __Vtemp32[2U]
					      : ((4U 
						  == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						  ? 
						 __Vtemp33[2U]
						  : 
						 ((5U 
						   == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						   ? 
						  __Vtemp38[2U]
						   : 
						  __Vtemp107[2U])))))));
}

void Vtop::_settle__TOP__9(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_settle__TOP__9\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp122,95,0,3);
    //char	__VpadToAlign1124[4];
    VL_SIGW(__Vtemp123,95,0,3);
    //char	__VpadToAlign1140[4];
    VL_SIGW(__Vtemp124,95,0,3);
    //char	__VpadToAlign1156[4];
    VL_SIGW(__Vtemp125,95,0,3);
    //char	__VpadToAlign1172[4];
    VL_SIGW(__Vtemp126,95,0,3);
    //char	__VpadToAlign1188[4];
    VL_SIGW(__Vtemp128,127,0,4);
    VL_SIGW(__Vtemp129,127,0,4);
    VL_SIGW(__Vtemp131,95,0,3);
    //char	__VpadToAlign1236[4];
    VL_SIGW(__Vtemp132,95,0,3);
    //char	__VpadToAlign1252[4];
    VL_SIGW(__Vtemp133,95,0,3);
    //char	__VpadToAlign1268[4];
    VL_SIGW(__Vtemp134,95,0,3);
    //char	__VpadToAlign1284[4];
    VL_SIGW(__Vtemp135,95,0,3);
    //char	__VpadToAlign1300[4];
    VL_SIGW(__Vtemp136,95,0,3);
    //char	__VpadToAlign1316[4];
    VL_SIGW(__Vtemp137,95,0,3);
    //char	__VpadToAlign1332[4];
    VL_SIGW(__Vtemp138,95,0,3);
    //char	__VpadToAlign1348[4];
    VL_SIGW(__Vtemp139,95,0,3);
    //char	__VpadToAlign1364[4];
    VL_SIGW(__Vtemp140,95,0,3);
    //char	__VpadToAlign1380[4];
    VL_SIGW(__Vtemp143,95,0,3);
    //char	__VpadToAlign1396[4];
    VL_SIGW(__Vtemp144,159,0,5);
    //char	__VpadToAlign1420[4];
    VL_SIGW(__Vtemp145,159,0,5);
    //char	__VpadToAlign1444[4];
    VL_SIGW(__Vtemp147,95,0,3);
    //char	__VpadToAlign1460[4];
    VL_SIGW(__Vtemp148,159,0,5);
    //char	__VpadToAlign1484[4];
    VL_SIGW(__Vtemp149,159,0,5);
    //char	__VpadToAlign1508[4];
    VL_SIGW(__Vtemp150,159,0,5);
    //char	__VpadToAlign1532[4];
    VL_SIGW(__Vtemp152,95,0,3);
    //char	__VpadToAlign1548[4];
    VL_SIGW(__Vtemp153,127,0,4);
    VL_SIGW(__Vtemp154,127,0,4);
    VL_SIGW(__Vtemp155,127,0,4);
    VL_SIGW(__Vtemp156,95,0,3);
    //char	__VpadToAlign1612[4];
    VL_SIGW(__Vtemp157,95,0,3);
    //char	__VpadToAlign1628[4];
    VL_SIGW(__Vtemp158,95,0,3);
    //char	__VpadToAlign1644[4];
    VL_SIGW(__Vtemp159,95,0,3);
    //char	__VpadToAlign1660[4];
    VL_SIGW(__Vtemp160,95,0,3);
    //char	__VpadToAlign1676[4];
    VL_SIGW(__Vtemp162,95,0,3);
    //char	__VpadToAlign1692[4];
    VL_SIGW(__Vtemp163,95,0,3);
    //char	__VpadToAlign1708[4];
    VL_SIGW(__Vtemp165,95,0,3);
    //char	__VpadToAlign1724[4];
    VL_SIGW(__Vtemp166,95,0,3);
    //char	__VpadToAlign1740[4];
    VL_SIGW(__Vtemp167,95,0,3);
    //char	__VpadToAlign1756[4];
    VL_SIGW(__Vtemp168,95,0,3);
    //char	__VpadToAlign1772[4];
    VL_SIGW(__Vtemp200,95,0,3);
    // Body
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen 
	= ((((~ (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__write_illgal)) 
	     & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__legalcsrnumber)) 
	    & (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_valid_inst)) 
	   & (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1144));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasexception 
	= (((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_illegal_ins_exception) 
	    | (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall)) 
	   | (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_data 
	= ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_enable)
	    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9473
	    : VL_ULL(0));
    VL_EXTEND_WQ(65,64, __Vtemp122, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__add_res);
    VL_EXTEND_WQ(65,64, __Vtemp123, (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 
				     - (((QData)((IData)(
							 vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
					 << 0x20U) 
					| (QData)((IData)(
							  vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U])))));
    VL_EXTEND_WQ(65,64, __Vtemp124, (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 
				     & (((QData)((IData)(
							 vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
					 << 0x20U) 
					| (QData)((IData)(
							  vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U])))));
    VL_EXTEND_WQ(65,64, __Vtemp125, (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 
				     | (((QData)((IData)(
							 vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
					 << 0x20U) 
					| (QData)((IData)(
							  vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U])))));
    VL_EXTEND_WQ(65,64, __Vtemp126, (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 
				     ^ (((QData)((IData)(
							 vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
					 << 0x20U) 
					| (QData)((IData)(
							  vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U])))));
    VL_EXTEND_WQ(127,64, __Vtemp128, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1);
    VL_SHIFTL_WWI(127,127,6, __Vtemp129, __Vtemp128, 
		  (0x3fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]));
    VL_EXTEND_WQ(65,64, __Vtemp131, (((QData)((IData)(
						      __Vtemp129[1U])) 
				      << 0x20U) | (QData)((IData)(
								  __Vtemp129[0U]))));
    VL_EXTEND_WI(65,1, __Vtemp132, VL_LTS_IQQ(1,64,64, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1, 
					      (((QData)((IData)(
								vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
						<< 0x20U) 
					       | (QData)((IData)(
								 vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U])))));
    VL_EXTEND_WI(65,1, __Vtemp133, (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 
				    < (((QData)((IData)(
							vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
					<< 0x20U) | (QData)((IData)(
								    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U])))));
    VL_EXTEND_WQ(65,64, __Vtemp134, VL_SHIFTRS_QQI(64,64,6, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1, 
						   (0x3fU 
						    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U])));
    VL_EXTEND_WI(65,32, __Vtemp135, ((0x1fU >= (0x3fU 
						& vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))
				      ? VL_SHIFTRS_III(32,32,6, (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1), 
						       (0x3fU 
							& vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))
				      : VL_NEGATE_I(
						    ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1) 
						     >> 0x1fU))));
    VL_EXTEND_WQ(65,64, __Vtemp136, (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 
				     >> (0x3fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U])));
    VL_EXTEND_WI(65,32, __Vtemp137, ((0x1fU >= (0x3fU 
						& vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))
				      ? ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1) 
					 >> (0x3fU 
					     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))
				      : 0U));
    VL_EXTEND_WQ(65,64, __Vtemp138, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1);
    VL_EXTEND_WQ(65,64, __Vtemp139, (((QData)((IData)(
						      vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp140, (((QData)((IData)(
						      vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[3U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[2U]))));
    __Vtemp143[0U] = (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1);
    __Vtemp143[1U] = (IData)((vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 
			      >> 0x20U));
    __Vtemp143[2U] = (1U & (IData)((vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 
				    >> 0x3fU)));
    VL_EXTENDS_WW(129,65, __Vtemp144, __Vtemp143);
    __Vtemp145[0U] = __Vtemp144[0U];
    __Vtemp145[1U] = __Vtemp144[1U];
    __Vtemp145[2U] = __Vtemp144[2U];
    __Vtemp145[3U] = __Vtemp144[3U];
    __Vtemp145[4U] = (1U & __Vtemp144[4U]);
    VL_EXTEND_WQ(65,64, __Vtemp147, (((QData)((IData)(
						      vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))));
    VL_EXTENDS_WW(129,65, __Vtemp148, __Vtemp147);
    __Vtemp149[0U] = __Vtemp148[0U];
    __Vtemp149[1U] = __Vtemp148[1U];
    __Vtemp149[2U] = __Vtemp148[2U];
    __Vtemp149[3U] = __Vtemp148[3U];
    __Vtemp149[4U] = (1U & __Vtemp148[4U]);
    VL_MULS_WWW(129,129,129, __Vtemp150, __Vtemp145, __Vtemp149);
    VL_EXTEND_WQ(65,64, __Vtemp152, (((QData)((IData)(
						      __Vtemp150[3U])) 
				      << 0x20U) | (QData)((IData)(
								  __Vtemp150[2U]))));
    VL_EXTEND_WQ(128,64, __Vtemp153, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1);
    VL_EXTEND_WQ(128,64, __Vtemp154, (((QData)((IData)(
						       vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))));
    VL_MUL_W(4, __Vtemp155, __Vtemp153, __Vtemp154);
    VL_EXTEND_WQ(65,64, __Vtemp156, (((QData)((IData)(
						      __Vtemp155[3U])) 
				      << 0x20U) | (QData)((IData)(
								  __Vtemp155[2U]))));
    VL_EXTEND_WQ(65,64, __Vtemp157, VL_MODDIVS_QQQ(64, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1, 
						   (((QData)((IData)(
								     vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
						     << 0x20U) 
						    | (QData)((IData)(
								      vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U])))));
    VL_EXTEND_WQ(65,64, __Vtemp158, VL_MODDIV_QQQ(64, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1, 
						  (((QData)((IData)(
								    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
						    << 0x20U) 
						   | (QData)((IData)(
								     vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U])))));
    VL_EXTEND_WI(65,32, __Vtemp159, VL_MODDIV_III(32, (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1), 
						  vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]));
    VL_EXTEND_WI(65,32, __Vtemp160, VL_MODDIVS_III(32, (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1), 
						   vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]));
    VL_EXTENDS_WQ(65,64, __Vtemp162, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1);
    __Vtemp163[0U] = __Vtemp162[0U];
    __Vtemp163[1U] = __Vtemp162[1U];
    __Vtemp163[2U] = (1U & __Vtemp162[2U]);
    VL_EXTENDS_WQ(65,64, __Vtemp165, (((QData)((IData)(
						       vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))));
    __Vtemp166[0U] = __Vtemp165[0U];
    __Vtemp166[1U] = __Vtemp165[1U];
    __Vtemp166[2U] = (1U & __Vtemp165[2U]);
    VL_DIVS_WWW(65, __Vtemp167, __Vtemp163, __Vtemp166);
    VL_EXTEND_WQ(65,64, __Vtemp168, ((0x16U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
				      ? VL_DIV_QQQ(64, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1, 
						   (((QData)((IData)(
								     vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
						     << 0x20U) 
						    | (QData)((IData)(
								      vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))))
				      : ((0x17U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
					  ? (QData)((IData)(
							    VL_DIV_III(32, (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1), 
								       vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U])))
					  : ((0x18U 
					      == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
					      ? (VL_ULL(0x1ffffffff) 
						 & VL_DIVS_QQQ(33, 
							       (VL_ULL(0x1ffffffff) 
								& VL_EXTENDS_QI(33,32, (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1))), 
							       (VL_ULL(0x1ffffffff) 
								& VL_EXTENDS_QI(33,32, 
										vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))))
					      : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__add_res))));
    __Vtemp200[0U] = ((6U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
		       ? __Vtemp132[0U] : ((7U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
					    ? __Vtemp133[0U]
					    : ((8U 
						== (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
					        ? __Vtemp134[0U]
					        : (
						   (9U 
						    == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						    ? 
						   __Vtemp135[0U]
						    : 
						   ((0xaU 
						     == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						     ? 
						    __Vtemp136[0U]
						     : 
						    ((0xbU 
						      == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						      ? 
						     __Vtemp137[0U]
						      : 
						     ((0xcU 
						       == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						       ? 
						      __Vtemp138[0U]
						       : 
						      ((0xdU 
							== (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						        ? 
						       __Vtemp139[0U]
						        : 
						       ((0xeU 
							 == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							 ? 
							__Vtemp140[0U]
							 : 
							((0xfU 
							  == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							  ? 
							 __Vtemp152[0U]
							  : 
							 ((0x10U 
							   == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							   ? 
							  __Vtemp156[0U]
							   : 
							  ((0x11U 
							    == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							    ? 
							   __Vtemp157[0U]
							    : 
							   ((0x12U 
							     == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							     ? 
							    __Vtemp158[0U]
							     : 
							    ((0x13U 
							      == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							      ? 
							     __Vtemp159[0U]
							      : 
							     ((0x14U 
							       == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							       ? 
							      __Vtemp160[0U]
							       : 
							      ((0x15U 
								== (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							        ? 
							       __Vtemp167[0U]
							        : 
							       __Vtemp168[0U]))))))))))))))));
    __Vtemp200[1U] = ((6U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
		       ? __Vtemp132[1U] : ((7U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
					    ? __Vtemp133[1U]
					    : ((8U 
						== (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
					        ? __Vtemp134[1U]
					        : (
						   (9U 
						    == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						    ? 
						   __Vtemp135[1U]
						    : 
						   ((0xaU 
						     == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						     ? 
						    __Vtemp136[1U]
						     : 
						    ((0xbU 
						      == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						      ? 
						     __Vtemp137[1U]
						      : 
						     ((0xcU 
						       == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						       ? 
						      __Vtemp138[1U]
						       : 
						      ((0xdU 
							== (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						        ? 
						       __Vtemp139[1U]
						        : 
						       ((0xeU 
							 == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							 ? 
							__Vtemp140[1U]
							 : 
							((0xfU 
							  == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							  ? 
							 __Vtemp152[1U]
							  : 
							 ((0x10U 
							   == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							   ? 
							  __Vtemp156[1U]
							   : 
							  ((0x11U 
							    == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							    ? 
							   __Vtemp157[1U]
							    : 
							   ((0x12U 
							     == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							     ? 
							    __Vtemp158[1U]
							     : 
							    ((0x13U 
							      == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							      ? 
							     __Vtemp159[1U]
							      : 
							     ((0x14U 
							       == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							       ? 
							      __Vtemp160[1U]
							       : 
							      ((0x15U 
								== (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							        ? 
							       __Vtemp167[1U]
							        : 
							       __Vtemp168[1U]))))))))))))))));
    __Vtemp200[2U] = ((6U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
		       ? __Vtemp132[2U] : ((7U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
					    ? __Vtemp133[2U]
					    : ((8U 
						== (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
					        ? __Vtemp134[2U]
					        : (
						   (9U 
						    == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						    ? 
						   __Vtemp135[2U]
						    : 
						   ((0xaU 
						     == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						     ? 
						    __Vtemp136[2U]
						     : 
						    ((0xbU 
						      == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						      ? 
						     __Vtemp137[2U]
						      : 
						     ((0xcU 
						       == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						       ? 
						      __Vtemp138[2U]
						       : 
						      ((0xdU 
							== (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						        ? 
						       __Vtemp139[2U]
						        : 
						       ((0xeU 
							 == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							 ? 
							__Vtemp140[2U]
							 : 
							((0xfU 
							  == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							  ? 
							 __Vtemp152[2U]
							  : 
							 ((0x10U 
							   == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							   ? 
							  __Vtemp156[2U]
							   : 
							  ((0x11U 
							    == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							    ? 
							   __Vtemp157[2U]
							    : 
							   ((0x12U 
							     == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							     ? 
							    __Vtemp158[2U]
							     : 
							    ((0x13U 
							      == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							      ? 
							     __Vtemp159[2U]
							      : 
							     ((0x14U 
							       == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							       ? 
							      __Vtemp160[2U]
							       : 
							      ((0x15U 
								== (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							        ? 
							       __Vtemp167[2U]
							        : 
							       __Vtemp168[2U]))))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U] 
	= ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
	    ? __Vtemp122[0U] : ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
				 ? __Vtemp123[0U] : 
				((2U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
				  ? __Vtemp124[0U] : 
				 ((3U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
				   ? __Vtemp125[0U]
				   : ((4U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
				       ? __Vtemp126[0U]
				       : ((5U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
					   ? __Vtemp131[0U]
					   : __Vtemp200[0U]))))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[1U] 
	= ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
	    ? __Vtemp122[1U] : ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
				 ? __Vtemp123[1U] : 
				((2U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
				  ? __Vtemp124[1U] : 
				 ((3U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
				   ? __Vtemp125[1U]
				   : ((4U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
				       ? __Vtemp126[1U]
				       : ((5U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
					   ? __Vtemp131[1U]
					   : __Vtemp200[1U]))))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[2U] 
	= (1U & ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
		  ? __Vtemp122[2U] : ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
				       ? __Vtemp123[2U]
				       : ((2U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
					   ? __Vtemp124[2U]
					   : ((3U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
					       ? __Vtemp125[2U]
					       : ((4U 
						   == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						   ? 
						  __Vtemp126[2U]
						   : 
						  ((5U 
						    == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						    ? 
						   __Vtemp131[2U]
						    : 
						   __Vtemp200[2U])))))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res 
	= ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_ext_sel))
	    ? (((QData)((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[1U])) 
		<< 0x20U) | (QData)((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U])))
	    : ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_ext_sel))
	        ? ((((0x80U & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U])
		      ? VL_ULL(0xffffffffffffff) : VL_ULL(0)) 
		    << 8U) | (QData)((IData)((0xffU 
					      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U]))))
	        : ((2U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_ext_sel))
		    ? (QData)((IData)((0xffU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U])))
		    : ((3U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_ext_sel))
		        ? ((((0x8000U & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U])
			      ? VL_ULL(0xffffffffffff)
			      : VL_ULL(0)) << 0x10U) 
			   | (QData)((IData)((0xffffU 
					      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U]))))
		        : ((4U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_ext_sel))
			    ? (QData)((IData)((0xffffU 
					       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U])))
			    : ((5U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_ext_sel))
			        ? (((QData)((IData)(
						    ((0x80000000U 
						      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U])
						      ? 0xffffffffU
						      : 0U))) 
				    << 0x20U) | (QData)((IData)(
								vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U])))
			        : ((6U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_ext_sel))
				    ? (QData)((IData)(
						      vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U]))
				    : (((QData)((IData)(
							vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[1U])) 
					<< 0x20U) | (QData)((IData)(
								    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U]))))))))));
}

VL_INLINE_OPT void Vtop::_sequent__TOP__10(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_sequent__TOP__10\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res 
	= ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_ext_sel))
	    ? (((QData)((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[1U])) 
		<< 0x20U) | (QData)((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U])))
	    : ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_ext_sel))
	        ? ((((0x80U & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U])
		      ? VL_ULL(0xffffffffffffff) : VL_ULL(0)) 
		    << 8U) | (QData)((IData)((0xffU 
					      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U]))))
	        : ((2U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_ext_sel))
		    ? (QData)((IData)((0xffU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U])))
		    : ((3U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_ext_sel))
		        ? ((((0x8000U & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U])
			      ? VL_ULL(0xffffffffffff)
			      : VL_ULL(0)) << 0x10U) 
			   | (QData)((IData)((0xffffU 
					      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U]))))
		        : ((4U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_ext_sel))
			    ? (QData)((IData)((0xffffU 
					       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U])))
			    : ((5U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_ext_sel))
			        ? (((QData)((IData)(
						    ((0x80000000U 
						      & vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U])
						      ? 0xffffffffU
						      : 0U))) 
				    << 0x20U) | (QData)((IData)(
								vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U])))
			        : ((6U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_ext_sel))
				    ? (QData)((IData)(
						      vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U]))
				    : (((QData)((IData)(
							vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[1U])) 
					<< 0x20U) | (QData)((IData)(
								    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U]))))))))));
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_112_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res))];
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_114_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & ((IData)(1U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res)))];
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_116_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & ((IData)(2U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res)))];
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_118_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & ((IData)(3U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res)))];
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_120_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & ((IData)(4U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res)))];
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_122_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & ((IData)(5U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res)))];
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_124_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & ((IData)(6U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res)))];
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_126_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & ((IData)(7U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res)))];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9477 
	= (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res 
	   | vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_data);
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9480 
	= (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res 
	   & (~ vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_data));
}

void Vtop::_settle__TOP__11(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_settle__TOP__11\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_112_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res))];
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_114_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & ((IData)(1U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res)))];
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_116_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & ((IData)(2U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res)))];
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_118_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & ((IData)(3U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res)))];
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_120_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & ((IData)(4U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res)))];
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_122_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & ((IData)(5U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res)))];
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_124_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & ((IData)(6U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res)))];
    vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem___05FT_126_data 
	= vlTOPp->v__DOT__mycore__DOT__mymem__DOT__mem
	[(0xffffffU & ((IData)(7U) + (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res)))];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9477 
	= (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res 
	   | vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_data);
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9480 
	= (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res 
	   & (~ vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_data));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data 
	= ((2U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_csr_op))
	    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res
	    : ((4U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_csr_op))
	        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9477
	        : ((3U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_csr_op))
		    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9480
		    : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_data)));
}

VL_INLINE_OPT void Vtop::_sequent__TOP__12(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_sequent__TOP__12\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data 
	= ((2U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_csr_op))
	    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res
	    : ((4U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_csr_op))
	        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9477
	        : ((3U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_csr_op))
		    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9480
		    : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_data)));
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
	vlTOPp->_sequent__TOP__12(vlSymsp);
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
    vlTOPp->_settle__TOP__11(vlSymsp);
}

VL_INLINE_OPT QData Vtop::_change_request(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_change_request\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
