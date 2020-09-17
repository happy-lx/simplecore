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
    v__DOT__mycore__DOT__dpath_io_d2c_islt = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__dpath_io_d2c_isltu = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__dpath_io_d2c_iseq = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__cpath_io_c2d_cp_op1_sel = VL_RAND_RESET_I(2);
    v__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel = VL_RAND_RESET_I(2);
    v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel = VL_RAND_RESET_I(5);
    v__DOT__mycore__DOT__cpath_io_c2d_cp_mem_read_op = VL_RAND_RESET_I(3);
    v__DOT__mycore__DOT__cpath_io_c2d_cp_mem_write_mask = VL_RAND_RESET_I(8);
    v__DOT__mycore__DOT__cpath_io_c2d_cp_mem_wen = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_ext_sel = VL_RAND_RESET_I(3);
    v__DOT__mycore__DOT__cpath_io_c2d_cp_wb_sel = VL_RAND_RESET_I(2);
    v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp1_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp2_data = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__reg_pc = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__temp_pc_branch_target = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT__temp_pc_next_4 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(66,v__DOT__mycore__DOT__dpath__DOT___T_59);
    v__DOT__mycore__DOT__dpath__DOT__temp_pc_jump_target = VL_RAND_RESET_Q(64);
    v__DOT__mycore__DOT__dpath__DOT___T_73 = VL_RAND_RESET_Q(64);
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
    v__DOT__mycore__DOT__cpath__DOT___T_158 = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__cpath__DOT__cs_valid_inst = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__cpath__DOT__cs_branch = VL_RAND_RESET_I(4);
    v__DOT__mycore__DOT__cpath__DOT___T_641 = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__cpath__DOT___T_649 = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__cpath__DOT__cs_mem_valid = VL_RAND_RESET_I(1);
    v__DOT__mycore__DOT__cpath__DOT___T_1110 = VL_RAND_RESET_I(3);
    v__DOT__mycore__DOT__cpath__DOT___T_1114 = VL_RAND_RESET_I(1);
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
    // INITIAL at top.v:2288
    __Vtemp1[0U] = 0x2e747874U;
    __Vtemp1[1U] = 0x74657374U;
    __Vtemp1[2U] = 0x2e2fU;
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
    // ALWAYS at top.v:305
    if ((((IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_valid_inst) 
	  & (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1114)) 
	 & ((0x6fU != (0x7fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
	    & ((0x2067U != (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
	       & ((3U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		  | ((0x4003U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		     | ((0x3003U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
			| ((0x1003U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
			   | ((0x5003U == (0x707fU 
					   & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
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
					     | ((0x101bU 
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
										& (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_158))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) {
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
			        ? VL_ULL(0) : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res)))));
	__Vdlyvset__v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs__v0 = 1U;
	__Vdlyvdim0__v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs__v0 
	    = (0x1fU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
				>> 7U)));
    }
    // ALWAYS at top.v:1784
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
    // ALWAYSPOST at top.v:1810
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
    // ALWAYS at top.v:747
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_pc = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1114) {
	    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_pc 
		= ((0U == (3U & (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1110)))
		    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__temp_pc_next_4
		    : ((4U == (3U & (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1110)))
		        ? VL_ULL(0) : ((1U == (3U & (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1110)))
				        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__temp_pc_jump_target
				        : ((3U == (3U 
						   & (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1110)))
					    ? (VL_ULL(0xfffffffffffffffe) 
					       & (((QData)((IData)(
								   vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_59[1U])) 
						   << 0x20U) 
						  | (VL_ULL(0xfffffffffffffffe) 
						     & (QData)((IData)(
								       vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_59[0U])))))
					    : ((2U 
						== 
						(3U 
						 & (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1110)))
					        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__temp_pc_branch_target
					        : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__temp_pc_next_4)))));
	}
    }
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
    // Variables
    VL_SIGW(__Vtemp3,95,0,3);
    //char	__VpadToAlign156[4];
    VL_SIGW(__Vtemp4,95,0,3);
    //char	__VpadToAlign172[4];
    VL_SIGW(__Vtemp5,95,0,3);
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
							 ((0x101bU 
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
										 : 1U)))))))))))))))))))))))))))))))))))))))));
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
							 ((0x101bU 
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
										 : 0U)))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__temp_pc_branch_target 
	= (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_pc 
	   + ((((1U & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
			       >> 0x1fU))) ? VL_ULL(0x7ffffffffffff)
		 : VL_ULL(0)) << 0xdU) | (QData)((IData)(
							 ((0x1000U 
							   & ((IData)(
								      (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
								       >> 0x1fU)) 
							      << 0xcU)) 
							  | ((0x800U 
							      & ((IData)(
									 (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									  >> 7U)) 
								 << 0xbU)) 
							     | ((0x7e0U 
								 & ((IData)(
									    (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									     >> 0x19U)) 
								    << 5U)) 
								| (0x1eU 
								   & ((IData)(
									      (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									       >> 8U)) 
								      << 1U)))))))));
    __Vtemp3[0U] = (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_pc);
    __Vtemp3[1U] = (IData)((vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_pc 
			    >> 0x20U));
    __Vtemp3[2U] = (3U & VL_NEGATE_I((IData)((1U & (IData)(
							   (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_pc 
							    >> 0x3fU))))));
    __Vtemp4[0U] = ((0xfffff000U & ((IData)(((1U & (IData)(
							   (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							    >> 0x1fU)))
					      ? VL_ULL(0x3fffffffffffff)
					      : VL_ULL(0))) 
				    << 0xcU)) | (0xfffU 
						 & (IData)(
							   (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							    >> 0x14U))));
    __Vtemp4[1U] = ((0xfffU & ((IData)(((1U & (IData)(
						      (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						       >> 0x1fU)))
					 ? VL_ULL(0x3fffffffffffff)
					 : VL_ULL(0))) 
			       >> 0x14U)) | (0xfffff000U 
					     & ((IData)(
							(((1U 
							   & (IData)(
								     (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
								      >> 0x1fU)))
							   ? VL_ULL(0x3fffffffffffff)
							   : VL_ULL(0)) 
							 >> 0x20U)) 
						<< 0xcU)));
    __Vtemp4[2U] = (0xfffU & ((IData)((((1U & (IData)(
						      (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						       >> 0x1fU)))
					 ? VL_ULL(0x3fffffffffffff)
					 : VL_ULL(0)) 
				       >> 0x20U)) >> 0x14U));
    VL_ADD_W(3, __Vtemp5, __Vtemp3, __Vtemp4);
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_59[0U] 
	= __Vtemp5[0U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_59[1U] 
	= __Vtemp5[1U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_59[2U] 
	= (3U & __Vtemp5[2U]);
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__temp_pc_jump_target 
	= (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_pc 
	   + ((((1U & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
			       >> 0x1fU))) ? VL_ULL(0x7ffffffffff)
		 : VL_ULL(0)) << 0x15U) | (QData)((IData)(
							  ((0x100000U 
							    & ((IData)(
								       (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									>> 0x1fU)) 
							       << 0x14U)) 
							   | ((0xff000U 
							       & ((IData)(
									  (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									   >> 0xcU)) 
								  << 0xcU)) 
							      | ((0x800U 
								  & ((IData)(
									     (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									      >> 0x14U)) 
								     << 0xbU)) 
								 | (0x7feU 
								    & ((IData)(
									       (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x15U)) 
								       << 1U)))))))));
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_branch 
	= ((0x6fU == (0x7fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
	    ? 7U : ((0x2067U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
		     ? 8U : ((3U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
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
							 ((0x101bU 
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
										 ? 1U
										 : 
										((0x5063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 5U
										 : 
										((0x7063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 6U
										 : 
										((0x4063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 3U
										 : 
										((0x6063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 4U
										 : 
										((0x1063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 2U
										 : 0U)))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_158 
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
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_641 
	= ((0x37U != (0x7fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
	   & ((0x17U != (0x7fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
	      & ((0x1033U != (0xfe00707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		 & ((0x101bU != (0xfc00707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
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
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))))))))))))))))))))))))))))))))));
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
							 ((0x101bU 
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
										 : 0U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
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
							 ((0x101bU 
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
										 : 0U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
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
							 ((0x101bU 
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
										 : 0U)))))))))))))))))))))))))))))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_7_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[(0x1fU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
			   >> 0x14U)))];
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
							 ((0x101bU 
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
										 : 0U)))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_4_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[(0x1fU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
			   >> 0xfU)))];
}

void Vtop::_settle__TOP__5(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_settle__TOP__5\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp8,95,0,3);
    //char	__VpadToAlign220[4];
    VL_SIGW(__Vtemp9,95,0,3);
    //char	__VpadToAlign236[4];
    VL_SIGW(__Vtemp10,95,0,3);
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
							 ((0x101bU 
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
										 : 1U)))))))))))))))))))))))))))))))))))))))));
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
							 ((0x101bU 
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
										 : 0U)))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__temp_pc_branch_target 
	= (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_pc 
	   + ((((1U & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
			       >> 0x1fU))) ? VL_ULL(0x7ffffffffffff)
		 : VL_ULL(0)) << 0xdU) | (QData)((IData)(
							 ((0x1000U 
							   & ((IData)(
								      (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
								       >> 0x1fU)) 
							      << 0xcU)) 
							  | ((0x800U 
							      & ((IData)(
									 (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									  >> 7U)) 
								 << 0xbU)) 
							     | ((0x7e0U 
								 & ((IData)(
									    (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									     >> 0x19U)) 
								    << 5U)) 
								| (0x1eU 
								   & ((IData)(
									      (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									       >> 8U)) 
								      << 1U)))))))));
    __Vtemp8[0U] = (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_pc);
    __Vtemp8[1U] = (IData)((vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_pc 
			    >> 0x20U));
    __Vtemp8[2U] = (3U & VL_NEGATE_I((IData)((1U & (IData)(
							   (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_pc 
							    >> 0x3fU))))));
    __Vtemp9[0U] = ((0xfffff000U & ((IData)(((1U & (IData)(
							   (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							    >> 0x1fU)))
					      ? VL_ULL(0x3fffffffffffff)
					      : VL_ULL(0))) 
				    << 0xcU)) | (0xfffU 
						 & (IData)(
							   (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
							    >> 0x14U))));
    __Vtemp9[1U] = ((0xfffU & ((IData)(((1U & (IData)(
						      (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						       >> 0x1fU)))
					 ? VL_ULL(0x3fffffffffffff)
					 : VL_ULL(0))) 
			       >> 0x14U)) | (0xfffff000U 
					     & ((IData)(
							(((1U 
							   & (IData)(
								     (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
								      >> 0x1fU)))
							   ? VL_ULL(0x3fffffffffffff)
							   : VL_ULL(0)) 
							 >> 0x20U)) 
						<< 0xcU)));
    __Vtemp9[2U] = (0xfffU & ((IData)((((1U & (IData)(
						      (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						       >> 0x1fU)))
					 ? VL_ULL(0x3fffffffffffff)
					 : VL_ULL(0)) 
				       >> 0x20U)) >> 0x14U));
    VL_ADD_W(3, __Vtemp10, __Vtemp8, __Vtemp9);
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_59[0U] 
	= __Vtemp10[0U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_59[1U] 
	= __Vtemp10[1U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_59[2U] 
	= (3U & __Vtemp10[2U]);
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__temp_pc_jump_target 
	= (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_pc 
	   + ((((1U & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
			       >> 0x1fU))) ? VL_ULL(0x7ffffffffff)
		 : VL_ULL(0)) << 0x15U) | (QData)((IData)(
							  ((0x100000U 
							    & ((IData)(
								       (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									>> 0x1fU)) 
							       << 0x14U)) 
							   | ((0xff000U 
							       & ((IData)(
									  (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									   >> 0xcU)) 
								  << 0xcU)) 
							      | ((0x800U 
								  & ((IData)(
									     (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
									      >> 0x14U)) 
								     << 0xbU)) 
								 | (0x7feU 
								    & ((IData)(
									       (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
										>> 0x15U)) 
								       << 1U)))))))));
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_branch 
	= ((0x6fU == (0x7fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
	    ? 7U : ((0x2067U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
		     ? 8U : ((3U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
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
							 ((0x101bU 
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
										 ? 1U
										 : 
										((0x5063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 5U
										 : 
										((0x7063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 6U
										 : 
										((0x4063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 3U
										 : 
										((0x6063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 4U
										 : 
										((0x1063U 
										== 
										(0x707fU 
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata)))
										 ? 2U
										 : 0U)))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_158 
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
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_641 
	= ((0x37U != (0x7fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
	   & ((0x17U != (0x7fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
	      & ((0x1033U != (0xfe00707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		 & ((0x101bU != (0xfc00707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
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
										& (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))))))))))))))))))))))))))))))))));
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
							 ((0x101bU 
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
										 : 0U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
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
							 ((0x101bU 
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
										 : 0U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
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
							 ((0x101bU 
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
										 : 0U)))))))))))))))))))))))))))))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_7_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[(0x1fU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
			   >> 0x14U)))];
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
							 ((0x101bU 
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
										 : 0U)))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_4_data 
	= vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
	[(0x1fU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
			   >> 0xfU)))];
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
					    | ((0x101bU 
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
										| (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_158)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
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
				   & (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_641))))))))));
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_649 
	= ((0x2067U != (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
	   & ((3U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
	      | ((0x4003U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		 | ((0x3003U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		    | ((0x1003U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		       | ((0x5003U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
			  | ((0x2003U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
			     | ((0x6003U == (0x707fU 
					     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
				| (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_641)))))))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp2_data 
	= ((0U == (0x1fU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
				    >> 0x14U)))) ? VL_ULL(0)
	    : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_7_data);
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp1_data 
	= ((0U == (0x1fU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
				    >> 0xfU)))) ? VL_ULL(0)
	    : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_4_data);
}

VL_INLINE_OPT void Vtop::_sequent__TOP__6(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_sequent__TOP__6\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp12,95,0,3);
    //char	__VpadToAlign284[4];
    VL_SIGW(__Vtemp13,95,0,3);
    //char	__VpadToAlign300[4];
    VL_SIGW(__Vtemp15,95,0,3);
    // Body
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
					    | ((0x101bU 
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
										| (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_158)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
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
				   & (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_641))))))))));
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_649 
	= ((0x2067U != (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
	   & ((3U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
	      | ((0x4003U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		 | ((0x3003U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		    | ((0x1003U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
		       | ((0x5003U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
			  | ((0x2003U == (0x707fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
			     | ((0x6003U == (0x707fU 
					     & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
				| (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_641)))))))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp2_data 
	= ((0U == (0x1fU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
				    >> 0x14U)))) ? VL_ULL(0)
	    : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_7_data);
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp1_data 
	= ((0U == (0x1fU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
				    >> 0xfU)))) ? VL_ULL(0)
	    : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs___05FT_4_data);
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_mem_valid 
	= ((0x6fU != (0x7fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
	   & (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_649));
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
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_73 
	= ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op1_sel))
	    ? (QData)((IData)((0x1fU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						>> 0xfU)))))
	    : ((2U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op1_sel))
	        ? (((QData)((IData)(((1U & (IData)(
						   (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						    >> 0x1fU)))
				      ? 0xffffffffU
				      : 0U))) << 0x20U) 
		   | (QData)((IData)((0xfffff000U & 
				      ((IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						>> 0xcU)) 
				       << 0xcU)))))
	        : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp1_data));
}

void Vtop::_settle__TOP__7(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_settle__TOP__7\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp22,95,0,3);
    //char	__VpadToAlign348[4];
    VL_SIGW(__Vtemp23,95,0,3);
    //char	__VpadToAlign364[4];
    VL_SIGW(__Vtemp25,95,0,3);
    // Body
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_mem_valid 
	= ((0x6fU != (0x7fU & (IData)(vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata))) 
	   & (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_649));
    VL_EXTEND_WQ(66,64, __Vtemp22, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp2_data);
    VL_EXTEND_WQ(66,64, __Vtemp23, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__reg_pc);
    VL_EXTEND_WQ(66,64, __Vtemp25, ((3U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))
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
	    ? __Vtemp22[0U] : ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))
			        ? __Vtemp23[0U] : (
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
						   __Vtemp25[0U])));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U] 
	= ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))
	    ? __Vtemp22[1U] : ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))
			        ? __Vtemp23[1U] : (
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
						   __Vtemp25[1U])));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[2U] 
	= ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))
	    ? __Vtemp22[2U] : ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))
			        ? __Vtemp23[2U] : (
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
						   __Vtemp25[2U])));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_73 
	= ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op1_sel))
	    ? (QData)((IData)((0x1fU & (IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						>> 0xfU)))))
	    : ((2U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op1_sel))
	        ? (((QData)((IData)(((1U & (IData)(
						   (vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						    >> 0x1fU)))
				      ? 0xffffffffU
				      : 0U))) << 0x20U) 
		   | (QData)((IData)((0xfffff000U & 
				      ((IData)((vlTOPp->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata 
						>> 0xcU)) 
				       << 0xcU)))))
	        : vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp1_data));
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1114 
	= (1U & ((~ (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_mem_valid)) 
		 | (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_mem_valid)));
    vlTOPp->v__DOT__mycore__DOT__dpath_io_d2c_islt 
	= VL_LTS_IQQ(1,64,64, ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op1_sel))
			        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp1_data
			        : vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_73), 
		     (((QData)((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
		       << 0x20U) | (QData)((IData)(
						   vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 
	= ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op1_sel))
	    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp1_data
	    : vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_73);
}

VL_INLINE_OPT void Vtop::_sequent__TOP__8(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_sequent__TOP__8\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp32,127,0,4);
    VL_SIGW(__Vtemp33,127,0,4);
    VL_SIGW(__Vtemp34,127,0,4);
    // Body
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1114 
	= (1U & ((~ (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_mem_valid)) 
		 | (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_mem_valid)));
    vlTOPp->v__DOT__mycore__DOT__dpath_io_d2c_islt 
	= VL_LTS_IQQ(1,64,64, ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op1_sel))
			        ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp1_data
			        : vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_73), 
		     (((QData)((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
		       << 0x20U) | (QData)((IData)(
						   vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 
	= ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_op1_sel))
	    ? vlTOPp->v__DOT__mycore__DOT__dpath__DOT__regfile_io_rp1_data
	    : vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_73);
    vlTOPp->v__DOT__mycore__DOT__dpath_io_d2c_isltu 
	= (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 
	   < (((QData)((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
	       << 0x20U) | (QData)((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))));
    vlTOPp->v__DOT__mycore__DOT__dpath_io_d2c_iseq 
	= (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 
	   == (((QData)((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
		<< 0x20U) | (QData)((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__add_res 
	= (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 
	   + (((QData)((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
	       << 0x20U) | (QData)((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))));
    VL_EXTENDS_WQ(128,64, __Vtemp32, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1);
    VL_EXTENDS_WQ(128,64, __Vtemp33, (((QData)((IData)(
						       vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))));
    VL_MULS_WWW(128,128,128, __Vtemp34, __Vtemp32, __Vtemp33);
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[0U] 
	= __Vtemp34[0U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[1U] 
	= __Vtemp34[1U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[2U] 
	= __Vtemp34[2U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[3U] 
	= __Vtemp34[3U];
}

void Vtop::_settle__TOP__9(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_settle__TOP__9\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    //char	__VpadToAlign468[4];
    VL_SIGW(__Vtemp35,127,0,4);
    VL_SIGW(__Vtemp36,127,0,4);
    VL_SIGW(__Vtemp37,127,0,4);
    VL_SIGW(__Vtemp39,95,0,3);
    //char	__VpadToAlign532[4];
    VL_SIGW(__Vtemp40,95,0,3);
    //char	__VpadToAlign548[4];
    VL_SIGW(__Vtemp41,95,0,3);
    //char	__VpadToAlign564[4];
    VL_SIGW(__Vtemp42,95,0,3);
    //char	__VpadToAlign580[4];
    VL_SIGW(__Vtemp43,95,0,3);
    //char	__VpadToAlign596[4];
    VL_SIGW(__Vtemp45,127,0,4);
    VL_SIGW(__Vtemp46,127,0,4);
    VL_SIGW(__Vtemp48,95,0,3);
    //char	__VpadToAlign644[4];
    VL_SIGW(__Vtemp49,95,0,3);
    //char	__VpadToAlign660[4];
    VL_SIGW(__Vtemp50,95,0,3);
    //char	__VpadToAlign676[4];
    VL_SIGW(__Vtemp51,95,0,3);
    //char	__VpadToAlign692[4];
    VL_SIGW(__Vtemp52,95,0,3);
    //char	__VpadToAlign708[4];
    VL_SIGW(__Vtemp53,95,0,3);
    //char	__VpadToAlign724[4];
    VL_SIGW(__Vtemp54,95,0,3);
    //char	__VpadToAlign740[4];
    VL_SIGW(__Vtemp55,95,0,3);
    //char	__VpadToAlign756[4];
    VL_SIGW(__Vtemp56,95,0,3);
    //char	__VpadToAlign772[4];
    VL_SIGW(__Vtemp57,95,0,3);
    //char	__VpadToAlign788[4];
    VL_SIGW(__Vtemp60,95,0,3);
    //char	__VpadToAlign804[4];
    VL_SIGW(__Vtemp61,159,0,5);
    //char	__VpadToAlign828[4];
    VL_SIGW(__Vtemp62,159,0,5);
    //char	__VpadToAlign852[4];
    VL_SIGW(__Vtemp64,95,0,3);
    //char	__VpadToAlign868[4];
    VL_SIGW(__Vtemp65,159,0,5);
    //char	__VpadToAlign892[4];
    VL_SIGW(__Vtemp66,159,0,5);
    //char	__VpadToAlign916[4];
    VL_SIGW(__Vtemp67,159,0,5);
    //char	__VpadToAlign940[4];
    VL_SIGW(__Vtemp69,95,0,3);
    //char	__VpadToAlign956[4];
    VL_SIGW(__Vtemp70,127,0,4);
    VL_SIGW(__Vtemp71,127,0,4);
    VL_SIGW(__Vtemp72,127,0,4);
    VL_SIGW(__Vtemp73,95,0,3);
    //char	__VpadToAlign1020[4];
    VL_SIGW(__Vtemp74,95,0,3);
    //char	__VpadToAlign1036[4];
    VL_SIGW(__Vtemp75,95,0,3);
    //char	__VpadToAlign1052[4];
    VL_SIGW(__Vtemp76,95,0,3);
    //char	__VpadToAlign1068[4];
    VL_SIGW(__Vtemp77,95,0,3);
    //char	__VpadToAlign1084[4];
    VL_SIGW(__Vtemp79,95,0,3);
    //char	__VpadToAlign1100[4];
    VL_SIGW(__Vtemp80,95,0,3);
    //char	__VpadToAlign1116[4];
    VL_SIGW(__Vtemp82,95,0,3);
    //char	__VpadToAlign1132[4];
    VL_SIGW(__Vtemp83,95,0,3);
    //char	__VpadToAlign1148[4];
    VL_SIGW(__Vtemp84,95,0,3);
    //char	__VpadToAlign1164[4];
    VL_SIGW(__Vtemp85,95,0,3);
    //char	__VpadToAlign1180[4];
    VL_SIGW(__Vtemp117,95,0,3);
    // Body
    vlTOPp->v__DOT__mycore__DOT__dpath_io_d2c_isltu 
	= (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 
	   < (((QData)((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
	       << 0x20U) | (QData)((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))));
    vlTOPp->v__DOT__mycore__DOT__dpath_io_d2c_iseq 
	= (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 
	   == (((QData)((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
		<< 0x20U) | (QData)((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__add_res 
	= (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 
	   + (((QData)((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
	       << 0x20U) | (QData)((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))));
    VL_EXTENDS_WQ(128,64, __Vtemp35, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1);
    VL_EXTENDS_WQ(128,64, __Vtemp36, (((QData)((IData)(
						       vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))));
    VL_MULS_WWW(128,128,128, __Vtemp37, __Vtemp35, __Vtemp36);
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[0U] 
	= __Vtemp37[0U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[1U] 
	= __Vtemp37[1U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[2U] 
	= __Vtemp37[2U];
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[3U] 
	= __Vtemp37[3U];
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1110 
	= ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_valid_inst)
	    ? ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_branch))
	        ? 0U : ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_branch))
			 ? ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath_io_d2c_iseq)
			     ? 2U : 0U) : ((2U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_branch))
					    ? ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath_io_d2c_iseq)
					        ? 0U
					        : 2U)
					    : ((5U 
						== (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_branch))
					        ? ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath_io_d2c_islt)
						    ? 0U
						    : 2U)
					        : (
						   (6U 
						    == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_branch))
						    ? 
						   ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath_io_d2c_isltu)
						     ? 0U
						     : 2U)
						    : 
						   ((3U 
						     == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_branch))
						     ? 
						    ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath_io_d2c_islt)
						      ? 2U
						      : 0U)
						     : 
						    ((4U 
						      == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_branch))
						      ? 
						     ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath_io_d2c_isltu)
						       ? 2U
						       : 0U)
						      : 
						     ((7U 
						       == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_branch))
						       ? 1U
						       : 
						      ((8U 
							== (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_branch))
						        ? 3U
						        : 0U)))))))))
	    : 4U);
    VL_EXTEND_WQ(65,64, __Vtemp39, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__add_res);
    VL_EXTEND_WQ(65,64, __Vtemp40, (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 
				    - (((QData)((IData)(
							vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
					<< 0x20U) | (QData)((IData)(
								    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U])))));
    VL_EXTEND_WQ(65,64, __Vtemp41, (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 
				    & (((QData)((IData)(
							vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
					<< 0x20U) | (QData)((IData)(
								    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U])))));
    VL_EXTEND_WQ(65,64, __Vtemp42, (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 
				    | (((QData)((IData)(
							vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
					<< 0x20U) | (QData)((IData)(
								    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U])))));
    VL_EXTEND_WQ(65,64, __Vtemp43, (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 
				    ^ (((QData)((IData)(
							vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
					<< 0x20U) | (QData)((IData)(
								    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U])))));
    VL_EXTEND_WQ(127,64, __Vtemp45, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1);
    VL_SHIFTL_WWI(127,127,6, __Vtemp46, __Vtemp45, 
		  (0x3fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]));
    VL_EXTEND_WQ(65,64, __Vtemp48, (((QData)((IData)(
						     __Vtemp46[1U])) 
				     << 0x20U) | (QData)((IData)(
								 __Vtemp46[0U]))));
    VL_EXTEND_WI(65,1, __Vtemp49, VL_LTS_IQQ(1,64,64, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1, 
					     (((QData)((IData)(
							       vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
					       << 0x20U) 
					      | (QData)((IData)(
								vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U])))));
    VL_EXTEND_WI(65,1, __Vtemp50, (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 
				   < (((QData)((IData)(
						       vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U])))));
    VL_EXTEND_WQ(65,64, __Vtemp51, VL_SHIFTRS_QQI(64,64,6, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1, 
						  (0x3fU 
						   & vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U])));
    VL_EXTEND_WI(65,32, __Vtemp52, ((0x1fU >= (0x3fU 
					       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))
				     ? VL_SHIFTRS_III(32,32,6, (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1), 
						      (0x3fU 
						       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))
				     : VL_NEGATE_I(
						   ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1) 
						    >> 0x1fU))));
    VL_EXTEND_WQ(65,64, __Vtemp53, (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 
				    >> (0x3fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U])));
    VL_EXTEND_WI(65,32, __Vtemp54, ((0x1fU >= (0x3fU 
					       & vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))
				     ? ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1) 
					>> (0x3fU & 
					    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))
				     : 0U));
    VL_EXTEND_WQ(65,64, __Vtemp55, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1);
    VL_EXTEND_WQ(65,64, __Vtemp56, (((QData)((IData)(
						     vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[1U])) 
				     << 0x20U) | (QData)((IData)(
								 vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp57, (((QData)((IData)(
						     vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[3U])) 
				     << 0x20U) | (QData)((IData)(
								 vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[2U]))));
    __Vtemp60[0U] = (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1);
    __Vtemp60[1U] = (IData)((vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 
			     >> 0x20U));
    __Vtemp60[2U] = (1U & (IData)((vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 
				   >> 0x3fU)));
    VL_EXTENDS_WW(129,65, __Vtemp61, __Vtemp60);
    __Vtemp62[0U] = __Vtemp61[0U];
    __Vtemp62[1U] = __Vtemp61[1U];
    __Vtemp62[2U] = __Vtemp61[2U];
    __Vtemp62[3U] = __Vtemp61[3U];
    __Vtemp62[4U] = (1U & __Vtemp61[4U]);
    VL_EXTEND_WQ(65,64, __Vtemp64, (((QData)((IData)(
						     vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
				     << 0x20U) | (QData)((IData)(
								 vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))));
    VL_EXTENDS_WW(129,65, __Vtemp65, __Vtemp64);
    __Vtemp66[0U] = __Vtemp65[0U];
    __Vtemp66[1U] = __Vtemp65[1U];
    __Vtemp66[2U] = __Vtemp65[2U];
    __Vtemp66[3U] = __Vtemp65[3U];
    __Vtemp66[4U] = (1U & __Vtemp65[4U]);
    VL_MULS_WWW(129,129,129, __Vtemp67, __Vtemp62, __Vtemp66);
    VL_EXTEND_WQ(65,64, __Vtemp69, (((QData)((IData)(
						     __Vtemp67[3U])) 
				     << 0x20U) | (QData)((IData)(
								 __Vtemp67[2U]))));
    VL_EXTEND_WQ(128,64, __Vtemp70, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1);
    VL_EXTEND_WQ(128,64, __Vtemp71, (((QData)((IData)(
						      vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))));
    VL_MUL_W(4, __Vtemp72, __Vtemp70, __Vtemp71);
    VL_EXTEND_WQ(65,64, __Vtemp73, (((QData)((IData)(
						     __Vtemp72[3U])) 
				     << 0x20U) | (QData)((IData)(
								 __Vtemp72[2U]))));
    VL_EXTEND_WQ(65,64, __Vtemp74, VL_MODDIVS_QQQ(64, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1, 
						  (((QData)((IData)(
								    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
						    << 0x20U) 
						   | (QData)((IData)(
								     vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U])))));
    VL_EXTEND_WQ(65,64, __Vtemp75, VL_MODDIV_QQQ(64, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1, 
						 (((QData)((IData)(
								   vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
						   << 0x20U) 
						  | (QData)((IData)(
								    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U])))));
    VL_EXTEND_WI(65,32, __Vtemp76, VL_MODDIV_III(32, (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1), 
						 vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]));
    VL_EXTEND_WI(65,32, __Vtemp77, VL_MODDIVS_III(32, (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1), 
						  vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]));
    VL_EXTENDS_WQ(65,64, __Vtemp79, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1);
    __Vtemp80[0U] = __Vtemp79[0U];
    __Vtemp80[1U] = __Vtemp79[1U];
    __Vtemp80[2U] = (1U & __Vtemp79[2U]);
    VL_EXTENDS_WQ(65,64, __Vtemp82, (((QData)((IData)(
						      vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))));
    __Vtemp83[0U] = __Vtemp82[0U];
    __Vtemp83[1U] = __Vtemp82[1U];
    __Vtemp83[2U] = (1U & __Vtemp82[2U]);
    VL_DIVS_WWW(65, __Vtemp84, __Vtemp80, __Vtemp83);
    VL_EXTEND_WQ(65,64, __Vtemp85, ((0x16U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
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
    __Vtemp117[0U] = ((6U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
		       ? __Vtemp49[0U] : ((7U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
					   ? __Vtemp50[0U]
					   : ((8U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
					       ? __Vtemp51[0U]
					       : ((9U 
						   == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						   ? 
						  __Vtemp52[0U]
						   : 
						  ((0xaU 
						    == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						    ? 
						   __Vtemp53[0U]
						    : 
						   ((0xbU 
						     == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						     ? 
						    __Vtemp54[0U]
						     : 
						    ((0xcU 
						      == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						      ? 
						     __Vtemp55[0U]
						      : 
						     ((0xdU 
						       == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						       ? 
						      __Vtemp56[0U]
						       : 
						      ((0xeU 
							== (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						        ? 
						       __Vtemp57[0U]
						        : 
						       ((0xfU 
							 == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							 ? 
							__Vtemp69[0U]
							 : 
							((0x10U 
							  == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							  ? 
							 __Vtemp73[0U]
							  : 
							 ((0x11U 
							   == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							   ? 
							  __Vtemp74[0U]
							   : 
							  ((0x12U 
							    == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							    ? 
							   __Vtemp75[0U]
							    : 
							   ((0x13U 
							     == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							     ? 
							    __Vtemp76[0U]
							     : 
							    ((0x14U 
							      == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							      ? 
							     __Vtemp77[0U]
							      : 
							     ((0x15U 
							       == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							       ? 
							      __Vtemp84[0U]
							       : 
							      __Vtemp85[0U]))))))))))))))));
    __Vtemp117[1U] = ((6U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
		       ? __Vtemp49[1U] : ((7U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
					   ? __Vtemp50[1U]
					   : ((8U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
					       ? __Vtemp51[1U]
					       : ((9U 
						   == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						   ? 
						  __Vtemp52[1U]
						   : 
						  ((0xaU 
						    == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						    ? 
						   __Vtemp53[1U]
						    : 
						   ((0xbU 
						     == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						     ? 
						    __Vtemp54[1U]
						     : 
						    ((0xcU 
						      == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						      ? 
						     __Vtemp55[1U]
						      : 
						     ((0xdU 
						       == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						       ? 
						      __Vtemp56[1U]
						       : 
						      ((0xeU 
							== (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						        ? 
						       __Vtemp57[1U]
						        : 
						       ((0xfU 
							 == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							 ? 
							__Vtemp69[1U]
							 : 
							((0x10U 
							  == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							  ? 
							 __Vtemp73[1U]
							  : 
							 ((0x11U 
							   == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							   ? 
							  __Vtemp74[1U]
							   : 
							  ((0x12U 
							    == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							    ? 
							   __Vtemp75[1U]
							    : 
							   ((0x13U 
							     == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							     ? 
							    __Vtemp76[1U]
							     : 
							    ((0x14U 
							      == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							      ? 
							     __Vtemp77[1U]
							      : 
							     ((0x15U 
							       == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							       ? 
							      __Vtemp84[1U]
							       : 
							      __Vtemp85[1U]))))))))))))))));
    __Vtemp117[2U] = ((6U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
		       ? __Vtemp49[2U] : ((7U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
					   ? __Vtemp50[2U]
					   : ((8U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
					       ? __Vtemp51[2U]
					       : ((9U 
						   == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						   ? 
						  __Vtemp52[2U]
						   : 
						  ((0xaU 
						    == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						    ? 
						   __Vtemp53[2U]
						    : 
						   ((0xbU 
						     == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						     ? 
						    __Vtemp54[2U]
						     : 
						    ((0xcU 
						      == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						      ? 
						     __Vtemp55[2U]
						      : 
						     ((0xdU 
						       == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						       ? 
						      __Vtemp56[2U]
						       : 
						      ((0xeU 
							== (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						        ? 
						       __Vtemp57[2U]
						        : 
						       ((0xfU 
							 == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							 ? 
							__Vtemp69[2U]
							 : 
							((0x10U 
							  == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							  ? 
							 __Vtemp73[2U]
							  : 
							 ((0x11U 
							   == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							   ? 
							  __Vtemp74[2U]
							   : 
							  ((0x12U 
							    == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							    ? 
							   __Vtemp75[2U]
							    : 
							   ((0x13U 
							     == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							     ? 
							    __Vtemp76[2U]
							     : 
							    ((0x14U 
							      == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							      ? 
							     __Vtemp77[2U]
							      : 
							     ((0x15U 
							       == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							       ? 
							      __Vtemp84[2U]
							       : 
							      __Vtemp85[2U]))))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U] 
	= ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
	    ? __Vtemp39[0U] : ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
			        ? __Vtemp40[0U] : (
						   (2U 
						    == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						    ? 
						   __Vtemp41[0U]
						    : 
						   ((3U 
						     == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						     ? 
						    __Vtemp42[0U]
						     : 
						    ((4U 
						      == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						      ? 
						     __Vtemp43[0U]
						      : 
						     ((5U 
						       == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						       ? 
						      __Vtemp48[0U]
						       : 
						      __Vtemp117[0U]))))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[1U] 
	= ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
	    ? __Vtemp39[1U] : ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
			        ? __Vtemp40[1U] : (
						   (2U 
						    == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						    ? 
						   __Vtemp41[1U]
						    : 
						   ((3U 
						     == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						     ? 
						    __Vtemp42[1U]
						     : 
						    ((4U 
						      == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						      ? 
						     __Vtemp43[1U]
						      : 
						     ((5U 
						       == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						       ? 
						      __Vtemp48[1U]
						       : 
						      __Vtemp117[1U]))))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[2U] 
	= (1U & ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
		  ? __Vtemp39[2U] : ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
				      ? __Vtemp40[2U]
				      : ((2U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
					  ? __Vtemp41[2U]
					  : ((3U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
					      ? __Vtemp42[2U]
					      : ((4U 
						  == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						  ? 
						 __Vtemp43[2U]
						  : 
						 ((5U 
						   == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						   ? 
						  __Vtemp48[2U]
						   : 
						  __Vtemp117[2U])))))));
}

VL_INLINE_OPT void Vtop::_sequent__TOP__10(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_sequent__TOP__10\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp132,95,0,3);
    //char	__VpadToAlign1228[4];
    VL_SIGW(__Vtemp133,95,0,3);
    //char	__VpadToAlign1244[4];
    VL_SIGW(__Vtemp134,95,0,3);
    //char	__VpadToAlign1260[4];
    VL_SIGW(__Vtemp135,95,0,3);
    //char	__VpadToAlign1276[4];
    VL_SIGW(__Vtemp136,95,0,3);
    //char	__VpadToAlign1292[4];
    VL_SIGW(__Vtemp138,127,0,4);
    VL_SIGW(__Vtemp139,127,0,4);
    VL_SIGW(__Vtemp141,95,0,3);
    //char	__VpadToAlign1340[4];
    VL_SIGW(__Vtemp142,95,0,3);
    //char	__VpadToAlign1356[4];
    VL_SIGW(__Vtemp143,95,0,3);
    //char	__VpadToAlign1372[4];
    VL_SIGW(__Vtemp144,95,0,3);
    //char	__VpadToAlign1388[4];
    VL_SIGW(__Vtemp145,95,0,3);
    //char	__VpadToAlign1404[4];
    VL_SIGW(__Vtemp146,95,0,3);
    //char	__VpadToAlign1420[4];
    VL_SIGW(__Vtemp147,95,0,3);
    //char	__VpadToAlign1436[4];
    VL_SIGW(__Vtemp148,95,0,3);
    //char	__VpadToAlign1452[4];
    VL_SIGW(__Vtemp149,95,0,3);
    //char	__VpadToAlign1468[4];
    VL_SIGW(__Vtemp150,95,0,3);
    //char	__VpadToAlign1484[4];
    VL_SIGW(__Vtemp153,95,0,3);
    //char	__VpadToAlign1500[4];
    VL_SIGW(__Vtemp154,159,0,5);
    //char	__VpadToAlign1524[4];
    VL_SIGW(__Vtemp155,159,0,5);
    //char	__VpadToAlign1548[4];
    VL_SIGW(__Vtemp157,95,0,3);
    //char	__VpadToAlign1564[4];
    VL_SIGW(__Vtemp158,159,0,5);
    //char	__VpadToAlign1588[4];
    VL_SIGW(__Vtemp159,159,0,5);
    //char	__VpadToAlign1612[4];
    VL_SIGW(__Vtemp160,159,0,5);
    //char	__VpadToAlign1636[4];
    VL_SIGW(__Vtemp162,95,0,3);
    //char	__VpadToAlign1652[4];
    VL_SIGW(__Vtemp163,127,0,4);
    VL_SIGW(__Vtemp164,127,0,4);
    VL_SIGW(__Vtemp165,127,0,4);
    VL_SIGW(__Vtemp166,95,0,3);
    //char	__VpadToAlign1716[4];
    VL_SIGW(__Vtemp167,95,0,3);
    //char	__VpadToAlign1732[4];
    VL_SIGW(__Vtemp168,95,0,3);
    //char	__VpadToAlign1748[4];
    VL_SIGW(__Vtemp169,95,0,3);
    //char	__VpadToAlign1764[4];
    VL_SIGW(__Vtemp170,95,0,3);
    //char	__VpadToAlign1780[4];
    VL_SIGW(__Vtemp172,95,0,3);
    //char	__VpadToAlign1796[4];
    VL_SIGW(__Vtemp173,95,0,3);
    //char	__VpadToAlign1812[4];
    VL_SIGW(__Vtemp175,95,0,3);
    //char	__VpadToAlign1828[4];
    VL_SIGW(__Vtemp176,95,0,3);
    //char	__VpadToAlign1844[4];
    VL_SIGW(__Vtemp177,95,0,3);
    //char	__VpadToAlign1860[4];
    VL_SIGW(__Vtemp178,95,0,3);
    //char	__VpadToAlign1876[4];
    VL_SIGW(__Vtemp210,95,0,3);
    // Body
    vlTOPp->v__DOT__mycore__DOT__cpath__DOT___T_1110 
	= ((IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_valid_inst)
	    ? ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_branch))
	        ? 0U : ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_branch))
			 ? ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath_io_d2c_iseq)
			     ? 2U : 0U) : ((2U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_branch))
					    ? ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath_io_d2c_iseq)
					        ? 0U
					        : 2U)
					    : ((5U 
						== (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_branch))
					        ? ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath_io_d2c_islt)
						    ? 0U
						    : 2U)
					        : (
						   (6U 
						    == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_branch))
						    ? 
						   ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath_io_d2c_isltu)
						     ? 0U
						     : 2U)
						    : 
						   ((3U 
						     == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_branch))
						     ? 
						    ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath_io_d2c_islt)
						      ? 2U
						      : 0U)
						     : 
						    ((4U 
						      == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_branch))
						      ? 
						     ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath_io_d2c_isltu)
						       ? 2U
						       : 0U)
						      : 
						     ((7U 
						       == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_branch))
						       ? 1U
						       : 
						      ((8U 
							== (IData)(vlTOPp->v__DOT__mycore__DOT__cpath__DOT__cs_branch))
						        ? 3U
						        : 0U)))))))))
	    : 4U);
    VL_EXTEND_WQ(65,64, __Vtemp132, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__add_res);
    VL_EXTEND_WQ(65,64, __Vtemp133, (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 
				     - (((QData)((IData)(
							 vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
					 << 0x20U) 
					| (QData)((IData)(
							  vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U])))));
    VL_EXTEND_WQ(65,64, __Vtemp134, (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 
				     & (((QData)((IData)(
							 vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
					 << 0x20U) 
					| (QData)((IData)(
							  vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U])))));
    VL_EXTEND_WQ(65,64, __Vtemp135, (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 
				     | (((QData)((IData)(
							 vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
					 << 0x20U) 
					| (QData)((IData)(
							  vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U])))));
    VL_EXTEND_WQ(65,64, __Vtemp136, (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 
				     ^ (((QData)((IData)(
							 vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
					 << 0x20U) 
					| (QData)((IData)(
							  vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U])))));
    VL_EXTEND_WQ(127,64, __Vtemp138, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1);
    VL_SHIFTL_WWI(127,127,6, __Vtemp139, __Vtemp138, 
		  (0x3fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]));
    VL_EXTEND_WQ(65,64, __Vtemp141, (((QData)((IData)(
						      __Vtemp139[1U])) 
				      << 0x20U) | (QData)((IData)(
								  __Vtemp139[0U]))));
    VL_EXTEND_WI(65,1, __Vtemp142, VL_LTS_IQQ(1,64,64, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1, 
					      (((QData)((IData)(
								vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
						<< 0x20U) 
					       | (QData)((IData)(
								 vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U])))));
    VL_EXTEND_WI(65,1, __Vtemp143, (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 
				    < (((QData)((IData)(
							vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
					<< 0x20U) | (QData)((IData)(
								    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U])))));
    VL_EXTEND_WQ(65,64, __Vtemp144, VL_SHIFTRS_QQI(64,64,6, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1, 
						   (0x3fU 
						    & vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U])));
    VL_EXTEND_WI(65,32, __Vtemp145, ((0x1fU >= (0x3fU 
						& vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))
				      ? VL_SHIFTRS_III(32,32,6, (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1), 
						       (0x3fU 
							& vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))
				      : VL_NEGATE_I(
						    ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1) 
						     >> 0x1fU))));
    VL_EXTEND_WQ(65,64, __Vtemp146, (vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 
				     >> (0x3fU & vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U])));
    VL_EXTEND_WI(65,32, __Vtemp147, ((0x1fU >= (0x3fU 
						& vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))
				      ? ((IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1) 
					 >> (0x3fU 
					     & vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))
				      : 0U));
    VL_EXTEND_WQ(65,64, __Vtemp148, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1);
    VL_EXTEND_WQ(65,64, __Vtemp149, (((QData)((IData)(
						      vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp150, (((QData)((IData)(
						      vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[3U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_39[2U]))));
    __Vtemp153[0U] = (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1);
    __Vtemp153[1U] = (IData)((vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 
			      >> 0x20U));
    __Vtemp153[2U] = (1U & (IData)((vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1 
				    >> 0x3fU)));
    VL_EXTENDS_WW(129,65, __Vtemp154, __Vtemp153);
    __Vtemp155[0U] = __Vtemp154[0U];
    __Vtemp155[1U] = __Vtemp154[1U];
    __Vtemp155[2U] = __Vtemp154[2U];
    __Vtemp155[3U] = __Vtemp154[3U];
    __Vtemp155[4U] = (1U & __Vtemp154[4U]);
    VL_EXTEND_WQ(65,64, __Vtemp157, (((QData)((IData)(
						      vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))));
    VL_EXTENDS_WW(129,65, __Vtemp158, __Vtemp157);
    __Vtemp159[0U] = __Vtemp158[0U];
    __Vtemp159[1U] = __Vtemp158[1U];
    __Vtemp159[2U] = __Vtemp158[2U];
    __Vtemp159[3U] = __Vtemp158[3U];
    __Vtemp159[4U] = (1U & __Vtemp158[4U]);
    VL_MULS_WWW(129,129,129, __Vtemp160, __Vtemp155, __Vtemp159);
    VL_EXTEND_WQ(65,64, __Vtemp162, (((QData)((IData)(
						      __Vtemp160[3U])) 
				      << 0x20U) | (QData)((IData)(
								  __Vtemp160[2U]))));
    VL_EXTEND_WQ(128,64, __Vtemp163, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1);
    VL_EXTEND_WQ(128,64, __Vtemp164, (((QData)((IData)(
						       vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))));
    VL_MUL_W(4, __Vtemp165, __Vtemp163, __Vtemp164);
    VL_EXTEND_WQ(65,64, __Vtemp166, (((QData)((IData)(
						      __Vtemp165[3U])) 
				      << 0x20U) | (QData)((IData)(
								  __Vtemp165[2U]))));
    VL_EXTEND_WQ(65,64, __Vtemp167, VL_MODDIVS_QQQ(64, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1, 
						   (((QData)((IData)(
								     vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
						     << 0x20U) 
						    | (QData)((IData)(
								      vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U])))));
    VL_EXTEND_WQ(65,64, __Vtemp168, VL_MODDIV_QQQ(64, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1, 
						  (((QData)((IData)(
								    vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
						    << 0x20U) 
						   | (QData)((IData)(
								     vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U])))));
    VL_EXTEND_WI(65,32, __Vtemp169, VL_MODDIV_III(32, (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1), 
						  vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]));
    VL_EXTEND_WI(65,32, __Vtemp170, VL_MODDIVS_III(32, (IData)(vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1), 
						   vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]));
    VL_EXTENDS_WQ(65,64, __Vtemp172, vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu_io_input1);
    __Vtemp173[0U] = __Vtemp172[0U];
    __Vtemp173[1U] = __Vtemp172[1U];
    __Vtemp173[2U] = (1U & __Vtemp172[2U]);
    VL_EXTENDS_WQ(65,64, __Vtemp175, (((QData)((IData)(
						       vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->v__DOT__mycore__DOT__dpath__DOT___T_82[0U]))));
    __Vtemp176[0U] = __Vtemp175[0U];
    __Vtemp176[1U] = __Vtemp175[1U];
    __Vtemp176[2U] = (1U & __Vtemp175[2U]);
    VL_DIVS_WWW(65, __Vtemp177, __Vtemp173, __Vtemp176);
    VL_EXTEND_WQ(65,64, __Vtemp178, ((0x16U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
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
    __Vtemp210[0U] = ((6U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
		       ? __Vtemp142[0U] : ((7U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
					    ? __Vtemp143[0U]
					    : ((8U 
						== (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
					        ? __Vtemp144[0U]
					        : (
						   (9U 
						    == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						    ? 
						   __Vtemp145[0U]
						    : 
						   ((0xaU 
						     == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						     ? 
						    __Vtemp146[0U]
						     : 
						    ((0xbU 
						      == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						      ? 
						     __Vtemp147[0U]
						      : 
						     ((0xcU 
						       == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						       ? 
						      __Vtemp148[0U]
						       : 
						      ((0xdU 
							== (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						        ? 
						       __Vtemp149[0U]
						        : 
						       ((0xeU 
							 == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							 ? 
							__Vtemp150[0U]
							 : 
							((0xfU 
							  == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							  ? 
							 __Vtemp162[0U]
							  : 
							 ((0x10U 
							   == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							   ? 
							  __Vtemp166[0U]
							   : 
							  ((0x11U 
							    == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							    ? 
							   __Vtemp167[0U]
							    : 
							   ((0x12U 
							     == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							     ? 
							    __Vtemp168[0U]
							     : 
							    ((0x13U 
							      == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							      ? 
							     __Vtemp169[0U]
							      : 
							     ((0x14U 
							       == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							       ? 
							      __Vtemp170[0U]
							       : 
							      ((0x15U 
								== (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							        ? 
							       __Vtemp177[0U]
							        : 
							       __Vtemp178[0U]))))))))))))))));
    __Vtemp210[1U] = ((6U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
		       ? __Vtemp142[1U] : ((7U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
					    ? __Vtemp143[1U]
					    : ((8U 
						== (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
					        ? __Vtemp144[1U]
					        : (
						   (9U 
						    == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						    ? 
						   __Vtemp145[1U]
						    : 
						   ((0xaU 
						     == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						     ? 
						    __Vtemp146[1U]
						     : 
						    ((0xbU 
						      == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						      ? 
						     __Vtemp147[1U]
						      : 
						     ((0xcU 
						       == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						       ? 
						      __Vtemp148[1U]
						       : 
						      ((0xdU 
							== (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						        ? 
						       __Vtemp149[1U]
						        : 
						       ((0xeU 
							 == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							 ? 
							__Vtemp150[1U]
							 : 
							((0xfU 
							  == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							  ? 
							 __Vtemp162[1U]
							  : 
							 ((0x10U 
							   == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							   ? 
							  __Vtemp166[1U]
							   : 
							  ((0x11U 
							    == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							    ? 
							   __Vtemp167[1U]
							    : 
							   ((0x12U 
							     == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							     ? 
							    __Vtemp168[1U]
							     : 
							    ((0x13U 
							      == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							      ? 
							     __Vtemp169[1U]
							      : 
							     ((0x14U 
							       == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							       ? 
							      __Vtemp170[1U]
							       : 
							      ((0x15U 
								== (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							        ? 
							       __Vtemp177[1U]
							        : 
							       __Vtemp178[1U]))))))))))))))));
    __Vtemp210[2U] = ((6U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
		       ? __Vtemp142[2U] : ((7U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
					    ? __Vtemp143[2U]
					    : ((8U 
						== (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
					        ? __Vtemp144[2U]
					        : (
						   (9U 
						    == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						    ? 
						   __Vtemp145[2U]
						    : 
						   ((0xaU 
						     == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						     ? 
						    __Vtemp146[2U]
						     : 
						    ((0xbU 
						      == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						      ? 
						     __Vtemp147[2U]
						      : 
						     ((0xcU 
						       == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						       ? 
						      __Vtemp148[2U]
						       : 
						      ((0xdU 
							== (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						        ? 
						       __Vtemp149[2U]
						        : 
						       ((0xeU 
							 == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							 ? 
							__Vtemp150[2U]
							 : 
							((0xfU 
							  == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							  ? 
							 __Vtemp162[2U]
							  : 
							 ((0x10U 
							   == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							   ? 
							  __Vtemp166[2U]
							   : 
							  ((0x11U 
							    == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							    ? 
							   __Vtemp167[2U]
							    : 
							   ((0x12U 
							     == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							     ? 
							    __Vtemp168[2U]
							     : 
							    ((0x13U 
							      == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							      ? 
							     __Vtemp169[2U]
							      : 
							     ((0x14U 
							       == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							       ? 
							      __Vtemp170[2U]
							       : 
							      ((0x15U 
								== (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
							        ? 
							       __Vtemp177[2U]
							        : 
							       __Vtemp178[2U]))))))))))))))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[0U] 
	= ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
	    ? __Vtemp132[0U] : ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
				 ? __Vtemp133[0U] : 
				((2U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
				  ? __Vtemp134[0U] : 
				 ((3U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
				   ? __Vtemp135[0U]
				   : ((4U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
				       ? __Vtemp136[0U]
				       : ((5U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
					   ? __Vtemp141[0U]
					   : __Vtemp210[0U]))))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[1U] 
	= ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
	    ? __Vtemp132[1U] : ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
				 ? __Vtemp133[1U] : 
				((2U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
				  ? __Vtemp134[1U] : 
				 ((3U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
				   ? __Vtemp135[1U]
				   : ((4U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
				       ? __Vtemp136[1U]
				       : ((5U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
					   ? __Vtemp141[1U]
					   : __Vtemp210[1U]))))));
    vlTOPp->v__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_115[2U] 
	= (1U & ((0U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
		  ? __Vtemp132[2U] : ((1U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
				       ? __Vtemp133[2U]
				       : ((2U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
					   ? __Vtemp134[2U]
					   : ((3U == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
					       ? __Vtemp135[2U]
					       : ((4U 
						   == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						   ? 
						  __Vtemp136[2U]
						   : 
						  ((5U 
						    == (IData)(vlTOPp->v__DOT__mycore__DOT__cpath_io_c2d_cp_alu_sel))
						    ? 
						   __Vtemp141[2U]
						    : 
						   __Vtemp210[2U])))))));
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

void Vtop::_settle__TOP__11(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_settle__TOP__11\n"); );
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
}

VL_INLINE_OPT void Vtop::_sequent__TOP__12(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_sequent__TOP__12\n"); );
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
