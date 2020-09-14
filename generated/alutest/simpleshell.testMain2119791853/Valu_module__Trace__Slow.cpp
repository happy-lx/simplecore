// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu_module__Syms.h"


//======================

void Valu_module::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&Valu_module::traceInit, &Valu_module::traceFull, &Valu_module::traceChg, this);
}
void Valu_module::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Valu_module* t=(Valu_module*)userthis;
    Valu_module__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Valu_module::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Valu_module* t=(Valu_module*)userthis;
    Valu_module__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void Valu_module::traceInitThis(Valu_module__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Valu_module* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Valu_module::traceFullThis(Valu_module__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Valu_module* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Valu_module::traceInitThis__1(Valu_module__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Valu_module* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+5,"clock",-1);
	vcdp->declBit  (c+6,"reset",-1);
	vcdp->declQuad (c+7,"io_input1",-1,63,0);
	vcdp->declQuad (c+9,"io_input2",-1,63,0);
	vcdp->declBus  (c+11,"io_op",-1,4,0);
	vcdp->declBus  (c+12,"io_res_ext_op",-1,2,0);
	vcdp->declQuad (c+13,"io_res",-1,63,0);
	vcdp->declBit  (c+5,"v clock",-1);
	vcdp->declBit  (c+6,"v reset",-1);
	vcdp->declQuad (c+7,"v io_input1",-1,63,0);
	vcdp->declQuad (c+9,"v io_input2",-1,63,0);
	vcdp->declBus  (c+11,"v io_op",-1,4,0);
	vcdp->declBus  (c+12,"v io_res_ext_op",-1,2,0);
	vcdp->declQuad (c+13,"v io_res",-1,63,0);
	vcdp->declQuad (c+1,"v add_res",-1,63,0);
	vcdp->declBus  (c+15,"v sham",-1,5,0);
	// Tracing: v _T_2 // Ignored: Inlined leading underscore at alu_module.v:12
	// Tracing: v _T_3 // Ignored: Inlined leading underscore at alu_module.v:13
	// Tracing: v _T_5 // Ignored: Inlined leading underscore at alu_module.v:14
	// Tracing: v _T_6 // Ignored: Inlined leading underscore at alu_module.v:15
	// Tracing: v _T_7 // Ignored: Inlined leading underscore at alu_module.v:16
	// Tracing: v _T_8 // Ignored: Inlined leading underscore at alu_module.v:17
	// Tracing: v _T_9 // Ignored: Inlined leading underscore at alu_module.v:18
	// Tracing: v _T_10 // Ignored: Inlined leading underscore at alu_module.v:19
	// Tracing: v _T_11 // Ignored: Inlined leading underscore at alu_module.v:20
	// Tracing: v _T_12 // Ignored: Inlined leading underscore at alu_module.v:21
	// Tracing: v _GEN_0 // Ignored: Inlined leading underscore at alu_module.v:22
	// Tracing: v _T_13 // Ignored: Inlined leading underscore at alu_module.v:23
	// Tracing: v _T_15 // Ignored: Inlined leading underscore at alu_module.v:24
	// Tracing: v _T_16 // Ignored: Inlined leading underscore at alu_module.v:25
	// Tracing: v _T_18 // Ignored: Inlined leading underscore at alu_module.v:26
	// Tracing: v _T_19 // Ignored: Inlined leading underscore at alu_module.v:27
	// Tracing: v _T_20 // Ignored: Inlined leading underscore at alu_module.v:28
	// Tracing: v _T_21 // Ignored: Inlined leading underscore at alu_module.v:29
	// Tracing: v _T_24 // Ignored: Inlined leading underscore at alu_module.v:30
	// Tracing: v _T_25 // Ignored: Inlined leading underscore at alu_module.v:31
	// Tracing: v _T_27 // Ignored: Inlined leading underscore at alu_module.v:32
	// Tracing: v _T_29 // Ignored: Inlined leading underscore at alu_module.v:33
	// Tracing: v _T_30 // Ignored: Inlined leading underscore at alu_module.v:34
	// Tracing: v _T_31 // Ignored: Inlined leading underscore at alu_module.v:35
	// Tracing: v _T_32 // Ignored: Inlined leading underscore at alu_module.v:36
	// Tracing: v _T_34 // Ignored: Inlined leading underscore at alu_module.v:37
	// Tracing: v _T_35 // Ignored: Inlined leading underscore at alu_module.v:38
	// Tracing: v _T_36 // Ignored: Inlined leading underscore at alu_module.v:39
	// Tracing: v _T_39 // Ignored: Inlined leading underscore at alu_module.v:40
	// Tracing: v _T_41 // Ignored: Inlined leading underscore at alu_module.v:41
	// Tracing: v _T_46 // Ignored: Inlined leading underscore at alu_module.v:42
	// Tracing: v _T_49 // Ignored: Inlined leading underscore at alu_module.v:43
	// Tracing: v _GEN_1 // Ignored: Inlined leading underscore at alu_module.v:44
	// Tracing: v _T_50 // Ignored: Inlined leading underscore at alu_module.v:45
	// Tracing: v _T_52 // Ignored: Inlined leading underscore at alu_module.v:46
	// Tracing: v _T_53 // Ignored: Inlined leading underscore at alu_module.v:47
	// Tracing: v _T_55 // Ignored: Inlined leading underscore at alu_module.v:48
	// Tracing: v _T_59 // Ignored: Inlined leading underscore at alu_module.v:49
	// Tracing: v _T_60 // Ignored: Inlined leading underscore at alu_module.v:50
	// Tracing: v _GEN_2 // Ignored: Inlined leading underscore at alu_module.v:51
	// Tracing: v _T_61 // Ignored: Inlined leading underscore at alu_module.v:52
	// Tracing: v _T_62 // Ignored: Inlined leading underscore at alu_module.v:53
	// Tracing: v _GEN_3 // Ignored: Inlined leading underscore at alu_module.v:54
	// Tracing: v _T_65 // Ignored: Inlined leading underscore at alu_module.v:55
	// Tracing: v _T_66 // Ignored: Inlined leading underscore at alu_module.v:56
	// Tracing: v _T_70 // Ignored: Inlined leading underscore at alu_module.v:57
	// Tracing: v _T_72 // Ignored: Inlined leading underscore at alu_module.v:58
	// Tracing: v _T_73 // Ignored: Inlined leading underscore at alu_module.v:59
	// Tracing: v _T_77 // Ignored: Inlined leading underscore at alu_module.v:60
	// Tracing: v _T_78 // Ignored: Inlined leading underscore at alu_module.v:61
	// Tracing: v _T_81 // Ignored: Inlined leading underscore at alu_module.v:62
	// Tracing: v _T_82 // Ignored: Inlined leading underscore at alu_module.v:63
	// Tracing: v _T_88 // Ignored: Inlined leading underscore at alu_module.v:64
	// Tracing: v _T_89 // Ignored: Inlined leading underscore at alu_module.v:65
	// Tracing: v _T_90 // Ignored: Inlined leading underscore at alu_module.v:66
	// Tracing: v _T_91 // Ignored: Inlined leading underscore at alu_module.v:67
	// Tracing: v _T_92 // Ignored: Inlined leading underscore at alu_module.v:68
	// Tracing: v _T_93 // Ignored: Inlined leading underscore at alu_module.v:69
	// Tracing: v _T_94 // Ignored: Inlined leading underscore at alu_module.v:70
	// Tracing: v _T_95 // Ignored: Inlined leading underscore at alu_module.v:71
	// Tracing: v _T_96 // Ignored: Inlined leading underscore at alu_module.v:72
	// Tracing: v _T_97 // Ignored: Inlined leading underscore at alu_module.v:73
	// Tracing: v _T_98 // Ignored: Inlined leading underscore at alu_module.v:74
	// Tracing: v _T_99 // Ignored: Inlined leading underscore at alu_module.v:75
	// Tracing: v _T_100 // Ignored: Inlined leading underscore at alu_module.v:76
	// Tracing: v _T_101 // Ignored: Inlined leading underscore at alu_module.v:77
	// Tracing: v _T_102 // Ignored: Inlined leading underscore at alu_module.v:78
	// Tracing: v _T_103 // Ignored: Inlined leading underscore at alu_module.v:79
	// Tracing: v _T_104 // Ignored: Inlined leading underscore at alu_module.v:80
	// Tracing: v _T_105 // Ignored: Inlined leading underscore at alu_module.v:81
	// Tracing: v _T_106 // Ignored: Inlined leading underscore at alu_module.v:82
	// Tracing: v _T_107 // Ignored: Inlined leading underscore at alu_module.v:83
	// Tracing: v _T_108 // Ignored: Inlined leading underscore at alu_module.v:84
	// Tracing: v _T_109 // Ignored: Inlined leading underscore at alu_module.v:85
	// Tracing: v _T_110 // Ignored: Inlined leading underscore at alu_module.v:86
	// Tracing: v _T_111 // Ignored: Inlined leading underscore at alu_module.v:87
	// Tracing: v _T_112 // Ignored: Inlined leading underscore at alu_module.v:88
	// Tracing: v _T_113 // Ignored: Inlined leading underscore at alu_module.v:89
	// Tracing: v _T_114 // Ignored: Inlined leading underscore at alu_module.v:90
	vcdp->declQuad (c+3,"v res_temp",-1,63,0);
	// Tracing: v _T_117 // Ignored: Inlined leading underscore at alu_module.v:92
	// Tracing: v _T_119 // Ignored: Inlined leading underscore at alu_module.v:93
	// Tracing: v _T_120 // Ignored: Inlined leading underscore at alu_module.v:94
	// Tracing: v _T_123 // Ignored: Inlined leading underscore at alu_module.v:95
	// Tracing: v _T_124 // Ignored: Inlined leading underscore at alu_module.v:96
	// Tracing: v _T_127 // Ignored: Inlined leading underscore at alu_module.v:97
	// Tracing: v _T_129 // Ignored: Inlined leading underscore at alu_module.v:98
	// Tracing: v _T_130 // Ignored: Inlined leading underscore at alu_module.v:99
	// Tracing: v _T_133 // Ignored: Inlined leading underscore at alu_module.v:100
	// Tracing: v _T_134 // Ignored: Inlined leading underscore at alu_module.v:101
	// Tracing: v _T_137 // Ignored: Inlined leading underscore at alu_module.v:102
	// Tracing: v _T_139 // Ignored: Inlined leading underscore at alu_module.v:103
	// Tracing: v _T_140 // Ignored: Inlined leading underscore at alu_module.v:104
	// Tracing: v _T_143 // Ignored: Inlined leading underscore at alu_module.v:105
	// Tracing: v _T_144 // Ignored: Inlined leading underscore at alu_module.v:106
	// Tracing: v _T_145 // Ignored: Inlined leading underscore at alu_module.v:107
	// Tracing: v _T_146 // Ignored: Inlined leading underscore at alu_module.v:108
	// Tracing: v _T_147 // Ignored: Inlined leading underscore at alu_module.v:109
	// Tracing: v _T_148 // Ignored: Inlined leading underscore at alu_module.v:110
	// Tracing: v _T_149 // Ignored: Inlined leading underscore at alu_module.v:111
    }
}

void Valu_module::traceFullThis__1(Valu_module__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Valu_module* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullQuad (c+1,(vlTOPp->v__DOT__add_res),64);
	vcdp->fullQuad (c+3,((((QData)((IData)(vlTOPp->v__DOT___T_112[1U])) 
			       << 0x20U) | (QData)((IData)(
							   vlTOPp->v__DOT___T_112[0U])))),64);
	vcdp->fullBit  (c+5,(vlTOPp->clock));
	vcdp->fullBit  (c+6,(vlTOPp->reset));
	vcdp->fullQuad (c+7,(vlTOPp->io_input1),64);
	vcdp->fullQuad (c+9,(vlTOPp->io_input2),64);
	vcdp->fullBus  (c+11,(vlTOPp->io_op),5);
	vcdp->fullBus  (c+12,(vlTOPp->io_res_ext_op),3);
	vcdp->fullQuad (c+13,(vlTOPp->io_res),64);
	vcdp->fullBus  (c+15,((0x3fU & (IData)(vlTOPp->io_input2))),6);
    }
}
