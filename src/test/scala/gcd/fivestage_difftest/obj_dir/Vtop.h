// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vtop_H_
#define _Vtop_H_

#include "verilated.h"
class Vtop__Syms;
class Vtop___024unit;

//----------

VL_MODULE(Vtop) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    Vtop___024unit*    	__PVT____024unit;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_diff_isredir,0,0);
    VL_OUT8(io_diff_is_retire,0,0);
    VL_OUT8(io_diff_is_valid,0,0);
    //char	__VpadToAlign5[3];
    VL_OUT(io_diff_instr_in_wb,31,0);
    //char	__VpadToAlign12[4];
    VL_OUT64(io_diff_r_0,63,0);
    VL_OUT64(io_diff_r_1,63,0);
    VL_OUT64(io_diff_r_2,63,0);
    VL_OUT64(io_diff_r_3,63,0);
    VL_OUT64(io_diff_r_4,63,0);
    VL_OUT64(io_diff_r_5,63,0);
    VL_OUT64(io_diff_r_6,63,0);
    VL_OUT64(io_diff_r_7,63,0);
    VL_OUT64(io_diff_r_8,63,0);
    VL_OUT64(io_diff_r_9,63,0);
    VL_OUT64(io_diff_r_10,63,0);
    VL_OUT64(io_diff_r_11,63,0);
    VL_OUT64(io_diff_r_12,63,0);
    VL_OUT64(io_diff_r_13,63,0);
    VL_OUT64(io_diff_r_14,63,0);
    VL_OUT64(io_diff_r_15,63,0);
    VL_OUT64(io_diff_r_16,63,0);
    VL_OUT64(io_diff_r_17,63,0);
    VL_OUT64(io_diff_r_18,63,0);
    VL_OUT64(io_diff_r_19,63,0);
    VL_OUT64(io_diff_r_20,63,0);
    VL_OUT64(io_diff_r_21,63,0);
    VL_OUT64(io_diff_r_22,63,0);
    VL_OUT64(io_diff_r_23,63,0);
    VL_OUT64(io_diff_r_24,63,0);
    VL_OUT64(io_diff_r_25,63,0);
    VL_OUT64(io_diff_r_26,63,0);
    VL_OUT64(io_diff_r_27,63,0);
    VL_OUT64(io_diff_r_28,63,0);
    VL_OUT64(io_diff_r_29,63,0);
    VL_OUT64(io_diff_r_30,63,0);
    VL_OUT64(io_diff_r_31,63,0);
    VL_OUT64(io_diff_pc_data,63,0);
    VL_OUT64(io_diff_mstatus,63,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(v__DOT__mycore__DOT__dpath_io_d2c_islt,0,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath_io_d2c_isltu,0,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath_io_d2c_iseq,0,0);
    VL_SIG8(v__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel,2,0);
    VL_SIG8(v__DOT__mycore__DOT__cpath_io_c2d_cp_op1_sel,1,0);
    VL_SIG8(v__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel,1,0);
    VL_SIG8(v__DOT__mycore__DOT__cpath_io_c2d_cp_if_kill,0,0);
    VL_SIG8(v__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard,0,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir,0,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr_valid,0,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rd_addr,4,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rd_addr,4,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_rd_addr,4,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rf_wen,0,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rf_wen,0,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_rf_wen,0,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_wb_sel,1,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT___T_75,0,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT___T_81,0,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT___T_87,0,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel,4,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_en,0,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_read_op,2,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_write_mask,7,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_wen,0,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_ext_sel,2,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_wb_sel,1,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_csr_op,2,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_instr_valid,0,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr_valid,0,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_en,0,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_read_op,2,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_write_mask,7,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_wen,0,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op,2,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_instr_valid,0,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mie_msi,0,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mie_mti,0,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mip_msi,0,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mip_mti,0,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp,1,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie,0,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie,0,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__wire_csr_op,2,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__write_illgal,0,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__legalcsrnumber,0,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_254,0,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__read_illegal,0,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_enable,0,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen,0,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__csr__DOT___GEN_92,0,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_illegal_ins_exception,0,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall,0,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak,0,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_ismret,0,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasexception,0,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasinterrupt,0,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__prv_now,1,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__csr__DOT___GEN_241,0,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_17734,0,0);
    VL_SIG8(v__DOT__mycore__DOT__cpath__DOT___T_162,0,0);
    VL_SIG8(v__DOT__mycore__DOT__cpath__DOT__cs_valid_inst,0,0);
    VL_SIG8(v__DOT__mycore__DOT__cpath__DOT___T_539,0,0);
    VL_SIG8(v__DOT__mycore__DOT__cpath__DOT___T_659,0,0);
    VL_SIG8(v__DOT__mycore__DOT__cpath__DOT___T_666,0,0);
    VL_SIG8(v__DOT__mycore__DOT__cpath__DOT___T_667,0,0);
    VL_SIG8(v__DOT__mycore__DOT__cpath__DOT___T_889,0,0);
    VL_SIG8(v__DOT__mycore__DOT__cpath__DOT___T_1037,2,0);
    VL_SIG8(v__DOT__mycore__DOT__cpath__DOT__cs_csr_op,2,0);
    VL_SIG8(v__DOT__mycore__DOT__cpath__DOT___T_1206,0,0);
    VL_SIG8(v__DOT__mycore__DOT__cpath__DOT__cs_exe_branch,3,0);
    VL_SIG8(v__DOT__mycore__DOT__cpath__DOT___T_1360,2,0);
    VL_SIG8(v__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_is_csr,0,0);
    VL_SIG8(v__DOT__mycore__DOT__cpath__DOT___T_1366,0,0);
    VL_SIG8(v__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_is_load,0,0);
    VL_SIG8(v__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_rd_addr,4,0);
    VL_SIG8(v__DOT__mycore__DOT__cpath__DOT___T_1376,0,0);
    VL_SIG8(v__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_exception,0,0);
    VL_SIG8(v__DOT__mycore__DOT__cpath__DOT__cs_reg_mem_exception,0,0);
    VL_SIG8(v__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_mem_valid,0,0);
    VL_SIG8(v__DOT__mycore__DOT__cpath__DOT__cs_reg_mem_mem_valid,0,0);
    VL_SIG8(v__DOT__mycore__DOT__cpath__DOT___T_1379,0,0);
    VL_SIG8(v__DOT__mycore__DOT__mymem__DOT__mem___05FT_96_data,7,0);
    VL_SIG8(v__DOT__mycore__DOT__mymem__DOT__mem___05FT_98_data,7,0);
    VL_SIG8(v__DOT__mycore__DOT__mymem__DOT__mem___05FT_100_data,7,0);
    VL_SIG8(v__DOT__mycore__DOT__mymem__DOT__mem___05FT_102_data,7,0);
    VL_SIG8(v__DOT__mycore__DOT__mymem__DOT__mem___05FT_112_data,7,0);
    VL_SIG8(v__DOT__mycore__DOT__mymem__DOT__mem___05FT_114_data,7,0);
    VL_SIG8(v__DOT__mycore__DOT__mymem__DOT__mem___05FT_116_data,7,0);
    VL_SIG8(v__DOT__mycore__DOT__mymem__DOT__mem___05FT_118_data,7,0);
    VL_SIG8(v__DOT__mycore__DOT__mymem__DOT__mem___05FT_120_data,7,0);
    VL_SIG8(v__DOT__mycore__DOT__mymem__DOT__mem___05FT_122_data,7,0);
    VL_SIG8(v__DOT__mycore__DOT__mymem__DOT__mem___05FT_124_data,7,0);
    VL_SIG8(v__DOT__mycore__DOT__mymem__DOT__mem___05FT_126_data,7,0);
    VL_SIG16(v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_28,10,0);
    VL_SIG(v__DOT__mycore__DOT__dpath__DOT__reg_dec_instr,31,0);
    VL_SIGW(v__DOT__mycore__DOT__dpath__DOT__dp_dec_iim_ext,65,0,3);
    VL_SIG(v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_instr,31,0);
    VL_SIGW(v__DOT__mycore__DOT__dpath__DOT___GEN_96,65,0,3);
    VL_SIG(v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr,31,0);
    VL_SIG(v__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_instr,31,0);
    //char	__VpadToAlign428[4];
    VL_SIGW(v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39,127,0,4);
    VL_SIGW(v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115,64,0,3);
    //char	__VpadToAlign460[4];
    VL_SIG64(v__DOT__mycore__DOT__mymem_io_ports_1_resp_bits_rdata,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp1_data,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp2_data,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__reg_if_pc,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__wire_pc_next_4,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_pc,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_bim_ext,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__wire_pc_branch_target,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rs1_data,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_iim_ext,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_jim_ext,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__wire_pc_jump_target,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__reg_dec_pc,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_pc,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rs2_data,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rs2_data,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_wb_data,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_pc,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_4_data,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_7_data,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_9_data,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_10_data,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_11_data,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_12_data,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_13_data,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_14_data,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_15_data,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_16_data,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_17_data,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_18_data,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_19_data,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_20_data,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_21_data,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_22_data,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_23_data,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_24_data,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_25_data,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_26_data,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_27_data,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_28_data,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_29_data,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_30_data,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_31_data,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_32_data,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_33_data,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_34_data,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_35_data,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_36_data,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_37_data,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_38_data,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_39_data,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_40_data,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__add_res,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtvec,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcause,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtval,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mscratch,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_pmpcfg0,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_pmpcfg1,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_0,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_1,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_2,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_3,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_4,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_5,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_6,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_7,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_8,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_9,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_10,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_11,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_12,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_13,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_14,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_15,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcycle,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_minstret,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_0,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_1,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_2,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_3,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_4,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_5,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_6,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_7,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_8,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_9,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_10,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_11,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_12,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_13,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_14,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_15,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_16,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_17,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_18,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_19,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_20,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_21,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_22,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_23,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_24,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_25,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_26,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_27,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_28,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcounterinhibit,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_0,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_1,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_2,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_3,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_4,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_5,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_6,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_7,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_8,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_9,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_10,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_11,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_12,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_13,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_14,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_15,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_16,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_17,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_18,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_19,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_20,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_21,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_22,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_23,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_24,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_25,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_26,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_27,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_28,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_39,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9473,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_data,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9477,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9480,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_17722,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_17724,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs[32],63,0);
    VL_SIG8(v__DOT__mycore__DOT__mymem__DOT__mem[16777216],7,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clock,0,0);
    //char	__VpadToAlign16779133[3];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    //char	__VpadToAlign16779140[4];
    Vtop__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Vtop& operator= (const Vtop&);	///< Copying not allowed
    Vtop(const Vtop&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vtop(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vtop();
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vtop__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vtop__Syms* symsp, bool first);
  private:
    static QData	_change_request(Vtop__Syms* __restrict vlSymsp);
  public:
    static void	_eval(Vtop__Syms* __restrict vlSymsp);
    static void	_eval_initial(Vtop__Syms* __restrict vlSymsp);
    static void	_eval_settle(Vtop__Syms* __restrict vlSymsp);
    static void	_initial__TOP__1(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__10(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__2(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__4(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__6(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__8(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__3(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__5(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__7(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__9(Vtop__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
