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
    //char	__VpadToAlign2[6];
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
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(v__DOT__mycore__DOT__dpath_io_d2c_islt,0,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath_io_d2c_isltu,0,0);
    VL_SIG8(v__DOT__mycore__DOT__dpath_io_d2c_iseq,0,0);
    VL_SIG8(v__DOT__mycore__DOT__cpath_io_c2d_cp_op1_sel,1,0);
    VL_SIG8(v__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel,1,0);
    VL_SIG8(v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel,4,0);
    VL_SIG8(v__DOT__mycore__DOT__cpath_io_c2d_cp_mem_read_op,2,0);
    VL_SIG8(v__DOT__mycore__DOT__cpath_io_c2d_cp_mem_write_mask,7,0);
    VL_SIG8(v__DOT__mycore__DOT__cpath_io_c2d_cp_mem_wen,0,0);
    VL_SIG8(v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_ext_sel,2,0);
    VL_SIG8(v__DOT__mycore__DOT__cpath_io_c2d_cp_wb_sel,1,0);
    VL_SIG8(v__DOT__mycore__DOT__cpath__DOT___T_158,0,0);
    VL_SIG8(v__DOT__mycore__DOT__cpath__DOT__cs_valid_inst,0,0);
    VL_SIG8(v__DOT__mycore__DOT__cpath__DOT__cs_branch,3,0);
    VL_SIG8(v__DOT__mycore__DOT__cpath__DOT___T_641,0,0);
    VL_SIG8(v__DOT__mycore__DOT__cpath__DOT___T_649,0,0);
    VL_SIG8(v__DOT__mycore__DOT__cpath__DOT__cs_mem_valid,0,0);
    VL_SIG8(v__DOT__mycore__DOT__cpath__DOT___T_1110,2,0);
    VL_SIG8(v__DOT__mycore__DOT__cpath__DOT___T_1114,0,0);
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
    //char	__VpadToAlign307[5];
    VL_SIGW(v__DOT__mycore__DOT__dpath__DOT___T_59,65,0,3);
    //char	__VpadToAlign324[4];
    VL_SIGW(v__DOT__mycore__DOT__dpath__DOT___T_82,65,0,3);
    //char	__VpadToAlign340[4];
    VL_SIGW(v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39,127,0,4);
    VL_SIGW(v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115,64,0,3);
    //char	__VpadToAlign372[4];
    VL_SIG64(v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp1_data,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp2_data,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__reg_pc,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__temp_pc_branch_target,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__temp_pc_next_4,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__temp_pc_jump_target,63,0);
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT___T_73,63,0);
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
    VL_SIG64(v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs[32],63,0);
    VL_SIG8(v__DOT__mycore__DOT__mymem__DOT__mem[16777216],7,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clock,0,0);
    //char	__VpadToAlign16778213[3];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    //char	__VpadToAlign16778220[4];
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
    static void	_sequent__TOP__12(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__2(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__4(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__6(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__8(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__11(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__3(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__5(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__7(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__9(Vtop__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
