// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTOP_H_
#define _VTOP_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;

//----------

VL_MODULE(Vtop) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_diff_isredir,0,0);
    VL_OUT8(io_diff_is_retire,0,0);
    VL_OUT8(io_diff_is_valid,0,0);
    VL_OUT(io_diff_instr_in_wb,31,0);
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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ top__DOT__mycore__DOT__dpath_io_d2c_islt;
        CData/*0:0*/ top__DOT__mycore__DOT__dpath_io_d2c_isltu;
        CData/*0:0*/ top__DOT__mycore__DOT__dpath_io_d2c_iseq;
        CData/*2:0*/ top__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel;
        CData/*1:0*/ top__DOT__mycore__DOT__cpath_io_c2d_cp_op1_sel;
        CData/*1:0*/ top__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel;
        CData/*0:0*/ top__DOT__mycore__DOT__cpath_io_c2d_cp_if_kill;
        CData/*0:0*/ top__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard;
        CData/*0:0*/ top__DOT__mycore__DOT__cpath_io_c2d_cp_pipeline_stall;
        CData/*0:0*/ top__DOT__mycore__DOT__bus_bridge_io_ports_0_data_valid;
        CData/*0:0*/ top__DOT__mycore__DOT__bus_bridge_io_axi4_awvalid;
        CData/*0:0*/ top__DOT__mycore__DOT__bus_bridge_io_axi4_arvalid;
        CData/*0:0*/ top__DOT__mycore__DOT__bus_bridge_io_axi4_wvalid;
        CData/*0:0*/ top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir;
        CData/*0:0*/ top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr_valid;
        CData/*4:0*/ top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rd_addr;
        CData/*4:0*/ top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rd_addr;
        CData/*4:0*/ top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_rd_addr;
        CData/*0:0*/ top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rf_wen;
        CData/*0:0*/ top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rf_wen;
        CData/*0:0*/ top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_rf_wen;
        CData/*1:0*/ top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_wb_sel;
        CData/*0:0*/ top__DOT__mycore__DOT__dpath__DOT___T_75;
        CData/*0:0*/ top__DOT__mycore__DOT__dpath__DOT___T_81;
        CData/*0:0*/ top__DOT__mycore__DOT__dpath__DOT___T_87;
        CData/*4:0*/ top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel;
        CData/*0:0*/ top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_en;
        CData/*2:0*/ top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_read_op;
        CData/*7:0*/ top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_write_mask;
        CData/*0:0*/ top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_wen;
        CData/*2:0*/ top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_ext_sel;
        CData/*1:0*/ top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_wb_sel;
        CData/*2:0*/ top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_csr_op;
        CData/*0:0*/ top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_instr_valid;
        CData/*0:0*/ top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr_valid;
        CData/*0:0*/ top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_en;
        CData/*2:0*/ top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_read_op;
        CData/*7:0*/ top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_write_mask;
        CData/*0:0*/ top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_wen;
        CData/*2:0*/ top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op;
        CData/*0:0*/ top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_instr_valid;
        CData/*0:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mie_msi;
        CData/*0:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mie_mti;
        CData/*0:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mip_msi;
        CData/*0:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mip_mti;
        CData/*1:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp;
        CData/*0:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie;
        CData/*0:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie;
        CData/*2:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__wire_csr_op;
        CData/*0:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__write_illgal;
        CData/*0:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_172;
        CData/*0:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_187;
        CData/*0:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_202;
        CData/*0:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_217;
        CData/*0:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_232;
        CData/*0:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_247;
        CData/*0:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__legalcsrnumber;
        CData/*0:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_254;
        CData/*0:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__read_illegal;
        CData/*0:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__exception_in_csr;
        CData/*0:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_enable;
        CData/*0:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen;
        CData/*0:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT___GEN_92;
        CData/*0:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_illegal_ins_exception;
    };
    struct {
        CData/*0:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall;
        CData/*0:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak;
        CData/*0:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_ismret;
        CData/*0:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasexception;
        CData/*0:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasinterrupt;
        CData/*1:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__prv_now;
        CData/*0:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT___GEN_241;
        CData/*0:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_17734;
        CData/*0:0*/ top__DOT__mycore__DOT__cpath__DOT___T_162;
        CData/*0:0*/ top__DOT__mycore__DOT__cpath__DOT___T_181;
        CData/*0:0*/ top__DOT__mycore__DOT__cpath__DOT___T_198;
        CData/*0:0*/ top__DOT__mycore__DOT__cpath__DOT___T_215;
        CData/*0:0*/ top__DOT__mycore__DOT__cpath__DOT__cs_valid_inst;
        CData/*1:0*/ top__DOT__mycore__DOT__cpath__DOT___T_332;
        CData/*1:0*/ top__DOT__mycore__DOT__cpath__DOT___T_347;
        CData/*1:0*/ top__DOT__mycore__DOT__cpath__DOT___T_362;
        CData/*1:0*/ top__DOT__mycore__DOT__cpath__DOT___T_418;
        CData/*1:0*/ top__DOT__mycore__DOT__cpath__DOT___T_433;
        CData/*4:0*/ top__DOT__mycore__DOT__cpath__DOT___T_460;
        CData/*4:0*/ top__DOT__mycore__DOT__cpath__DOT___T_476;
        CData/*4:0*/ top__DOT__mycore__DOT__cpath__DOT___T_491;
        CData/*4:0*/ top__DOT__mycore__DOT__cpath__DOT___T_506;
        CData/*0:0*/ top__DOT__mycore__DOT__cpath__DOT___T_539;
        CData/*0:0*/ top__DOT__mycore__DOT__cpath__DOT___T_556;
        CData/*0:0*/ top__DOT__mycore__DOT__cpath__DOT___T_573;
        CData/*0:0*/ top__DOT__mycore__DOT__cpath__DOT___T_590;
        CData/*0:0*/ top__DOT__mycore__DOT__cpath__DOT___T_643;
        CData/*0:0*/ top__DOT__mycore__DOT__cpath__DOT___T_659;
        CData/*0:0*/ top__DOT__mycore__DOT__cpath__DOT___T_666;
        CData/*0:0*/ top__DOT__mycore__DOT__cpath__DOT___T_667;
        CData/*7:0*/ top__DOT__mycore__DOT__cpath__DOT___T_788;
        CData/*7:0*/ top__DOT__mycore__DOT__cpath__DOT___T_803;
        CData/*0:0*/ top__DOT__mycore__DOT__cpath__DOT___T_889;
        CData/*1:0*/ top__DOT__mycore__DOT__cpath__DOT___T_924;
        CData/*1:0*/ top__DOT__mycore__DOT__cpath__DOT___T_939;
        CData/*1:0*/ top__DOT__mycore__DOT__cpath__DOT___T_954;
        CData/*2:0*/ top__DOT__mycore__DOT__cpath__DOT___T_994;
        CData/*2:0*/ top__DOT__mycore__DOT__cpath__DOT___T_1009;
        CData/*2:0*/ top__DOT__mycore__DOT__cpath__DOT___T_1024;
        CData/*2:0*/ top__DOT__mycore__DOT__cpath__DOT___T_1037;
        CData/*2:0*/ top__DOT__mycore__DOT__cpath__DOT__cs_csr_op;
        CData/*2:0*/ top__DOT__mycore__DOT__cpath__DOT___T_1052;
        CData/*2:0*/ top__DOT__mycore__DOT__cpath__DOT___T_1068;
        CData/*2:0*/ top__DOT__mycore__DOT__cpath__DOT___T_1083;
        CData/*2:0*/ top__DOT__mycore__DOT__cpath__DOT___T_1098;
        CData/*0:0*/ top__DOT__mycore__DOT__cpath__DOT___T_1144;
        CData/*0:0*/ top__DOT__mycore__DOT__cpath__DOT___T_1161;
        CData/*0:0*/ top__DOT__mycore__DOT__cpath__DOT___T_1178;
        CData/*0:0*/ top__DOT__mycore__DOT__cpath__DOT___T_1206;
        CData/*0:0*/ top__DOT__mycore__DOT__cpath__DOT___T_1223;
        CData/*0:0*/ top__DOT__mycore__DOT__cpath__DOT___T_1240;
        CData/*0:0*/ top__DOT__mycore__DOT__cpath__DOT___T_1257;
        CData/*0:0*/ top__DOT__mycore__DOT__cpath__DOT___T_1297;
        CData/*0:0*/ top__DOT__mycore__DOT__cpath__DOT___T_1314;
        CData/*0:0*/ top__DOT__mycore__DOT__cpath__DOT___T_1331;
        CData/*3:0*/ top__DOT__mycore__DOT__cpath__DOT__cs_exe_branch;
        CData/*2:0*/ top__DOT__mycore__DOT__cpath__DOT___T_1360;
        CData/*0:0*/ top__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_is_csr;
        CData/*0:0*/ top__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_is_fencei;
        CData/*0:0*/ top__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_is_load;
        CData/*4:0*/ top__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_rd_addr;
        CData/*0:0*/ top__DOT__mycore__DOT__cpath__DOT___T_1366;
        CData/*0:0*/ top__DOT__mycore__DOT__cpath__DOT___T_1371;
        CData/*0:0*/ top__DOT__mycore__DOT__cpath__DOT__cs_reg_dec_imem_valid;
    };
    struct {
        CData/*0:0*/ top__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_exception;
        CData/*0:0*/ top__DOT__mycore__DOT__cpath__DOT__cs_reg_mem_exception;
        CData/*0:0*/ top__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_mem_valid;
        CData/*0:0*/ top__DOT__mycore__DOT__cpath__DOT__cs_reg_mem_mem_valid;
        CData/*0:0*/ top__DOT__mycore__DOT__cpath__DOT___T_1375;
        CData/*0:0*/ top__DOT__mycore__DOT__bus_bridge__DOT__has_request;
        CData/*0:0*/ top__DOT__mycore__DOT__bus_bridge__DOT__do_data_request;
        CData/*0:0*/ top__DOT__mycore__DOT__bus_bridge__DOT__do_inst_request;
        CData/*0:0*/ top__DOT__mycore__DOT__bus_bridge__DOT__addr_recv;
        CData/*0:0*/ top__DOT__mycore__DOT__bus_bridge__DOT__data_recv;
        CData/*7:0*/ top__DOT__mycore__DOT__bus_bridge__DOT__info_mask;
        CData/*2:0*/ top__DOT__mycore__DOT__bus_bridge__DOT__info_op;
        CData/*0:0*/ top__DOT__mycore__DOT__bus_bridge__DOT__info_wen;
        CData/*0:0*/ top__DOT__mycore__DOT__bus_bridge__DOT___T_101;
        CData/*0:0*/ top__DOT__mycore__DOT__bus_bridge__DOT___GEN_2;
        CData/*0:0*/ top__DOT__mycore__DOT__bus_bridge__DOT___GEN_24;
        CData/*0:0*/ top__DOT__mycore__DOT__bus_bridge__DOT___GEN_25;
        CData/*0:0*/ top__DOT__mycore__DOT__bus_bridge__DOT___T_13;
        CData/*0:0*/ top__DOT__mymem__DOT__read_state;
        CData/*1:0*/ top__DOT__mymem__DOT__write_state;
        CData/*0:0*/ top__DOT__mymem__DOT___T_1;
        CData/*0:0*/ top__DOT__mymem__DOT___GEN_1;
        CData/*0:0*/ top__DOT__mymem__DOT___T_35;
        CData/*0:0*/ top__DOT__mymem__DOT___T_36;
        CData/*7:0*/ top__DOT__mymem__DOT__wire_wstrb;
        CData/*0:0*/ top__DOT__mymem__DOT___T_78;
        SData/*10:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_28;
        IData/*31:0*/ top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr;
        WData/*65:0*/ top__DOT__mycore__DOT__dpath__DOT__dp_dec_iim_ext[3];
        IData/*31:0*/ top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_instr;
        WData/*65:0*/ top__DOT__mycore__DOT__dpath__DOT___GEN_96[3];
        IData/*31:0*/ top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr;
        IData/*31:0*/ top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_instr;
        WData/*127:0*/ top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[4];
        WData/*64:0*/ top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_99[3];
        WData/*64:0*/ top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_108[3];
        WData/*64:0*/ top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[3];
        IData/*23:0*/ top__DOT__mymem__DOT__reg_awaddr;
        IData/*23:0*/ top__DOT__mymem__DOT__reg_araddr;
        QData/*63:0*/ top__DOT__mymem_io_rdata;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__regfile_io_rp2_data;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__reg_if_pc;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__wire_pc_next_4;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_pc;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_bim_ext;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__wire_pc_branch_target;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_iim_ext;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_jim_ext;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__wire_pc_jump_target;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__reg_dec_pc;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_wb_data;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_pc;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rs2_data;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rs2_data;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_pc;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__add_res;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtvec;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcause;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtval;
    };
    struct {
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mscratch;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_pmpcfg0;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_pmpcfg1;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_0;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_1;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_2;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_3;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_4;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_5;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_6;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_7;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_8;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_9;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_10;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_11;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_12;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_13;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_14;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_15;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcycle;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_minstret;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_0;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_1;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_2;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_3;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_4;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_5;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_6;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_7;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_8;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_9;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_10;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_11;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_12;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_13;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_14;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_15;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_16;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_17;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_18;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_19;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_20;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_21;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_22;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_23;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_24;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_25;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_26;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_27;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_28;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcounterinhibit;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_0;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_1;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_2;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_3;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_4;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_5;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_6;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_7;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_8;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_9;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_10;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_11;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_12;
    };
    struct {
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_13;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_14;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_15;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_16;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_17;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_18;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_19;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_20;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_21;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_22;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_23;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_24;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_25;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_26;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_27;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_28;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_39;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9394;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9404;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9414;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9424;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9434;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9444;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9454;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9464;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9473;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_data;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9477;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9480;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_17722;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_17724;
        QData/*63:0*/ top__DOT__mycore__DOT__bus_bridge__DOT__info_addr;
        QData/*63:0*/ top__DOT__mycore__DOT__bus_bridge__DOT__info_wdata;
        QData/*63:0*/ top__DOT__mycore__DOT__bus_bridge__DOT___T_31;
        QData/*63:0*/ top__DOT__mycore__DOT__bus_bridge__DOT___T_60;
        QData/*63:0*/ top__DOT__mymem__DOT___GEN_30;
        QData/*63:0*/ top__DOT__mymem__DOT___GEN_180;
        QData/*63:0*/ top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs[32];
        CData/*7:0*/ top__DOT__mymem__DOT__mem[16777216];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clock;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vtop__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vtop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vtop();
    
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
    static QData _change_request(Vtop__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vtop__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(Vtop__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
