// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu_module__Syms.h"


//======================

void Valu_module::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Valu_module* t=(Valu_module*)userthis;
    Valu_module__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void Valu_module::traceChgThis(Valu_module__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Valu_module* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Valu_module::traceChgThis__2(Valu_module__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Valu_module* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgQuad (c+1,(vlTOPp->v__DOT__add_res),64);
	vcdp->chgQuad (c+3,((((QData)((IData)(vlTOPp->v__DOT___T_112[1U])) 
			      << 0x20U) | (QData)((IData)(
							  vlTOPp->v__DOT___T_112[0U])))),64);
    }
}

void Valu_module::traceChgThis__3(Valu_module__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Valu_module* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+5,(vlTOPp->clock));
	vcdp->chgBit  (c+6,(vlTOPp->reset));
	vcdp->chgQuad (c+7,(vlTOPp->io_input1),64);
	vcdp->chgQuad (c+9,(vlTOPp->io_input2),64);
	vcdp->chgBus  (c+11,(vlTOPp->io_op),5);
	vcdp->chgBus  (c+12,(vlTOPp->io_res_ext_op),3);
	vcdp->chgQuad (c+13,(vlTOPp->io_res),64);
	vcdp->chgBus  (c+15,((0x3fU & (IData)(vlTOPp->io_input2))),6);
    }
}
