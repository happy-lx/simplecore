// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmemorymodule.h for the primary calling header

#include "Vmemorymodule.h"     // For This
#include "Vmemorymodule__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vmemorymodule) {
    Vmemorymodule__Syms* __restrict vlSymsp = __VlSymsp = new Vmemorymodule__Syms(this, name());
    Vmemorymodule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_ports_0_req_ready = VL_RAND_RESET_I(1);
    io_ports_0_req_valid = VL_RAND_RESET_I(1);
    io_ports_0_req_bits_addr = VL_RAND_RESET_I(32);
    io_ports_0_req_bits_mask = VL_RAND_RESET_I(8);
    io_ports_0_req_bits_op = VL_RAND_RESET_I(3);
    io_ports_0_req_bits_wdata = VL_RAND_RESET_Q(64);
    io_ports_0_req_bits_memen = VL_RAND_RESET_I(1);
    io_ports_0_req_bits_wen = VL_RAND_RESET_I(1);
    io_ports_0_resp_ready = VL_RAND_RESET_I(1);
    io_ports_0_resp_valid = VL_RAND_RESET_I(1);
    io_ports_0_resp_bits_rdata = VL_RAND_RESET_Q(64);
    io_ports_1_req_ready = VL_RAND_RESET_I(1);
    io_ports_1_req_valid = VL_RAND_RESET_I(1);
    io_ports_1_req_bits_addr = VL_RAND_RESET_I(32);
    io_ports_1_req_bits_mask = VL_RAND_RESET_I(8);
    io_ports_1_req_bits_op = VL_RAND_RESET_I(3);
    io_ports_1_req_bits_wdata = VL_RAND_RESET_Q(64);
    io_ports_1_req_bits_memen = VL_RAND_RESET_I(1);
    io_ports_1_req_bits_wen = VL_RAND_RESET_I(1);
    io_ports_1_resp_ready = VL_RAND_RESET_I(1);
    io_ports_1_resp_valid = VL_RAND_RESET_I(1);
    io_ports_1_resp_bits_rdata = VL_RAND_RESET_Q(64);
    { int __Vi0=0; for (; __Vi0<16777216; ++__Vi0) {
	    v__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }}
    v__DOT__mem___05FT_96_data = VL_RAND_RESET_I(8);
    v__DOT__mem___05FT_98_data = VL_RAND_RESET_I(8);
    v__DOT__mem___05FT_100_data = VL_RAND_RESET_I(8);
    v__DOT__mem___05FT_102_data = VL_RAND_RESET_I(8);
    v__DOT__mem___05FT_104_data = VL_RAND_RESET_I(8);
    v__DOT__mem___05FT_106_data = VL_RAND_RESET_I(8);
    v__DOT__mem___05FT_108_data = VL_RAND_RESET_I(8);
    v__DOT__mem___05FT_110_data = VL_RAND_RESET_I(8);
    v__DOT__mem___05FT_112_data = VL_RAND_RESET_I(8);
    v__DOT__mem___05FT_114_data = VL_RAND_RESET_I(8);
    v__DOT__mem___05FT_116_data = VL_RAND_RESET_I(8);
    v__DOT__mem___05FT_118_data = VL_RAND_RESET_I(8);
    v__DOT__mem___05FT_120_data = VL_RAND_RESET_I(8);
    v__DOT__mem___05FT_122_data = VL_RAND_RESET_I(8);
    v__DOT__mem___05FT_124_data = VL_RAND_RESET_I(8);
    v__DOT__mem___05FT_126_data = VL_RAND_RESET_I(8);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
}

void Vmemorymodule::__Vconfigure(Vmemorymodule__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vmemorymodule::~Vmemorymodule() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vmemorymodule::eval() {
    Vmemorymodule__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    Vmemorymodule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate Vmemorymodule::eval\n"); );
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

void Vmemorymodule::_eval_initial_loop(Vmemorymodule__Syms* __restrict vlSymsp) {
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

void Vmemorymodule::_initial__TOP__1(Vmemorymodule__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vmemorymodule::_initial__TOP__1\n"); );
    Vmemorymodule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at memorymodule.v:315
    vlTOPp->io_ports_0_req_ready = 1U;
    // INITIAL at memorymodule.v:318
    vlTOPp->io_ports_1_req_ready = 1U;
}

VL_INLINE_OPT void Vmemorymodule::_combo__TOP__2(Vmemorymodule__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vmemorymodule::_combo__TOP__2\n"); );
    Vmemorymodule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_ports_0_resp_valid = vlTOPp->io_ports_0_req_valid;
    vlTOPp->io_ports_1_resp_valid = vlTOPp->io_ports_1_req_valid;
}

VL_INLINE_OPT void Vmemorymodule::_sequent__TOP__4(Vmemorymodule__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vmemorymodule::_sequent__TOP__4\n"); );
    Vmemorymodule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdlyvval__v__DOT__mem__v0,7,0);
    VL_SIG8(__Vdlyvset__v__DOT__mem__v0,0,0);
    VL_SIG8(__Vdlyvval__v__DOT__mem__v1,7,0);
    VL_SIG8(__Vdlyvset__v__DOT__mem__v1,0,0);
    VL_SIG8(__Vdlyvval__v__DOT__mem__v2,7,0);
    VL_SIG8(__Vdlyvset__v__DOT__mem__v2,0,0);
    VL_SIG8(__Vdlyvval__v__DOT__mem__v3,7,0);
    VL_SIG8(__Vdlyvset__v__DOT__mem__v3,0,0);
    VL_SIG8(__Vdlyvval__v__DOT__mem__v4,7,0);
    VL_SIG8(__Vdlyvset__v__DOT__mem__v4,0,0);
    VL_SIG8(__Vdlyvval__v__DOT__mem__v5,7,0);
    VL_SIG8(__Vdlyvset__v__DOT__mem__v5,0,0);
    VL_SIG8(__Vdlyvval__v__DOT__mem__v6,7,0);
    VL_SIG8(__Vdlyvset__v__DOT__mem__v6,0,0);
    VL_SIG8(__Vdlyvval__v__DOT__mem__v7,7,0);
    VL_SIG8(__Vdlyvset__v__DOT__mem__v7,0,0);
    VL_SIG8(__Vdlyvval__v__DOT__mem__v8,7,0);
    VL_SIG8(__Vdlyvset__v__DOT__mem__v8,0,0);
    VL_SIG8(__Vdlyvval__v__DOT__mem__v9,7,0);
    VL_SIG8(__Vdlyvset__v__DOT__mem__v9,0,0);
    VL_SIG8(__Vdlyvval__v__DOT__mem__v10,7,0);
    VL_SIG8(__Vdlyvset__v__DOT__mem__v10,0,0);
    VL_SIG8(__Vdlyvval__v__DOT__mem__v11,7,0);
    VL_SIG8(__Vdlyvset__v__DOT__mem__v11,0,0);
    VL_SIG8(__Vdlyvval__v__DOT__mem__v12,7,0);
    VL_SIG8(__Vdlyvset__v__DOT__mem__v12,0,0);
    VL_SIG8(__Vdlyvval__v__DOT__mem__v13,7,0);
    VL_SIG8(__Vdlyvset__v__DOT__mem__v13,0,0);
    VL_SIG8(__Vdlyvval__v__DOT__mem__v14,7,0);
    VL_SIG8(__Vdlyvset__v__DOT__mem__v14,0,0);
    VL_SIG8(__Vdlyvval__v__DOT__mem__v15,7,0);
    VL_SIG8(__Vdlyvset__v__DOT__mem__v15,0,0);
    VL_SIG(__Vdlyvdim0__v__DOT__mem__v0,23,0);
    VL_SIG(__Vdlyvdim0__v__DOT__mem__v1,23,0);
    VL_SIG(__Vdlyvdim0__v__DOT__mem__v2,23,0);
    VL_SIG(__Vdlyvdim0__v__DOT__mem__v3,23,0);
    VL_SIG(__Vdlyvdim0__v__DOT__mem__v4,23,0);
    VL_SIG(__Vdlyvdim0__v__DOT__mem__v5,23,0);
    VL_SIG(__Vdlyvdim0__v__DOT__mem__v6,23,0);
    VL_SIG(__Vdlyvdim0__v__DOT__mem__v7,23,0);
    VL_SIG(__Vdlyvdim0__v__DOT__mem__v8,23,0);
    VL_SIG(__Vdlyvdim0__v__DOT__mem__v9,23,0);
    VL_SIG(__Vdlyvdim0__v__DOT__mem__v10,23,0);
    VL_SIG(__Vdlyvdim0__v__DOT__mem__v11,23,0);
    VL_SIG(__Vdlyvdim0__v__DOT__mem__v12,23,0);
    VL_SIG(__Vdlyvdim0__v__DOT__mem__v13,23,0);
    VL_SIG(__Vdlyvdim0__v__DOT__mem__v14,23,0);
    VL_SIG(__Vdlyvdim0__v__DOT__mem__v15,23,0);
    // Body
    __Vdlyvset__v__DOT__mem__v0 = 0U;
    __Vdlyvset__v__DOT__mem__v1 = 0U;
    __Vdlyvset__v__DOT__mem__v2 = 0U;
    __Vdlyvset__v__DOT__mem__v3 = 0U;
    __Vdlyvset__v__DOT__mem__v4 = 0U;
    __Vdlyvset__v__DOT__mem__v5 = 0U;
    __Vdlyvset__v__DOT__mem__v6 = 0U;
    __Vdlyvset__v__DOT__mem__v7 = 0U;
    __Vdlyvset__v__DOT__mem__v8 = 0U;
    __Vdlyvset__v__DOT__mem__v9 = 0U;
    __Vdlyvset__v__DOT__mem__v10 = 0U;
    __Vdlyvset__v__DOT__mem__v11 = 0U;
    __Vdlyvset__v__DOT__mem__v12 = 0U;
    __Vdlyvset__v__DOT__mem__v13 = 0U;
    __Vdlyvset__v__DOT__mem__v14 = 0U;
    __Vdlyvset__v__DOT__mem__v15 = 0U;
    // ALWAYS at memorymodule.v:366
    if (((IData)(vlTOPp->io_ports_0_req_bits_memen) 
	 & ((IData)(vlTOPp->io_ports_0_req_bits_wen) 
	    & (IData)(vlTOPp->io_ports_0_req_bits_mask)))) {
	__Vdlyvval__v__DOT__mem__v0 = (0xffU & (IData)(vlTOPp->io_ports_0_req_bits_wdata));
	__Vdlyvset__v__DOT__mem__v0 = 1U;
	__Vdlyvdim0__v__DOT__mem__v0 = (0xffffffU & vlTOPp->io_ports_0_req_bits_addr);
    }
    if (((IData)(vlTOPp->io_ports_0_req_bits_memen) 
	 & ((IData)(vlTOPp->io_ports_0_req_bits_wen) 
	    & ((IData)(vlTOPp->io_ports_0_req_bits_mask) 
	       >> 1U)))) {
	__Vdlyvval__v__DOT__mem__v1 = (0xffU & (IData)(
						       (vlTOPp->io_ports_0_req_bits_wdata 
							>> 8U)));
	__Vdlyvset__v__DOT__mem__v1 = 1U;
	__Vdlyvdim0__v__DOT__mem__v1 = (0xffffffU & 
					((IData)(1U) 
					 + vlTOPp->io_ports_0_req_bits_addr));
    }
    if (((IData)(vlTOPp->io_ports_0_req_bits_memen) 
	 & ((IData)(vlTOPp->io_ports_0_req_bits_wen) 
	    & ((IData)(vlTOPp->io_ports_0_req_bits_mask) 
	       >> 2U)))) {
	__Vdlyvval__v__DOT__mem__v2 = (0xffU & (IData)(
						       (vlTOPp->io_ports_0_req_bits_wdata 
							>> 0x10U)));
	__Vdlyvset__v__DOT__mem__v2 = 1U;
	__Vdlyvdim0__v__DOT__mem__v2 = (0xffffffU & 
					((IData)(2U) 
					 + vlTOPp->io_ports_0_req_bits_addr));
    }
    if (((IData)(vlTOPp->io_ports_0_req_bits_memen) 
	 & ((IData)(vlTOPp->io_ports_0_req_bits_wen) 
	    & ((IData)(vlTOPp->io_ports_0_req_bits_mask) 
	       >> 3U)))) {
	__Vdlyvval__v__DOT__mem__v3 = (0xffU & (IData)(
						       (vlTOPp->io_ports_0_req_bits_wdata 
							>> 0x18U)));
	__Vdlyvset__v__DOT__mem__v3 = 1U;
	__Vdlyvdim0__v__DOT__mem__v3 = (0xffffffU & 
					((IData)(3U) 
					 + vlTOPp->io_ports_0_req_bits_addr));
    }
    if (((IData)(vlTOPp->io_ports_0_req_bits_memen) 
	 & ((IData)(vlTOPp->io_ports_0_req_bits_wen) 
	    & ((IData)(vlTOPp->io_ports_0_req_bits_mask) 
	       >> 4U)))) {
	__Vdlyvval__v__DOT__mem__v4 = (0xffU & (IData)(
						       (vlTOPp->io_ports_0_req_bits_wdata 
							>> 0x20U)));
	__Vdlyvset__v__DOT__mem__v4 = 1U;
	__Vdlyvdim0__v__DOT__mem__v4 = (0xffffffU & 
					((IData)(4U) 
					 + vlTOPp->io_ports_0_req_bits_addr));
    }
    if (((IData)(vlTOPp->io_ports_0_req_bits_memen) 
	 & ((IData)(vlTOPp->io_ports_0_req_bits_wen) 
	    & ((IData)(vlTOPp->io_ports_0_req_bits_mask) 
	       >> 5U)))) {
	__Vdlyvval__v__DOT__mem__v5 = (0xffU & (IData)(
						       (vlTOPp->io_ports_0_req_bits_wdata 
							>> 0x28U)));
	__Vdlyvset__v__DOT__mem__v5 = 1U;
	__Vdlyvdim0__v__DOT__mem__v5 = (0xffffffU & 
					((IData)(5U) 
					 + vlTOPp->io_ports_0_req_bits_addr));
    }
    if (((IData)(vlTOPp->io_ports_0_req_bits_memen) 
	 & ((IData)(vlTOPp->io_ports_0_req_bits_wen) 
	    & ((IData)(vlTOPp->io_ports_0_req_bits_mask) 
	       >> 6U)))) {
	__Vdlyvval__v__DOT__mem__v6 = (0xffU & (IData)(
						       (vlTOPp->io_ports_0_req_bits_wdata 
							>> 0x30U)));
	__Vdlyvset__v__DOT__mem__v6 = 1U;
	__Vdlyvdim0__v__DOT__mem__v6 = (0xffffffU & 
					((IData)(6U) 
					 + vlTOPp->io_ports_0_req_bits_addr));
    }
    if (((IData)(vlTOPp->io_ports_0_req_bits_memen) 
	 & ((IData)(vlTOPp->io_ports_0_req_bits_wen) 
	    & ((IData)(vlTOPp->io_ports_0_req_bits_mask) 
	       >> 7U)))) {
	__Vdlyvval__v__DOT__mem__v7 = (0xffU & (IData)(
						       (vlTOPp->io_ports_0_req_bits_wdata 
							>> 0x38U)));
	__Vdlyvset__v__DOT__mem__v7 = 1U;
	__Vdlyvdim0__v__DOT__mem__v7 = (0xffffffU & 
					((IData)(7U) 
					 + vlTOPp->io_ports_0_req_bits_addr));
    }
    if (((IData)(vlTOPp->io_ports_1_req_bits_memen) 
	 & ((IData)(vlTOPp->io_ports_1_req_bits_wen) 
	    & (IData)(vlTOPp->io_ports_1_req_bits_mask)))) {
	__Vdlyvval__v__DOT__mem__v8 = (0xffU & (IData)(vlTOPp->io_ports_1_req_bits_wdata));
	__Vdlyvset__v__DOT__mem__v8 = 1U;
	__Vdlyvdim0__v__DOT__mem__v8 = (0xffffffU & vlTOPp->io_ports_1_req_bits_addr);
    }
    if (((IData)(vlTOPp->io_ports_1_req_bits_memen) 
	 & ((IData)(vlTOPp->io_ports_1_req_bits_wen) 
	    & ((IData)(vlTOPp->io_ports_1_req_bits_mask) 
	       >> 1U)))) {
	__Vdlyvval__v__DOT__mem__v9 = (0xffU & (IData)(
						       (vlTOPp->io_ports_1_req_bits_wdata 
							>> 8U)));
	__Vdlyvset__v__DOT__mem__v9 = 1U;
	__Vdlyvdim0__v__DOT__mem__v9 = (0xffffffU & 
					((IData)(1U) 
					 + vlTOPp->io_ports_1_req_bits_addr));
    }
    if (((IData)(vlTOPp->io_ports_1_req_bits_memen) 
	 & ((IData)(vlTOPp->io_ports_1_req_bits_wen) 
	    & ((IData)(vlTOPp->io_ports_1_req_bits_mask) 
	       >> 2U)))) {
	__Vdlyvval__v__DOT__mem__v10 = (0xffU & (IData)(
							(vlTOPp->io_ports_1_req_bits_wdata 
							 >> 0x10U)));
	__Vdlyvset__v__DOT__mem__v10 = 1U;
	__Vdlyvdim0__v__DOT__mem__v10 = (0xffffffU 
					 & ((IData)(2U) 
					    + vlTOPp->io_ports_1_req_bits_addr));
    }
    if (((IData)(vlTOPp->io_ports_1_req_bits_memen) 
	 & ((IData)(vlTOPp->io_ports_1_req_bits_wen) 
	    & ((IData)(vlTOPp->io_ports_1_req_bits_mask) 
	       >> 3U)))) {
	__Vdlyvval__v__DOT__mem__v11 = (0xffU & (IData)(
							(vlTOPp->io_ports_1_req_bits_wdata 
							 >> 0x18U)));
	__Vdlyvset__v__DOT__mem__v11 = 1U;
	__Vdlyvdim0__v__DOT__mem__v11 = (0xffffffU 
					 & ((IData)(3U) 
					    + vlTOPp->io_ports_1_req_bits_addr));
    }
    if (((IData)(vlTOPp->io_ports_1_req_bits_memen) 
	 & ((IData)(vlTOPp->io_ports_1_req_bits_wen) 
	    & ((IData)(vlTOPp->io_ports_1_req_bits_mask) 
	       >> 4U)))) {
	__Vdlyvval__v__DOT__mem__v12 = (0xffU & (IData)(
							(vlTOPp->io_ports_1_req_bits_wdata 
							 >> 0x20U)));
	__Vdlyvset__v__DOT__mem__v12 = 1U;
	__Vdlyvdim0__v__DOT__mem__v12 = (0xffffffU 
					 & ((IData)(4U) 
					    + vlTOPp->io_ports_1_req_bits_addr));
    }
    if (((IData)(vlTOPp->io_ports_1_req_bits_memen) 
	 & ((IData)(vlTOPp->io_ports_1_req_bits_wen) 
	    & ((IData)(vlTOPp->io_ports_1_req_bits_mask) 
	       >> 5U)))) {
	__Vdlyvval__v__DOT__mem__v13 = (0xffU & (IData)(
							(vlTOPp->io_ports_1_req_bits_wdata 
							 >> 0x28U)));
	__Vdlyvset__v__DOT__mem__v13 = 1U;
	__Vdlyvdim0__v__DOT__mem__v13 = (0xffffffU 
					 & ((IData)(5U) 
					    + vlTOPp->io_ports_1_req_bits_addr));
    }
    if (((IData)(vlTOPp->io_ports_1_req_bits_memen) 
	 & ((IData)(vlTOPp->io_ports_1_req_bits_wen) 
	    & ((IData)(vlTOPp->io_ports_1_req_bits_mask) 
	       >> 6U)))) {
	__Vdlyvval__v__DOT__mem__v14 = (0xffU & (IData)(
							(vlTOPp->io_ports_1_req_bits_wdata 
							 >> 0x30U)));
	__Vdlyvset__v__DOT__mem__v14 = 1U;
	__Vdlyvdim0__v__DOT__mem__v14 = (0xffffffU 
					 & ((IData)(6U) 
					    + vlTOPp->io_ports_1_req_bits_addr));
    }
    if (((IData)(vlTOPp->io_ports_1_req_bits_memen) 
	 & ((IData)(vlTOPp->io_ports_1_req_bits_wen) 
	    & ((IData)(vlTOPp->io_ports_1_req_bits_mask) 
	       >> 7U)))) {
	__Vdlyvval__v__DOT__mem__v15 = (0xffU & (IData)(
							(vlTOPp->io_ports_1_req_bits_wdata 
							 >> 0x38U)));
	__Vdlyvset__v__DOT__mem__v15 = 1U;
	__Vdlyvdim0__v__DOT__mem__v15 = (0xffffffU 
					 & ((IData)(7U) 
					    + vlTOPp->io_ports_1_req_bits_addr));
    }
    // ALWAYSPOST at memorymodule.v:368
    if (__Vdlyvset__v__DOT__mem__v0) {
	vlTOPp->v__DOT__mem[__Vdlyvdim0__v__DOT__mem__v0] 
	    = __Vdlyvval__v__DOT__mem__v0;
    }
    if (__Vdlyvset__v__DOT__mem__v1) {
	vlTOPp->v__DOT__mem[__Vdlyvdim0__v__DOT__mem__v1] 
	    = __Vdlyvval__v__DOT__mem__v1;
    }
    if (__Vdlyvset__v__DOT__mem__v2) {
	vlTOPp->v__DOT__mem[__Vdlyvdim0__v__DOT__mem__v2] 
	    = __Vdlyvval__v__DOT__mem__v2;
    }
    if (__Vdlyvset__v__DOT__mem__v3) {
	vlTOPp->v__DOT__mem[__Vdlyvdim0__v__DOT__mem__v3] 
	    = __Vdlyvval__v__DOT__mem__v3;
    }
    if (__Vdlyvset__v__DOT__mem__v4) {
	vlTOPp->v__DOT__mem[__Vdlyvdim0__v__DOT__mem__v4] 
	    = __Vdlyvval__v__DOT__mem__v4;
    }
    if (__Vdlyvset__v__DOT__mem__v5) {
	vlTOPp->v__DOT__mem[__Vdlyvdim0__v__DOT__mem__v5] 
	    = __Vdlyvval__v__DOT__mem__v5;
    }
    if (__Vdlyvset__v__DOT__mem__v6) {
	vlTOPp->v__DOT__mem[__Vdlyvdim0__v__DOT__mem__v6] 
	    = __Vdlyvval__v__DOT__mem__v6;
    }
    if (__Vdlyvset__v__DOT__mem__v7) {
	vlTOPp->v__DOT__mem[__Vdlyvdim0__v__DOT__mem__v7] 
	    = __Vdlyvval__v__DOT__mem__v7;
    }
    if (__Vdlyvset__v__DOT__mem__v8) {
	vlTOPp->v__DOT__mem[__Vdlyvdim0__v__DOT__mem__v8] 
	    = __Vdlyvval__v__DOT__mem__v8;
    }
    if (__Vdlyvset__v__DOT__mem__v9) {
	vlTOPp->v__DOT__mem[__Vdlyvdim0__v__DOT__mem__v9] 
	    = __Vdlyvval__v__DOT__mem__v9;
    }
    if (__Vdlyvset__v__DOT__mem__v10) {
	vlTOPp->v__DOT__mem[__Vdlyvdim0__v__DOT__mem__v10] 
	    = __Vdlyvval__v__DOT__mem__v10;
    }
    if (__Vdlyvset__v__DOT__mem__v11) {
	vlTOPp->v__DOT__mem[__Vdlyvdim0__v__DOT__mem__v11] 
	    = __Vdlyvval__v__DOT__mem__v11;
    }
    if (__Vdlyvset__v__DOT__mem__v12) {
	vlTOPp->v__DOT__mem[__Vdlyvdim0__v__DOT__mem__v12] 
	    = __Vdlyvval__v__DOT__mem__v12;
    }
    if (__Vdlyvset__v__DOT__mem__v13) {
	vlTOPp->v__DOT__mem[__Vdlyvdim0__v__DOT__mem__v13] 
	    = __Vdlyvval__v__DOT__mem__v13;
    }
    if (__Vdlyvset__v__DOT__mem__v14) {
	vlTOPp->v__DOT__mem[__Vdlyvdim0__v__DOT__mem__v14] 
	    = __Vdlyvval__v__DOT__mem__v14;
    }
    if (__Vdlyvset__v__DOT__mem__v15) {
	vlTOPp->v__DOT__mem[__Vdlyvdim0__v__DOT__mem__v15] 
	    = __Vdlyvval__v__DOT__mem__v15;
    }
}

VL_INLINE_OPT void Vmemorymodule::_combo__TOP__5(Vmemorymodule__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vmemorymodule::_combo__TOP__5\n"); );
    Vmemorymodule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__mem___05FT_96_data = vlTOPp->v__DOT__mem
	[(0xffffffU & vlTOPp->io_ports_0_req_bits_addr)];
    vlTOPp->v__DOT__mem___05FT_98_data = vlTOPp->v__DOT__mem
	[(0xffffffU & ((IData)(1U) + vlTOPp->io_ports_0_req_bits_addr))];
    vlTOPp->v__DOT__mem___05FT_100_data = vlTOPp->v__DOT__mem
	[(0xffffffU & ((IData)(2U) + vlTOPp->io_ports_0_req_bits_addr))];
    vlTOPp->v__DOT__mem___05FT_102_data = vlTOPp->v__DOT__mem
	[(0xffffffU & ((IData)(3U) + vlTOPp->io_ports_0_req_bits_addr))];
    vlTOPp->v__DOT__mem___05FT_104_data = vlTOPp->v__DOT__mem
	[(0xffffffU & ((IData)(4U) + vlTOPp->io_ports_0_req_bits_addr))];
    vlTOPp->v__DOT__mem___05FT_106_data = vlTOPp->v__DOT__mem
	[(0xffffffU & ((IData)(5U) + vlTOPp->io_ports_0_req_bits_addr))];
    vlTOPp->v__DOT__mem___05FT_108_data = vlTOPp->v__DOT__mem
	[(0xffffffU & ((IData)(6U) + vlTOPp->io_ports_0_req_bits_addr))];
    vlTOPp->v__DOT__mem___05FT_110_data = vlTOPp->v__DOT__mem
	[(0xffffffU & ((IData)(7U) + vlTOPp->io_ports_0_req_bits_addr))];
    vlTOPp->v__DOT__mem___05FT_112_data = vlTOPp->v__DOT__mem
	[(0xffffffU & vlTOPp->io_ports_1_req_bits_addr)];
    vlTOPp->v__DOT__mem___05FT_114_data = vlTOPp->v__DOT__mem
	[(0xffffffU & ((IData)(1U) + vlTOPp->io_ports_1_req_bits_addr))];
    vlTOPp->v__DOT__mem___05FT_116_data = vlTOPp->v__DOT__mem
	[(0xffffffU & ((IData)(2U) + vlTOPp->io_ports_1_req_bits_addr))];
    vlTOPp->v__DOT__mem___05FT_118_data = vlTOPp->v__DOT__mem
	[(0xffffffU & ((IData)(3U) + vlTOPp->io_ports_1_req_bits_addr))];
    vlTOPp->v__DOT__mem___05FT_120_data = vlTOPp->v__DOT__mem
	[(0xffffffU & ((IData)(4U) + vlTOPp->io_ports_1_req_bits_addr))];
    vlTOPp->v__DOT__mem___05FT_122_data = vlTOPp->v__DOT__mem
	[(0xffffffU & ((IData)(5U) + vlTOPp->io_ports_1_req_bits_addr))];
    vlTOPp->v__DOT__mem___05FT_124_data = vlTOPp->v__DOT__mem
	[(0xffffffU & ((IData)(6U) + vlTOPp->io_ports_1_req_bits_addr))];
    vlTOPp->v__DOT__mem___05FT_126_data = vlTOPp->v__DOT__mem
	[(0xffffffU & ((IData)(7U) + vlTOPp->io_ports_1_req_bits_addr))];
}

void Vmemorymodule::_settle__TOP__6(Vmemorymodule__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vmemorymodule::_settle__TOP__6\n"); );
    Vmemorymodule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__mem___05FT_96_data = vlTOPp->v__DOT__mem
	[(0xffffffU & vlTOPp->io_ports_0_req_bits_addr)];
    vlTOPp->v__DOT__mem___05FT_98_data = vlTOPp->v__DOT__mem
	[(0xffffffU & ((IData)(1U) + vlTOPp->io_ports_0_req_bits_addr))];
    vlTOPp->v__DOT__mem___05FT_100_data = vlTOPp->v__DOT__mem
	[(0xffffffU & ((IData)(2U) + vlTOPp->io_ports_0_req_bits_addr))];
    vlTOPp->v__DOT__mem___05FT_102_data = vlTOPp->v__DOT__mem
	[(0xffffffU & ((IData)(3U) + vlTOPp->io_ports_0_req_bits_addr))];
    vlTOPp->v__DOT__mem___05FT_104_data = vlTOPp->v__DOT__mem
	[(0xffffffU & ((IData)(4U) + vlTOPp->io_ports_0_req_bits_addr))];
    vlTOPp->v__DOT__mem___05FT_106_data = vlTOPp->v__DOT__mem
	[(0xffffffU & ((IData)(5U) + vlTOPp->io_ports_0_req_bits_addr))];
    vlTOPp->v__DOT__mem___05FT_108_data = vlTOPp->v__DOT__mem
	[(0xffffffU & ((IData)(6U) + vlTOPp->io_ports_0_req_bits_addr))];
    vlTOPp->v__DOT__mem___05FT_110_data = vlTOPp->v__DOT__mem
	[(0xffffffU & ((IData)(7U) + vlTOPp->io_ports_0_req_bits_addr))];
    vlTOPp->v__DOT__mem___05FT_112_data = vlTOPp->v__DOT__mem
	[(0xffffffU & vlTOPp->io_ports_1_req_bits_addr)];
    vlTOPp->v__DOT__mem___05FT_114_data = vlTOPp->v__DOT__mem
	[(0xffffffU & ((IData)(1U) + vlTOPp->io_ports_1_req_bits_addr))];
    vlTOPp->v__DOT__mem___05FT_116_data = vlTOPp->v__DOT__mem
	[(0xffffffU & ((IData)(2U) + vlTOPp->io_ports_1_req_bits_addr))];
    vlTOPp->v__DOT__mem___05FT_118_data = vlTOPp->v__DOT__mem
	[(0xffffffU & ((IData)(3U) + vlTOPp->io_ports_1_req_bits_addr))];
    vlTOPp->v__DOT__mem___05FT_120_data = vlTOPp->v__DOT__mem
	[(0xffffffU & ((IData)(4U) + vlTOPp->io_ports_1_req_bits_addr))];
    vlTOPp->v__DOT__mem___05FT_122_data = vlTOPp->v__DOT__mem
	[(0xffffffU & ((IData)(5U) + vlTOPp->io_ports_1_req_bits_addr))];
    vlTOPp->v__DOT__mem___05FT_124_data = vlTOPp->v__DOT__mem
	[(0xffffffU & ((IData)(6U) + vlTOPp->io_ports_1_req_bits_addr))];
    vlTOPp->v__DOT__mem___05FT_126_data = vlTOPp->v__DOT__mem
	[(0xffffffU & ((IData)(7U) + vlTOPp->io_ports_1_req_bits_addr))];
    vlTOPp->io_ports_0_resp_bits_rdata = ((0U == (IData)(vlTOPp->io_ports_0_req_bits_op))
					   ? ((((0x80U 
						 & (IData)(vlTOPp->v__DOT__mem___05FT_96_data))
						 ? VL_ULL(0xffffffffffffff)
						 : VL_ULL(0)) 
					       << 8U) 
					      | (QData)((IData)(vlTOPp->v__DOT__mem___05FT_96_data)))
					   : ((1U == (IData)(vlTOPp->io_ports_0_req_bits_op))
					       ? (QData)((IData)(vlTOPp->v__DOT__mem___05FT_96_data))
					       : ((2U 
						   == (IData)(vlTOPp->io_ports_0_req_bits_op))
						   ? 
						  ((((0x80U 
						      & (IData)(vlTOPp->v__DOT__mem___05FT_98_data))
						      ? VL_ULL(0xffffffffffff)
						      : VL_ULL(0)) 
						    << 0x10U) 
						   | (QData)((IData)(
								     (((IData)(vlTOPp->v__DOT__mem___05FT_98_data) 
								       << 8U) 
								      | (IData)(vlTOPp->v__DOT__mem___05FT_96_data)))))
						   : 
						  ((3U 
						    == (IData)(vlTOPp->io_ports_0_req_bits_op))
						    ? 
						   (((QData)((IData)(vlTOPp->v__DOT__mem___05FT_98_data)) 
						     << 8U) 
						    | (QData)((IData)(vlTOPp->v__DOT__mem___05FT_96_data)))
						    : 
						   ((4U 
						     == (IData)(vlTOPp->io_ports_0_req_bits_op))
						     ? 
						    (((QData)((IData)(
								      ((0x80U 
									& (IData)(vlTOPp->v__DOT__mem___05FT_102_data))
								        ? 0xffffffffU
								        : 0U))) 
						      << 0x20U) 
						     | (QData)((IData)(
								       (((IData)(vlTOPp->v__DOT__mem___05FT_102_data) 
									 << 0x18U) 
									| (((IData)(vlTOPp->v__DOT__mem___05FT_100_data) 
									    << 0x10U) 
									   | (((IData)(vlTOPp->v__DOT__mem___05FT_98_data) 
									       << 8U) 
									      | (IData)(vlTOPp->v__DOT__mem___05FT_96_data)))))))
						     : 
						    ((5U 
						      == (IData)(vlTOPp->io_ports_0_req_bits_op))
						      ? 
						     (((QData)((IData)(vlTOPp->v__DOT__mem___05FT_102_data)) 
						       << 0x18U) 
						      | (QData)((IData)(
									(((IData)(vlTOPp->v__DOT__mem___05FT_100_data) 
									  << 0x10U) 
									 | (((IData)(vlTOPp->v__DOT__mem___05FT_98_data) 
									     << 8U) 
									    | (IData)(vlTOPp->v__DOT__mem___05FT_96_data))))))
						      : 
						     (((QData)((IData)(
								       (((IData)(vlTOPp->v__DOT__mem___05FT_110_data) 
									 << 0x18U) 
									| (((IData)(vlTOPp->v__DOT__mem___05FT_108_data) 
									    << 0x10U) 
									   | (((IData)(vlTOPp->v__DOT__mem___05FT_106_data) 
									       << 8U) 
									      | (IData)(vlTOPp->v__DOT__mem___05FT_104_data)))))) 
						       << 0x20U) 
						      | (QData)((IData)(
									(((IData)(vlTOPp->v__DOT__mem___05FT_102_data) 
									  << 0x18U) 
									 | (((IData)(vlTOPp->v__DOT__mem___05FT_100_data) 
									     << 0x10U) 
									    | (((IData)(vlTOPp->v__DOT__mem___05FT_98_data) 
										<< 8U) 
									       | (IData)(vlTOPp->v__DOT__mem___05FT_96_data)))))))))))));
    vlTOPp->io_ports_1_resp_bits_rdata = ((0U == (IData)(vlTOPp->io_ports_1_req_bits_op))
					   ? ((((0x80U 
						 & (IData)(vlTOPp->v__DOT__mem___05FT_112_data))
						 ? VL_ULL(0xffffffffffffff)
						 : VL_ULL(0)) 
					       << 8U) 
					      | (QData)((IData)(vlTOPp->v__DOT__mem___05FT_112_data)))
					   : ((1U == (IData)(vlTOPp->io_ports_1_req_bits_op))
					       ? (QData)((IData)(vlTOPp->v__DOT__mem___05FT_112_data))
					       : ((2U 
						   == (IData)(vlTOPp->io_ports_1_req_bits_op))
						   ? 
						  ((((0x80U 
						      & (IData)(vlTOPp->v__DOT__mem___05FT_114_data))
						      ? VL_ULL(0xffffffffffff)
						      : VL_ULL(0)) 
						    << 0x10U) 
						   | (QData)((IData)(
								     (((IData)(vlTOPp->v__DOT__mem___05FT_114_data) 
								       << 8U) 
								      | (IData)(vlTOPp->v__DOT__mem___05FT_112_data)))))
						   : 
						  ((3U 
						    == (IData)(vlTOPp->io_ports_1_req_bits_op))
						    ? 
						   (((QData)((IData)(vlTOPp->v__DOT__mem___05FT_114_data)) 
						     << 8U) 
						    | (QData)((IData)(vlTOPp->v__DOT__mem___05FT_112_data)))
						    : 
						   ((4U 
						     == (IData)(vlTOPp->io_ports_1_req_bits_op))
						     ? 
						    (((QData)((IData)(
								      ((0x80U 
									& (IData)(vlTOPp->v__DOT__mem___05FT_118_data))
								        ? 0xffffffffU
								        : 0U))) 
						      << 0x20U) 
						     | (QData)((IData)(
								       (((IData)(vlTOPp->v__DOT__mem___05FT_118_data) 
									 << 0x18U) 
									| (((IData)(vlTOPp->v__DOT__mem___05FT_116_data) 
									    << 0x10U) 
									   | (((IData)(vlTOPp->v__DOT__mem___05FT_114_data) 
									       << 8U) 
									      | (IData)(vlTOPp->v__DOT__mem___05FT_112_data)))))))
						     : 
						    ((5U 
						      == (IData)(vlTOPp->io_ports_1_req_bits_op))
						      ? 
						     (((QData)((IData)(vlTOPp->v__DOT__mem___05FT_118_data)) 
						       << 0x18U) 
						      | (QData)((IData)(
									(((IData)(vlTOPp->v__DOT__mem___05FT_116_data) 
									  << 0x10U) 
									 | (((IData)(vlTOPp->v__DOT__mem___05FT_114_data) 
									     << 8U) 
									    | (IData)(vlTOPp->v__DOT__mem___05FT_112_data))))))
						      : 
						     (((QData)((IData)(
								       (((IData)(vlTOPp->v__DOT__mem___05FT_126_data) 
									 << 0x18U) 
									| (((IData)(vlTOPp->v__DOT__mem___05FT_124_data) 
									    << 0x10U) 
									   | (((IData)(vlTOPp->v__DOT__mem___05FT_122_data) 
									       << 8U) 
									      | (IData)(vlTOPp->v__DOT__mem___05FT_120_data)))))) 
						       << 0x20U) 
						      | (QData)((IData)(
									(((IData)(vlTOPp->v__DOT__mem___05FT_118_data) 
									  << 0x18U) 
									 | (((IData)(vlTOPp->v__DOT__mem___05FT_116_data) 
									     << 0x10U) 
									    | (((IData)(vlTOPp->v__DOT__mem___05FT_114_data) 
										<< 8U) 
									       | (IData)(vlTOPp->v__DOT__mem___05FT_112_data)))))))))))));
}

VL_INLINE_OPT void Vmemorymodule::_combo__TOP__7(Vmemorymodule__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vmemorymodule::_combo__TOP__7\n"); );
    Vmemorymodule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_ports_0_resp_bits_rdata = ((0U == (IData)(vlTOPp->io_ports_0_req_bits_op))
					   ? ((((0x80U 
						 & (IData)(vlTOPp->v__DOT__mem___05FT_96_data))
						 ? VL_ULL(0xffffffffffffff)
						 : VL_ULL(0)) 
					       << 8U) 
					      | (QData)((IData)(vlTOPp->v__DOT__mem___05FT_96_data)))
					   : ((1U == (IData)(vlTOPp->io_ports_0_req_bits_op))
					       ? (QData)((IData)(vlTOPp->v__DOT__mem___05FT_96_data))
					       : ((2U 
						   == (IData)(vlTOPp->io_ports_0_req_bits_op))
						   ? 
						  ((((0x80U 
						      & (IData)(vlTOPp->v__DOT__mem___05FT_98_data))
						      ? VL_ULL(0xffffffffffff)
						      : VL_ULL(0)) 
						    << 0x10U) 
						   | (QData)((IData)(
								     (((IData)(vlTOPp->v__DOT__mem___05FT_98_data) 
								       << 8U) 
								      | (IData)(vlTOPp->v__DOT__mem___05FT_96_data)))))
						   : 
						  ((3U 
						    == (IData)(vlTOPp->io_ports_0_req_bits_op))
						    ? 
						   (((QData)((IData)(vlTOPp->v__DOT__mem___05FT_98_data)) 
						     << 8U) 
						    | (QData)((IData)(vlTOPp->v__DOT__mem___05FT_96_data)))
						    : 
						   ((4U 
						     == (IData)(vlTOPp->io_ports_0_req_bits_op))
						     ? 
						    (((QData)((IData)(
								      ((0x80U 
									& (IData)(vlTOPp->v__DOT__mem___05FT_102_data))
								        ? 0xffffffffU
								        : 0U))) 
						      << 0x20U) 
						     | (QData)((IData)(
								       (((IData)(vlTOPp->v__DOT__mem___05FT_102_data) 
									 << 0x18U) 
									| (((IData)(vlTOPp->v__DOT__mem___05FT_100_data) 
									    << 0x10U) 
									   | (((IData)(vlTOPp->v__DOT__mem___05FT_98_data) 
									       << 8U) 
									      | (IData)(vlTOPp->v__DOT__mem___05FT_96_data)))))))
						     : 
						    ((5U 
						      == (IData)(vlTOPp->io_ports_0_req_bits_op))
						      ? 
						     (((QData)((IData)(vlTOPp->v__DOT__mem___05FT_102_data)) 
						       << 0x18U) 
						      | (QData)((IData)(
									(((IData)(vlTOPp->v__DOT__mem___05FT_100_data) 
									  << 0x10U) 
									 | (((IData)(vlTOPp->v__DOT__mem___05FT_98_data) 
									     << 8U) 
									    | (IData)(vlTOPp->v__DOT__mem___05FT_96_data))))))
						      : 
						     (((QData)((IData)(
								       (((IData)(vlTOPp->v__DOT__mem___05FT_110_data) 
									 << 0x18U) 
									| (((IData)(vlTOPp->v__DOT__mem___05FT_108_data) 
									    << 0x10U) 
									   | (((IData)(vlTOPp->v__DOT__mem___05FT_106_data) 
									       << 8U) 
									      | (IData)(vlTOPp->v__DOT__mem___05FT_104_data)))))) 
						       << 0x20U) 
						      | (QData)((IData)(
									(((IData)(vlTOPp->v__DOT__mem___05FT_102_data) 
									  << 0x18U) 
									 | (((IData)(vlTOPp->v__DOT__mem___05FT_100_data) 
									     << 0x10U) 
									    | (((IData)(vlTOPp->v__DOT__mem___05FT_98_data) 
										<< 8U) 
									       | (IData)(vlTOPp->v__DOT__mem___05FT_96_data)))))))))))));
    vlTOPp->io_ports_1_resp_bits_rdata = ((0U == (IData)(vlTOPp->io_ports_1_req_bits_op))
					   ? ((((0x80U 
						 & (IData)(vlTOPp->v__DOT__mem___05FT_112_data))
						 ? VL_ULL(0xffffffffffffff)
						 : VL_ULL(0)) 
					       << 8U) 
					      | (QData)((IData)(vlTOPp->v__DOT__mem___05FT_112_data)))
					   : ((1U == (IData)(vlTOPp->io_ports_1_req_bits_op))
					       ? (QData)((IData)(vlTOPp->v__DOT__mem___05FT_112_data))
					       : ((2U 
						   == (IData)(vlTOPp->io_ports_1_req_bits_op))
						   ? 
						  ((((0x80U 
						      & (IData)(vlTOPp->v__DOT__mem___05FT_114_data))
						      ? VL_ULL(0xffffffffffff)
						      : VL_ULL(0)) 
						    << 0x10U) 
						   | (QData)((IData)(
								     (((IData)(vlTOPp->v__DOT__mem___05FT_114_data) 
								       << 8U) 
								      | (IData)(vlTOPp->v__DOT__mem___05FT_112_data)))))
						   : 
						  ((3U 
						    == (IData)(vlTOPp->io_ports_1_req_bits_op))
						    ? 
						   (((QData)((IData)(vlTOPp->v__DOT__mem___05FT_114_data)) 
						     << 8U) 
						    | (QData)((IData)(vlTOPp->v__DOT__mem___05FT_112_data)))
						    : 
						   ((4U 
						     == (IData)(vlTOPp->io_ports_1_req_bits_op))
						     ? 
						    (((QData)((IData)(
								      ((0x80U 
									& (IData)(vlTOPp->v__DOT__mem___05FT_118_data))
								        ? 0xffffffffU
								        : 0U))) 
						      << 0x20U) 
						     | (QData)((IData)(
								       (((IData)(vlTOPp->v__DOT__mem___05FT_118_data) 
									 << 0x18U) 
									| (((IData)(vlTOPp->v__DOT__mem___05FT_116_data) 
									    << 0x10U) 
									   | (((IData)(vlTOPp->v__DOT__mem___05FT_114_data) 
									       << 8U) 
									      | (IData)(vlTOPp->v__DOT__mem___05FT_112_data)))))))
						     : 
						    ((5U 
						      == (IData)(vlTOPp->io_ports_1_req_bits_op))
						      ? 
						     (((QData)((IData)(vlTOPp->v__DOT__mem___05FT_118_data)) 
						       << 0x18U) 
						      | (QData)((IData)(
									(((IData)(vlTOPp->v__DOT__mem___05FT_116_data) 
									  << 0x10U) 
									 | (((IData)(vlTOPp->v__DOT__mem___05FT_114_data) 
									     << 8U) 
									    | (IData)(vlTOPp->v__DOT__mem___05FT_112_data))))))
						      : 
						     (((QData)((IData)(
								       (((IData)(vlTOPp->v__DOT__mem___05FT_126_data) 
									 << 0x18U) 
									| (((IData)(vlTOPp->v__DOT__mem___05FT_124_data) 
									    << 0x10U) 
									   | (((IData)(vlTOPp->v__DOT__mem___05FT_122_data) 
									       << 8U) 
									      | (IData)(vlTOPp->v__DOT__mem___05FT_120_data)))))) 
						       << 0x20U) 
						      | (QData)((IData)(
									(((IData)(vlTOPp->v__DOT__mem___05FT_118_data) 
									  << 0x18U) 
									 | (((IData)(vlTOPp->v__DOT__mem___05FT_116_data) 
									     << 0x10U) 
									    | (((IData)(vlTOPp->v__DOT__mem___05FT_114_data) 
										<< 8U) 
									       | (IData)(vlTOPp->v__DOT__mem___05FT_112_data)))))))))))));
}

void Vmemorymodule::_eval(Vmemorymodule__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vmemorymodule::_eval\n"); );
    Vmemorymodule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    vlTOPp->_combo__TOP__5(vlSymsp);
    vlTOPp->_combo__TOP__7(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void Vmemorymodule::_eval_initial(Vmemorymodule__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vmemorymodule::_eval_initial\n"); );
    Vmemorymodule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
}

void Vmemorymodule::final() {
    VL_DEBUG_IF(VL_PRINTF("    Vmemorymodule::final\n"); );
    // Variables
    Vmemorymodule__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vmemorymodule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vmemorymodule::_eval_settle(Vmemorymodule__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vmemorymodule::_eval_settle\n"); );
    Vmemorymodule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    vlTOPp->_settle__TOP__6(vlSymsp);
}

VL_INLINE_OPT QData Vmemorymodule::_change_request(Vmemorymodule__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vmemorymodule::_change_request\n"); );
    Vmemorymodule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
