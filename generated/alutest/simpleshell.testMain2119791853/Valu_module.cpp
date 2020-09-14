// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_module.h for the primary calling header

#include "Valu_module.h"       // For This
#include "Valu_module__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Valu_module) {
    Valu_module__Syms* __restrict vlSymsp = __VlSymsp = new Valu_module__Syms(this, name());
    Valu_module* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_input1 = VL_RAND_RESET_Q(64);
    io_input2 = VL_RAND_RESET_Q(64);
    io_op = VL_RAND_RESET_I(5);
    io_res_ext_op = VL_RAND_RESET_I(3);
    io_res = VL_RAND_RESET_Q(64);
    v__DOT__add_res = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128,v__DOT___T_39);
    VL_RAND_RESET_W(65,v__DOT___T_112);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void Valu_module::__Vconfigure(Valu_module__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Valu_module::~Valu_module() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Valu_module::eval() {
    Valu_module__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    Valu_module* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate Valu_module::eval\n"); );
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

void Valu_module::_eval_initial_loop(Valu_module__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void Valu_module::_combo__TOP__1(Valu_module__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Valu_module::_combo__TOP__1\n"); );
    Valu_module* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    //char	__VpadToAlign4[4];
    VL_SIGW(__Vtemp1,127,0,4);
    VL_SIGW(__Vtemp2,127,0,4);
    VL_SIGW(__Vtemp3,127,0,4);
    // Body
    vlTOPp->v__DOT__add_res = (vlTOPp->io_input1 + vlTOPp->io_input2);
    VL_EXTENDS_WQ(128,64, __Vtemp1, vlTOPp->io_input1);
    VL_EXTENDS_WQ(128,64, __Vtemp2, vlTOPp->io_input2);
    VL_MULS_WWW(128,128,128, __Vtemp3, __Vtemp1, __Vtemp2);
    vlTOPp->v__DOT___T_39[0U] = __Vtemp3[0U];
    vlTOPp->v__DOT___T_39[1U] = __Vtemp3[1U];
    vlTOPp->v__DOT___T_39[2U] = __Vtemp3[2U];
    vlTOPp->v__DOT___T_39[3U] = __Vtemp3[3U];
}

void Valu_module::_settle__TOP__2(Valu_module__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Valu_module::_settle__TOP__2\n"); );
    Valu_module* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    //char	__VpadToAlign76[4];
    VL_SIGW(__Vtemp4,127,0,4);
    VL_SIGW(__Vtemp5,127,0,4);
    VL_SIGW(__Vtemp6,127,0,4);
    VL_SIGW(__Vtemp8,95,0,3);
    //char	__VpadToAlign140[4];
    VL_SIGW(__Vtemp9,95,0,3);
    //char	__VpadToAlign156[4];
    VL_SIGW(__Vtemp10,95,0,3);
    //char	__VpadToAlign172[4];
    VL_SIGW(__Vtemp11,95,0,3);
    //char	__VpadToAlign188[4];
    VL_SIGW(__Vtemp12,95,0,3);
    //char	__VpadToAlign204[4];
    VL_SIGW(__Vtemp14,127,0,4);
    VL_SIGW(__Vtemp15,127,0,4);
    VL_SIGW(__Vtemp17,95,0,3);
    //char	__VpadToAlign252[4];
    VL_SIGW(__Vtemp18,95,0,3);
    //char	__VpadToAlign268[4];
    VL_SIGW(__Vtemp19,95,0,3);
    //char	__VpadToAlign284[4];
    VL_SIGW(__Vtemp20,95,0,3);
    //char	__VpadToAlign300[4];
    VL_SIGW(__Vtemp21,95,0,3);
    //char	__VpadToAlign316[4];
    VL_SIGW(__Vtemp22,95,0,3);
    //char	__VpadToAlign332[4];
    VL_SIGW(__Vtemp23,95,0,3);
    //char	__VpadToAlign348[4];
    VL_SIGW(__Vtemp24,95,0,3);
    //char	__VpadToAlign364[4];
    VL_SIGW(__Vtemp25,95,0,3);
    //char	__VpadToAlign380[4];
    VL_SIGW(__Vtemp26,95,0,3);
    //char	__VpadToAlign396[4];
    VL_SIGW(__Vtemp29,95,0,3);
    //char	__VpadToAlign412[4];
    VL_SIGW(__Vtemp30,159,0,5);
    //char	__VpadToAlign436[4];
    VL_SIGW(__Vtemp31,159,0,5);
    //char	__VpadToAlign460[4];
    VL_SIGW(__Vtemp33,95,0,3);
    //char	__VpadToAlign476[4];
    VL_SIGW(__Vtemp34,159,0,5);
    //char	__VpadToAlign500[4];
    VL_SIGW(__Vtemp35,159,0,5);
    //char	__VpadToAlign524[4];
    VL_SIGW(__Vtemp36,159,0,5);
    //char	__VpadToAlign548[4];
    VL_SIGW(__Vtemp38,95,0,3);
    //char	__VpadToAlign564[4];
    VL_SIGW(__Vtemp39,127,0,4);
    VL_SIGW(__Vtemp40,127,0,4);
    VL_SIGW(__Vtemp41,127,0,4);
    VL_SIGW(__Vtemp42,95,0,3);
    //char	__VpadToAlign628[4];
    VL_SIGW(__Vtemp43,95,0,3);
    //char	__VpadToAlign644[4];
    VL_SIGW(__Vtemp44,95,0,3);
    //char	__VpadToAlign660[4];
    VL_SIGW(__Vtemp45,95,0,3);
    //char	__VpadToAlign676[4];
    VL_SIGW(__Vtemp46,95,0,3);
    //char	__VpadToAlign692[4];
    VL_SIGW(__Vtemp48,95,0,3);
    //char	__VpadToAlign708[4];
    VL_SIGW(__Vtemp49,95,0,3);
    //char	__VpadToAlign724[4];
    VL_SIGW(__Vtemp51,95,0,3);
    //char	__VpadToAlign740[4];
    VL_SIGW(__Vtemp52,95,0,3);
    //char	__VpadToAlign756[4];
    VL_SIGW(__Vtemp53,95,0,3);
    //char	__VpadToAlign772[4];
    VL_SIGW(__Vtemp54,95,0,3);
    //char	__VpadToAlign788[4];
    VL_SIGW(__Vtemp86,95,0,3);
    // Body
    vlTOPp->v__DOT__add_res = (vlTOPp->io_input1 + vlTOPp->io_input2);
    VL_EXTENDS_WQ(128,64, __Vtemp4, vlTOPp->io_input1);
    VL_EXTENDS_WQ(128,64, __Vtemp5, vlTOPp->io_input2);
    VL_MULS_WWW(128,128,128, __Vtemp6, __Vtemp4, __Vtemp5);
    vlTOPp->v__DOT___T_39[0U] = __Vtemp6[0U];
    vlTOPp->v__DOT___T_39[1U] = __Vtemp6[1U];
    vlTOPp->v__DOT___T_39[2U] = __Vtemp6[2U];
    vlTOPp->v__DOT___T_39[3U] = __Vtemp6[3U];
    VL_EXTEND_WQ(65,64, __Vtemp8, vlTOPp->v__DOT__add_res);
    VL_EXTEND_WQ(65,64, __Vtemp9, (vlTOPp->io_input1 
				   - vlTOPp->io_input2));
    VL_EXTEND_WQ(65,64, __Vtemp10, (vlTOPp->io_input1 
				    & vlTOPp->io_input2));
    VL_EXTEND_WQ(65,64, __Vtemp11, (vlTOPp->io_input1 
				    | vlTOPp->io_input2));
    VL_EXTEND_WQ(65,64, __Vtemp12, (vlTOPp->io_input1 
				    ^ vlTOPp->io_input2));
    VL_EXTEND_WQ(127,64, __Vtemp14, vlTOPp->io_input1);
    VL_SHIFTL_WWI(127,127,6, __Vtemp15, __Vtemp14, 
		  (0x3fU & (IData)(vlTOPp->io_input2)));
    VL_EXTEND_WQ(65,64, __Vtemp17, (((QData)((IData)(
						     __Vtemp15[1U])) 
				     << 0x20U) | (QData)((IData)(
								 __Vtemp15[0U]))));
    VL_EXTEND_WI(65,1, __Vtemp18, VL_LTS_IQQ(1,64,64, vlTOPp->io_input1, vlTOPp->io_input2));
    VL_EXTEND_WI(65,1, __Vtemp19, (vlTOPp->io_input1 
				   < vlTOPp->io_input2));
    VL_EXTEND_WQ(65,64, __Vtemp20, VL_SHIFTRS_QQI(64,64,6, vlTOPp->io_input1, 
						  (0x3fU 
						   & (IData)(vlTOPp->io_input2))));
    VL_EXTEND_WI(65,32, __Vtemp21, ((0x1fU >= (0x3fU 
					       & (IData)(vlTOPp->io_input2)))
				     ? VL_SHIFTRS_III(32,32,6, (IData)(vlTOPp->io_input1), 
						      (0x3fU 
						       & (IData)(vlTOPp->io_input2)))
				     : VL_NEGATE_I(
						   ((IData)(vlTOPp->io_input1) 
						    >> 0x1fU))));
    VL_EXTEND_WQ(65,64, __Vtemp22, (vlTOPp->io_input1 
				    >> (0x3fU & (IData)(vlTOPp->io_input2))));
    VL_EXTEND_WI(65,32, __Vtemp23, ((0x1fU >= (0x3fU 
					       & (IData)(vlTOPp->io_input2)))
				     ? ((IData)(vlTOPp->io_input1) 
					>> (0x3fU & (IData)(vlTOPp->io_input2)))
				     : 0U));
    VL_EXTEND_WQ(65,64, __Vtemp24, vlTOPp->io_input1);
    VL_EXTEND_WQ(65,64, __Vtemp25, (((QData)((IData)(
						     vlTOPp->v__DOT___T_39[1U])) 
				     << 0x20U) | (QData)((IData)(
								 vlTOPp->v__DOT___T_39[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp26, (((QData)((IData)(
						     vlTOPp->v__DOT___T_39[3U])) 
				     << 0x20U) | (QData)((IData)(
								 vlTOPp->v__DOT___T_39[2U]))));
    __Vtemp29[0U] = (IData)(vlTOPp->io_input1);
    __Vtemp29[1U] = (IData)((vlTOPp->io_input1 >> 0x20U));
    __Vtemp29[2U] = (1U & (IData)((vlTOPp->io_input1 
				   >> 0x3fU)));
    VL_EXTENDS_WW(129,65, __Vtemp30, __Vtemp29);
    __Vtemp31[0U] = __Vtemp30[0U];
    __Vtemp31[1U] = __Vtemp30[1U];
    __Vtemp31[2U] = __Vtemp30[2U];
    __Vtemp31[3U] = __Vtemp30[3U];
    __Vtemp31[4U] = (1U & __Vtemp30[4U]);
    VL_EXTEND_WQ(65,64, __Vtemp33, vlTOPp->io_input2);
    VL_EXTENDS_WW(129,65, __Vtemp34, __Vtemp33);
    __Vtemp35[0U] = __Vtemp34[0U];
    __Vtemp35[1U] = __Vtemp34[1U];
    __Vtemp35[2U] = __Vtemp34[2U];
    __Vtemp35[3U] = __Vtemp34[3U];
    __Vtemp35[4U] = (1U & __Vtemp34[4U]);
    VL_MULS_WWW(129,129,129, __Vtemp36, __Vtemp31, __Vtemp35);
    VL_EXTEND_WQ(65,64, __Vtemp38, (((QData)((IData)(
						     __Vtemp36[3U])) 
				     << 0x20U) | (QData)((IData)(
								 __Vtemp36[2U]))));
    VL_EXTEND_WQ(128,64, __Vtemp39, vlTOPp->io_input1);
    VL_EXTEND_WQ(128,64, __Vtemp40, vlTOPp->io_input2);
    VL_MUL_W(4, __Vtemp41, __Vtemp39, __Vtemp40);
    VL_EXTEND_WQ(65,64, __Vtemp42, (((QData)((IData)(
						     __Vtemp41[3U])) 
				     << 0x20U) | (QData)((IData)(
								 __Vtemp41[2U]))));
    VL_EXTEND_WQ(65,64, __Vtemp43, VL_MODDIVS_QQQ(64, vlTOPp->io_input1, vlTOPp->io_input2));
    VL_EXTEND_WQ(65,64, __Vtemp44, VL_MODDIV_QQQ(64, vlTOPp->io_input1, vlTOPp->io_input2));
    VL_EXTEND_WI(65,32, __Vtemp45, VL_MODDIV_III(32, (IData)(vlTOPp->io_input1), (IData)(vlTOPp->io_input2)));
    VL_EXTEND_WI(65,32, __Vtemp46, VL_MODDIVS_III(32, (IData)(vlTOPp->io_input1), (IData)(vlTOPp->io_input2)));
    VL_EXTENDS_WQ(65,64, __Vtemp48, vlTOPp->io_input1);
    __Vtemp49[0U] = __Vtemp48[0U];
    __Vtemp49[1U] = __Vtemp48[1U];
    __Vtemp49[2U] = (1U & __Vtemp48[2U]);
    VL_EXTENDS_WQ(65,64, __Vtemp51, vlTOPp->io_input2);
    __Vtemp52[0U] = __Vtemp51[0U];
    __Vtemp52[1U] = __Vtemp51[1U];
    __Vtemp52[2U] = (1U & __Vtemp51[2U]);
    VL_DIVS_WWW(65, __Vtemp53, __Vtemp49, __Vtemp52);
    VL_EXTEND_WQ(65,64, __Vtemp54, ((0x16U == (IData)(vlTOPp->io_op))
				     ? (QData)((IData)(
						       VL_DIV_III(32, (IData)(vlTOPp->io_input1), (IData)(vlTOPp->io_input2))))
				     : ((0x17U == (IData)(vlTOPp->io_op))
					 ? (VL_ULL(0x1ffffffff) 
					    & VL_DIVS_QQQ(33, 
							  (VL_ULL(0x1ffffffff) 
							   & VL_EXTENDS_QI(33,32, (IData)(vlTOPp->io_input1))), 
							  (VL_ULL(0x1ffffffff) 
							   & VL_EXTENDS_QI(33,32, (IData)(vlTOPp->io_input2)))))
					 : vlTOPp->v__DOT__add_res)));
    __Vtemp86[0U] = ((6U == (IData)(vlTOPp->io_op))
		      ? __Vtemp18[0U] : ((7U == (IData)(vlTOPp->io_op))
					  ? __Vtemp19[0U]
					  : ((8U == (IData)(vlTOPp->io_op))
					      ? __Vtemp20[0U]
					      : ((9U 
						  == (IData)(vlTOPp->io_op))
						  ? 
						 __Vtemp21[0U]
						  : 
						 ((0xaU 
						   == (IData)(vlTOPp->io_op))
						   ? 
						  __Vtemp22[0U]
						   : 
						  ((0xbU 
						    == (IData)(vlTOPp->io_op))
						    ? 
						   __Vtemp23[0U]
						    : 
						   ((0xcU 
						     == (IData)(vlTOPp->io_op))
						     ? 
						    __Vtemp24[0U]
						     : 
						    ((0xdU 
						      == (IData)(vlTOPp->io_op))
						      ? 
						     __Vtemp25[0U]
						      : 
						     ((0xeU 
						       == (IData)(vlTOPp->io_op))
						       ? 
						      __Vtemp26[0U]
						       : 
						      ((0xfU 
							== (IData)(vlTOPp->io_op))
						        ? 
						       __Vtemp38[0U]
						        : 
						       ((0x10U 
							 == (IData)(vlTOPp->io_op))
							 ? 
							__Vtemp42[0U]
							 : 
							((0x11U 
							  == (IData)(vlTOPp->io_op))
							  ? 
							 __Vtemp43[0U]
							  : 
							 ((0x12U 
							   == (IData)(vlTOPp->io_op))
							   ? 
							  __Vtemp44[0U]
							   : 
							  ((0x13U 
							    == (IData)(vlTOPp->io_op))
							    ? 
							   __Vtemp45[0U]
							    : 
							   ((0x14U 
							     == (IData)(vlTOPp->io_op))
							     ? 
							    __Vtemp46[0U]
							     : 
							    ((0x15U 
							      == (IData)(vlTOPp->io_op))
							      ? 
							     __Vtemp53[0U]
							      : 
							     __Vtemp54[0U]))))))))))))))));
    __Vtemp86[1U] = ((6U == (IData)(vlTOPp->io_op))
		      ? __Vtemp18[1U] : ((7U == (IData)(vlTOPp->io_op))
					  ? __Vtemp19[1U]
					  : ((8U == (IData)(vlTOPp->io_op))
					      ? __Vtemp20[1U]
					      : ((9U 
						  == (IData)(vlTOPp->io_op))
						  ? 
						 __Vtemp21[1U]
						  : 
						 ((0xaU 
						   == (IData)(vlTOPp->io_op))
						   ? 
						  __Vtemp22[1U]
						   : 
						  ((0xbU 
						    == (IData)(vlTOPp->io_op))
						    ? 
						   __Vtemp23[1U]
						    : 
						   ((0xcU 
						     == (IData)(vlTOPp->io_op))
						     ? 
						    __Vtemp24[1U]
						     : 
						    ((0xdU 
						      == (IData)(vlTOPp->io_op))
						      ? 
						     __Vtemp25[1U]
						      : 
						     ((0xeU 
						       == (IData)(vlTOPp->io_op))
						       ? 
						      __Vtemp26[1U]
						       : 
						      ((0xfU 
							== (IData)(vlTOPp->io_op))
						        ? 
						       __Vtemp38[1U]
						        : 
						       ((0x10U 
							 == (IData)(vlTOPp->io_op))
							 ? 
							__Vtemp42[1U]
							 : 
							((0x11U 
							  == (IData)(vlTOPp->io_op))
							  ? 
							 __Vtemp43[1U]
							  : 
							 ((0x12U 
							   == (IData)(vlTOPp->io_op))
							   ? 
							  __Vtemp44[1U]
							   : 
							  ((0x13U 
							    == (IData)(vlTOPp->io_op))
							    ? 
							   __Vtemp45[1U]
							    : 
							   ((0x14U 
							     == (IData)(vlTOPp->io_op))
							     ? 
							    __Vtemp46[1U]
							     : 
							    ((0x15U 
							      == (IData)(vlTOPp->io_op))
							      ? 
							     __Vtemp53[1U]
							      : 
							     __Vtemp54[1U]))))))))))))))));
    __Vtemp86[2U] = ((6U == (IData)(vlTOPp->io_op))
		      ? __Vtemp18[2U] : ((7U == (IData)(vlTOPp->io_op))
					  ? __Vtemp19[2U]
					  : ((8U == (IData)(vlTOPp->io_op))
					      ? __Vtemp20[2U]
					      : ((9U 
						  == (IData)(vlTOPp->io_op))
						  ? 
						 __Vtemp21[2U]
						  : 
						 ((0xaU 
						   == (IData)(vlTOPp->io_op))
						   ? 
						  __Vtemp22[2U]
						   : 
						  ((0xbU 
						    == (IData)(vlTOPp->io_op))
						    ? 
						   __Vtemp23[2U]
						    : 
						   ((0xcU 
						     == (IData)(vlTOPp->io_op))
						     ? 
						    __Vtemp24[2U]
						     : 
						    ((0xdU 
						      == (IData)(vlTOPp->io_op))
						      ? 
						     __Vtemp25[2U]
						      : 
						     ((0xeU 
						       == (IData)(vlTOPp->io_op))
						       ? 
						      __Vtemp26[2U]
						       : 
						      ((0xfU 
							== (IData)(vlTOPp->io_op))
						        ? 
						       __Vtemp38[2U]
						        : 
						       ((0x10U 
							 == (IData)(vlTOPp->io_op))
							 ? 
							__Vtemp42[2U]
							 : 
							((0x11U 
							  == (IData)(vlTOPp->io_op))
							  ? 
							 __Vtemp43[2U]
							  : 
							 ((0x12U 
							   == (IData)(vlTOPp->io_op))
							   ? 
							  __Vtemp44[2U]
							   : 
							  ((0x13U 
							    == (IData)(vlTOPp->io_op))
							    ? 
							   __Vtemp45[2U]
							    : 
							   ((0x14U 
							     == (IData)(vlTOPp->io_op))
							     ? 
							    __Vtemp46[2U]
							     : 
							    ((0x15U 
							      == (IData)(vlTOPp->io_op))
							      ? 
							     __Vtemp53[2U]
							      : 
							     __Vtemp54[2U]))))))))))))))));
    vlTOPp->v__DOT___T_112[0U] = ((0U == (IData)(vlTOPp->io_op))
				   ? __Vtemp8[0U] : 
				  ((1U == (IData)(vlTOPp->io_op))
				    ? __Vtemp9[0U] : 
				   ((2U == (IData)(vlTOPp->io_op))
				     ? __Vtemp10[0U]
				     : ((3U == (IData)(vlTOPp->io_op))
					 ? __Vtemp11[0U]
					 : ((4U == (IData)(vlTOPp->io_op))
					     ? __Vtemp12[0U]
					     : ((5U 
						 == (IData)(vlTOPp->io_op))
						 ? 
						__Vtemp17[0U]
						 : 
						__Vtemp86[0U]))))));
    vlTOPp->v__DOT___T_112[1U] = ((0U == (IData)(vlTOPp->io_op))
				   ? __Vtemp8[1U] : 
				  ((1U == (IData)(vlTOPp->io_op))
				    ? __Vtemp9[1U] : 
				   ((2U == (IData)(vlTOPp->io_op))
				     ? __Vtemp10[1U]
				     : ((3U == (IData)(vlTOPp->io_op))
					 ? __Vtemp11[1U]
					 : ((4U == (IData)(vlTOPp->io_op))
					     ? __Vtemp12[1U]
					     : ((5U 
						 == (IData)(vlTOPp->io_op))
						 ? 
						__Vtemp17[1U]
						 : 
						__Vtemp86[1U]))))));
    vlTOPp->v__DOT___T_112[2U] = (1U & ((0U == (IData)(vlTOPp->io_op))
					 ? __Vtemp8[2U]
					 : ((1U == (IData)(vlTOPp->io_op))
					     ? __Vtemp9[2U]
					     : ((2U 
						 == (IData)(vlTOPp->io_op))
						 ? 
						__Vtemp10[2U]
						 : 
						((3U 
						  == (IData)(vlTOPp->io_op))
						  ? 
						 __Vtemp11[2U]
						  : 
						 ((4U 
						   == (IData)(vlTOPp->io_op))
						   ? 
						  __Vtemp12[2U]
						   : 
						  ((5U 
						    == (IData)(vlTOPp->io_op))
						    ? 
						   __Vtemp17[2U]
						    : 
						   __Vtemp86[2U])))))));
}

VL_INLINE_OPT void Valu_module::_combo__TOP__3(Valu_module__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Valu_module::_combo__TOP__3\n"); );
    Valu_module* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp101,95,0,3);
    //char	__VpadToAlign836[4];
    VL_SIGW(__Vtemp102,95,0,3);
    //char	__VpadToAlign852[4];
    VL_SIGW(__Vtemp103,95,0,3);
    //char	__VpadToAlign868[4];
    VL_SIGW(__Vtemp104,95,0,3);
    //char	__VpadToAlign884[4];
    VL_SIGW(__Vtemp105,95,0,3);
    //char	__VpadToAlign900[4];
    VL_SIGW(__Vtemp107,127,0,4);
    VL_SIGW(__Vtemp108,127,0,4);
    VL_SIGW(__Vtemp110,95,0,3);
    //char	__VpadToAlign948[4];
    VL_SIGW(__Vtemp111,95,0,3);
    //char	__VpadToAlign964[4];
    VL_SIGW(__Vtemp112,95,0,3);
    //char	__VpadToAlign980[4];
    VL_SIGW(__Vtemp113,95,0,3);
    //char	__VpadToAlign996[4];
    VL_SIGW(__Vtemp114,95,0,3);
    //char	__VpadToAlign1012[4];
    VL_SIGW(__Vtemp115,95,0,3);
    //char	__VpadToAlign1028[4];
    VL_SIGW(__Vtemp116,95,0,3);
    //char	__VpadToAlign1044[4];
    VL_SIGW(__Vtemp117,95,0,3);
    //char	__VpadToAlign1060[4];
    VL_SIGW(__Vtemp118,95,0,3);
    //char	__VpadToAlign1076[4];
    VL_SIGW(__Vtemp119,95,0,3);
    //char	__VpadToAlign1092[4];
    VL_SIGW(__Vtemp122,95,0,3);
    //char	__VpadToAlign1108[4];
    VL_SIGW(__Vtemp123,159,0,5);
    //char	__VpadToAlign1132[4];
    VL_SIGW(__Vtemp124,159,0,5);
    //char	__VpadToAlign1156[4];
    VL_SIGW(__Vtemp126,95,0,3);
    //char	__VpadToAlign1172[4];
    VL_SIGW(__Vtemp127,159,0,5);
    //char	__VpadToAlign1196[4];
    VL_SIGW(__Vtemp128,159,0,5);
    //char	__VpadToAlign1220[4];
    VL_SIGW(__Vtemp129,159,0,5);
    //char	__VpadToAlign1244[4];
    VL_SIGW(__Vtemp131,95,0,3);
    //char	__VpadToAlign1260[4];
    VL_SIGW(__Vtemp132,127,0,4);
    VL_SIGW(__Vtemp133,127,0,4);
    VL_SIGW(__Vtemp134,127,0,4);
    VL_SIGW(__Vtemp135,95,0,3);
    //char	__VpadToAlign1324[4];
    VL_SIGW(__Vtemp136,95,0,3);
    //char	__VpadToAlign1340[4];
    VL_SIGW(__Vtemp137,95,0,3);
    //char	__VpadToAlign1356[4];
    VL_SIGW(__Vtemp138,95,0,3);
    //char	__VpadToAlign1372[4];
    VL_SIGW(__Vtemp139,95,0,3);
    //char	__VpadToAlign1388[4];
    VL_SIGW(__Vtemp141,95,0,3);
    //char	__VpadToAlign1404[4];
    VL_SIGW(__Vtemp142,95,0,3);
    //char	__VpadToAlign1420[4];
    VL_SIGW(__Vtemp144,95,0,3);
    //char	__VpadToAlign1436[4];
    VL_SIGW(__Vtemp145,95,0,3);
    //char	__VpadToAlign1452[4];
    VL_SIGW(__Vtemp146,95,0,3);
    //char	__VpadToAlign1468[4];
    VL_SIGW(__Vtemp147,95,0,3);
    //char	__VpadToAlign1484[4];
    VL_SIGW(__Vtemp179,95,0,3);
    // Body
    VL_EXTEND_WQ(65,64, __Vtemp101, vlTOPp->v__DOT__add_res);
    VL_EXTEND_WQ(65,64, __Vtemp102, (vlTOPp->io_input1 
				     - vlTOPp->io_input2));
    VL_EXTEND_WQ(65,64, __Vtemp103, (vlTOPp->io_input1 
				     & vlTOPp->io_input2));
    VL_EXTEND_WQ(65,64, __Vtemp104, (vlTOPp->io_input1 
				     | vlTOPp->io_input2));
    VL_EXTEND_WQ(65,64, __Vtemp105, (vlTOPp->io_input1 
				     ^ vlTOPp->io_input2));
    VL_EXTEND_WQ(127,64, __Vtemp107, vlTOPp->io_input1);
    VL_SHIFTL_WWI(127,127,6, __Vtemp108, __Vtemp107, 
		  (0x3fU & (IData)(vlTOPp->io_input2)));
    VL_EXTEND_WQ(65,64, __Vtemp110, (((QData)((IData)(
						      __Vtemp108[1U])) 
				      << 0x20U) | (QData)((IData)(
								  __Vtemp108[0U]))));
    VL_EXTEND_WI(65,1, __Vtemp111, VL_LTS_IQQ(1,64,64, vlTOPp->io_input1, vlTOPp->io_input2));
    VL_EXTEND_WI(65,1, __Vtemp112, (vlTOPp->io_input1 
				    < vlTOPp->io_input2));
    VL_EXTEND_WQ(65,64, __Vtemp113, VL_SHIFTRS_QQI(64,64,6, vlTOPp->io_input1, 
						   (0x3fU 
						    & (IData)(vlTOPp->io_input2))));
    VL_EXTEND_WI(65,32, __Vtemp114, ((0x1fU >= (0x3fU 
						& (IData)(vlTOPp->io_input2)))
				      ? VL_SHIFTRS_III(32,32,6, (IData)(vlTOPp->io_input1), 
						       (0x3fU 
							& (IData)(vlTOPp->io_input2)))
				      : VL_NEGATE_I(
						    ((IData)(vlTOPp->io_input1) 
						     >> 0x1fU))));
    VL_EXTEND_WQ(65,64, __Vtemp115, (vlTOPp->io_input1 
				     >> (0x3fU & (IData)(vlTOPp->io_input2))));
    VL_EXTEND_WI(65,32, __Vtemp116, ((0x1fU >= (0x3fU 
						& (IData)(vlTOPp->io_input2)))
				      ? ((IData)(vlTOPp->io_input1) 
					 >> (0x3fU 
					     & (IData)(vlTOPp->io_input2)))
				      : 0U));
    VL_EXTEND_WQ(65,64, __Vtemp117, vlTOPp->io_input1);
    VL_EXTEND_WQ(65,64, __Vtemp118, (((QData)((IData)(
						      vlTOPp->v__DOT___T_39[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->v__DOT___T_39[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp119, (((QData)((IData)(
						      vlTOPp->v__DOT___T_39[3U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->v__DOT___T_39[2U]))));
    __Vtemp122[0U] = (IData)(vlTOPp->io_input1);
    __Vtemp122[1U] = (IData)((vlTOPp->io_input1 >> 0x20U));
    __Vtemp122[2U] = (1U & (IData)((vlTOPp->io_input1 
				    >> 0x3fU)));
    VL_EXTENDS_WW(129,65, __Vtemp123, __Vtemp122);
    __Vtemp124[0U] = __Vtemp123[0U];
    __Vtemp124[1U] = __Vtemp123[1U];
    __Vtemp124[2U] = __Vtemp123[2U];
    __Vtemp124[3U] = __Vtemp123[3U];
    __Vtemp124[4U] = (1U & __Vtemp123[4U]);
    VL_EXTEND_WQ(65,64, __Vtemp126, vlTOPp->io_input2);
    VL_EXTENDS_WW(129,65, __Vtemp127, __Vtemp126);
    __Vtemp128[0U] = __Vtemp127[0U];
    __Vtemp128[1U] = __Vtemp127[1U];
    __Vtemp128[2U] = __Vtemp127[2U];
    __Vtemp128[3U] = __Vtemp127[3U];
    __Vtemp128[4U] = (1U & __Vtemp127[4U]);
    VL_MULS_WWW(129,129,129, __Vtemp129, __Vtemp124, __Vtemp128);
    VL_EXTEND_WQ(65,64, __Vtemp131, (((QData)((IData)(
						      __Vtemp129[3U])) 
				      << 0x20U) | (QData)((IData)(
								  __Vtemp129[2U]))));
    VL_EXTEND_WQ(128,64, __Vtemp132, vlTOPp->io_input1);
    VL_EXTEND_WQ(128,64, __Vtemp133, vlTOPp->io_input2);
    VL_MUL_W(4, __Vtemp134, __Vtemp132, __Vtemp133);
    VL_EXTEND_WQ(65,64, __Vtemp135, (((QData)((IData)(
						      __Vtemp134[3U])) 
				      << 0x20U) | (QData)((IData)(
								  __Vtemp134[2U]))));
    VL_EXTEND_WQ(65,64, __Vtemp136, VL_MODDIVS_QQQ(64, vlTOPp->io_input1, vlTOPp->io_input2));
    VL_EXTEND_WQ(65,64, __Vtemp137, VL_MODDIV_QQQ(64, vlTOPp->io_input1, vlTOPp->io_input2));
    VL_EXTEND_WI(65,32, __Vtemp138, VL_MODDIV_III(32, (IData)(vlTOPp->io_input1), (IData)(vlTOPp->io_input2)));
    VL_EXTEND_WI(65,32, __Vtemp139, VL_MODDIVS_III(32, (IData)(vlTOPp->io_input1), (IData)(vlTOPp->io_input2)));
    VL_EXTENDS_WQ(65,64, __Vtemp141, vlTOPp->io_input1);
    __Vtemp142[0U] = __Vtemp141[0U];
    __Vtemp142[1U] = __Vtemp141[1U];
    __Vtemp142[2U] = (1U & __Vtemp141[2U]);
    VL_EXTENDS_WQ(65,64, __Vtemp144, vlTOPp->io_input2);
    __Vtemp145[0U] = __Vtemp144[0U];
    __Vtemp145[1U] = __Vtemp144[1U];
    __Vtemp145[2U] = (1U & __Vtemp144[2U]);
    VL_DIVS_WWW(65, __Vtemp146, __Vtemp142, __Vtemp145);
    VL_EXTEND_WQ(65,64, __Vtemp147, ((0x16U == (IData)(vlTOPp->io_op))
				      ? (QData)((IData)(
							VL_DIV_III(32, (IData)(vlTOPp->io_input1), (IData)(vlTOPp->io_input2))))
				      : ((0x17U == (IData)(vlTOPp->io_op))
					  ? (VL_ULL(0x1ffffffff) 
					     & VL_DIVS_QQQ(33, 
							   (VL_ULL(0x1ffffffff) 
							    & VL_EXTENDS_QI(33,32, (IData)(vlTOPp->io_input1))), 
							   (VL_ULL(0x1ffffffff) 
							    & VL_EXTENDS_QI(33,32, (IData)(vlTOPp->io_input2)))))
					  : vlTOPp->v__DOT__add_res)));
    __Vtemp179[0U] = ((6U == (IData)(vlTOPp->io_op))
		       ? __Vtemp111[0U] : ((7U == (IData)(vlTOPp->io_op))
					    ? __Vtemp112[0U]
					    : ((8U 
						== (IData)(vlTOPp->io_op))
					        ? __Vtemp113[0U]
					        : (
						   (9U 
						    == (IData)(vlTOPp->io_op))
						    ? 
						   __Vtemp114[0U]
						    : 
						   ((0xaU 
						     == (IData)(vlTOPp->io_op))
						     ? 
						    __Vtemp115[0U]
						     : 
						    ((0xbU 
						      == (IData)(vlTOPp->io_op))
						      ? 
						     __Vtemp116[0U]
						      : 
						     ((0xcU 
						       == (IData)(vlTOPp->io_op))
						       ? 
						      __Vtemp117[0U]
						       : 
						      ((0xdU 
							== (IData)(vlTOPp->io_op))
						        ? 
						       __Vtemp118[0U]
						        : 
						       ((0xeU 
							 == (IData)(vlTOPp->io_op))
							 ? 
							__Vtemp119[0U]
							 : 
							((0xfU 
							  == (IData)(vlTOPp->io_op))
							  ? 
							 __Vtemp131[0U]
							  : 
							 ((0x10U 
							   == (IData)(vlTOPp->io_op))
							   ? 
							  __Vtemp135[0U]
							   : 
							  ((0x11U 
							    == (IData)(vlTOPp->io_op))
							    ? 
							   __Vtemp136[0U]
							    : 
							   ((0x12U 
							     == (IData)(vlTOPp->io_op))
							     ? 
							    __Vtemp137[0U]
							     : 
							    ((0x13U 
							      == (IData)(vlTOPp->io_op))
							      ? 
							     __Vtemp138[0U]
							      : 
							     ((0x14U 
							       == (IData)(vlTOPp->io_op))
							       ? 
							      __Vtemp139[0U]
							       : 
							      ((0x15U 
								== (IData)(vlTOPp->io_op))
							        ? 
							       __Vtemp146[0U]
							        : 
							       __Vtemp147[0U]))))))))))))))));
    __Vtemp179[1U] = ((6U == (IData)(vlTOPp->io_op))
		       ? __Vtemp111[1U] : ((7U == (IData)(vlTOPp->io_op))
					    ? __Vtemp112[1U]
					    : ((8U 
						== (IData)(vlTOPp->io_op))
					        ? __Vtemp113[1U]
					        : (
						   (9U 
						    == (IData)(vlTOPp->io_op))
						    ? 
						   __Vtemp114[1U]
						    : 
						   ((0xaU 
						     == (IData)(vlTOPp->io_op))
						     ? 
						    __Vtemp115[1U]
						     : 
						    ((0xbU 
						      == (IData)(vlTOPp->io_op))
						      ? 
						     __Vtemp116[1U]
						      : 
						     ((0xcU 
						       == (IData)(vlTOPp->io_op))
						       ? 
						      __Vtemp117[1U]
						       : 
						      ((0xdU 
							== (IData)(vlTOPp->io_op))
						        ? 
						       __Vtemp118[1U]
						        : 
						       ((0xeU 
							 == (IData)(vlTOPp->io_op))
							 ? 
							__Vtemp119[1U]
							 : 
							((0xfU 
							  == (IData)(vlTOPp->io_op))
							  ? 
							 __Vtemp131[1U]
							  : 
							 ((0x10U 
							   == (IData)(vlTOPp->io_op))
							   ? 
							  __Vtemp135[1U]
							   : 
							  ((0x11U 
							    == (IData)(vlTOPp->io_op))
							    ? 
							   __Vtemp136[1U]
							    : 
							   ((0x12U 
							     == (IData)(vlTOPp->io_op))
							     ? 
							    __Vtemp137[1U]
							     : 
							    ((0x13U 
							      == (IData)(vlTOPp->io_op))
							      ? 
							     __Vtemp138[1U]
							      : 
							     ((0x14U 
							       == (IData)(vlTOPp->io_op))
							       ? 
							      __Vtemp139[1U]
							       : 
							      ((0x15U 
								== (IData)(vlTOPp->io_op))
							        ? 
							       __Vtemp146[1U]
							        : 
							       __Vtemp147[1U]))))))))))))))));
    __Vtemp179[2U] = ((6U == (IData)(vlTOPp->io_op))
		       ? __Vtemp111[2U] : ((7U == (IData)(vlTOPp->io_op))
					    ? __Vtemp112[2U]
					    : ((8U 
						== (IData)(vlTOPp->io_op))
					        ? __Vtemp113[2U]
					        : (
						   (9U 
						    == (IData)(vlTOPp->io_op))
						    ? 
						   __Vtemp114[2U]
						    : 
						   ((0xaU 
						     == (IData)(vlTOPp->io_op))
						     ? 
						    __Vtemp115[2U]
						     : 
						    ((0xbU 
						      == (IData)(vlTOPp->io_op))
						      ? 
						     __Vtemp116[2U]
						      : 
						     ((0xcU 
						       == (IData)(vlTOPp->io_op))
						       ? 
						      __Vtemp117[2U]
						       : 
						      ((0xdU 
							== (IData)(vlTOPp->io_op))
						        ? 
						       __Vtemp118[2U]
						        : 
						       ((0xeU 
							 == (IData)(vlTOPp->io_op))
							 ? 
							__Vtemp119[2U]
							 : 
							((0xfU 
							  == (IData)(vlTOPp->io_op))
							  ? 
							 __Vtemp131[2U]
							  : 
							 ((0x10U 
							   == (IData)(vlTOPp->io_op))
							   ? 
							  __Vtemp135[2U]
							   : 
							  ((0x11U 
							    == (IData)(vlTOPp->io_op))
							    ? 
							   __Vtemp136[2U]
							    : 
							   ((0x12U 
							     == (IData)(vlTOPp->io_op))
							     ? 
							    __Vtemp137[2U]
							     : 
							    ((0x13U 
							      == (IData)(vlTOPp->io_op))
							      ? 
							     __Vtemp138[2U]
							      : 
							     ((0x14U 
							       == (IData)(vlTOPp->io_op))
							       ? 
							      __Vtemp139[2U]
							       : 
							      ((0x15U 
								== (IData)(vlTOPp->io_op))
							        ? 
							       __Vtemp146[2U]
							        : 
							       __Vtemp147[2U]))))))))))))))));
    vlTOPp->v__DOT___T_112[0U] = ((0U == (IData)(vlTOPp->io_op))
				   ? __Vtemp101[0U]
				   : ((1U == (IData)(vlTOPp->io_op))
				       ? __Vtemp102[0U]
				       : ((2U == (IData)(vlTOPp->io_op))
					   ? __Vtemp103[0U]
					   : ((3U == (IData)(vlTOPp->io_op))
					       ? __Vtemp104[0U]
					       : ((4U 
						   == (IData)(vlTOPp->io_op))
						   ? 
						  __Vtemp105[0U]
						   : 
						  ((5U 
						    == (IData)(vlTOPp->io_op))
						    ? 
						   __Vtemp110[0U]
						    : 
						   __Vtemp179[0U]))))));
    vlTOPp->v__DOT___T_112[1U] = ((0U == (IData)(vlTOPp->io_op))
				   ? __Vtemp101[1U]
				   : ((1U == (IData)(vlTOPp->io_op))
				       ? __Vtemp102[1U]
				       : ((2U == (IData)(vlTOPp->io_op))
					   ? __Vtemp103[1U]
					   : ((3U == (IData)(vlTOPp->io_op))
					       ? __Vtemp104[1U]
					       : ((4U 
						   == (IData)(vlTOPp->io_op))
						   ? 
						  __Vtemp105[1U]
						   : 
						  ((5U 
						    == (IData)(vlTOPp->io_op))
						    ? 
						   __Vtemp110[1U]
						    : 
						   __Vtemp179[1U]))))));
    vlTOPp->v__DOT___T_112[2U] = (1U & ((0U == (IData)(vlTOPp->io_op))
					 ? __Vtemp101[2U]
					 : ((1U == (IData)(vlTOPp->io_op))
					     ? __Vtemp102[2U]
					     : ((2U 
						 == (IData)(vlTOPp->io_op))
						 ? 
						__Vtemp103[2U]
						 : 
						((3U 
						  == (IData)(vlTOPp->io_op))
						  ? 
						 __Vtemp104[2U]
						  : 
						 ((4U 
						   == (IData)(vlTOPp->io_op))
						   ? 
						  __Vtemp105[2U]
						   : 
						  ((5U 
						    == (IData)(vlTOPp->io_op))
						    ? 
						   __Vtemp110[2U]
						    : 
						   __Vtemp179[2U])))))));
    vlTOPp->io_res = ((0U == (IData)(vlTOPp->io_res_ext_op))
		       ? (((QData)((IData)(vlTOPp->v__DOT___T_112[1U])) 
			   << 0x20U) | (QData)((IData)(
						       vlTOPp->v__DOT___T_112[0U])))
		       : ((1U == (IData)(vlTOPp->io_res_ext_op))
			   ? ((((0x80U & vlTOPp->v__DOT___T_112[0U])
				 ? VL_ULL(0xffffffffffffff)
				 : VL_ULL(0)) << 8U) 
			      | (QData)((IData)((0xffU 
						 & vlTOPp->v__DOT___T_112[0U]))))
			   : ((2U == (IData)(vlTOPp->io_res_ext_op))
			       ? (QData)((IData)((0xffU 
						  & vlTOPp->v__DOT___T_112[0U])))
			       : ((3U == (IData)(vlTOPp->io_res_ext_op))
				   ? ((((0x8000U & 
					 vlTOPp->v__DOT___T_112[0U])
					 ? VL_ULL(0xffffffffffff)
					 : VL_ULL(0)) 
				       << 0x10U) | (QData)((IData)(
								   (0xffffU 
								    & vlTOPp->v__DOT___T_112[0U]))))
				   : ((4U == (IData)(vlTOPp->io_res_ext_op))
				       ? (QData)((IData)(
							 (0xffffU 
							  & vlTOPp->v__DOT___T_112[0U])))
				       : ((5U == (IData)(vlTOPp->io_res_ext_op))
					   ? (((QData)((IData)(
							       ((0x80000000U 
								 & vlTOPp->v__DOT___T_112[0U])
								 ? 0xffffffffU
								 : 0U))) 
					       << 0x20U) 
					      | (QData)((IData)(
								vlTOPp->v__DOT___T_112[0U])))
					   : ((6U == (IData)(vlTOPp->io_res_ext_op))
					       ? (QData)((IData)(
								 vlTOPp->v__DOT___T_112[0U]))
					       : (((QData)((IData)(
								   vlTOPp->v__DOT___T_112[1U])) 
						   << 0x20U) 
						  | (QData)((IData)(
								    vlTOPp->v__DOT___T_112[0U]))))))))));
}

void Valu_module::_settle__TOP__4(Valu_module__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Valu_module::_settle__TOP__4\n"); );
    Valu_module* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_res = ((0U == (IData)(vlTOPp->io_res_ext_op))
		       ? (((QData)((IData)(vlTOPp->v__DOT___T_112[1U])) 
			   << 0x20U) | (QData)((IData)(
						       vlTOPp->v__DOT___T_112[0U])))
		       : ((1U == (IData)(vlTOPp->io_res_ext_op))
			   ? ((((0x80U & vlTOPp->v__DOT___T_112[0U])
				 ? VL_ULL(0xffffffffffffff)
				 : VL_ULL(0)) << 8U) 
			      | (QData)((IData)((0xffU 
						 & vlTOPp->v__DOT___T_112[0U]))))
			   : ((2U == (IData)(vlTOPp->io_res_ext_op))
			       ? (QData)((IData)((0xffU 
						  & vlTOPp->v__DOT___T_112[0U])))
			       : ((3U == (IData)(vlTOPp->io_res_ext_op))
				   ? ((((0x8000U & 
					 vlTOPp->v__DOT___T_112[0U])
					 ? VL_ULL(0xffffffffffff)
					 : VL_ULL(0)) 
				       << 0x10U) | (QData)((IData)(
								   (0xffffU 
								    & vlTOPp->v__DOT___T_112[0U]))))
				   : ((4U == (IData)(vlTOPp->io_res_ext_op))
				       ? (QData)((IData)(
							 (0xffffU 
							  & vlTOPp->v__DOT___T_112[0U])))
				       : ((5U == (IData)(vlTOPp->io_res_ext_op))
					   ? (((QData)((IData)(
							       ((0x80000000U 
								 & vlTOPp->v__DOT___T_112[0U])
								 ? 0xffffffffU
								 : 0U))) 
					       << 0x20U) 
					      | (QData)((IData)(
								vlTOPp->v__DOT___T_112[0U])))
					   : ((6U == (IData)(vlTOPp->io_res_ext_op))
					       ? (QData)((IData)(
								 vlTOPp->v__DOT___T_112[0U]))
					       : (((QData)((IData)(
								   vlTOPp->v__DOT___T_112[1U])) 
						   << 0x20U) 
						  | (QData)((IData)(
								    vlTOPp->v__DOT___T_112[0U]))))))))));
}

void Valu_module::_eval(Valu_module__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Valu_module::_eval\n"); );
    Valu_module* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_combo__TOP__3(vlSymsp);
}

void Valu_module::_eval_initial(Valu_module__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Valu_module::_eval_initial\n"); );
    Valu_module* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Valu_module::final() {
    VL_DEBUG_IF(VL_PRINTF("    Valu_module::final\n"); );
    // Variables
    Valu_module__Syms* __restrict vlSymsp = this->__VlSymsp;
    Valu_module* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Valu_module::_eval_settle(Valu_module__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Valu_module::_eval_settle\n"); );
    Valu_module* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__4(vlSymsp);
}

VL_INLINE_OPT QData Valu_module::_change_request(Valu_module__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Valu_module::_change_request\n"); );
    Valu_module* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
