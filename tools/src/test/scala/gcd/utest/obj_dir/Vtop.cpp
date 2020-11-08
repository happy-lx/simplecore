// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========
CData/*1:0*/ Vtop::__Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[128];

VL_CTOR_IMP(Vtop) {
    Vtop__Syms* __restrict vlSymsp = __VlSymsp = new Vtop__Syms(this, name());
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(__PVT____024unit, Vtop___024unit);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtop::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtop::~Vtop() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void Vtop::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval\n"); );
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("top.v", 6701, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtop::_eval_initial_loop(Vtop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("top.v", 6701, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vtop::_sequent__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__1\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vtask_uart_getchar__0__ch;
    CData/*6:0*/ __Vtableidx1;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs__v0;
    CData/*6:0*/ __Vdly__top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__exe_cycles;
    CData/*0:0*/ __Vdly__top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie;
    CData/*1:0*/ __Vdly__top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state;
    CData/*7:0*/ __Vdlyvval__top__DOT__mymem__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__mymem__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__mymem__DOT__mem__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__mymem__DOT__mem__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__mymem__DOT__mem__v2;
    CData/*0:0*/ __Vdlyvset__top__DOT__mymem__DOT__mem__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__mymem__DOT__mem__v3;
    CData/*0:0*/ __Vdlyvset__top__DOT__mymem__DOT__mem__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__mymem__DOT__mem__v4;
    CData/*0:0*/ __Vdlyvset__top__DOT__mymem__DOT__mem__v4;
    CData/*7:0*/ __Vdlyvval__top__DOT__mymem__DOT__mem__v5;
    CData/*0:0*/ __Vdlyvset__top__DOT__mymem__DOT__mem__v5;
    CData/*7:0*/ __Vdlyvval__top__DOT__mymem__DOT__mem__v6;
    CData/*0:0*/ __Vdlyvset__top__DOT__mymem__DOT__mem__v6;
    CData/*7:0*/ __Vdlyvval__top__DOT__mymem__DOT__mem__v7;
    CData/*0:0*/ __Vdlyvset__top__DOT__mymem__DOT__mem__v7;
    WData/*127:0*/ __Vdly__top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[4];
    IData/*26:0*/ __Vdlyvdim0__top__DOT__mymem__DOT__mem__v0;
    IData/*26:0*/ __Vdlyvdim0__top__DOT__mymem__DOT__mem__v1;
    IData/*26:0*/ __Vdlyvdim0__top__DOT__mymem__DOT__mem__v2;
    IData/*26:0*/ __Vdlyvdim0__top__DOT__mymem__DOT__mem__v3;
    IData/*26:0*/ __Vdlyvdim0__top__DOT__mymem__DOT__mem__v4;
    IData/*26:0*/ __Vdlyvdim0__top__DOT__mymem__DOT__mem__v5;
    IData/*26:0*/ __Vdlyvdim0__top__DOT__mymem__DOT__mem__v6;
    IData/*26:0*/ __Vdlyvdim0__top__DOT__mymem__DOT__mem__v7;
    WData/*127:0*/ __Vtemp2[4];
    WData/*127:0*/ __Vtemp3[4];
    WData/*95:0*/ __Vtemp6[3];
    WData/*95:0*/ __Vtemp7[3];
    WData/*127:0*/ __Vtemp10[4];
    WData/*127:0*/ __Vtemp11[4];
    WData/*127:0*/ __Vtemp12[4];
    WData/*127:0*/ __Vtemp15[4];
    WData/*127:0*/ __Vtemp16[4];
    WData/*95:0*/ __Vtemp18[3];
    WData/*95:0*/ __Vtemp19[3];
    WData/*95:0*/ __Vtemp20[3];
    WData/*95:0*/ __Vtemp21[3];
    WData/*95:0*/ __Vtemp22[3];
    WData/*95:0*/ __Vtemp25[3];
    WData/*95:0*/ __Vtemp28[3];
    WData/*95:0*/ __Vtemp34[3];
    WData/*95:0*/ __Vtemp35[3];
    WData/*95:0*/ __Vtemp36[3];
    WData/*95:0*/ __Vtemp44[3];
    WData/*95:0*/ __Vtemp45[3];
    WData/*95:0*/ __Vtemp46[3];
    WData/*127:0*/ __Vtemp49[4];
    WData/*127:0*/ __Vtemp50[4];
    WData/*127:0*/ __Vtemp51[4];
    WData/*127:0*/ __Vtemp53[4];
    WData/*127:0*/ __Vtemp54[4];
    WData/*95:0*/ __Vtemp57[3];
    WData/*95:0*/ __Vtemp58[3];
    WData/*95:0*/ __Vtemp61[3];
    QData/*63:0*/ __Vdly__top__DOT__mycore__DOT__dpath__DOT__reg_if_pc;
    QData/*63:0*/ __Vdlyvval__top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs__v0;
    // Body
    __Vdly__top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state 
        = vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state;
    __Vdlyvset__top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs__v0 = 0U;
    __Vdly__top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__exe_cycles 
        = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__exe_cycles;
    __Vdly__top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[0U] 
        = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[0U];
    __Vdly__top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[1U] 
        = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[1U];
    __Vdly__top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[2U] 
        = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[2U];
    __Vdly__top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[3U] 
        = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[3U];
    if (((0U != (IData)(vlTOPp->top__DOT__mymem__DOT__read_state)) 
         & ((1U == (IData)(vlTOPp->top__DOT__mymem__DOT__read_state)) 
            & (VL_ULL(0x40600000) == vlTOPp->top__DOT__mymem__DOT__reg_araddr)))) {
        vlSymsp->TOP____024unit.__Vdpiimwrap_uart_getchar_TOP____024unit(__Vtask_uart_getchar__0__ch);
        vlTOPp->top__DOT__mymem__DOT__uart__DOT__uart_helper_ch_get 
            = __Vtask_uart_getchar__0__ch;
    }
    if (((0U != (IData)(vlTOPp->top__DOT__mymem__DOT__write_state)) 
         & ((1U == (IData)(vlTOPp->top__DOT__mymem__DOT__write_state)) 
            & ((IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_axi4_wvalid) 
               & (VL_ULL(0x40600004) == vlTOPp->top__DOT__mymem__DOT__reg_awaddr))))) {
        vlSymsp->TOP____024unit.__Vdpiimwrap_uart_putchar_TOP____024unit(
                                                                         (0xffU 
                                                                          & (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__info_wdata)));
    }
    __Vdlyvset__top__DOT__mymem__DOT__mem__v0 = 0U;
    __Vdlyvset__top__DOT__mymem__DOT__mem__v1 = 0U;
    __Vdlyvset__top__DOT__mymem__DOT__mem__v2 = 0U;
    __Vdlyvset__top__DOT__mymem__DOT__mem__v3 = 0U;
    __Vdlyvset__top__DOT__mymem__DOT__mem__v4 = 0U;
    __Vdlyvset__top__DOT__mymem__DOT__mem__v5 = 0U;
    __Vdlyvset__top__DOT__mymem__DOT__mem__v6 = 0U;
    __Vdlyvset__top__DOT__mymem__DOT__mem__v7 = 0U;
    __Vdly__top__DOT__mycore__DOT__dpath__DOT__reg_if_pc 
        = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_if_pc;
    __Vdly__top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie 
        = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie;
    vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__data_recv 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT___GEN_25));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_result 
        = ((IData)(vlTOPp->reset) ? VL_ULL(0) : (((QData)((IData)(
                                                                  vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___GEN_38[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___GEN_38[0U]))));
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_is_csr = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
            vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_is_csr 
                = ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)) 
                   & ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)) 
                      & ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_control_hazard)) 
                         & ((0U != (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_csr_op)) 
                            & (5U != (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_csr_op))))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_pc = VL_ULL(0x80000000);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall) {
            if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT___T_169) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_pc 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_pc;
            } else {
                if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT___T_171) {
                    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_pc 
                        = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_pc;
                }
            }
        } else {
            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_pc 
                = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_pc;
        }
    }
    __Vtableidx1 = (((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT___T_14) 
                     << 6U) | (((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT___T_13) 
                                << 5U) | (((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT___T_12) 
                                           << 4U) | 
                                          (((((((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu_io_EXE_actual_branch) 
                                                != (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_pc_branch)) 
                                               & (0U 
                                                  != (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu_io_EXE_actual_branch))) 
                                              & (0U 
                                                 != (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_pc_branch))) 
                                             & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall))) 
                                            << 3U) 
                                           | ((((((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu_io_EXE_actual_branch) 
                                                  == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_pc_branch)) 
                                                 & (0U 
                                                    != (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu_io_EXE_actual_branch))) 
                                                & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall))) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT___T_11) 
                                                  << 1U) 
                                                 | (IData)(vlTOPp->reset)))))));
    if (vlTOPp->__Vtablechg1[__Vtableidx1]) {
        __Vdly__top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state 
            = vlTOPp->__Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state
            [__Vtableidx1];
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_reg_mem_exception = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
            vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_reg_mem_exception 
                = ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)) 
                   & (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_exception));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_jim_ext = VL_ULL(0);
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_jim_ext 
                = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)
                    ? VL_ULL(0) : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)
                                    ? VL_ULL(0) : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_control_hazard)
                                                    ? VL_ULL(0)
                                                    : 
                                                   ((((0x80000000U 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                                                       ? VL_ULL(0x7ffffffffff)
                                                       : VL_ULL(0)) 
                                                     << 0x15U) 
                                                    | (QData)((IData)(
                                                                      ((0x100000U 
                                                                        & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
                                                                           >> 0xbU)) 
                                                                       | ((0xff000U 
                                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
                                                                          | ((0x800U 
                                                                              & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
                                                                                >> 9U)) 
                                                                             | (0x7feU 
                                                                                & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
                                                                                >> 0x14U)))))))))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_bim_ext = VL_ULL(0);
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_bim_ext 
                = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)
                    ? VL_ULL(0) : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)
                                    ? VL_ULL(0) : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_control_hazard)
                                                    ? VL_ULL(0)
                                                    : 
                                                   ((((0x80000000U 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                                                       ? VL_ULL(0x7ffffffffffff)
                                                       : VL_ULL(0)) 
                                                     << 0xdU) 
                                                    | (QData)((IData)(
                                                                      ((0x1000U 
                                                                        & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
                                                                           >> 0x13U)) 
                                                                       | ((0x800U 
                                                                           & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
                                                                              << 4U)) 
                                                                          | ((0x7e0U 
                                                                              & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
                                                                                >> 0x14U)) 
                                                                             | (0x1eU 
                                                                                & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
                                                                                >> 7U)))))))))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_is_fencei = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
            vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_is_fencei 
                = ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)) 
                   & ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)) 
                      & ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_control_hazard)) 
                         & ((0x6fU != (0x7fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                            & ((0x67U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                               & ((3U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                  & ((0x4003U != (0x707fU 
                                                  & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                     & ((0x3003U != 
                                         (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                        & ((0x1003U 
                                            != (0x707fU 
                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                           & ((0x5003U 
                                               != (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                              & ((0x2003U 
                                                  != 
                                                  (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                 & ((0x6003U 
                                                     != 
                                                     (0x707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                    & ((0x37U 
                                                        != 
                                                        (0x7fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                       & ((0x17U 
                                                           != 
                                                           (0x7fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                          & ((0x1033U 
                                                              != 
                                                              (0xfe00707fU 
                                                               & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                             & ((0x1013U 
                                                                 != 
                                                                 (0xfc00707fU 
                                                                  & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                & ((0x101bU 
                                                                    != 
                                                                    (0xfc00707fU 
                                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                   & ((0x103bU 
                                                                       != 
                                                                       (0xfe00707fU 
                                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                      & ((0x2033U 
                                                                          != 
                                                                          (0xfe00707fU 
                                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                         & ((0x2013U 
                                                                             != 
                                                                             (0x707fU 
                                                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                            & ((0x3013U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                               & ((0x3033U 
                                                                                != 
                                                                                (0xfe00707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                                & ((0x40005033U 
                                                                                != 
                                                                                (0xfe00707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                                & ((0x40005013U 
                                                                                != 
                                                                                (0xfc00707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                                & ((0x4000501bU 
                                                                                != 
                                                                                (0xfc00707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                                & ((0x4000503bU 
                                                                                != 
                                                                                (0xfe00707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                                & ((0x5033U 
                                                                                != 
                                                                                (0xfe00707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                                & ((0x5013U 
                                                                                != 
                                                                                (0xfc00707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                                & ((0x501bU 
                                                                                != 
                                                                                (0xfc00707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                                & ((0x503bU 
                                                                                != 
                                                                                (0xfe00707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                                & ((0x40000033U 
                                                                                != 
                                                                                (0xfe00707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                                & ((0x4000003bU 
                                                                                != 
                                                                                (0xfe00707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                                & ((0x4033U 
                                                                                != 
                                                                                (0xfe00707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                                & ((0x4013U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                                & ((0x6033U 
                                                                                != 
                                                                                (0xfe00707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                                & ((0x6013U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                                & ((0x33U 
                                                                                != 
                                                                                (0xfe00707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                                & ((0x13U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                                & ((0x1bU 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                                & ((0x3bU 
                                                                                != 
                                                                                (0xfe00707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                                & ((0x7033U 
                                                                                != 
                                                                                (0xfe00707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                                & ((0x7013U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                                & ((0x23U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                                & ((0x3023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                                & ((0x1023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                                & ((0x2023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                                & ((0x63U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                                & ((0x5063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                                & ((0x7063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                                & ((0x4063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                                & ((0x6063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                                & ((0x1063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                                & ((0x3073U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                                & ((0x7073U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                                & ((0x2073U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                                & ((0x6073U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                                & ((0x1073U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                                & ((0x5073U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                                & ((0x100073U 
                                                                                != vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
                                                                                & ((0x73U 
                                                                                != vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
                                                                                & ((0x10500073U 
                                                                                != vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
                                                                                & ((0x10200073U 
                                                                                != vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
                                                                                & ((0x30200073U 
                                                                                != vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
                                                                                & ((0xfU 
                                                                                != 
                                                                                (0xf00fffffU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                                & (0x100fU 
                                                                                == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_ext_sel = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_ext_sel 
                = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)
                    ? 0U : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)
                             ? 0U : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_control_hazard)
                                      ? 0U : ((0x6fU 
                                               == (0x7fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                               ? 0U
                                               : ((0x67U 
                                                   == 
                                                   (0x707fU 
                                                    & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                   ? 0U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 0U
                                                    : 
                                                   ((0x4003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 0U
                                                     : 
                                                    ((0x3003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 0U
                                                      : 
                                                     ((0x1003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 0U
                                                       : 
                                                      ((0x5003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 0U
                                                        : 
                                                       ((0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 0U
                                                         : 
                                                        ((0x6003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 0U
                                                          : 
                                                         ((0x37U 
                                                           == 
                                                           (0x7fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                           ? 0U
                                                           : 
                                                          ((0x17U 
                                                            == 
                                                            (0x7fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                            ? 0U
                                                            : 
                                                           ((0x1033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                             ? 0U
                                                             : 
                                                            ((0x1013U 
                                                              == 
                                                              (0xfc00707fU 
                                                               & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                              ? 0U
                                                              : 
                                                             ((0x101bU 
                                                               == 
                                                               (0xfc00707fU 
                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                               ? 5U
                                                               : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1098))))))))))))))))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_rd_addr = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
            vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_rd_addr 
                = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)
                    ? 0U : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)
                             ? 0U : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_control_hazard)
                                      ? 0U : (0x1fU 
                                              & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
                                                 >> 7U)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_is_load = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
            vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_is_load 
                = ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)) 
                   & ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)) 
                      & ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_control_hazard)) 
                         & (((0x6fU != (0x7fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                             & (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_667)) 
                            & (~ ((0x6fU != (0x7fU 
                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                  & (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_889)))))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_exe_branch = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
            vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_exe_branch 
                = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)
                    ? 0U : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)
                             ? 0U : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_control_hazard)
                                      ? 0U : ((0x6fU 
                                               == (0x7fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                               ? 7U
                                               : ((0x67U 
                                                   == 
                                                   (0x707fU 
                                                    & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                   ? 8U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 0U
                                                    : 
                                                   ((0x4003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 0U
                                                     : 
                                                    ((0x3003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 0U
                                                      : 
                                                     ((0x1003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 0U
                                                       : 
                                                      ((0x5003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 0U
                                                        : 
                                                       ((0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 0U
                                                         : 
                                                        ((0x6003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 0U
                                                          : 
                                                         ((0x37U 
                                                           == 
                                                           (0x7fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                           ? 0U
                                                           : 
                                                          ((0x17U 
                                                            == 
                                                            (0x7fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                            ? 0U
                                                            : 
                                                           ((0x1033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                             ? 0U
                                                             : 
                                                            ((0x1013U 
                                                              == 
                                                              (0xfc00707fU 
                                                               & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                              ? 0U
                                                              : 
                                                             ((0x101bU 
                                                               == 
                                                               (0xfc00707fU 
                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                               ? 0U
                                                               : 
                                                              ((0x103bU 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                                ? 0U
                                                                : 
                                                               ((0x2033U 
                                                                 == 
                                                                 (0xfe00707fU 
                                                                  & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                                 ? 0U
                                                                 : 
                                                                ((0x2013U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                                  ? 0U
                                                                  : 
                                                                 ((0x3013U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                                   ? 0U
                                                                   : 
                                                                  ((0x3033U 
                                                                    == 
                                                                    (0xfe00707fU 
                                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                                    ? 0U
                                                                    : 
                                                                   ((0x40005033U 
                                                                     == 
                                                                     (0xfe00707fU 
                                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                                     ? 0U
                                                                     : 
                                                                    ((0x40005013U 
                                                                      == 
                                                                      (0xfc00707fU 
                                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                                      ? 0U
                                                                      : 
                                                                     ((0x4000501bU 
                                                                       == 
                                                                       (0xfc00707fU 
                                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                                       ? 0U
                                                                       : 
                                                                      ((0x4000503bU 
                                                                        == 
                                                                        (0xfe00707fU 
                                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                                        ? 0U
                                                                        : 
                                                                       ((0x5033U 
                                                                         == 
                                                                         (0xfe00707fU 
                                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                                         ? 0U
                                                                         : 
                                                                        ((0x5013U 
                                                                          == 
                                                                          (0xfc00707fU 
                                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                                          ? 0U
                                                                          : 
                                                                         ((0x501bU 
                                                                           == 
                                                                           (0xfc00707fU 
                                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                                           ? 0U
                                                                           : 
                                                                          ((0x503bU 
                                                                            == 
                                                                            (0xfe00707fU 
                                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                                            ? 0U
                                                                            : 
                                                                           ((0x40000033U 
                                                                             == 
                                                                             (0xfe00707fU 
                                                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                                             ? 0U
                                                                             : 
                                                                            ((0x4000003bU 
                                                                              == 
                                                                              (0xfe00707fU 
                                                                               & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                                              ? 0U
                                                                              : 
                                                                             ((0x4033U 
                                                                               == 
                                                                               (0xfe00707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                                               ? 0U
                                                                               : 
                                                                              ((0x4013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                                                ? 0U
                                                                                : 
                                                                               ((0x6033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x6013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x33U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x13U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x1bU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x3bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x7033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x7013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x23U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x3023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x1023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x2023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x63U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                                                 ? 1U
                                                                                 : 
                                                                                ((0x5063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                                                 ? 5U
                                                                                 : 
                                                                                ((0x7063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                                                 ? 6U
                                                                                 : 
                                                                                ((0x4063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                                                 ? 3U
                                                                                 : 
                                                                                ((0x6063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                                                 ? 4U
                                                                                 : 
                                                                                ((0x1063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                                                 ? 2U
                                                                                 : 0U))))))))))))))))))))))))))))))))))))))))))))))))))));
        }
    }
    vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__addr_recv 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT___GEN_24));
    if (((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_rf_wen) 
         & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_instr_valid))) {
        __Vdlyvval__top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs__v0 
            = ((0U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_rd_addr))
                ? VL_ULL(0) : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_wb_data);
        __Vdlyvset__top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs__v0 = 1U;
        __Vdlyvdim0__top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs__v0 
            = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_rd_addr;
    }
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcycle 
        = ((IData)(vlTOPp->reset) ? VL_ULL(0) : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_17729);
    if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__has_request)))) {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_en) {
            vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__info_mask 
                = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_write_mask;
        } else {
            if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_en)))) {
                vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__info_mask = 0U;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__has_request)))) {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_en) {
            vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__info_wen 
                = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_wen;
        } else {
            if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_en)))) {
                vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__info_wen = 0U;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__do_inst_request = 0U;
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__has_request) {
            if (vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__data_back) {
                vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__do_inst_request = 0U;
            }
        } else {
            vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__do_inst_request 
                = (1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_en)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__do_data_request = 0U;
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__has_request) {
            if (vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__data_back) {
                vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__do_data_request = 0U;
            }
        } else {
            vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__do_data_request 
                = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_en;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__has_request)))) {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_en) {
            vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__info_op 
                = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_read_op;
        } else {
            if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_en)))) {
                vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__info_op = 5U;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel 
                = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)
                    ? 0U : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)
                             ? 0U : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_control_hazard)
                                      ? 0U : ((0x6fU 
                                               == (0x7fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                               ? 0U
                                               : ((0x67U 
                                                   == 
                                                   (0x707fU 
                                                    & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                   ? 0U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 0U
                                                    : 
                                                   ((0x4003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 0U
                                                     : 
                                                    ((0x3003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 0U
                                                      : 
                                                     ((0x1003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 0U
                                                       : 
                                                      ((0x5003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 0U
                                                        : 
                                                       ((0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 0U
                                                         : 
                                                        ((0x6003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 0U
                                                          : 
                                                         ((0x37U 
                                                           == 
                                                           (0x7fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                           ? 0xcU
                                                           : 
                                                          ((0x17U 
                                                            == 
                                                            (0x7fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                            ? 0U
                                                            : 
                                                           ((0x1033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                             ? 5U
                                                             : 
                                                            ((0x1013U 
                                                              == 
                                                              (0xfc00707fU 
                                                               & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                              ? 5U
                                                              : 
                                                             ((0x101bU 
                                                               == 
                                                               (0xfc00707fU 
                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                               ? 5U
                                                               : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_506))))))))))))))))));
        }
    }
    if (vlTOPp->reset) {
        __Vdly__top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__exe_cycles = 0x40U;
    } else {
        if ((0U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mdu_state))) {
            if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fen) {
                __Vdly__top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__exe_cycles = 0x40U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mdu_state))) {
                __Vdly__top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__exe_cycles 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_120;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_op2[0U] = 0U;
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_op2[1U] = 0U;
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_op2[2U] = 0U;
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_op2[3U] = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mdu_state))) {
            if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fen) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_op2[0U] = 0U;
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_op2[1U] = 0U;
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_op2[2U] 
                    = (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__abs_op2);
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_op2[3U] 
                    = (IData)((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__abs_op2 
                               >> 0x20U));
            }
        } else {
            if ((1U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mdu_state))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_6)))) {
                    if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__is_div_op) {
                        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_op2[0U] 
                            = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_138[0U];
                        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_op2[1U] 
                            = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_138[1U];
                        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_op2[2U] 
                            = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_138[2U];
                        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_op2[3U] 
                            = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_138[3U];
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__rem_result[0U] = 0U;
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__rem_result[1U] = 0U;
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__rem_result[2U] = 0U;
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__rem_result[3U] = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mdu_state))) {
            if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fen) {
                VL_EXTEND_WQ(128,64, __Vtemp2, vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__abs_op1);
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__rem_result[0U] 
                    = __Vtemp2[0U];
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__rem_result[1U] 
                    = __Vtemp2[1U];
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__rem_result[2U] 
                    = __Vtemp2[2U];
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__rem_result[3U] 
                    = __Vtemp2[3U];
            }
        } else {
            if ((1U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mdu_state))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_6)))) {
                    if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__is_div_op) {
                        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_130) {
                            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__rem_result[0U] 
                                = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_132[0U];
                            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__rem_result[1U] 
                                = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_132[1U];
                            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__rem_result[2U] 
                                = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_132[2U];
                            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__rem_result[3U] 
                                = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_132[3U];
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        __Vdly__top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[0U] = 0U;
        __Vdly__top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[1U] = 0U;
        __Vdly__top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[2U] = 0U;
        __Vdly__top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[3U] = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mdu_state))) {
            if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fen) {
                VL_EXTEND_WQ(128,64, __Vtemp3, vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__abs_op2);
                __Vdly__top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[0U] 
                    = __Vtemp3[0U];
                __Vdly__top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[1U] 
                    = __Vtemp3[1U];
                __Vdly__top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[2U] 
                    = __Vtemp3[2U];
                __Vdly__top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[3U] 
                    = __Vtemp3[3U];
            }
        } else {
            if ((1U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mdu_state))) {
                if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_6) {
                    __Vdly__top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[0U] 
                        = ((1U & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[0U])
                            ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_126[0U]
                            : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_129[0U]);
                    __Vdly__top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[1U] 
                        = ((1U & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[0U])
                            ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_126[1U]
                            : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_129[1U]);
                    __Vdly__top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[2U] 
                        = ((1U & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[0U])
                            ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_126[2U]
                            : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_129[2U]);
                    __Vdly__top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[3U] 
                        = ((1U & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[0U])
                            ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_126[3U]
                            : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_129[3U]);
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
            if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasinterrupt) {
                if (vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall) {
                    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp = 3U;
                } else {
                    if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasinterrupt) {
                        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp = 3U;
                    } else {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_ismret)))) {
                            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp = 3U;
                        }
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_ismret)))) {
                    if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasexception) {
                        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fcsr_illegal_ins_exception) {
                            if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fcsr_illegal_ins_exception) {
                                if (vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall) {
                                    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp = 3U;
                                } else {
                                    if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasinterrupt) {
                                        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp = 3U;
                                    } else {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_ismret)))) {
                                            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp = 3U;
                                        }
                                    }
                                }
                            } else {
                                if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall) {
                                    if (vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall) {
                                        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp = 3U;
                                    } else {
                                        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasinterrupt) {
                                            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp = 3U;
                                        } else {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_ismret)))) {
                                                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp = 3U;
                                            }
                                        }
                                    }
                                } else {
                                    if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak) {
                                        if (vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall) {
                                            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp = 3U;
                                        } else {
                                            if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasinterrupt) {
                                                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp = 3U;
                                            } else {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_ismret)))) {
                                                    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp = 3U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall) {
                                if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fcsr_illegal_ins_exception) {
                                    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp 
                                        = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__prv_now;
                                } else {
                                    if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall) {
                                        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp 
                                            = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__prv_now;
                                    } else {
                                        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak) {
                                            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp 
                                                = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__prv_now;
                                        }
                                    }
                                }
                            } else {
                                if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak) {
                                    if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fcsr_illegal_ins_exception) {
                                        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp 
                                            = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__prv_now;
                                    } else {
                                        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall) {
                                            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp 
                                                = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__prv_now;
                                        } else {
                                            if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak) {
                                                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp 
                                                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__prv_now;
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
    }
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mip_mti 
        = ((~ (IData)(vlTOPp->reset)) & (vlTOPp->top__DOT__mymem__DOT__reg_mtime 
                                         >= vlTOPp->top__DOT__mymem__DOT__reg_mtimecmp));
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_28 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x33fU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_28 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_26 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x33dU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_26 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_25 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x33cU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_25 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_24 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x33bU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_24 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_23 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x33aU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_23 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_21 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x338U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_21 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_22 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x339U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_22 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_27 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x33eU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_27 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_20 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x337U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_20 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_18 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x335U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_18 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_13 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x330U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_13 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_12 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x32fU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_12 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_10 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x32dU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_10 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_11 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x32eU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_11 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_14 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x331U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_14 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_15 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x332U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_15 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_16 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x333U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_16 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_17 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x334U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_17 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_19 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x336U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_19 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_instr = 0x4033U;
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall) {
            if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT___T_169) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_instr 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr;
            } else {
                if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT___T_171) {
                    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_instr 
                        = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr;
                }
            }
        } else {
            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_instr 
                = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_9 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x32cU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_9 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_8 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x32bU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_8 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_7 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x32aU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_7 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_3 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x326U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_3 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_2 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x325U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_2 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_0 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x323U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_0 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_5 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x328U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_5 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_4 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x327U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_4 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_6 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x329U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_6 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_1 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x324U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_1 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_22 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0xb19U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_22 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_21 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0xb18U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_21 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_19 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0xb16U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_19 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_20 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0xb17U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_20 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_23 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0xb1aU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_23 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_24 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0xb1bU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_24 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_25 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0xb1cU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_25 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_26 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0xb1dU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_26 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_27 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0xb1eU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_27 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_28 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0xb1fU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_28 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_11 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0xb0eU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_11 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_12 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0xb0fU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_12 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_13 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0xb10U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_13 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_17 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0xb14U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_17 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_9 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0xb0cU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_9 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_10 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0xb0dU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_10 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_14 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0xb11U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_14 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_15 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0xb12U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_15 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_16 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0xb13U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_16 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_18 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0xb15U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_18 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_15 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x3bfU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_15 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_0 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0xb03U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_0 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_1 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0xb04U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_1 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_2 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0xb05U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_2 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_3 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0xb06U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_3 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_4 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0xb07U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_4 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_5 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0xb08U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_5 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_6 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0xb09U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_6 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_7 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0xb0aU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_7 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_8 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0xb0bU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_8 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_14 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x3beU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_14 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_11 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x3bbU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_11 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_5 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x3b5U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_5 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_13 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x3bdU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_13 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_7 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x3b7U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_7 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_6 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x3b6U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_6 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_8 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x3b8U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_8 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_10 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x3baU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_10 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_9 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x3b9U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_9 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_12 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x3bcU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_12 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_4 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x3b4U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_4 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_3 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x3b3U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_3 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_2 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x3b2U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_2 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_pmpcfg0 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x3a0U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_pmpcfg0 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_1 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x3b1U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_1 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_0 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x3b0U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_0 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcounterinhibit = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x320U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcounterinhibit 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_pmpcfg1 = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x3a1U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_pmpcfg1 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_minstret = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_instr_valid) {
            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_minstret 
                = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_17731;
        } else {
            if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
                if ((0xb02U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                          >> 0x14U)))) {
                    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_minstret 
                        = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mscratch = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x340U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mscratch 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mie_msi = 0U;
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x304U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mie_msi 
                    = (1U & (IData)((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data 
                                     >> 3U)));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mip_msi = 0U;
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x344U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mip_msi 
                    = (1U & (IData)((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data 
                                     >> 3U)));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mie_mti = 0U;
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x304U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mie_mti 
                    = (1U & (IData)((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data 
                                     >> 7U)));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtval = VL_ULL(0);
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
            if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasinterrupt) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtval 
                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_pc;
            } else {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_ismret)))) {
                    if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasexception) {
                        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fcsr_illegal_ins_exception) {
                            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtval 
                                = (QData)((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr));
                        } else {
                            if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall) {
                                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtval 
                                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_pc;
                            } else {
                                if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak) {
                                    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtval 
                                        = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_pc;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcause = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall) {
            if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
                if ((0x342U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                          >> 0x14U)))) {
                    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcause 
                        = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data;
                }
            }
        } else {
            if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasinterrupt) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcause = VL_ULL(0x8000000000000007);
            } else {
                if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_ismret) {
                    if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
                        if ((0x342U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                  >> 0x14U)))) {
                            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcause 
                                = ((2U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op))
                                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out
                                    : ((4U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op))
                                        ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9479
                                        : ((3U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op))
                                            ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9482
                                            : ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_enable)
                                                ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9475
                                                : VL_ULL(0)))));
                        }
                    }
                } else {
                    if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasexception) {
                        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fcsr_illegal_ins_exception) {
                            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcause = VL_ULL(2);
                        } else {
                            if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall) {
                                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcause = VL_ULL(0xb);
                            } else {
                                if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak) {
                                    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcause = VL_ULL(3);
                                } else {
                                    if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
                                        if ((0x342U 
                                             == (0xfffU 
                                                 & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                    >> 0x14U)))) {
                                            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcause 
                                                = (
                                                   (2U 
                                                    == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op))
                                                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op))
                                                     ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9479
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op))
                                                      ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9482
                                                      : 
                                                     ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_enable)
                                                       ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9475
                                                       : VL_ULL(0)))));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
                            if ((0x342U == (0xfffU 
                                            & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                               >> 0x14U)))) {
                                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcause 
                                    = ((2U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op))
                                        ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out
                                        : ((4U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op))
                                            ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9479
                                            : ((3U 
                                                == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op))
                                                ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9482
                                                : ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_enable)
                                                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9475
                                                    : VL_ULL(0)))));
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U != (IData)(vlTOPp->top__DOT__mymem__DOT__read_state))) {
        if ((1U == (IData)(vlTOPp->top__DOT__mymem__DOT__read_state))) {
            VL_EXTEND_WQ(65,64, __Vtemp6, vlTOPp->top__DOT__mymem__DOT__reg_araddr);
            vlTOPp->top__DOT__mymem__DOT__temp_read_data 
                = ((VL_ULL(0x40600000) == vlTOPp->top__DOT__mymem__DOT__reg_araddr)
                    ? (QData)((IData)(vlTOPp->top__DOT__mymem__DOT__uart__DOT__uart_helper_ch_get))
                    : ((VL_ULL(0x40600008) == vlTOPp->top__DOT__mymem__DOT__reg_araddr)
                        ? (QData)((IData)(vlTOPp->top__DOT__mymem__DOT__uart_state))
                        : ((VL_ULL(0x4060000c) == vlTOPp->top__DOT__mymem__DOT__reg_araddr)
                            ? (QData)((IData)(vlTOPp->top__DOT__mymem__DOT__uart_control))
                            : ((VL_ULL(0x40704000) 
                                == vlTOPp->top__DOT__mymem__DOT__reg_araddr)
                                ? vlTOPp->top__DOT__mymem__DOT__reg_mtimecmp
                                : ((VL_ULL(0x4070bff8) 
                                    == vlTOPp->top__DOT__mymem__DOT__reg_araddr)
                                    ? vlTOPp->top__DOT__mymem__DOT__reg_mtime
                                    : (((QData)((IData)(
                                                        ((vlTOPp->top__DOT__mymem__DOT__mem
                                                          [
                                                          (0x7ffffffU 
                                                           & ((IData)(7U) 
                                                              + (IData)(vlTOPp->top__DOT__mymem__DOT__reg_araddr)))] 
                                                          << 0x18U) 
                                                         | ((vlTOPp->top__DOT__mymem__DOT__mem
                                                             [
                                                             (0x7ffffffU 
                                                              & ((IData)(6U) 
                                                                 + (IData)(vlTOPp->top__DOT__mymem__DOT__reg_araddr)))] 
                                                             << 0x10U) 
                                                            | ((vlTOPp->top__DOT__mymem__DOT__mem
                                                                [
                                                                (0x7ffffffU 
                                                                 & ((IData)(5U) 
                                                                    + (IData)(vlTOPp->top__DOT__mymem__DOT__reg_araddr)))] 
                                                                << 8U) 
                                                               | vlTOPp->top__DOT__mymem__DOT__mem
                                                               [
                                                               (0x7ffffffU 
                                                                & ((IData)(4U) 
                                                                   + (IData)(vlTOPp->top__DOT__mymem__DOT__reg_araddr)))]))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((vlTOPp->top__DOT__mymem__DOT__mem
                                                                      [
                                                                      (0x7ffffffU 
                                                                       & ((IData)(3U) 
                                                                          + (IData)(vlTOPp->top__DOT__mymem__DOT__reg_araddr)))] 
                                                                      << 0x18U) 
                                                                     | ((vlTOPp->top__DOT__mymem__DOT__mem
                                                                         [
                                                                         (0x7ffffffU 
                                                                          & ((IData)(2U) 
                                                                             + (IData)(vlTOPp->top__DOT__mymem__DOT__reg_araddr)))] 
                                                                         << 0x10U) 
                                                                        | ((vlTOPp->top__DOT__mymem__DOT__mem
                                                                            [
                                                                            (0x7ffffffU 
                                                                             & ((IData)(1U) 
                                                                                + (IData)(vlTOPp->top__DOT__mymem__DOT__reg_araddr)))] 
                                                                            << 8U) 
                                                                           | vlTOPp->top__DOT__mymem__DOT__mem
                                                                           [
                                                                           (0x7ffffffU 
                                                                            & __Vtemp6[0U])])))))))))));
        }
    }
    if (((0U != (IData)(vlTOPp->top__DOT__mymem__DOT__write_state)) 
         & ((1U == (IData)(vlTOPp->top__DOT__mymem__DOT__write_state)) 
            & ((IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_axi4_wvalid) 
               & ((VL_ULL(0x40600004) != vlTOPp->top__DOT__mymem__DOT__reg_awaddr) 
                  & ((VL_ULL(0x40600008) != vlTOPp->top__DOT__mymem__DOT__reg_awaddr) 
                     & ((VL_ULL(0x4060000c) != vlTOPp->top__DOT__mymem__DOT__reg_awaddr) 
                        & ((VL_ULL(0x40704000) != vlTOPp->top__DOT__mymem__DOT__reg_awaddr) 
                           & ((VL_ULL(0x4070bff8) != vlTOPp->top__DOT__mymem__DOT__reg_awaddr) 
                              & (IData)(vlTOPp->top__DOT__mymem__DOT__wire_wstrb)))))))))) {
        __Vdlyvval__top__DOT__mymem__DOT__mem__v0 = 
            (0xffU & (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__info_wdata));
        __Vdlyvset__top__DOT__mymem__DOT__mem__v0 = 1U;
        VL_EXTEND_WQ(65,64, __Vtemp7, vlTOPp->top__DOT__mymem__DOT__reg_awaddr);
        __Vdlyvdim0__top__DOT__mymem__DOT__mem__v0 
            = (0x7ffffffU & __Vtemp7[0U]);
    }
    if (((0U != (IData)(vlTOPp->top__DOT__mymem__DOT__write_state)) 
         & ((1U == (IData)(vlTOPp->top__DOT__mymem__DOT__write_state)) 
            & ((IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_axi4_wvalid) 
               & ((VL_ULL(0x40600004) != vlTOPp->top__DOT__mymem__DOT__reg_awaddr) 
                  & ((VL_ULL(0x40600008) != vlTOPp->top__DOT__mymem__DOT__reg_awaddr) 
                     & ((VL_ULL(0x4060000c) != vlTOPp->top__DOT__mymem__DOT__reg_awaddr) 
                        & ((VL_ULL(0x40704000) != vlTOPp->top__DOT__mymem__DOT__reg_awaddr) 
                           & ((VL_ULL(0x4070bff8) != vlTOPp->top__DOT__mymem__DOT__reg_awaddr) 
                              & ((IData)(vlTOPp->top__DOT__mymem__DOT__wire_wstrb) 
                                 >> 1U)))))))))) {
        __Vdlyvval__top__DOT__mymem__DOT__mem__v1 = 
            (0xffU & (IData)((vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__info_wdata 
                              >> 8U)));
        __Vdlyvset__top__DOT__mymem__DOT__mem__v1 = 1U;
        __Vdlyvdim0__top__DOT__mymem__DOT__mem__v1 
            = (0x7ffffffU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__mymem__DOT__reg_awaddr)));
    }
    if (((0U != (IData)(vlTOPp->top__DOT__mymem__DOT__write_state)) 
         & ((1U == (IData)(vlTOPp->top__DOT__mymem__DOT__write_state)) 
            & ((IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_axi4_wvalid) 
               & ((VL_ULL(0x40600004) != vlTOPp->top__DOT__mymem__DOT__reg_awaddr) 
                  & ((VL_ULL(0x40600008) != vlTOPp->top__DOT__mymem__DOT__reg_awaddr) 
                     & ((VL_ULL(0x4060000c) != vlTOPp->top__DOT__mymem__DOT__reg_awaddr) 
                        & ((VL_ULL(0x40704000) != vlTOPp->top__DOT__mymem__DOT__reg_awaddr) 
                           & ((VL_ULL(0x4070bff8) != vlTOPp->top__DOT__mymem__DOT__reg_awaddr) 
                              & ((IData)(vlTOPp->top__DOT__mymem__DOT__wire_wstrb) 
                                 >> 2U)))))))))) {
        __Vdlyvval__top__DOT__mymem__DOT__mem__v2 = 
            (0xffU & (IData)((vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__info_wdata 
                              >> 0x10U)));
        __Vdlyvset__top__DOT__mymem__DOT__mem__v2 = 1U;
        __Vdlyvdim0__top__DOT__mymem__DOT__mem__v2 
            = (0x7ffffffU & ((IData)(2U) + (IData)(vlTOPp->top__DOT__mymem__DOT__reg_awaddr)));
    }
    if (((0U != (IData)(vlTOPp->top__DOT__mymem__DOT__write_state)) 
         & ((1U == (IData)(vlTOPp->top__DOT__mymem__DOT__write_state)) 
            & ((IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_axi4_wvalid) 
               & ((VL_ULL(0x40600004) != vlTOPp->top__DOT__mymem__DOT__reg_awaddr) 
                  & ((VL_ULL(0x40600008) != vlTOPp->top__DOT__mymem__DOT__reg_awaddr) 
                     & ((VL_ULL(0x4060000c) != vlTOPp->top__DOT__mymem__DOT__reg_awaddr) 
                        & ((VL_ULL(0x40704000) != vlTOPp->top__DOT__mymem__DOT__reg_awaddr) 
                           & ((VL_ULL(0x4070bff8) != vlTOPp->top__DOT__mymem__DOT__reg_awaddr) 
                              & ((IData)(vlTOPp->top__DOT__mymem__DOT__wire_wstrb) 
                                 >> 3U)))))))))) {
        __Vdlyvval__top__DOT__mymem__DOT__mem__v3 = 
            (0xffU & (IData)((vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__info_wdata 
                              >> 0x18U)));
        __Vdlyvset__top__DOT__mymem__DOT__mem__v3 = 1U;
        __Vdlyvdim0__top__DOT__mymem__DOT__mem__v3 
            = (0x7ffffffU & ((IData)(3U) + (IData)(vlTOPp->top__DOT__mymem__DOT__reg_awaddr)));
    }
    if (((0U != (IData)(vlTOPp->top__DOT__mymem__DOT__write_state)) 
         & ((1U == (IData)(vlTOPp->top__DOT__mymem__DOT__write_state)) 
            & ((IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_axi4_wvalid) 
               & ((VL_ULL(0x40600004) != vlTOPp->top__DOT__mymem__DOT__reg_awaddr) 
                  & ((VL_ULL(0x40600008) != vlTOPp->top__DOT__mymem__DOT__reg_awaddr) 
                     & ((VL_ULL(0x4060000c) != vlTOPp->top__DOT__mymem__DOT__reg_awaddr) 
                        & ((VL_ULL(0x40704000) != vlTOPp->top__DOT__mymem__DOT__reg_awaddr) 
                           & ((VL_ULL(0x4070bff8) != vlTOPp->top__DOT__mymem__DOT__reg_awaddr) 
                              & ((IData)(vlTOPp->top__DOT__mymem__DOT__wire_wstrb) 
                                 >> 4U)))))))))) {
        __Vdlyvval__top__DOT__mymem__DOT__mem__v4 = 
            (0xffU & (IData)((vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__info_wdata 
                              >> 0x20U)));
        __Vdlyvset__top__DOT__mymem__DOT__mem__v4 = 1U;
        __Vdlyvdim0__top__DOT__mymem__DOT__mem__v4 
            = (0x7ffffffU & ((IData)(4U) + (IData)(vlTOPp->top__DOT__mymem__DOT__reg_awaddr)));
    }
    if (((0U != (IData)(vlTOPp->top__DOT__mymem__DOT__write_state)) 
         & ((1U == (IData)(vlTOPp->top__DOT__mymem__DOT__write_state)) 
            & ((IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_axi4_wvalid) 
               & ((VL_ULL(0x40600004) != vlTOPp->top__DOT__mymem__DOT__reg_awaddr) 
                  & ((VL_ULL(0x40600008) != vlTOPp->top__DOT__mymem__DOT__reg_awaddr) 
                     & ((VL_ULL(0x4060000c) != vlTOPp->top__DOT__mymem__DOT__reg_awaddr) 
                        & ((VL_ULL(0x40704000) != vlTOPp->top__DOT__mymem__DOT__reg_awaddr) 
                           & ((VL_ULL(0x4070bff8) != vlTOPp->top__DOT__mymem__DOT__reg_awaddr) 
                              & ((IData)(vlTOPp->top__DOT__mymem__DOT__wire_wstrb) 
                                 >> 5U)))))))))) {
        __Vdlyvval__top__DOT__mymem__DOT__mem__v5 = 
            (0xffU & (IData)((vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__info_wdata 
                              >> 0x28U)));
        __Vdlyvset__top__DOT__mymem__DOT__mem__v5 = 1U;
        __Vdlyvdim0__top__DOT__mymem__DOT__mem__v5 
            = (0x7ffffffU & ((IData)(5U) + (IData)(vlTOPp->top__DOT__mymem__DOT__reg_awaddr)));
    }
    if (((0U != (IData)(vlTOPp->top__DOT__mymem__DOT__write_state)) 
         & ((1U == (IData)(vlTOPp->top__DOT__mymem__DOT__write_state)) 
            & ((IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_axi4_wvalid) 
               & ((VL_ULL(0x40600004) != vlTOPp->top__DOT__mymem__DOT__reg_awaddr) 
                  & ((VL_ULL(0x40600008) != vlTOPp->top__DOT__mymem__DOT__reg_awaddr) 
                     & ((VL_ULL(0x4060000c) != vlTOPp->top__DOT__mymem__DOT__reg_awaddr) 
                        & ((VL_ULL(0x40704000) != vlTOPp->top__DOT__mymem__DOT__reg_awaddr) 
                           & ((VL_ULL(0x4070bff8) != vlTOPp->top__DOT__mymem__DOT__reg_awaddr) 
                              & ((IData)(vlTOPp->top__DOT__mymem__DOT__wire_wstrb) 
                                 >> 6U)))))))))) {
        __Vdlyvval__top__DOT__mymem__DOT__mem__v6 = 
            (0xffU & (IData)((vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__info_wdata 
                              >> 0x30U)));
        __Vdlyvset__top__DOT__mymem__DOT__mem__v6 = 1U;
        __Vdlyvdim0__top__DOT__mymem__DOT__mem__v6 
            = (0x7ffffffU & ((IData)(6U) + (IData)(vlTOPp->top__DOT__mymem__DOT__reg_awaddr)));
    }
    if (((0U != (IData)(vlTOPp->top__DOT__mymem__DOT__write_state)) 
         & ((1U == (IData)(vlTOPp->top__DOT__mymem__DOT__write_state)) 
            & ((IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_axi4_wvalid) 
               & ((VL_ULL(0x40600004) != vlTOPp->top__DOT__mymem__DOT__reg_awaddr) 
                  & ((VL_ULL(0x40600008) != vlTOPp->top__DOT__mymem__DOT__reg_awaddr) 
                     & ((VL_ULL(0x4060000c) != vlTOPp->top__DOT__mymem__DOT__reg_awaddr) 
                        & ((VL_ULL(0x40704000) != vlTOPp->top__DOT__mymem__DOT__reg_awaddr) 
                           & ((VL_ULL(0x4070bff8) != vlTOPp->top__DOT__mymem__DOT__reg_awaddr) 
                              & ((IData)(vlTOPp->top__DOT__mymem__DOT__wire_wstrb) 
                                 >> 7U)))))))))) {
        __Vdlyvval__top__DOT__mymem__DOT__mem__v7 = 
            (0xffU & (IData)((vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__info_wdata 
                              >> 0x38U)));
        __Vdlyvset__top__DOT__mymem__DOT__mem__v7 = 1U;
        __Vdlyvdim0__top__DOT__mymem__DOT__mem__v7 
            = (0x7ffffffU & ((IData)(7U) + (IData)(vlTOPp->top__DOT__mymem__DOT__reg_awaddr)));
    }
    if (vlTOPp->reset) {
        __Vdly__top__DOT__mycore__DOT__dpath__DOT__reg_if_pc = VL_ULL(0x80000000);
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
            if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir) {
                __Vdly__top__DOT__mycore__DOT__dpath__DOT__reg_if_pc 
                    = ((0U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
                        ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__wire_pc_next_4
                        : ((4U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
                            ? ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_17750)
                                ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtvec
                                : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc)
                            : ((1U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
                                ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__wire_pc_jump_target
                                : ((3U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
                                    ? (VL_ULL(0xfffffffffffffffe) 
                                       & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
                                          + vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_iim_ext))
                                    : ((2U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
                                        ? ((1U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu_io_EXE_actual_branch))
                                            ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT___T_145
                                            : (VL_ULL(4) 
                                               + vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_pc))
                                        : ((5U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
                                            ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__wire_pc_bpu_target
                                            : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__wire_pc_next_4))))));
            } else {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)))) {
                    if (vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_control_hazard) {
                        __Vdly__top__DOT__mycore__DOT__dpath__DOT__reg_if_pc 
                            = ((0U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
                                ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__wire_pc_next_4
                                : ((4U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
                                    ? ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_17750)
                                        ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtvec
                                        : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc)
                                    : ((1U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
                                        ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__wire_pc_jump_target
                                        : ((3U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
                                            ? (VL_ULL(0xfffffffffffffffe) 
                                               & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
                                                  + vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_iim_ext))
                                            : ((2U 
                                                == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
                                                ? (
                                                   (1U 
                                                    == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu_io_EXE_actual_branch))
                                                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT___T_145
                                                    : 
                                                   (VL_ULL(4) 
                                                    + vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_pc))
                                                : (
                                                   (5U 
                                                    == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
                                                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__wire_pc_bpu_target
                                                    : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__wire_pc_next_4))))));
                    } else {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_if_kill)))) {
                            __Vdly__top__DOT__mycore__DOT__dpath__DOT__reg_if_pc 
                                = ((0U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
                                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__wire_pc_next_4
                                    : ((4U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
                                        ? ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_17750)
                                            ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtvec
                                            : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc)
                                        : ((1U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
                                            ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__wire_pc_jump_target
                                            : ((3U 
                                                == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
                                                ? (VL_ULL(0xfffffffffffffffe) 
                                                   & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
                                                      + vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_iim_ext))
                                                : (
                                                   (2U 
                                                    == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu_io_EXE_actual_branch))
                                                     ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT___T_145
                                                     : 
                                                    (VL_ULL(4) 
                                                     + vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_pc))
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel))
                                                     ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__wire_pc_bpu_target
                                                     : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__wire_pc_next_4))))));
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        __Vdly__top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie = 0U;
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall) {
            if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
                if ((0x300U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                          >> 0x14U)))) {
                    __Vdly__top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie 
                        = (1U & (IData)((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data 
                                         >> 3U)));
                }
            }
        } else {
            if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasinterrupt) {
                __Vdly__top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie = 0U;
            } else {
                if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_ismret) {
                    __Vdly__top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie 
                        = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie;
                } else {
                    if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasexception) {
                        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fcsr_illegal_ins_exception) {
                            if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fcsr_illegal_ins_exception) {
                                __Vdly__top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie = 0U;
                            } else {
                                if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall) {
                                    __Vdly__top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie = 0U;
                                } else {
                                    if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak) {
                                        __Vdly__top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie = 0U;
                                    }
                                }
                            }
                        } else {
                            if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall) {
                                if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fcsr_illegal_ins_exception) {
                                    __Vdly__top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie = 0U;
                                } else {
                                    if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall) {
                                        __Vdly__top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie = 0U;
                                    } else {
                                        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak) {
                                            __Vdly__top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie = 0U;
                                        }
                                    }
                                }
                            } else {
                                if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak) {
                                    if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fcsr_illegal_ins_exception) {
                                        __Vdly__top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie = 0U;
                                    } else {
                                        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall) {
                                            __Vdly__top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie = 0U;
                                        } else {
                                            if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak) {
                                                __Vdly__top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie = 0U;
                                            }
                                        }
                                    }
                                } else {
                                    if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
                                        if ((0x300U 
                                             == (0xfffU 
                                                 & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                    >> 0x14U)))) {
                                            __Vdly__top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie 
                                                = (1U 
                                                   & (IData)(
                                                             (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data 
                                                              >> 3U)));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
                            if ((0x300U == (0xfffU 
                                            & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                               >> 0x14U)))) {
                                __Vdly__top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie 
                                    = (1U & (IData)(
                                                    (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data 
                                                     >> 3U)));
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[0U] 
        = __Vdly__top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[0U];
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[1U] 
        = __Vdly__top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[1U];
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[2U] 
        = __Vdly__top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[2U];
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[3U] 
        = __Vdly__top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[3U];
    if (__Vdlyvset__top__DOT__mymem__DOT__mem__v0) {
        vlTOPp->top__DOT__mymem__DOT__mem[__Vdlyvdim0__top__DOT__mymem__DOT__mem__v0] 
            = __Vdlyvval__top__DOT__mymem__DOT__mem__v0;
    }
    if (__Vdlyvset__top__DOT__mymem__DOT__mem__v1) {
        vlTOPp->top__DOT__mymem__DOT__mem[__Vdlyvdim0__top__DOT__mymem__DOT__mem__v1] 
            = __Vdlyvval__top__DOT__mymem__DOT__mem__v1;
    }
    if (__Vdlyvset__top__DOT__mymem__DOT__mem__v2) {
        vlTOPp->top__DOT__mymem__DOT__mem[__Vdlyvdim0__top__DOT__mymem__DOT__mem__v2] 
            = __Vdlyvval__top__DOT__mymem__DOT__mem__v2;
    }
    if (__Vdlyvset__top__DOT__mymem__DOT__mem__v3) {
        vlTOPp->top__DOT__mymem__DOT__mem[__Vdlyvdim0__top__DOT__mymem__DOT__mem__v3] 
            = __Vdlyvval__top__DOT__mymem__DOT__mem__v3;
    }
    if (__Vdlyvset__top__DOT__mymem__DOT__mem__v4) {
        vlTOPp->top__DOT__mymem__DOT__mem[__Vdlyvdim0__top__DOT__mymem__DOT__mem__v4] 
            = __Vdlyvval__top__DOT__mymem__DOT__mem__v4;
    }
    if (__Vdlyvset__top__DOT__mymem__DOT__mem__v5) {
        vlTOPp->top__DOT__mymem__DOT__mem[__Vdlyvdim0__top__DOT__mymem__DOT__mem__v5] 
            = __Vdlyvval__top__DOT__mymem__DOT__mem__v5;
    }
    if (__Vdlyvset__top__DOT__mymem__DOT__mem__v6) {
        vlTOPp->top__DOT__mymem__DOT__mem[__Vdlyvdim0__top__DOT__mymem__DOT__mem__v6] 
            = __Vdlyvval__top__DOT__mymem__DOT__mem__v6;
    }
    if (__Vdlyvset__top__DOT__mymem__DOT__mem__v7) {
        vlTOPp->top__DOT__mymem__DOT__mem[__Vdlyvdim0__top__DOT__mymem__DOT__mem__v7] 
            = __Vdlyvval__top__DOT__mymem__DOT__mem__v7;
    }
    vlTOPp->io_diff_pc_data = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_pc;
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_pc_branch = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_pc_branch 
                = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)
                    ? 0U : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)
                             ? 0U : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_control_hazard)
                                      ? 0U : (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_pc_branch))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_exception = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
            vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_exception 
                = ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)) 
                   & ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)) 
                      & ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_control_hazard)) 
                         & ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_valid_inst)) 
                            & (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_reg_dec_imem_valid)))));
        }
    }
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1413 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_is_load) 
           | (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_is_csr));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_17729 
        = (VL_ULL(1) + vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcycle);
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_write_mask = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_write_mask 
                = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)
                    ? 0U : (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_write_mask));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_wen = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_wen 
                = ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)) 
                   & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_wen));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_read_op = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_read_op 
                = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)
                    ? 0U : (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_read_op));
        }
    }
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__op1_is_word 
        = (((0x14U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel)) 
            | (0x13U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))) 
           | ((0x18U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel)) 
              | (0x17U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_41 
        = ((0x11U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel)) 
           | (0x14U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_45 
        = ((0x15U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel)) 
           | (0x18U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_2 
        = ((0xdU == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel)) 
           | (0xeU == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel)));
    __Vtemp10[0U] = ((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_op2[1U] 
                      << 0x1fU) | (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_op2[0U] 
                                   >> 1U));
    __Vtemp10[1U] = ((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_op2[2U] 
                      << 0x1fU) | (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_op2[1U] 
                                   >> 1U));
    __Vtemp10[2U] = ((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_op2[3U] 
                      << 0x1fU) | (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_op2[2U] 
                                   >> 1U));
    __Vtemp10[3U] = (0x7fffffffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_op2[3U] 
                                    >> 1U));
    VL_EXTEND_WW(128,127, __Vtemp11, __Vtemp10);
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_138[0U] 
        = __Vtemp11[0U];
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_138[1U] 
        = __Vtemp11[1U];
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_138[2U] 
        = __Vtemp11[2U];
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_138[3U] 
        = __Vtemp11[3U];
    VL_SUB_W(4, __Vtemp12, vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__rem_result, vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_op2);
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_132[0U] 
        = __Vtemp12[0U];
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_132[1U] 
        = __Vtemp12[1U];
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_132[2U] 
        = __Vtemp12[2U];
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_132[3U] 
        = __Vtemp12[3U];
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_130 
        = VL_GTE_W(4, vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__rem_result, vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_op2);
    vlTOPp->io_diff_mul_result_hi = (((QData)((IData)(
                                                      vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[2U])));
    vlTOPp->io_diff_mul_result_lo = (((QData)((IData)(
                                                      vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[0U])));
    __Vtemp15[0U] = ((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[1U] 
                      << 0x1fU) | (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[0U] 
                                   >> 1U));
    __Vtemp15[1U] = ((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[2U] 
                      << 0x1fU) | (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[1U] 
                                   >> 1U));
    __Vtemp15[2U] = ((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[3U] 
                      << 0x1fU) | (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[2U] 
                                   >> 1U));
    __Vtemp15[3U] = (0x7fffffffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[3U] 
                                    >> 1U));
    VL_EXTEND_WW(128,127, __Vtemp16, __Vtemp15);
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_129[0U] 
        = __Vtemp16[0U];
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_129[1U] 
        = __Vtemp16[1U];
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_129[2U] 
        = __Vtemp16[2U];
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_129[3U] 
        = __Vtemp16[3U];
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mdu_state = 0U;
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_114) {
            if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fen) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mdu_state = 1U;
            }
        } else {
            if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_118) {
                if (((0U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__exe_cycles)) 
                     & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__is_div_op))) {
                    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mdu_state = 2U;
                } else {
                    if (((1U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__exe_cycles)) 
                         & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_6))) {
                        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mdu_state = 2U;
                    }
                }
            } else {
                if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_143) {
                    if ((((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fen) 
                          & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Ffinish)) 
                         & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
                        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mdu_state = 0U;
                    }
                }
            }
        }
    }
    vlTOPp->io_diff_instr_in_wb = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_instr;
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_instr_valid = 0U;
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall) {
            if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT___T_169) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_instr_valid = 0U;
            } else {
                if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT___T_171) {
                    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_instr_valid 
                        = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr_valid;
                }
            }
        } else {
            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_instr_valid 
                = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr_valid;
        }
    }
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_17731 
        = (VL_ULL(1) + vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_minstret);
    vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT___T_33 
        = ((((1U & (IData)((vlTOPp->top__DOT__mymem__DOT__temp_read_data 
                            >> 7U))) ? VL_ULL(0xffffffffffffff)
              : VL_ULL(0)) << 8U) | (QData)((IData)(
                                                    (0xffU 
                                                     & (IData)(vlTOPp->top__DOT__mymem__DOT__temp_read_data)))));
    vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT___T_62 
        = ((1U == (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__info_op))
            ? (QData)((IData)((0xffU & (IData)(vlTOPp->top__DOT__mymem__DOT__temp_read_data))))
            : ((2U == (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__info_op))
                ? ((((1U & (IData)((vlTOPp->top__DOT__mymem__DOT__temp_read_data 
                                    >> 0xfU))) ? VL_ULL(0xffffffffffff)
                      : VL_ULL(0)) << 0x10U) | (QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(vlTOPp->top__DOT__mymem__DOT__temp_read_data)))))
                : ((3U == (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__info_op))
                    ? (QData)((IData)((0xffffU & (IData)(vlTOPp->top__DOT__mymem__DOT__temp_read_data))))
                    : ((4U == (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__info_op))
                        ? (((QData)((IData)(((1U & (IData)(
                                                           (vlTOPp->top__DOT__mymem__DOT__temp_read_data 
                                                            >> 0x1fU)))
                                              ? 0xffffffffU
                                              : 0U))) 
                            << 0x20U) | (QData)((IData)(vlTOPp->top__DOT__mymem__DOT__temp_read_data)))
                        : ((5U == (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__info_op))
                            ? (QData)((IData)(vlTOPp->top__DOT__mymem__DOT__temp_read_data))
                            : vlTOPp->top__DOT__mymem__DOT__temp_read_data)))));
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mymem__DOT__reg_araddr = VL_ULL(0);
    } else {
        if ((0U == (IData)(vlTOPp->top__DOT__mymem__DOT__read_state))) {
            if (vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_axi4_arvalid) {
                vlTOPp->top__DOT__mymem__DOT__reg_araddr 
                    = vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__info_addr;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mymem__DOT__uart_state = 1U;
    } else {
        if ((0U != (IData)(vlTOPp->top__DOT__mymem__DOT__write_state))) {
            if ((1U == (IData)(vlTOPp->top__DOT__mymem__DOT__write_state))) {
                if (vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_axi4_wvalid) {
                    if ((VL_ULL(0x40600004) != vlTOPp->top__DOT__mymem__DOT__reg_awaddr)) {
                        if ((VL_ULL(0x40600008) == vlTOPp->top__DOT__mymem__DOT__reg_awaddr)) {
                            vlTOPp->top__DOT__mymem__DOT__uart_state 
                                = (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__info_wdata);
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mymem__DOT__uart_control = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->top__DOT__mymem__DOT__write_state))) {
            if ((1U == (IData)(vlTOPp->top__DOT__mymem__DOT__write_state))) {
                if (vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_axi4_wvalid) {
                    if ((VL_ULL(0x40600004) != vlTOPp->top__DOT__mymem__DOT__reg_awaddr)) {
                        if ((VL_ULL(0x40600008) != vlTOPp->top__DOT__mymem__DOT__reg_awaddr)) {
                            if ((VL_ULL(0x4060000c) 
                                 == vlTOPp->top__DOT__mymem__DOT__reg_awaddr)) {
                                vlTOPp->top__DOT__mymem__DOT__uart_control 
                                    = (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__info_wdata);
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mymem__DOT__reg_mtimecmp = VL_ULL(0);
    } else {
        if ((0U != (IData)(vlTOPp->top__DOT__mymem__DOT__write_state))) {
            if ((1U == (IData)(vlTOPp->top__DOT__mymem__DOT__write_state))) {
                if (vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_axi4_wvalid) {
                    if ((VL_ULL(0x40600004) != vlTOPp->top__DOT__mymem__DOT__reg_awaddr)) {
                        if ((VL_ULL(0x40600008) != vlTOPp->top__DOT__mymem__DOT__reg_awaddr)) {
                            if ((VL_ULL(0x4060000c) 
                                 != vlTOPp->top__DOT__mymem__DOT__reg_awaddr)) {
                                if ((VL_ULL(0x40704000) 
                                     == vlTOPp->top__DOT__mymem__DOT__reg_awaddr)) {
                                    vlTOPp->top__DOT__mymem__DOT__reg_mtimecmp 
                                        = vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__info_wdata;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mymem__DOT__reg_mtime = VL_ULL(0);
    } else {
        if ((0U == (IData)(vlTOPp->top__DOT__mymem__DOT__write_state))) {
            if ((0x28U == (0xffffU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__mymem__DOT__cnt))))) {
                vlTOPp->top__DOT__mymem__DOT__reg_mtime 
                    = vlTOPp->top__DOT__mymem__DOT___T_5;
            }
        } else {
            if ((1U == (IData)(vlTOPp->top__DOT__mymem__DOT__write_state))) {
                if (vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_axi4_wvalid) {
                    if ((VL_ULL(0x40600004) == vlTOPp->top__DOT__mymem__DOT__reg_awaddr)) {
                        if ((0x28U == (0xffffU & ((IData)(1U) 
                                                  + (IData)(vlTOPp->top__DOT__mymem__DOT__cnt))))) {
                            vlTOPp->top__DOT__mymem__DOT__reg_mtime 
                                = vlTOPp->top__DOT__mymem__DOT___T_5;
                        }
                    } else {
                        if ((VL_ULL(0x40600008) == vlTOPp->top__DOT__mymem__DOT__reg_awaddr)) {
                            if ((0x28U == (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlTOPp->top__DOT__mymem__DOT__cnt))))) {
                                vlTOPp->top__DOT__mymem__DOT__reg_mtime 
                                    = vlTOPp->top__DOT__mymem__DOT___T_5;
                            }
                        } else {
                            if ((VL_ULL(0x4060000c) 
                                 == vlTOPp->top__DOT__mymem__DOT__reg_awaddr)) {
                                if ((0x28U == (0xffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlTOPp->top__DOT__mymem__DOT__cnt))))) {
                                    vlTOPp->top__DOT__mymem__DOT__reg_mtime 
                                        = vlTOPp->top__DOT__mymem__DOT___T_5;
                                }
                            } else {
                                vlTOPp->top__DOT__mymem__DOT__reg_mtime 
                                    = ((VL_ULL(0x40704000) 
                                        == vlTOPp->top__DOT__mymem__DOT__reg_awaddr)
                                        ? vlTOPp->top__DOT__mymem__DOT___GEN_0
                                        : ((VL_ULL(0x4070bff8) 
                                            == vlTOPp->top__DOT__mymem__DOT__reg_awaddr)
                                            ? vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__info_wdata
                                            : vlTOPp->top__DOT__mymem__DOT___GEN_0));
                            }
                        }
                    }
                } else {
                    vlTOPp->top__DOT__mymem__DOT__reg_mtime 
                        = vlTOPp->top__DOT__mymem__DOT___GEN_0;
                }
            } else {
                vlTOPp->top__DOT__mymem__DOT__reg_mtime 
                    = vlTOPp->top__DOT__mymem__DOT___GEN_0;
            }
        }
    }
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_iim_ext 
        = ((IData)(vlTOPp->reset) ? VL_ULL(0) : (((QData)((IData)(
                                                                  vlTOPp->top__DOT__mycore__DOT__dpath__DOT___GEN_104[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->top__DOT__mycore__DOT__dpath__DOT___GEN_104[0U]))));
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall) {
            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc 
                = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___GEN_99;
        } else {
            if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasinterrupt) {
                if (((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_ismret) 
                     | (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasexception))) {
                    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc 
                        = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_pc;
                } else {
                    if ((VL_ULL(0) != vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_pc)) {
                        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc 
                            = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_pc;
                    } else {
                        if ((VL_ULL(0) != vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_pc)) {
                            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc 
                                = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_pc;
                        } else {
                            if ((VL_ULL(0) != vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_if_pc)) {
                                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc 
                                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_if_pc;
                            } else {
                                if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
                                    if ((0x341U == 
                                         (0xfffU & 
                                          (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                           >> 0x14U)))) {
                                        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc 
                                            = (VL_ULL(0xfffffffffffffffc) 
                                               & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data);
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_ismret) {
                    if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
                        if ((0x341U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                  >> 0x14U)))) {
                            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc 
                                = (VL_ULL(0xfffffffffffffffc) 
                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data);
                        }
                    }
                } else {
                    if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasexception) {
                        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fcsr_illegal_ins_exception) {
                            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc 
                                = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_pc;
                        } else {
                            if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall) {
                                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc 
                                    = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_pc;
                            } else {
                                if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak) {
                                    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc 
                                        = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_pc;
                                } else {
                                    if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
                                        if ((0x341U 
                                             == (0xfffU 
                                                 & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                    >> 0x14U)))) {
                                            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc 
                                                = (VL_ULL(0xfffffffffffffffc) 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data);
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
                            if ((0x341U == (0xfffU 
                                            & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                               >> 0x14U)))) {
                                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc 
                                    = (VL_ULL(0xfffffffffffffffc) 
                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data);
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtvec = VL_ULL(0x8000c09c);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
            if ((0x305U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtvec 
                    = ((2U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op))
                        ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out
                        : ((4U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op))
                            ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9479
                            : ((3U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op))
                                ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9482
                                : ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_enable)
                                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9475
                                    : VL_ULL(0)))));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie = 0U;
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall) {
            if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen) {
                if ((0x300U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                          >> 0x14U)))) {
                    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie 
                        = (1U & (IData)((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data 
                                         >> 7U)));
                }
            }
        } else {
            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie 
                = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasinterrupt)
                    ? (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie)
                    : ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_ismret) 
                       | ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasexception)
                           ? ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fcsr_illegal_ins_exception)
                               ? (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___GEN_244)
                               : ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall)
                                   ? (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___GEN_244)
                                   : ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak)
                                       ? (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___GEN_244)
                                       : (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___GEN_92))))
                           : (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___GEN_92))));
        }
    }
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__op2_is_signed 
        = (((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_2) 
            | (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_41)) 
           | (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_45));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_4 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_2) 
           | (0xfU == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__exe_cycles 
        = __Vdly__top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__exe_cycles;
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fen 
        = ((((((((((((0xdU == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel)) 
                     | (0xeU == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))) 
                    | (0xfU == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))) 
                   | (0x10U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))) 
                  | (0x11U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))) 
                 | (0x12U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))) 
                | (0x13U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))) 
               | (0x14U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))) 
              | (0x15U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))) 
             | (0x16U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))) 
            | (0x17U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))) 
           | (0x18U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie 
        = __Vdly__top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie;
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_pc_branch = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
            if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_pc_branch = 0U;
            } else {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)))) {
                    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_pc_branch 
                        = ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_control_hazard)
                            ? 0U : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_if_kill)
                                     ? 0U : ((0U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state))
                                              ? ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__isBtype)
                                                  ? 2U
                                                  : 0U)
                                              : ((1U 
                                                  == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state))
                                                  ? 
                                                 ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__isBtype)
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state))
                                                   ? 
                                                  ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__isBtype)
                                                    ? 1U
                                                    : 0U)
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state))
                                                    ? 
                                                   ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__isBtype)
                                                     ? 1U
                                                     : 0U)
                                                    : 0U))))));
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_reg_dec_imem_valid = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
            if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir) {
                vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_reg_dec_imem_valid = 0U;
            } else {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)))) {
                    vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_reg_dec_imem_valid 
                        = ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_control_hazard)) 
                           & (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_ports_0_data_valid));
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_write_mask = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_write_mask 
                = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)
                    ? 0U : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)
                             ? 0U : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_control_hazard)
                                      ? 0U : ((0x6fU 
                                               == (0x7fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                               ? 1U
                                               : ((0x67U 
                                                   == 
                                                   (0x707fU 
                                                    & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                   ? 1U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 1U
                                                    : 
                                                   ((0x4003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 1U
                                                     : 
                                                    ((0x3003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 1U
                                                      : 
                                                     ((0x1003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 1U
                                                       : 
                                                      ((0x5003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 1U
                                                        : 
                                                       ((0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 1U
                                                         : 
                                                        ((0x6003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 1U
                                                          : 
                                                         ((0x37U 
                                                           == 
                                                           (0x7fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                           ? 1U
                                                           : 
                                                          ((0x17U 
                                                            == 
                                                            (0x7fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                            ? 1U
                                                            : 
                                                           ((0x1033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                             ? 1U
                                                             : 
                                                            ((0x1013U 
                                                              == 
                                                              (0xfc00707fU 
                                                               & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                              ? 1U
                                                              : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_803)))))))))))))))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_wen = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_wen 
                = ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)) 
                   & ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)) 
                      & ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_control_hazard)) 
                         & ((0x6fU != (0x7fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                            & (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_889)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_read_op = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_read_op 
                = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)
                    ? 0U : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)
                             ? 0U : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_control_hazard)
                                      ? 0U : ((0x6fU 
                                               == (0x7fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                               ? 0U
                                               : ((0x67U 
                                                   == 
                                                   (0x707fU 
                                                    & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                   ? 0U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 0U
                                                    : 
                                                   ((0x4003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 1U
                                                     : 
                                                    ((0x3003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 6U
                                                      : 
                                                     ((0x1003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 2U
                                                       : 
                                                      ((0x5003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 3U
                                                        : 
                                                       ((0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 4U
                                                         : 
                                                        ((0x6003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 5U
                                                          : 0U))))))))))));
        }
    }
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_6 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_4) 
           | (0x10U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__op1_is_signed 
        = (((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_4) 
            | (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_41)) 
           | (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_45));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_120 
        = (0x7fU & ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__exe_cycles) 
                    - (IData)(1U)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_114 
        = (0U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mdu_state));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_118 
        = (1U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mdu_state));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_143 
        = (2U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mdu_state));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Ffinish 
        = ((0U != (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mdu_state)) 
           & (1U != (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mdu_state)));
    vlTOPp->io_diff_is_retire = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_instr_valid;
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr_valid = 0U;
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall) {
            if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT___T_169) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
                    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr_valid 
                        = ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)) 
                           & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_instr_valid));
                }
            } else {
                if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT___T_171) {
                    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr_valid = 0U;
                } else {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
                        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr_valid 
                            = ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)) 
                               & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_instr_valid));
                    }
                }
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr_valid 
                    = ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)) 
                       & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_instr_valid));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mymem__DOT__read_state = 0U;
    } else {
        if (vlTOPp->top__DOT__mymem__DOT___T_9) {
            if (vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_axi4_arvalid) {
                vlTOPp->top__DOT__mymem__DOT__read_state = 1U;
            }
        } else {
            if (vlTOPp->top__DOT__mymem__DOT___T_10) {
                vlTOPp->top__DOT__mymem__DOT__read_state = 2U;
            } else {
                if (vlTOPp->top__DOT__mymem__DOT___T_62) {
                    vlTOPp->top__DOT__mymem__DOT__read_state 
                        = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fexe_stall)
                            ? 2U : 0U);
                }
            }
        }
    }
    vlTOPp->top__DOT__mymem__DOT___T_5 = (VL_ULL(1) 
                                          + vlTOPp->top__DOT__mymem__DOT__reg_mtime);
    vlTOPp->top__DOT__mymem__DOT__cnt = ((IData)(vlTOPp->reset)
                                          ? 0U : ((IData)(vlTOPp->top__DOT__mymem__DOT___T_1)
                                                   ? 0U
                                                   : (IData)(vlTOPp->top__DOT__mymem__DOT__nextcnt)));
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mymem__DOT__reg_awaddr = VL_ULL(0);
    } else {
        if ((0U == (IData)(vlTOPp->top__DOT__mymem__DOT__write_state))) {
            if (vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_axi4_awvalid) {
                vlTOPp->top__DOT__mymem__DOT__reg_awaddr 
                    = vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__info_addr;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__has_request)))) {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_en) {
            vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__info_wdata 
                = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rs2_data;
        } else {
            if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_en)))) {
                vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__info_wdata = VL_ULL(0);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op 
                = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)
                    ? 0U : (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_csr_op));
        }
    }
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_28 
        = (((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie) 
            << 7U) | ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie) 
                      << 3U));
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr = 0x4033U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)
                    ? 0x4033U : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_instr);
        }
    }
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state 
        = __Vdly__top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state;
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__is_div_op 
        = ((((((((((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_6) 
                   | (0x14U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))) 
                  | (0x11U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))) 
                 | (0x12U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))) 
                | (0x13U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))) 
               | (0x15U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))) 
              | (0x16U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))) 
             | (0x17U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))) 
            | (0x18U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))) 
           & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_6)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_39 
        = (((QData)((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp)) 
            << 0xbU) | (QData)((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_28)));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT___T_11 
        = (0U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT___T_12 
        = (1U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT___T_13 
        = (2U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT___T_14 
        = (3U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state));
    VL_EXTEND_WQ(65,64, __Vtemp18, ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fen)
                                     ? VL_ULL(0) : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_result));
    VL_EXTEND_WQ(65,64, __Vtemp19, vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_result);
    __Vtemp20[0U] = 1U;
    __Vtemp20[1U] = 0U;
    __Vtemp20[2U] = 0U;
    __Vtemp21[0U] = (0xfffffffeU & ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_result) 
                                    << 1U));
    __Vtemp21[1U] = ((1U & ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_result) 
                            >> 0x1fU)) | (0xfffffffeU 
                                          & ((IData)(
                                                     (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_result 
                                                      >> 0x20U)) 
                                             << 1U)));
    __Vtemp21[2U] = (1U & ((IData)((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_result 
                                    >> 0x20U)) >> 0x1fU));
    VL_ADD_W(3, __Vtemp22, __Vtemp20, __Vtemp21);
    VL_EXTEND_WQ(65,64, __Vtemp25, vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_result);
    VL_EXTEND_WQ(65,64, __Vtemp28, vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_result);
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___GEN_38[0U] 
        = ((0U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mdu_state))
            ? __Vtemp18[0U] : ((1U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mdu_state))
                                ? ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_6)
                                    ? __Vtemp19[0U]
                                    : ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__is_div_op)
                                        ? ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_130)
                                            ? __Vtemp22[0U]
                                            : (0xfffffffeU 
                                               & ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_result) 
                                                  << 1U)))
                                        : __Vtemp25[0U]))
                                : __Vtemp28[0U]));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___GEN_38[1U] 
        = ((0U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mdu_state))
            ? __Vtemp18[1U] : ((1U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mdu_state))
                                ? ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_6)
                                    ? __Vtemp19[1U]
                                    : ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__is_div_op)
                                        ? ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_130)
                                            ? __Vtemp22[1U]
                                            : ((1U 
                                                & ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_result) 
                                                   >> 0x1fU)) 
                                               | (0xfffffffeU 
                                                  & ((IData)(
                                                             (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_result 
                                                              >> 0x20U)) 
                                                     << 1U))))
                                        : __Vtemp25[1U]))
                                : __Vtemp28[1U]));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___GEN_38[2U] 
        = (1U & ((0U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mdu_state))
                  ? __Vtemp18[2U] : ((1U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mdu_state))
                                      ? ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_6)
                                          ? __Vtemp19[2U]
                                          : ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__is_div_op)
                                              ? ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_130)
                                                  ? 
                                                 __Vtemp22[2U]
                                                  : 
                                                 (1U 
                                                  & ((IData)(
                                                             (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_result 
                                                              >> 0x20U)) 
                                                     >> 0x1fU)))
                                              : __Vtemp25[2U]))
                                      : __Vtemp28[2U])));
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_instr_valid = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_instr_valid 
                = ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)) 
                   & ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)) 
                      & ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_control_hazard)) 
                         & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr_valid))));
        }
    }
    vlTOPp->top__DOT__mymem__DOT___T_9 = (0U == (IData)(vlTOPp->top__DOT__mymem__DOT__read_state));
    vlTOPp->top__DOT__mymem__DOT___T_10 = (1U == (IData)(vlTOPp->top__DOT__mymem__DOT__read_state));
    vlTOPp->top__DOT__mymem__DOT___T_62 = (2U == (IData)(vlTOPp->top__DOT__mymem__DOT__read_state));
    vlTOPp->top__DOT__mymem__DOT__nextcnt = (0xffffU 
                                             & ((IData)(1U) 
                                                + (IData)(vlTOPp->top__DOT__mymem__DOT__cnt)));
    vlTOPp->top__DOT__mymem__DOT___T_1 = (0x28U == 
                                          (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlTOPp->top__DOT__mymem__DOT__cnt))));
    vlTOPp->top__DOT__mymem__DOT___GEN_0 = ((0x28U 
                                             == (0xffffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlTOPp->top__DOT__mymem__DOT__cnt))))
                                             ? (VL_ULL(1) 
                                                + vlTOPp->top__DOT__mymem__DOT__reg_mtime)
                                             : vlTOPp->top__DOT__mymem__DOT__reg_mtime);
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mymem__DOT__write_state = 0U;
    } else {
        if (vlTOPp->top__DOT__mymem__DOT___T_63) {
            if (vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_axi4_awvalid) {
                vlTOPp->top__DOT__mymem__DOT__write_state = 1U;
            }
        } else {
            if (vlTOPp->top__DOT__mymem__DOT___T_64) {
                if (vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_axi4_wvalid) {
                    vlTOPp->top__DOT__mymem__DOT__write_state = 2U;
                }
            } else {
                if (vlTOPp->top__DOT__mymem__DOT___T_131) {
                    vlTOPp->top__DOT__mymem__DOT__write_state 
                        = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fexe_stall)
                            ? 2U : 0U);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__has_request)))) {
        if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_en) {
            vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__info_addr 
                = (QData)((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out));
        } else {
            if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_en)))) {
                vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__info_addr 
                    = (QData)((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_if_pc));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rs2_data = VL_ULL(0);
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rs2_data 
                = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)
                    ? VL_ULL(0) : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rs2_data);
        }
    }
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_256 
        = ((0U != (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op)) 
           & (5U != (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op)));
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_csr_op = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_csr_op 
                = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)
                    ? 0U : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)
                             ? 0U : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_control_hazard)
                                      ? 0U : ((0x6fU 
                                               == (0x7fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                               ? 0U
                                               : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1037)))));
        }
    }
    vlTOPp->io_diff_mstatus = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_39;
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_instr = 0x4033U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_instr 
                = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)
                    ? 0x4033U : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)
                                  ? 0x4033U : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_control_hazard)
                                                ? 0x4033U
                                                : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)));
        }
    }
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_ismret 
        = ((5U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op)) 
           & (0x302U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                   >> 0x14U))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall 
        = ((5U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op)) 
           & (0U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                               >> 0x14U))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak 
        = ((5U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op)) 
           & (1U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                               >> 0x14U))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__wire_csr_op 
        = ((((3U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op)) 
             | (4U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op))) 
            & (0U == (0x1fU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                               >> 0xfU)))) ? 1U : (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9396 
        = ((((((((((0x300U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                         >> 0x14U)))
                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_39
                    : VL_ULL(0)) | ((0x301U == (0xfffU 
                                                & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                   >> 0x14U)))
                                     ? VL_ULL(0x8000000000001100)
                                     : VL_ULL(0))) 
                 | ((0x304U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                          >> 0x14U)))
                     ? (QData)((IData)((((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mie_mti) 
                                         << 7U) | ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mie_msi) 
                                                   << 3U))))
                     : VL_ULL(0))) | ((0x344U == (0xfffU 
                                                  & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                     >> 0x14U)))
                                       ? (QData)((IData)(
                                                         (((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mip_mti) 
                                                           << 7U) 
                                                          | ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mip_msi) 
                                                             << 3U))))
                                       : VL_ULL(0))) 
               | ((0x305U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                        >> 0x14U)))
                   ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtvec
                   : VL_ULL(0))) | ((0x340U == (0xfffU 
                                                & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                   >> 0x14U)))
                                     ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mscratch
                                     : VL_ULL(0))) 
             | ((0x341U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U))) ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc
                 : VL_ULL(0))) | ((0x342U == (0xfffU 
                                              & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                 >> 0x14U)))
                                   ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcause
                                   : VL_ULL(0))) | 
           ((0x343U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                  >> 0x14U))) ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtval
             : VL_ULL(0)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_174 
        = (((((((((((((((0xf11U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                              >> 0x14U))) 
                        | (0xf12U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                >> 0x14U)))) 
                       | (0xf13U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                               >> 0x14U)))) 
                      | (0xf14U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                              >> 0x14U)))) 
                     | (0x300U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                             >> 0x14U)))) 
                    | (0x301U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                            >> 0x14U)))) 
                   | (0x302U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                           >> 0x14U)))) 
                  | (0x303U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                          >> 0x14U)))) 
                 | (0x304U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                         >> 0x14U)))) 
                | (0x344U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                        >> 0x14U)))) 
               | (0x305U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                       >> 0x14U)))) 
              | (0x306U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) 
             | (0x340U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                     >> 0x14U)))) | 
            (0x341U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                  >> 0x14U)))) | (0x342U 
                                                  == 
                                                  (0xfffU 
                                                   & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                      >> 0x14U))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fexe_stall 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fen) 
           & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Ffinish)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__write_illgal 
        = ((((2U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__wire_csr_op)) 
             | (3U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__wire_csr_op))) 
            | (4U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__wire_csr_op))) 
           & (3U == (3U & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                           >> 0x1eU))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9406 
        = ((((((((((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9396 
                    | ((0x3a0U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                             >> 0x14U)))
                        ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_pmpcfg0
                        : VL_ULL(0))) | ((0x3a1U == 
                                          (0xfffU & 
                                           (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                            >> 0x14U)))
                                          ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_pmpcfg1
                                          : VL_ULL(0))) 
                  | ((0xb00U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                           >> 0x14U)))
                      ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcycle
                      : VL_ULL(0))) | ((0xb02U == (0xfffU 
                                                   & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                      >> 0x14U)))
                                        ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_minstret
                                        : VL_ULL(0))) 
                | ((0x320U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                         >> 0x14U)))
                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcounterinhibit
                    : VL_ULL(0))) | ((0x3b0U == (0xfffU 
                                                 & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                    >> 0x14U)))
                                      ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_0
                                      : VL_ULL(0))) 
              | ((0x3b1U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                       >> 0x14U))) ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_1
                  : VL_ULL(0))) | ((0x3b2U == (0xfffU 
                                               & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                  >> 0x14U)))
                                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_2
                                    : VL_ULL(0))) | 
            ((0x3b3U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                   >> 0x14U))) ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_3
              : VL_ULL(0))) | ((0x3b4U == (0xfffU & 
                                           (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                            >> 0x14U)))
                                ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_4
                                : VL_ULL(0)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_189 
        = ((((((((((((((((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_174) 
                         | (0x343U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                 >> 0x14U)))) 
                        | (0x3a0U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                >> 0x14U)))) 
                       | (0x3a1U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                               >> 0x14U)))) 
                      | (0xb00U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                              >> 0x14U)))) 
                     | (0xb02U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                             >> 0x14U)))) 
                    | (0x320U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                            >> 0x14U)))) 
                   | (0x3b0U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                           >> 0x14U)))) 
                  | (0x3b1U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                          >> 0x14U)))) 
                 | (0x3b2U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                         >> 0x14U)))) 
                | (0x3b3U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                        >> 0x14U)))) 
               | (0x3b4U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                       >> 0x14U)))) 
              | (0x3b5U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) 
             | (0x3b6U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                     >> 0x14U)))) | 
            (0x3b7U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                  >> 0x14U)))) | (0x3b8U 
                                                  == 
                                                  (0xfffU 
                                                   & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                      >> 0x14U))));
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr_valid = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr_valid 
                = (1U & ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)) 
                         & ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard) 
                            | ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_control_hazard)) 
                               & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_if_kill))))));
        }
    }
    vlTOPp->top__DOT__mymem__DOT___T_63 = (0U == (IData)(vlTOPp->top__DOT__mymem__DOT__write_state));
    vlTOPp->top__DOT__mymem__DOT___T_64 = (1U == (IData)(vlTOPp->top__DOT__mymem__DOT__write_state));
    vlTOPp->top__DOT__mymem__DOT___T_131 = (2U == (IData)(vlTOPp->top__DOT__mymem__DOT__write_state));
    vlTOPp->io_diff_alu_exe_stall = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fexe_stall;
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_en = 0U;
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall) {
            if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT___T_169) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
                    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_en 
                        = ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)) 
                           & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_en));
                }
            } else {
                if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT___T_171) {
                    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_en = 0U;
                } else {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
                        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_en 
                            = ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)) 
                               & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_en));
                    }
                }
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_en 
                    = ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)) 
                       & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_en));
            }
        }
    }
    vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__has_request 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT___GEN_2));
    if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
            = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)
                ? VL_ULL(0) : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)
                                ? VL_ULL(0) : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_control_hazard)
                                                ? VL_ULL(0)
                                                : (
                                                   (1U 
                                                    == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_op1_sel))
                                                    ? (QData)((IData)(
                                                                      (0x1fU 
                                                                       & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
                                                                          >> 0xfU))))
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_op1_sel))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      ((0x80000000U 
                                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                                                                        ? 0xffffffffU
                                                                        : 0U))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       (0xfffff000U 
                                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))))
                                                     : 
                                                    (((((0x1fU 
                                                         & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
                                                            >> 0xfU)) 
                                                        == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rd_addr)) 
                                                       & (0U 
                                                          != 
                                                          (0x1fU 
                                                           & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
                                                              >> 0xfU)))) 
                                                      & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rf_wen))
                                                      ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res
                                                      : 
                                                     (((((0x1fU 
                                                          & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
                                                             >> 0xfU)) 
                                                         == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rd_addr)) 
                                                        & (0U 
                                                           != 
                                                           (0x1fU 
                                                            & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
                                                               >> 0xfU)))) 
                                                       & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rf_wen))
                                                       ? 
                                                      ((0U 
                                                        == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_wb_sel))
                                                        ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_wb_sel))
                                                         ? vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_ports_0_rdata
                                                         : 
                                                        ((2U 
                                                          == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_wb_sel))
                                                          ? 
                                                         (VL_ULL(4) 
                                                          + vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_pc)
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_wb_sel))
                                                           ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_data
                                                           : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out))))
                                                       : 
                                                      (((((0x1fU 
                                                           & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
                                                              >> 0xfU)) 
                                                          == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_rd_addr)) 
                                                         & (0U 
                                                            != 
                                                            (0x1fU 
                                                             & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
                                                                >> 0xfU)))) 
                                                        & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_rf_wen))
                                                        ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_wb_data
                                                        : 
                                                       ((0U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
                                                             >> 0xfU)))
                                                         ? VL_ULL(0)
                                                         : 
                                                        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
                                                        [
                                                        (0x1fU 
                                                         & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
                                                            >> 0xfU))])))))))));
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
        VL_EXTEND_WQ(66,64, __Vtemp34, vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile_io_rp2_data);
        VL_EXTEND_WQ(66,64, __Vtemp35, vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_pc);
        VL_EXTEND_WQ(66,64, __Vtemp36, ((3U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))
                                         ? ((((0x80000000U 
                                               & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                                               ? VL_ULL(0xfffffffffffff)
                                               : VL_ULL(0)) 
                                             << 0xcU) 
                                            | (QData)((IData)(
                                                              ((0xfe0U 
                                                                & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
                                                                   >> 0x14U)) 
                                                               | (0x1fU 
                                                                  & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
                                                                     >> 7U))))))
                                         : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile_io_rp2_data));
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source 
            = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)
                ? VL_ULL(0) : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)
                                ? VL_ULL(0) : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_control_hazard)
                                                ? VL_ULL(0)
                                                : (
                                                   ((((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT___T_89) 
                                                      & (0U 
                                                         == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))) 
                                                     & (0U 
                                                        != 
                                                        (0x1fU 
                                                         & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
                                                            >> 0x14U)))) 
                                                    & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rf_wen))
                                                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res
                                                    : 
                                                   (((((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT___T_95) 
                                                       & (0U 
                                                          == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))) 
                                                      & (0U 
                                                         != 
                                                         (0x1fU 
                                                          & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
                                                             >> 0x14U)))) 
                                                     & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rf_wen))
                                                     ? 
                                                    ((0U 
                                                      == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_wb_sel))
                                                      ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_wb_sel))
                                                       ? vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_ports_0_rdata
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_wb_sel))
                                                        ? 
                                                       (VL_ULL(4) 
                                                        + vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_pc)
                                                        : 
                                                       ((3U 
                                                         == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_wb_sel))
                                                         ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_data
                                                         : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out))))
                                                     : 
                                                    (((((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT___T_101) 
                                                        & (0U 
                                                           == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))) 
                                                       & (0U 
                                                          != 
                                                          (0x1fU 
                                                           & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
                                                              >> 0x14U)))) 
                                                      & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_rf_wen))
                                                      ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_wb_data
                                                      : 
                                                     (((QData)((IData)(
                                                                       ((0U 
                                                                         == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))
                                                                         ? 
                                                                        __Vtemp34[1U]
                                                                         : 
                                                                        ((1U 
                                                                          == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))
                                                                          ? 
                                                                         __Vtemp35[1U]
                                                                          : 
                                                                         ((2U 
                                                                           == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))
                                                                           ? 
                                                                          vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_dec_iim_ext[1U]
                                                                           : 
                                                                          __Vtemp36[1U]))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        ((0U 
                                                                          == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))
                                                                          ? 
                                                                         __Vtemp34[0U]
                                                                          : 
                                                                         ((1U 
                                                                           == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))
                                                                           ? 
                                                                          __Vtemp35[0U]
                                                                           : 
                                                                          ((2U 
                                                                            == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel))
                                                                            ? 
                                                                           vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_dec_iim_ext[0U]
                                                                            : 
                                                                           __Vtemp36[0U]))))))))))));
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rs2_data = VL_ULL(0);
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rs2_data 
                = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)
                    ? VL_ULL(0) : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)
                                    ? VL_ULL(0) : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_control_hazard)
                                                    ? VL_ULL(0)
                                                    : 
                                                   ((((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT___T_89) 
                                                      & (0U 
                                                         != 
                                                         (0x1fU 
                                                          & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
                                                             >> 0x14U)))) 
                                                     & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rf_wen))
                                                     ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res
                                                     : 
                                                    ((((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT___T_95) 
                                                       & (0U 
                                                          != 
                                                          (0x1fU 
                                                           & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
                                                              >> 0x14U)))) 
                                                      & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rf_wen))
                                                      ? 
                                                     ((0U 
                                                       == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_wb_sel))
                                                       ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_wb_sel))
                                                        ? vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_ports_0_rdata
                                                        : 
                                                       ((2U 
                                                         == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_wb_sel))
                                                         ? 
                                                        (VL_ULL(4) 
                                                         + vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_pc)
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_wb_sel))
                                                          ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_data
                                                          : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out))))
                                                      : 
                                                     ((((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT___T_101) 
                                                        & (0U 
                                                           != 
                                                           (0x1fU 
                                                            & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
                                                               >> 0x14U)))) 
                                                       & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_rf_wen))
                                                       ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_wb_data
                                                       : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile_io_rp2_data))))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_wb_data = VL_ULL(0);
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall) {
            if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT___T_169) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_wb_data = VL_ULL(0);
            } else {
                if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT___T_171) {
                    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_wb_data 
                        = ((0U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_wb_sel))
                            ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out
                            : ((1U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_wb_sel))
                                ? vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_ports_0_rdata
                                : ((2U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_wb_sel))
                                    ? (VL_ULL(4) + vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_pc)
                                    : ((3U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_wb_sel))
                                        ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_data
                                        : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out))));
                }
            }
        } else {
            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_wb_data 
                = ((0U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_wb_sel))
                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out
                    : ((1U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_wb_sel))
                        ? vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_ports_0_rdata
                        : ((2U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_wb_sel))
                            ? (VL_ULL(4) + vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_pc)
                            : ((3U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_wb_sel))
                                ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_data
                                : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out))));
        }
    }
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9416 
        = ((((((((((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9406 
                    | ((0x3b5U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                             >> 0x14U)))
                        ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_5
                        : VL_ULL(0))) | ((0x3b6U == 
                                          (0xfffU & 
                                           (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                            >> 0x14U)))
                                          ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_6
                                          : VL_ULL(0))) 
                  | ((0x3b7U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                           >> 0x14U)))
                      ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_7
                      : VL_ULL(0))) | ((0x3b8U == (0xfffU 
                                                   & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                      >> 0x14U)))
                                        ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_8
                                        : VL_ULL(0))) 
                | ((0x3b9U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                         >> 0x14U)))
                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_9
                    : VL_ULL(0))) | ((0x3baU == (0xfffU 
                                                 & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                    >> 0x14U)))
                                      ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_10
                                      : VL_ULL(0))) 
              | ((0x3bbU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                       >> 0x14U))) ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_11
                  : VL_ULL(0))) | ((0x3bcU == (0xfffU 
                                               & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                  >> 0x14U)))
                                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_12
                                    : VL_ULL(0))) | 
            ((0x3bdU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                   >> 0x14U))) ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_13
              : VL_ULL(0))) | ((0x3beU == (0xfffU & 
                                           (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                            >> 0x14U)))
                                ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_14
                                : VL_ULL(0)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_204 
        = ((((((((((((((((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_189) 
                         | (0x3b9U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                 >> 0x14U)))) 
                        | (0x3baU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                >> 0x14U)))) 
                       | (0x3bbU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                               >> 0x14U)))) 
                      | (0x3bcU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                              >> 0x14U)))) 
                     | (0x3bdU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                             >> 0x14U)))) 
                    | (0x3beU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                            >> 0x14U)))) 
                   | (0x3bfU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                           >> 0x14U)))) 
                  | (0xb03U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                          >> 0x14U)))) 
                 | (0xb04U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                         >> 0x14U)))) 
                | (0xb05U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                        >> 0x14U)))) 
               | (0xb06U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                       >> 0x14U)))) 
              | (0xb07U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) 
             | (0xb08U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                     >> 0x14U)))) | 
            (0xb09U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                  >> 0x14U)))) | (0xb0aU 
                                                  == 
                                                  (0xfffU 
                                                   & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                      >> 0x14U))));
    if (__Vdlyvset__top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs__v0) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs[__Vdlyvdim0__top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs__v0] 
            = __Vdlyvval__top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs__v0;
    }
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9426 
        = ((((((((((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9416 
                    | ((0x3bfU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                             >> 0x14U)))
                        ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_15
                        : VL_ULL(0))) | ((0xb03U == 
                                          (0xfffU & 
                                           (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                            >> 0x14U)))
                                          ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_0
                                          : VL_ULL(0))) 
                  | ((0xb04U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                           >> 0x14U)))
                      ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_1
                      : VL_ULL(0))) | ((0xb05U == (0xfffU 
                                                   & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                      >> 0x14U)))
                                        ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_2
                                        : VL_ULL(0))) 
                | ((0xb06U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                         >> 0x14U)))
                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_3
                    : VL_ULL(0))) | ((0xb07U == (0xfffU 
                                                 & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                    >> 0x14U)))
                                      ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_4
                                      : VL_ULL(0))) 
              | ((0xb08U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                       >> 0x14U))) ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_5
                  : VL_ULL(0))) | ((0xb09U == (0xfffU 
                                               & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                  >> 0x14U)))
                                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_6
                                    : VL_ULL(0))) | 
            ((0xb0aU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                   >> 0x14U))) ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_7
              : VL_ULL(0))) | ((0xb0bU == (0xfffU & 
                                           (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                            >> 0x14U)))
                                ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_8
                                : VL_ULL(0)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_219 
        = ((((((((((((((((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_204) 
                         | (0xb0bU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                 >> 0x14U)))) 
                        | (0xb0cU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                >> 0x14U)))) 
                       | (0xb0dU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                               >> 0x14U)))) 
                      | (0xb0eU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                              >> 0x14U)))) 
                     | (0xb0fU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                             >> 0x14U)))) 
                    | (0xb10U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                            >> 0x14U)))) 
                   | (0xb11U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                           >> 0x14U)))) 
                  | (0xb12U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                          >> 0x14U)))) 
                 | (0xb13U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                         >> 0x14U)))) 
                | (0xb14U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                        >> 0x14U)))) 
               | (0xb15U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                       >> 0x14U)))) 
              | (0xb16U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) 
             | (0xb17U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                     >> 0x14U)))) | 
            (0xb18U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                  >> 0x14U)))) | (0xb19U 
                                                  == 
                                                  (0xfffU 
                                                   & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                      >> 0x14U))));
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_en = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_en 
                = ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)) 
                   & ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)) 
                      & ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_control_hazard)) 
                         & ((0x6fU != (0x7fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                            & (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_667)))));
        }
    }
    vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_axi4_arvalid 
        = (((IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__has_request) 
            & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__info_wen))) 
           & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__addr_recv)));
    vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT___T_13 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__has_request) 
           & (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__info_wen));
    vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__data_back 
        = (((IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__has_request) 
            & (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__addr_recv)) 
           & ((((0U != (IData)(vlTOPp->top__DOT__mymem__DOT__read_state)) 
                & ((1U != (IData)(vlTOPp->top__DOT__mymem__DOT__read_state)) 
                   & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fexe_stall)))) 
               & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fexe_stall))) 
              | (((0U != (IData)(vlTOPp->top__DOT__mymem__DOT__write_state)) 
                  & ((1U != (IData)(vlTOPp->top__DOT__mymem__DOT__write_state)) 
                     & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fexe_stall)))) 
                 & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fexe_stall)))));
    vlTOPp->io_diff_r_0 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0U];
    vlTOPp->io_diff_r_1 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [1U];
    vlTOPp->io_diff_r_2 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [2U];
    vlTOPp->io_diff_r_3 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [3U];
    vlTOPp->io_diff_r_4 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [4U];
    vlTOPp->io_diff_r_5 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [5U];
    vlTOPp->io_diff_r_6 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [6U];
    vlTOPp->io_diff_r_7 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [7U];
    vlTOPp->io_diff_r_8 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [8U];
    vlTOPp->io_diff_r_9 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [9U];
    vlTOPp->io_diff_r_10 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0xaU];
    vlTOPp->io_diff_r_11 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0xbU];
    vlTOPp->io_diff_r_12 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0xcU];
    vlTOPp->io_diff_r_13 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0xdU];
    vlTOPp->io_diff_r_14 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0xeU];
    vlTOPp->io_diff_r_15 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0xfU];
    vlTOPp->io_diff_r_16 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0x10U];
    vlTOPp->io_diff_r_17 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0x11U];
    vlTOPp->io_diff_r_18 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0x12U];
    vlTOPp->io_diff_r_19 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0x13U];
    vlTOPp->io_diff_r_20 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0x14U];
    vlTOPp->io_diff_r_21 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0x15U];
    vlTOPp->io_diff_r_22 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0x16U];
    vlTOPp->io_diff_r_23 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0x17U];
    vlTOPp->io_diff_r_24 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0x18U];
    vlTOPp->io_diff_r_25 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0x19U];
    vlTOPp->io_diff_r_26 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0x1aU];
    vlTOPp->io_diff_r_27 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0x1bU];
    vlTOPp->io_diff_r_28 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0x1cU];
    vlTOPp->io_diff_r_29 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0x1dU];
    vlTOPp->io_diff_r_30 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0x1eU];
    vlTOPp->io_diff_r_31 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0x1fU];
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__op2_is_neg 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__op1_is_word)
            ? ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__op2_is_signed) 
               & (IData)((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source 
                          >> 0x1fU))) : ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__op2_is_signed) 
                                         & (IData)(
                                                   (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source 
                                                    >> 0x3fU))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__add_res 
        = (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
           + vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source);
    vlTOPp->top__DOT__mycore__DOT__dpath_io_d2c_islt 
        = VL_LTS_IQQ(1,64,64, vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source, vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source);
    vlTOPp->top__DOT__mycore__DOT__dpath_io_d2c_isltu 
        = (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
           < vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source);
    vlTOPp->top__DOT__mycore__DOT__dpath_io_d2c_iseq 
        = (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
           == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source);
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__op1_is_neg 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__op1_is_word)
            ? ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__op1_is_signed) 
               & (IData)((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
                          >> 0x1fU))) : ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__op1_is_signed) 
                                         & (IData)(
                                                   (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
                                                    >> 0x3fU))));
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out = VL_ULL(0);
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out 
                = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)
                    ? VL_ULL(0) : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_pc = VL_ULL(0x80000000);
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_pc 
                = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)
                    ? VL_ULL(0) : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_pc);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_wb_sel = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_wb_sel 
                = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)
                    ? 0U : (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_wb_sel));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_rd_addr = 0U;
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall) {
            if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT___T_169) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_rd_addr = 0U;
            } else {
                if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT___T_171) {
                    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_rd_addr 
                        = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rd_addr;
                }
            }
        } else {
            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_rd_addr 
                = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rd_addr;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_rf_wen = 0U;
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall) {
            if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT___T_169) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_rf_wen = 0U;
            } else {
                if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT___T_171) {
                    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_rf_wen 
                        = ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fcsr_illegal_ins_exception)) 
                           & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rf_wen));
                }
            }
        } else {
            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_rf_wen 
                = ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fcsr_illegal_ins_exception)) 
                   & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rf_wen));
        }
    }
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9436 
        = ((((((((((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9426 
                    | ((0xb0cU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                             >> 0x14U)))
                        ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_9
                        : VL_ULL(0))) | ((0xb0dU == 
                                          (0xfffU & 
                                           (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                            >> 0x14U)))
                                          ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_10
                                          : VL_ULL(0))) 
                  | ((0xb0eU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                           >> 0x14U)))
                      ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_11
                      : VL_ULL(0))) | ((0xb0fU == (0xfffU 
                                                   & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                      >> 0x14U)))
                                        ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_12
                                        : VL_ULL(0))) 
                | ((0xb10U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                         >> 0x14U)))
                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_13
                    : VL_ULL(0))) | ((0xb11U == (0xfffU 
                                                 & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                    >> 0x14U)))
                                      ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_14
                                      : VL_ULL(0))) 
              | ((0xb12U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                       >> 0x14U))) ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_15
                  : VL_ULL(0))) | ((0xb13U == (0xfffU 
                                               & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                  >> 0x14U)))
                                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_16
                                    : VL_ULL(0))) | 
            ((0xb14U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                   >> 0x14U))) ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_17
              : VL_ULL(0))) | ((0xb15U == (0xfffU & 
                                           (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                            >> 0x14U)))
                                ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_18
                                : VL_ULL(0)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_234 
        = ((((((((((((((((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_219) 
                         | (0xb1aU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                 >> 0x14U)))) 
                        | (0xb1bU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                >> 0x14U)))) 
                       | (0xb1cU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                               >> 0x14U)))) 
                      | (0xb1dU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                              >> 0x14U)))) 
                     | (0xb1eU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                             >> 0x14U)))) 
                    | (0xb1fU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                            >> 0x14U)))) 
                   | (0x323U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                           >> 0x14U)))) 
                  | (0x324U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                          >> 0x14U)))) 
                 | (0x325U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                         >> 0x14U)))) 
                | (0x326U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                        >> 0x14U)))) 
               | (0x327U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                       >> 0x14U)))) 
              | (0x328U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) 
             | (0x329U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                     >> 0x14U)))) | 
            (0x32aU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                  >> 0x14U)))) | (0x32bU 
                                                  == 
                                                  (0xfffU 
                                                   & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                      >> 0x14U))));
    vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_axi4_awvalid 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT___T_13) 
           & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__addr_recv)));
    vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_axi4_wvalid 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT___T_13) 
           & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__data_recv)));
    vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT___GEN_2 
        = (1U & ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__has_request)) 
                 | ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__data_back)) 
                    & (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__has_request))));
    vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_ports_0_data_valid 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__data_back) 
           & (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__do_inst_request));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1422 
        = (1U & ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_en)) 
                 | ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_en) 
                    & ((IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__data_back) 
                       & (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__do_data_request)))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__abs_op2 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__op1_is_word)
            ? ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__op2_is_neg)
                ? (QData)((IData)(((IData)(1U) + (~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)))))
                : (QData)((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)))
            : ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__op2_is_neg)
                ? (VL_ULL(1) + (~ vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source))
                : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu_io_EXE_actual_branch 
        = ((1U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
            ? ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath_io_d2c_iseq)
                ? 1U : 2U) : ((2U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
                               ? ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath_io_d2c_iseq)
                                   ? 2U : 1U) : ((5U 
                                                  == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
                                                  ? 
                                                 ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath_io_d2c_islt)
                                                   ? 2U
                                                   : 1U)
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
                                                   ? 
                                                  ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath_io_d2c_isltu)
                                                    ? 2U
                                                    : 1U)
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
                                                    ? 
                                                   ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath_io_d2c_islt)
                                                     ? 1U
                                                     : 2U)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
                                                     ? 
                                                    ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath_io_d2c_isltu)
                                                      ? 1U
                                                      : 2U)
                                                     : 0U))))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__abs_op1 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__op1_is_word)
            ? ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__op1_is_neg)
                ? (QData)((IData)(((IData)(1U) + (~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source)))))
                : (QData)((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source)))
            : ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__op1_is_neg)
                ? (VL_ULL(1) + (~ vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source))
                : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_70 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__op1_is_neg) 
           == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__op2_is_neg));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9446 
        = ((((((((((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9436 
                    | ((0xb16U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                             >> 0x14U)))
                        ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_19
                        : VL_ULL(0))) | ((0xb17U == 
                                          (0xfffU & 
                                           (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                            >> 0x14U)))
                                          ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_20
                                          : VL_ULL(0))) 
                  | ((0xb18U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                           >> 0x14U)))
                      ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_21
                      : VL_ULL(0))) | ((0xb19U == (0xfffU 
                                                   & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                      >> 0x14U)))
                                        ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_22
                                        : VL_ULL(0))) 
                | ((0xb1aU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                         >> 0x14U)))
                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_23
                    : VL_ULL(0))) | ((0xb1bU == (0xfffU 
                                                 & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                    >> 0x14U)))
                                      ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_24
                                      : VL_ULL(0))) 
              | ((0xb1cU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                       >> 0x14U))) ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_25
                  : VL_ULL(0))) | ((0xb1dU == (0xfffU 
                                               & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                  >> 0x14U)))
                                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_26
                                    : VL_ULL(0))) | 
            ((0xb1eU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                   >> 0x14U))) ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_27
              : VL_ULL(0))) | ((0xb1fU == (0xfffU & 
                                           (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                            >> 0x14U)))
                                ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_28
                                : VL_ULL(0)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_249 
        = ((((((((((((((((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_234) 
                         | (0x32cU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                 >> 0x14U)))) 
                        | (0x32dU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                >> 0x14U)))) 
                       | (0x32eU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                               >> 0x14U)))) 
                      | (0x32fU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                              >> 0x14U)))) 
                     | (0x330U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                             >> 0x14U)))) 
                    | (0x331U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                            >> 0x14U)))) 
                   | (0x332U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                           >> 0x14U)))) 
                  | (0x333U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                          >> 0x14U)))) 
                 | (0x334U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                         >> 0x14U)))) 
                | (0x335U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                        >> 0x14U)))) 
               | (0x336U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                       >> 0x14U)))) 
              | (0x337U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) 
             | (0x338U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                     >> 0x14U)))) | 
            (0x339U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                  >> 0x14U)))) | (0x33aU 
                                                  == 
                                                  (0xfffU 
                                                   & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                      >> 0x14U))));
    vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT___GEN_24 
        = ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__data_back)) 
           & ((((IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_axi4_awvalid) 
                & (0U == (IData)(vlTOPp->top__DOT__mymem__DOT__write_state))) 
               | ((IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_axi4_arvalid) 
                  & (0U == (IData)(vlTOPp->top__DOT__mymem__DOT__read_state)))) 
              | (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__addr_recv)));
    vlTOPp->top__DOT__mymem__DOT__wire_wstrb = ((0U 
                                                 == (IData)(vlTOPp->top__DOT__mymem__DOT__write_state))
                                                 ? 0U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlTOPp->top__DOT__mymem__DOT__write_state))
                                                  ? 
                                                 ((IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_axi4_wvalid)
                                                   ? (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__info_mask)
                                                   : 0U)
                                                  : 0U));
    vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT___GEN_25 
        = ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__data_back)) 
           & (((IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_axi4_wvalid) 
               & ((0U != (IData)(vlTOPp->top__DOT__mymem__DOT__write_state)) 
                  & (1U == (IData)(vlTOPp->top__DOT__mymem__DOT__write_state)))) 
              | (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__data_recv)));
    vlTOPp->io_diff_abs_op2 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__abs_op2;
    vlTOPp->io_diff_abs_op1 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__abs_op1;
    VL_EXTEND_WQ(65,64, __Vtemp44, vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__abs_op1);
    VL_EXTEND_WQ(65,64, __Vtemp45, (((QData)((IData)(
                                                     vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[2U]))));
    VL_ADD_W(3, __Vtemp46, __Vtemp44, __Vtemp45);
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_126[0U] 
        = (IData)((VL_ULL(0x7fffffffffffffff) & (((QData)((IData)(
                                                                  vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[2U])) 
                                                  << 0x3fU) 
                                                 | (((QData)((IData)(
                                                                     vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[1U])) 
                                                     << 0x1fU) 
                                                    | ((QData)((IData)(
                                                                       vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[0U])) 
                                                       >> 1U)))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_126[1U] 
        = ((0x80000000U & (__Vtemp46[0U] << 0x1fU)) 
           | (IData)(((VL_ULL(0x7fffffffffffffff) & 
                       (((QData)((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[2U])) 
                         << 0x3fU) | (((QData)((IData)(
                                                       vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[1U])) 
                                       << 0x1fU) | 
                                      ((QData)((IData)(
                                                       vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[0U])) 
                                       >> 1U)))) >> 0x20U)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_126[2U] 
        = ((0x7fffffffU & (__Vtemp46[0U] >> 1U)) | 
           (0x80000000U & (__Vtemp46[1U] << 0x1fU)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_126[3U] 
        = ((0x7fffffffU & (__Vtemp46[1U] >> 1U)) | 
           (0x80000000U & (__Vtemp46[2U] << 0x1fU)));
    __Vtemp49[0U] = 1U;
    __Vtemp49[1U] = 0U;
    __Vtemp49[2U] = 0U;
    __Vtemp49[3U] = 0U;
    __Vtemp50[0U] = (~ vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[0U]);
    __Vtemp50[1U] = (~ vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[1U]);
    __Vtemp50[2U] = (~ vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[2U]);
    __Vtemp50[3U] = (~ vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[3U]);
    VL_ADD_W(4, __Vtemp51, __Vtemp49, __Vtemp50);
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_158 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_70)
            ? (((QData)((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[3U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[2U])))
            : (((QData)((IData)(__Vtemp51[3U])) << 0x20U) 
               | (QData)((IData)(__Vtemp51[2U]))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_187 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_70)
            ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_result
            : (VL_ULL(1) + (~ vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_result)));
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_pc = VL_ULL(0x80000000);
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_pc 
                = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)
                    ? VL_ULL(0) : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)
                                    ? VL_ULL(0) : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_control_hazard)
                                                    ? VL_ULL(0)
                                                    : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_pc)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_wb_sel = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_wb_sel 
                = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)
                    ? 0U : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)
                             ? 0U : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_control_hazard)
                                      ? 0U : ((0x6fU 
                                               == (0x7fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                               ? 2U
                                               : ((0x67U 
                                                   == 
                                                   (0x707fU 
                                                    & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                   ? 2U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 1U
                                                    : 
                                                   ((0x4003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 1U
                                                     : 
                                                    ((0x3003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 1U
                                                      : 
                                                     ((0x1003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 1U
                                                       : 
                                                      ((0x5003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 1U
                                                        : 
                                                       ((0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 1U
                                                         : 
                                                        ((0x6003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 1U
                                                          : 
                                                         ((0x37U 
                                                           == 
                                                           (0x7fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                           ? 0U
                                                           : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_954))))))))))))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rd_addr = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rd_addr 
                = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)
                    ? 0U : (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rd_addr));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rf_wen = 0U;
    } else {
        if (vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall) {
            if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT___T_169) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
                    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rf_wen 
                        = ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)) 
                           & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rf_wen));
                }
            } else {
                if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT___T_171) {
                    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rf_wen = 0U;
                } else {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
                        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rf_wen 
                            = ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)) 
                               & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rf_wen));
                    }
                }
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rf_wen 
                    = ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)) 
                       & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rf_wen));
            }
        }
    }
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9456 
        = ((((((((((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9446 
                    | ((0x323U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                             >> 0x14U)))
                        ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_0
                        : VL_ULL(0))) | ((0x324U == 
                                          (0xfffU & 
                                           (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                            >> 0x14U)))
                                          ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_1
                                          : VL_ULL(0))) 
                  | ((0x325U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                           >> 0x14U)))
                      ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_2
                      : VL_ULL(0))) | ((0x326U == (0xfffU 
                                                   & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                      >> 0x14U)))
                                        ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_3
                                        : VL_ULL(0))) 
                | ((0x327U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                         >> 0x14U)))
                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_4
                    : VL_ULL(0))) | ((0x328U == (0xfffU 
                                                 & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                    >> 0x14U)))
                                      ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_5
                                      : VL_ULL(0))) 
              | ((0x329U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                       >> 0x14U))) ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_6
                  : VL_ULL(0))) | ((0x32aU == (0xfffU 
                                               & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                  >> 0x14U)))
                                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_7
                                    : VL_ULL(0))) | 
            ((0x32bU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                   >> 0x14U))) ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_8
              : VL_ULL(0))) | ((0x32cU == (0xfffU & 
                                           (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                            >> 0x14U)))
                                ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_9
                                : VL_ULL(0)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__legalcsrnumber 
        = ((((((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_249) 
               | (0x33bU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                       >> 0x14U)))) 
              | (0x33cU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) 
             | (0x33dU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                     >> 0x14U)))) | 
            (0x33eU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                  >> 0x14U)))) | (0x33fU 
                                                  == 
                                                  (0xfffU 
                                                   & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                      >> 0x14U))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fresult 
        = ((0U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mdu_state))
            ? VL_ULL(0) : ((1U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mdu_state))
                            ? VL_ULL(0) : ((2U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mdu_state))
                                            ? ((0xdU 
                                                == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                                ? ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_70)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[0U])))
                                                    : 
                                                   (VL_ULL(1) 
                                                    + 
                                                    (~ 
                                                     (((QData)((IData)(
                                                                       vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[0U]))))))
                                                : (
                                                   (0xeU 
                                                    == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_158
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                                     ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_158
                                                     : 
                                                    ((0x10U 
                                                      == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                                      ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_158
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__rem_result[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__rem_result[0U])))
                                                       : 
                                                      ((0x12U 
                                                        == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                                        ? 
                                                       (((QData)((IData)(
                                                                         vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__rem_result[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__rem_result[0U])))
                                                        : 
                                                       ((0x13U 
                                                         == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                                         ? 
                                                        (((QData)((IData)(
                                                                          vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__rem_result[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__rem_result[0U])))
                                                         : 
                                                        ((0x14U 
                                                          == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                                          ? 
                                                         (((QData)((IData)(
                                                                           vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__rem_result[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__rem_result[0U])))
                                                          : 
                                                         ((0x15U 
                                                           == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                                           ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_187
                                                           : 
                                                          ((0x16U 
                                                            == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                                            ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_187
                                                            : 
                                                           ((0x17U 
                                                             == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                                             ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_187
                                                             : 
                                                            ((0x18U 
                                                              == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                                              ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_187
                                                              : 
                                                             (((QData)((IData)(
                                                                               vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[0U])))))))))))))))
                                            : VL_ULL(0))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT___T_169 
        = (1U & ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1422)) 
                 & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_ports_0_data_valid))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT___T_171 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1422) 
           & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_ports_0_data_valid)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9466 
        = ((((((((((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9456 
                    | ((0x32dU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                             >> 0x14U)))
                        ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_10
                        : VL_ULL(0))) | ((0x32eU == 
                                          (0xfffU & 
                                           (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                            >> 0x14U)))
                                          ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_11
                                          : VL_ULL(0))) 
                  | ((0x32fU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                           >> 0x14U)))
                      ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_12
                      : VL_ULL(0))) | ((0x330U == (0xfffU 
                                                   & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                      >> 0x14U)))
                                        ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_13
                                        : VL_ULL(0))) 
                | ((0x331U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                         >> 0x14U)))
                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_14
                    : VL_ULL(0))) | ((0x332U == (0xfffU 
                                                 & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                    >> 0x14U)))
                                      ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_15
                                      : VL_ULL(0))) 
              | ((0x333U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                       >> 0x14U))) ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_16
                  : VL_ULL(0))) | ((0x334U == (0xfffU 
                                               & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                  >> 0x14U)))
                                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_17
                                    : VL_ULL(0))) | 
            ((0x335U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                   >> 0x14U))) ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_18
              : VL_ULL(0))) | ((0x336U == (0xfffU & 
                                           (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                            >> 0x14U)))
                                ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_19
                                : VL_ULL(0)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__read_illegal 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_256) 
           & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__legalcsrnumber)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_95 
        = ((9U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
            ? (QData)((IData)(VL_SHIFTRS_III(32,32,5, (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source), 
                                             (0x1fU 
                                              & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)))))
            : ((0xaU == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                ? (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
                   >> (0x3fU & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)))
                : ((0xbU == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                    ? (QData)((IData)(((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source) 
                                       >> (0x1fU & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)))))
                    : ((0xcU == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                        ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source
                        : ((0xdU == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                            ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fresult
                            : ((0xeU == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fresult
                                : ((0xfU == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fresult
                                    : ((0x10U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                        ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fresult
                                        : ((0x11U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                            ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fresult
                                            : ((0x12U 
                                                == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                                ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fresult
                                                : (
                                                   (0x13U 
                                                    == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fresult
                                                    : 
                                                   ((0x14U 
                                                     == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                                     ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fresult
                                                     : 
                                                    ((0x15U 
                                                      == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                                      ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fresult
                                                      : 
                                                     ((0x16U 
                                                       == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                                       ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fresult
                                                       : 
                                                      ((0x17U 
                                                        == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                                        ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fresult
                                                        : 
                                                       ((0x18U 
                                                         == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                                         ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fresult
                                                         : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__add_res))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT___T_145 
        = (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_pc 
           + vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_bim_ext);
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__wire_pc_jump_target 
        = (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_pc 
           + vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_jim_ext);
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_pc = VL_ULL(0x80000000);
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
            if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_pc = VL_ULL(0);
            } else {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)))) {
                    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_pc 
                        = ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_control_hazard)
                            ? VL_ULL(0) : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_if_kill)
                                            ? VL_ULL(0)
                                            : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_if_pc));
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rd_addr = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rd_addr 
                = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)
                    ? 0U : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)
                             ? 0U : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_control_hazard)
                                      ? 0U : (0x1fU 
                                              & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
                                                 >> 7U)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rf_wen = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rf_wen 
                = ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)) 
                   & ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)) 
                      & ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_control_hazard)) 
                         & ((0x6fU == (0x7fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                            | ((0x67U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                               | ((3U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                  | ((0x4003U == (0x707fU 
                                                  & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                     | (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_590))))))));
        }
    }
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9475 
        = (((((((((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9466 
                   | ((0x337U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                            >> 0x14U)))
                       ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_20
                       : VL_ULL(0))) | ((0x338U == 
                                         (0xfffU & 
                                          (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                           >> 0x14U)))
                                         ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_21
                                         : VL_ULL(0))) 
                 | ((0x339U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                          >> 0x14U)))
                     ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_22
                     : VL_ULL(0))) | ((0x33aU == (0xfffU 
                                                  & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                     >> 0x14U)))
                                       ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_23
                                       : VL_ULL(0))) 
               | ((0x33bU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                        >> 0x14U)))
                   ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_24
                   : VL_ULL(0))) | ((0x33cU == (0xfffU 
                                                & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                   >> 0x14U)))
                                     ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_25
                                     : VL_ULL(0))) 
             | ((0x33dU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U))) ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_26
                 : VL_ULL(0))) | ((0x33eU == (0xfffU 
                                              & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                 >> 0x14U)))
                                   ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_27
                                   : VL_ULL(0))) | 
           ((0x33fU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                  >> 0x14U))) ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_28
             : VL_ULL(0)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_enable 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_256) 
           & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__read_illegal)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__exception_in_csr 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__read_illegal) 
           | (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__write_illgal));
    VL_EXTEND_WQ(127,64, __Vtemp53, vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source);
    VL_SHIFTL_WWI(127,127,6, __Vtemp54, __Vtemp53, 
                  (0x3fU & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)));
    VL_EXTEND_WQ(95,64, __Vtemp57, vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source);
    VL_SHIFTL_WWI(95,95,5, __Vtemp58, __Vtemp57, (0x1fU 
                                                  & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__res_temp 
        = ((0U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
            ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__add_res
            : ((1U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                ? (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
                   - vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)
                : ((2U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                    ? (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)
                    : ((3U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                        ? (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
                           | vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)
                        : ((4U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                            ? (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
                               ^ vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)
                            : ((5U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                ? (((QData)((IData)(
                                                    __Vtemp54[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                __Vtemp54[0U])))
                                : ((0x19U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                    ? (((QData)((IData)(
                                                        __Vtemp58[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    __Vtemp58[0U])))
                                    : ((6U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                        ? (QData)((IData)(
                                                          VL_LTS_IQQ(1,64,64, vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source, vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)))
                                        : ((7U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                            ? (QData)((IData)(
                                                              (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
                                                               < vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)))
                                            : ((8U 
                                                == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                                ? VL_SHIFTRS_QQI(64,64,6, vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source, 
                                                                 (0x3fU 
                                                                  & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)))
                                                : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_95))))))))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_if_pc 
        = __Vdly__top__DOT__mycore__DOT__dpath__DOT__reg_if_pc;
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_data 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_enable)
            ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9475
            : VL_ULL(0));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fcsr_illegal_ins_exception 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__exception_in_csr) 
           | (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_reg_mem_exception));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res 
        = ((0U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_ext_sel))
            ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__res_temp
            : ((1U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_ext_sel))
                ? ((((1U & (IData)((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__res_temp 
                                    >> 7U))) ? VL_ULL(0xffffffffffffff)
                      : VL_ULL(0)) << 8U) | (QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__res_temp)))))
                : ((2U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_ext_sel))
                    ? (QData)((IData)((0xffU & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__res_temp))))
                    : ((3U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_ext_sel))
                        ? ((((1U & (IData)((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__res_temp 
                                            >> 0xfU)))
                              ? VL_ULL(0xffffffffffff)
                              : VL_ULL(0)) << 0x10U) 
                           | (QData)((IData)((0xffffU 
                                              & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__res_temp)))))
                        : ((4U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_ext_sel))
                            ? (QData)((IData)((0xffffU 
                                               & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__res_temp))))
                            : ((5U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_ext_sel))
                                ? (((QData)((IData)(
                                                    ((1U 
                                                      & (IData)(
                                                                (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__res_temp 
                                                                 >> 0x1fU)))
                                                      ? 0xffffffffU
                                                      : 0U))) 
                                    << 0x20U) | (QData)((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__res_temp)))
                                : ((6U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_ext_sel))
                                    ? (QData)((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__res_temp))
                                    : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__res_temp)))))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__wire_pc_next_4 
        = (VL_ULL(4) + vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_if_pc);
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr = 0x4033U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)))) {
            if (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir) {
                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr = 0x4033U;
            } else {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)))) {
                    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
                        = ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_control_hazard)
                            ? 0x4033U : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_if_kill)
                                          ? 0x4033U
                                          : (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_ports_0_rdata)));
                }
            }
        }
    }
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9479 
        = (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_data 
           | vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out);
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9482 
        = (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_data 
           & (~ vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___GEN_244 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fcsr_illegal_ins_exception)
            ? (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie)
            : ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall)
                ? (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie)
                : ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak)
                    ? (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie)
                    : (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasexception 
        = (((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fcsr_illegal_ins_exception) 
            | (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall)) 
           | (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak));
    vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_ports_0_rdata 
        = ((0U == (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__info_op))
            ? vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT___T_33
            : vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT___T_62);
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall 
        = (1U & ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_ports_0_data_valid)) 
                 | (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1422))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data 
        = ((2U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op))
            ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out
            : ((4U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op))
                ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9479
                : ((3U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op))
                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9482
                    : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_data)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__wire_pc_bpu_target 
        = (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_if_pc 
           + ((((1U & (IData)((vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_ports_0_rdata 
                               >> 0x1fU))) ? VL_ULL(0x7ffffffffffff)
                 : VL_ULL(0)) << 0xdU) | (QData)((IData)(
                                                         ((0x1000U 
                                                           & ((IData)(
                                                                      (vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_ports_0_rdata 
                                                                       >> 0x1fU)) 
                                                              << 0xcU)) 
                                                          | ((0x800U 
                                                              & ((IData)(
                                                                         (vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_ports_0_rdata 
                                                                          >> 7U)) 
                                                                 << 0xbU)) 
                                                             | ((0x7e0U 
                                                                 & ((IData)(
                                                                            (vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_ports_0_rdata 
                                                                             >> 0x19U)) 
                                                                    << 5U)) 
                                                                | (0x1eU 
                                                                   & ((IData)(
                                                                              (vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_ports_0_rdata 
                                                                               >> 8U)) 
                                                                      << 1U)))))))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen 
        = (((((~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__write_illgal)) 
              & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__legalcsrnumber)) 
             & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_reg_mem_exception))) 
            & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall))) 
           & (((0U != (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__wire_csr_op)) 
               & (5U != (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__wire_csr_op))) 
              & (1U != (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__wire_csr_op))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasinterrupt 
        = (((((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mip_mti) 
              & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mie_mti)) 
             & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie)) 
            & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall))) 
           & (VL_ULL(0) != vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_pc));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__isBtype 
        = ((VL_ULL(0x63) == (VL_ULL(0x7f) & (QData)((IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_ports_0_rdata)))) 
           & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT___T_89 
        = ((0x1fU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
                     >> 0x14U)) == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rd_addr));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT___T_95 
        = ((0x1fU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
                     >> 0x14U)) == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rd_addr));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT___T_101 
        = ((0x1fU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
                     >> 0x14U)) == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_rd_addr));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile_io_rp2_data 
        = ((0U == (0x1fU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
                            >> 0x14U))) ? VL_ULL(0)
            : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
           [(0x1fU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
                      >> 0x14U))]);
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_788 
        = ((0x4000003bU == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 1U : ((0x4033U == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                     ? 1U : ((0x4013U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 1U : ((0x6033U == (0xfe00707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                       ? 1U : ((0x6013U 
                                                == 
                                                (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                ? 1U
                                                : (
                                                   (0x33U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 1U
                                                    : 
                                                   ((0x13U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 1U
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 1U
                                                      : 
                                                     ((0x3bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 1U
                                                       : 
                                                      ((0x7033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 1U
                                                        : 
                                                       ((0x7013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 1U
                                                         : 
                                                        ((0x23U 
                                                          == 
                                                          (0x707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 1U
                                                          : 
                                                         ((0x3023U 
                                                           == 
                                                           (0x707fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                           ? 0xffU
                                                           : 
                                                          ((0x1023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                            ? 3U
                                                            : 
                                                           ((0x2023U 
                                                             == 
                                                             (0x707fU 
                                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                             ? 0xfU
                                                             : 1U)))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_dec_iim_ext[0U] 
        = ((0xfffff000U & ((IData)(((0x80000000U & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                                     ? VL_ULL(0x3fffffffffffff)
                                     : VL_ULL(0))) 
                           << 0xcU)) | (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
                                                  >> 0x14U)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_dec_iim_ext[1U] 
        = ((0xfffU & ((IData)(((0x80000000U & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                                ? VL_ULL(0x3fffffffffffff)
                                : VL_ULL(0))) >> 0x14U)) 
           | (0xfffff000U & ((IData)((((0x80000000U 
                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                                        ? VL_ULL(0x3fffffffffffff)
                                        : VL_ULL(0)) 
                                      >> 0x20U)) << 0xcU)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_dec_iim_ext[2U] 
        = (0xfffU & ((IData)((((0x80000000U & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                                ? VL_ULL(0x3fffffffffffff)
                                : VL_ULL(0)) >> 0x20U)) 
                     >> 0x14U));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_418 
        = ((0x4000003bU == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 0U : ((0x4033U == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                     ? 0U : ((0x4013U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 2U : ((0x6033U == (0xfe00707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                       ? 0U : ((0x6013U 
                                                == 
                                                (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                ? 2U
                                                : (
                                                   (0x33U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 0U
                                                    : 
                                                   ((0x13U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 2U
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 2U
                                                      : 
                                                     ((0x3bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 0U
                                                       : 
                                                      ((0x7033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 0U
                                                        : 
                                                       ((0x7013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 2U
                                                         : 
                                                        ((0x23U 
                                                          == 
                                                          (0x707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 3U
                                                          : 
                                                         ((0x3023U 
                                                           == 
                                                           (0x707fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                           ? 3U
                                                           : 
                                                          ((0x1023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                            ? 3U
                                                            : 
                                                           ((0x2023U 
                                                             == 
                                                             (0x707fU 
                                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                             ? 3U
                                                             : 0U)))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_924 
        = ((0x3023U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 0U : ((0x1023U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                     ? 0U : ((0x2023U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 0U : ((0x63U == (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                       ? 0U : ((0x5063U 
                                                == 
                                                (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                ? 0U
                                                : (
                                                   (0x7063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 0U
                                                    : 
                                                   ((0x4063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 0U
                                                     : 
                                                    ((0x6063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 0U
                                                      : 
                                                     ((0x1063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 0U
                                                       : 
                                                      ((0x3073U 
                                                        == 
                                                        (0x707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 3U
                                                        : 
                                                       ((0x7073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 3U
                                                         : 
                                                        ((0x2073U 
                                                          == 
                                                          (0x707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 3U
                                                          : 
                                                         ((0x6073U 
                                                           == 
                                                           (0x707fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                           ? 3U
                                                           : 
                                                          ((0x1073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                            ? 3U
                                                            : 
                                                           ((0x5073U 
                                                             == 
                                                             (0x707fU 
                                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                             ? 3U
                                                             : 0U)))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_643 
        = ((0x501bU != (0xfc00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
           & ((0x503bU != (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
              & ((0x40000033U != (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                 & ((0x4000003bU != (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                    & ((0x4033U != (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                       & ((0x4013U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                          & ((0x6033U != (0xfe00707fU 
                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                             & ((0x6013U != (0x707fU 
                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                & ((0x33U != (0xfe00707fU 
                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                   & ((0x13U != (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                      & ((0x1bU != 
                                          (0x707fU 
                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                         & ((0x3bU 
                                             != (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                            & ((0x7033U 
                                                != 
                                                (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                               & ((0x7013U 
                                                   != 
                                                   (0x707fU 
                                                    & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                  & ((0x23U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                     | ((0x3023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                        | ((0x1023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                           | (0x2023U 
                                                              == 
                                                              (0x707fU 
                                                               & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)))))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_332 
        = ((0x3023U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 0U : ((0x1023U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                     ? 0U : ((0x2023U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 0U : ((0x63U == (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                       ? 0U : ((0x5063U 
                                                == 
                                                (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                ? 0U
                                                : (
                                                   (0x7063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 0U
                                                    : 
                                                   ((0x4063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 0U
                                                     : 
                                                    ((0x6063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 0U
                                                      : 
                                                     ((0x1063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 0U
                                                       : 
                                                      ((0x3073U 
                                                        == 
                                                        (0x707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 0U
                                                        : 
                                                       ((0x7073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 1U
                                                         : 
                                                        ((0x2073U 
                                                          == 
                                                          (0x707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 0U
                                                          : 
                                                         ((0x6073U 
                                                           == 
                                                           (0x707fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                           ? 1U
                                                           : 
                                                          ((0x1073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                            ? 0U
                                                            : 
                                                           ((0x5073U 
                                                             == 
                                                             (0x707fU 
                                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                             ? 1U
                                                             : 0U)))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_460 
        = ((0xfU == (0xf00fffffU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 0U : ((0x100fU == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                     ? 0U : ((0x2000033U == (0xfe00707fU 
                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 0xdU : ((0x2001033U 
                                         == (0xfe00707fU 
                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                         ? 0xeU : (
                                                   (0x2002033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 0xfU
                                                    : 
                                                   ((0x2003033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 0x10U
                                                     : 
                                                    ((0x200003bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 0xdU
                                                      : 
                                                     ((0x2006033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 0x11U
                                                       : 
                                                      ((0x2007033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 0x12U
                                                        : 
                                                       ((0x200703bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 0x13U
                                                         : 
                                                        ((0x200603bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 0x14U
                                                          : 
                                                         ((0x2004033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                           ? 0x15U
                                                           : 
                                                          ((0x2005033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                            ? 0x16U
                                                            : 
                                                           ((0x200503bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                             ? 0x17U
                                                             : 
                                                            ((0x200403bU 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                              ? 0x18U
                                                              : 0U)))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1052 
        = ((0xfU == (0xf00fffffU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 0U : ((0x100fU == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                     ? 0U : ((0x2000033U == (0xfe00707fU 
                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 0U : ((0x2001033U == 
                                       (0xfe00707fU 
                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                       ? 0U : ((0x2002033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                ? 0U
                                                : (
                                                   (0x2003033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 0U
                                                    : 
                                                   ((0x200003bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 5U
                                                     : 
                                                    ((0x2006033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 0U
                                                      : 
                                                     ((0x2007033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 0U
                                                       : 
                                                      ((0x200703bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 5U
                                                        : 
                                                       ((0x200603bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 5U
                                                         : 
                                                        ((0x2004033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 0U
                                                          : 
                                                         ((0x2005033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                           ? 0U
                                                           : 
                                                          ((0x200503bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                            ? 5U
                                                            : 
                                                           ((0x200403bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                             ? 5U
                                                             : 0U)))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1144 
        = ((0x2023U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
           & ((0x63U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
              & ((0x5063U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                 & ((0x7063U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                    & ((0x4063U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                       & ((0x6063U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                          & ((0x1063U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                             & ((0x3073U != (0x707fU 
                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                & ((0x7073U != (0x707fU 
                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                   & ((0x2073U != (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                      & ((0x6073U != 
                                          (0x707fU 
                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                         & ((0x1073U 
                                             != (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                            & ((0x5073U 
                                                != 
                                                (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                               & ((0x100073U 
                                                   != vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
                                                  & ((0x73U 
                                                      != vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
                                                     & ((0x10500073U 
                                                         != vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
                                                        & ((0x10200073U 
                                                            != vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
                                                           & ((0x30200073U 
                                                               != vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
                                                              & ((0xfU 
                                                                  != 
                                                                  (0xf00fffffU 
                                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                 & (0x100fU 
                                                                    == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))))))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_994 
        = ((0x5063U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 0U : ((0x7063U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                     ? 0U : ((0x4063U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 0U : ((0x6063U == (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                       ? 0U : ((0x1063U 
                                                == 
                                                (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                ? 0U
                                                : (
                                                   (0x3073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 3U
                                                    : 
                                                   ((0x7073U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 3U
                                                     : 
                                                    ((0x2073U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 4U
                                                      : 
                                                     ((0x6073U 
                                                       == 
                                                       (0x707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 4U
                                                       : 
                                                      ((0x1073U 
                                                        == 
                                                        (0x707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 2U
                                                        : 
                                                       ((0x5073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 2U
                                                         : 
                                                        ((0x100073U 
                                                          == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                                                          ? 5U
                                                          : 
                                                         ((0x73U 
                                                           == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                                                           ? 5U
                                                           : 
                                                          ((0x10500073U 
                                                            == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                                                            ? 0U
                                                            : 
                                                           ((0x10200073U 
                                                             == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                                                             ? 5U
                                                             : 
                                                            ((0x30200073U 
                                                              == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                                                              ? 5U
                                                              : 0U))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_162 
        = ((0x2000033U == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
           | ((0x2001033U == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
              | ((0x2002033U == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                 | ((0x2003033U == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                    | ((0x200003bU == (0xfe00707fU 
                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                       | ((0x2006033U == (0xfe00707fU 
                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                          | ((0x2007033U == (0xfe00707fU 
                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                             | ((0x200703bU == (0xfe00707fU 
                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                | ((0x200603bU == (0xfe00707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                   | ((0x2004033U == 
                                       (0xfe00707fU 
                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                      | ((0x2005033U 
                                          == (0xfe00707fU 
                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                         | ((0x200503bU 
                                             == (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                            | (0x200403bU 
                                               == (0xfe00707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___GEN_92 
        = (1U & ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen)
                  ? ((0x300U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                           >> 0x14U)))
                      ? (IData)((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data 
                                 >> 7U)) : (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie))
                  : (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___GEN_99 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen)
            ? ((0x341U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                     >> 0x14U))) ? 
               (VL_ULL(0xfffffffffffffffc) & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data)
                : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc)
            : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc);
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__prv_now 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)
            ? 3U : ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasinterrupt)
                     ? 3U : ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_ismret)
                              ? (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp)
                              : 3U)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_17750 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasexception) 
           | (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasinterrupt));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu_io_IF_pc_sel 
        = ((0U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state))
            ? 0U : ((1U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state))
                     ? 0U : ((2U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state))
                              ? ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__isBtype)
                                  ? 5U : 0U) : ((3U 
                                                 == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state))
                                                 ? 
                                                ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__isBtype)
                                                  ? 5U
                                                  : 0U)
                                                 : 0U))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_803 
        = ((0x101bU == (0xfc00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 1U : ((0x103bU == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                     ? 1U : ((0x2033U == (0xfe00707fU 
                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 1U : ((0x2013U == (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                       ? 1U : ((0x3013U 
                                                == 
                                                (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                ? 1U
                                                : (
                                                   (0x3033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 1U
                                                    : 
                                                   ((0x40005033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 1U
                                                     : 
                                                    ((0x40005013U 
                                                      == 
                                                      (0xfc00707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 1U
                                                      : 
                                                     ((0x4000501bU 
                                                       == 
                                                       (0xfc00707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 1U
                                                       : 
                                                      ((0x4000503bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 1U
                                                        : 
                                                       ((0x5033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 1U
                                                         : 
                                                        ((0x5013U 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 1U
                                                          : 
                                                         ((0x501bU 
                                                           == 
                                                           (0xfc00707fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                           ? 1U
                                                           : 
                                                          ((0x503bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                            ? 1U
                                                            : 
                                                           ((0x40000033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                             ? 1U
                                                             : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_788))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_433 
        = ((0x101bU == (0xfc00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 2U : ((0x103bU == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                     ? 0U : ((0x2033U == (0xfe00707fU 
                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 0U : ((0x2013U == (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                       ? 2U : ((0x3013U 
                                                == 
                                                (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                ? 2U
                                                : (
                                                   (0x3033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 0U
                                                    : 
                                                   ((0x40005033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 0U
                                                     : 
                                                    ((0x40005013U 
                                                      == 
                                                      (0xfc00707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 2U
                                                      : 
                                                     ((0x4000501bU 
                                                       == 
                                                       (0xfc00707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 2U
                                                       : 
                                                      ((0x4000503bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 0U
                                                        : 
                                                       ((0x5033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 0U
                                                         : 
                                                        ((0x5013U 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 2U
                                                          : 
                                                         ((0x501bU 
                                                           == 
                                                           (0xfc00707fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                           ? 2U
                                                           : 
                                                          ((0x503bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                            ? 0U
                                                            : 
                                                           ((0x40000033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                             ? 0U
                                                             : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_418))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_939 
        = ((0x501bU == (0xfc00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 0U : ((0x503bU == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                     ? 0U : ((0x40000033U == (0xfe00707fU 
                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 0U : ((0x4000003bU 
                                       == (0xfe00707fU 
                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                       ? 0U : ((0x4033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                ? 0U
                                                : (
                                                   (0x4013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 0U
                                                    : 
                                                   ((0x6033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 0U
                                                     : 
                                                    ((0x6013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 0U
                                                      : 
                                                     ((0x33U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 0U
                                                       : 
                                                      ((0x13U 
                                                        == 
                                                        (0x707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 0U
                                                        : 
                                                       ((0x1bU 
                                                         == 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 0U
                                                         : 
                                                        ((0x3bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 0U
                                                          : 
                                                         ((0x7033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                           ? 0U
                                                           : 
                                                          ((0x7013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                            ? 0U
                                                            : 
                                                           ((0x23U 
                                                             == 
                                                             (0x707fU 
                                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                             ? 0U
                                                             : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_924))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_659 
        = ((0x37U != (0x7fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
           & ((0x17U != (0x7fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
              & ((0x1033U != (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                 & ((0x1013U != (0xfc00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                    & ((0x101bU != (0xfc00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                       & ((0x103bU != (0xfe00707fU 
                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                          & ((0x2033U != (0xfe00707fU 
                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                             & ((0x2013U != (0x707fU 
                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                & ((0x3013U != (0x707fU 
                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                   & ((0x3033U != (0xfe00707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                      & ((0x40005033U 
                                          != (0xfe00707fU 
                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                         & ((0x40005013U 
                                             != (0xfc00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                            & ((0x4000501bU 
                                                != 
                                                (0xfc00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                               & ((0x4000503bU 
                                                   != 
                                                   (0xfe00707fU 
                                                    & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                  & ((0x5033U 
                                                      != 
                                                      (0xfe00707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                     & ((0x5013U 
                                                         != 
                                                         (0xfc00707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                        & (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_643)))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_347 
        = ((0x501bU == (0xfc00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 0U : ((0x503bU == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                     ? 0U : ((0x40000033U == (0xfe00707fU 
                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 0U : ((0x4000003bU 
                                       == (0xfe00707fU 
                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                       ? 0U : ((0x4033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                ? 0U
                                                : (
                                                   (0x4013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 0U
                                                    : 
                                                   ((0x6033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 0U
                                                     : 
                                                    ((0x6013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 0U
                                                      : 
                                                     ((0x33U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 0U
                                                       : 
                                                      ((0x13U 
                                                        == 
                                                        (0x707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 0U
                                                        : 
                                                       ((0x1bU 
                                                         == 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 0U
                                                         : 
                                                        ((0x3bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 0U
                                                          : 
                                                         ((0x7033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                           ? 0U
                                                           : 
                                                          ((0x7013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                            ? 0U
                                                            : 
                                                           ((0x23U 
                                                             == 
                                                             (0x707fU 
                                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                             ? 0U
                                                             : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_332))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_476 
        = ((0x5063U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 0U : ((0x7063U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                     ? 0U : ((0x4063U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 0U : ((0x6063U == (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                       ? 0U : ((0x1063U 
                                                == 
                                                (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                ? 0U
                                                : (
                                                   (0x3073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 0xcU
                                                    : 
                                                   ((0x7073U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 0xcU
                                                     : 
                                                    ((0x2073U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 0xcU
                                                      : 
                                                     ((0x6073U 
                                                       == 
                                                       (0x707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 0xcU
                                                       : 
                                                      ((0x1073U 
                                                        == 
                                                        (0x707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 0xcU
                                                        : 
                                                       ((0x5073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 0xcU
                                                         : 
                                                        ((0x100073U 
                                                          == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                                                          ? 0U
                                                          : 
                                                         ((0x73U 
                                                           == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                                                           ? 0U
                                                           : 
                                                          ((0x10500073U 
                                                            == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                                                            ? 0U
                                                            : 
                                                           ((0x10200073U 
                                                             == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                                                             ? 0U
                                                             : 
                                                            ((0x30200073U 
                                                              == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                                                              ? 0U
                                                              : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_460)))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1068 
        = ((0x5063U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 0U : ((0x7063U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                     ? 0U : ((0x4063U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 0U : ((0x6063U == (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                       ? 0U : ((0x1063U 
                                                == 
                                                (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                ? 0U
                                                : (
                                                   (0x3073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 0U
                                                    : 
                                                   ((0x7073U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 0U
                                                     : 
                                                    ((0x2073U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 0U
                                                      : 
                                                     ((0x6073U 
                                                       == 
                                                       (0x707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 0U
                                                       : 
                                                      ((0x1073U 
                                                        == 
                                                        (0x707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 0U
                                                        : 
                                                       ((0x5073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 0U
                                                         : 
                                                        ((0x100073U 
                                                          == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                                                          ? 0U
                                                          : 
                                                         ((0x73U 
                                                           == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                                                           ? 0U
                                                           : 
                                                          ((0x10500073U 
                                                            == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                                                            ? 0U
                                                            : 
                                                           ((0x10200073U 
                                                             == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                                                             ? 0U
                                                             : 
                                                            ((0x30200073U 
                                                              == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                                                              ? 0U
                                                              : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1052)))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1161 
        = ((0x501bU != (0xfc00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
           & ((0x503bU != (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
              & ((0x40000033U != (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                 & ((0x4000003bU != (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                    & ((0x4033U != (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                       & ((0x4013U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                          & ((0x6033U != (0xfe00707fU 
                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                             & ((0x6013U != (0x707fU 
                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                & ((0x33U != (0xfe00707fU 
                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                   & ((0x13U != (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                      & ((0x1bU != 
                                          (0x707fU 
                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                         & ((0x3bU 
                                             != (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                            & ((0x7033U 
                                                != 
                                                (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                               & ((0x7013U 
                                                   != 
                                                   (0x707fU 
                                                    & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                  & ((0x23U 
                                                      != 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                     & ((0x3023U 
                                                         != 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                        & ((0x1023U 
                                                            != 
                                                            (0x707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                           & (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1144))))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1009 
        = ((0x4033U == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 0U : ((0x4013U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                     ? 0U : ((0x6033U == (0xfe00707fU 
                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 0U : ((0x6013U == (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                       ? 0U : ((0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                ? 0U
                                                : (
                                                   (0x13U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 0U
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 0U
                                                     : 
                                                    ((0x3bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 0U
                                                      : 
                                                     ((0x7033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 0U
                                                       : 
                                                      ((0x7013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 0U
                                                        : 
                                                       ((0x23U 
                                                         == 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 0U
                                                         : 
                                                        ((0x3023U 
                                                          == 
                                                          (0x707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 0U
                                                          : 
                                                         ((0x1023U 
                                                           == 
                                                           (0x707fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                           ? 0U
                                                           : 
                                                          ((0x2023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                            ? 0U
                                                            : 
                                                           ((0x63U 
                                                             == 
                                                             (0x707fU 
                                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                             ? 0U
                                                             : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_994))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_181 
        = ((0x63U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
           | ((0x5063U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
              | ((0x7063U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                 | ((0x4063U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                    | ((0x6063U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                       | ((0x1063U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                          | ((0x3073U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                             | ((0x7073U == (0x707fU 
                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                | ((0x2073U == (0x707fU 
                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                   | ((0x6073U == (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                      | ((0x1073U == 
                                          (0x707fU 
                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                         | ((0x5073U 
                                             == (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                            | ((0x100073U 
                                                == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
                                               | ((0x73U 
                                                   == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
                                                  | ((0x10500073U 
                                                      == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
                                                     | ((0x10200073U 
                                                         == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
                                                        | ((0x30200073U 
                                                            == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
                                                           | ((0xfU 
                                                               == 
                                                               (0xf00fffffU 
                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                              | ((0x100fU 
                                                                  == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
                                                                 | (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_162))))))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_539 
        = ((0x100073U != vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
           & ((0x73U != vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
              & ((0x10500073U != vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
                 & ((0x10200073U != vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
                    & ((0x30200073U != vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
                       & ((0xfU != (0xf00fffffU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                          & ((0x100fU != vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
                             & (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_162))))))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_17750) 
           | (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_ismret));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1337 
        = ((1U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_pc_branch))
            ? (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu_io_IF_pc_sel)
            : 2U);
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1339 
        = ((1U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_pc_branch))
            ? 2U : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu_io_IF_pc_sel));
    vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel 
        = ((0x6fU == (0x7fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 0U : ((0x67U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                     ? 0U : ((3U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 2U : ((0x4003U == (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                       ? 2U : ((0x3003U 
                                                == 
                                                (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                ? 2U
                                                : (
                                                   (0x1003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 2U
                                                    : 
                                                   ((0x5003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 2U
                                                     : 
                                                    ((0x2003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 2U
                                                      : 
                                                     ((0x6003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 2U
                                                       : 
                                                      ((0x37U 
                                                        == 
                                                        (0x7fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 0U
                                                        : 
                                                       ((0x17U 
                                                         == 
                                                         (0x7fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 1U
                                                         : 
                                                        ((0x1033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 0U
                                                          : 
                                                         ((0x1013U 
                                                           == 
                                                           (0xfc00707fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                           ? 2U
                                                           : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_433))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_954 
        = ((0x17U == (0x7fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 0U : ((0x1033U == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                     ? 0U : ((0x1013U == (0xfc00707fU 
                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 0U : ((0x101bU == (0xfc00707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                       ? 0U : ((0x103bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                ? 0U
                                                : (
                                                   (0x2033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 0U
                                                    : 
                                                   ((0x2013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 0U
                                                     : 
                                                    ((0x3013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 0U
                                                      : 
                                                     ((0x3033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 0U
                                                       : 
                                                      ((0x40005033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 0U
                                                        : 
                                                       ((0x40005013U 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 0U
                                                         : 
                                                        ((0x4000501bU 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 0U
                                                          : 
                                                         ((0x4000503bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                           ? 0U
                                                           : 
                                                          ((0x5033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                            ? 0U
                                                            : 
                                                           ((0x5013U 
                                                             == 
                                                             (0xfc00707fU 
                                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                             ? 0U
                                                             : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_939))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_667 
        = ((0x67U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
           & ((3U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
              | ((0x4003U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                 | ((0x3003U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                    | ((0x1003U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                       | ((0x5003U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                          | ((0x2003U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                             | ((0x6003U == (0x707fU 
                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                | (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_659)))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_889 
        = ((0x67U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
           & ((3U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
              & ((0x4003U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                 & ((0x3003U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                    & ((0x1003U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                       & ((0x5003U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                          & ((0x2003U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                             & ((0x6003U != (0x707fU 
                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                & (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_659)))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_362 
        = ((0x17U == (0x7fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 2U : ((0x1033U == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                     ? 0U : ((0x1013U == (0xfc00707fU 
                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 0U : ((0x101bU == (0xfc00707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                       ? 0U : ((0x103bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                ? 0U
                                                : (
                                                   (0x2033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 0U
                                                    : 
                                                   ((0x2013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 0U
                                                     : 
                                                    ((0x3013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 0U
                                                      : 
                                                     ((0x3033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 0U
                                                       : 
                                                      ((0x40005033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 0U
                                                        : 
                                                       ((0x40005013U 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 0U
                                                         : 
                                                        ((0x4000501bU 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 0U
                                                          : 
                                                         ((0x4000503bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                           ? 0U
                                                           : 
                                                          ((0x5033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                            ? 0U
                                                            : 
                                                           ((0x5013U 
                                                             == 
                                                             (0xfc00707fU 
                                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                             ? 0U
                                                             : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_347))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_491 
        = ((0x4033U == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 4U : ((0x4013U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                     ? 4U : ((0x6033U == (0xfe00707fU 
                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 3U : ((0x6013U == (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                       ? 3U : ((0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                ? 0U
                                                : (
                                                   (0x13U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 0U
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 0U
                                                     : 
                                                    ((0x3bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 0U
                                                      : 
                                                     ((0x7033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 2U
                                                       : 
                                                      ((0x7013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 2U
                                                        : 
                                                       ((0x23U 
                                                         == 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 0U
                                                         : 
                                                        ((0x3023U 
                                                          == 
                                                          (0x707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 0U
                                                          : 
                                                         ((0x1023U 
                                                           == 
                                                           (0x707fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                           ? 0U
                                                           : 
                                                          ((0x2023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                            ? 0U
                                                            : 
                                                           ((0x63U 
                                                             == 
                                                             (0x707fU 
                                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                             ? 0U
                                                             : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_476))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1083 
        = ((0x4033U == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 0U : ((0x4013U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                     ? 0U : ((0x6033U == (0xfe00707fU 
                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 0U : ((0x6013U == (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                       ? 0U : ((0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                ? 0U
                                                : (
                                                   (0x13U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 0U
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 5U
                                                     : 
                                                    ((0x3bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 5U
                                                      : 
                                                     ((0x7033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 0U
                                                       : 
                                                      ((0x7013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 0U
                                                        : 
                                                       ((0x23U 
                                                         == 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 0U
                                                         : 
                                                        ((0x3023U 
                                                          == 
                                                          (0x707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 0U
                                                          : 
                                                         ((0x1023U 
                                                           == 
                                                           (0x707fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                           ? 0U
                                                           : 
                                                          ((0x2023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                            ? 0U
                                                            : 
                                                           ((0x63U 
                                                             == 
                                                             (0x707fU 
                                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                             ? 0U
                                                             : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1068))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1178 
        = ((0x6003U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
           & ((0x37U != (0x7fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
              & ((0x17U != (0x7fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                 & ((0x1033U != (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                    & ((0x1013U != (0xfc00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                       & ((0x101bU != (0xfc00707fU 
                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                          & ((0x103bU != (0xfe00707fU 
                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                             & ((0x2033U != (0xfe00707fU 
                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                & ((0x2013U != (0x707fU 
                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                   & ((0x3013U != (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                      & ((0x3033U != 
                                          (0xfe00707fU 
                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                         & ((0x40005033U 
                                             != (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                            & ((0x40005013U 
                                                != 
                                                (0xfc00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                               & ((0x4000501bU 
                                                   != 
                                                   (0xfc00707fU 
                                                    & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                  & ((0x4000503bU 
                                                      != 
                                                      (0xfe00707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                     & ((0x5033U 
                                                         != 
                                                         (0xfe00707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                        & ((0x5013U 
                                                            != 
                                                            (0xfc00707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                           & (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1161))))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1024 
        = ((0x103bU == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 0U : ((0x2033U == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                     ? 0U : ((0x2013U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 0U : ((0x3013U == (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                       ? 0U : ((0x3033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                ? 0U
                                                : (
                                                   (0x40005033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 0U
                                                    : 
                                                   ((0x40005013U 
                                                     == 
                                                     (0xfc00707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 0U
                                                     : 
                                                    ((0x4000501bU 
                                                      == 
                                                      (0xfc00707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 0U
                                                      : 
                                                     ((0x4000503bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 0U
                                                       : 
                                                      ((0x5033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 0U
                                                        : 
                                                       ((0x5013U 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 0U
                                                         : 
                                                        ((0x501bU 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 0U
                                                          : 
                                                         ((0x503bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                           ? 0U
                                                           : 
                                                          ((0x40000033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                            ? 0U
                                                            : 
                                                           ((0x4000003bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                             ? 0U
                                                             : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1009))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_198 
        = ((0x503bU == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
           | ((0x40000033U == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
              | ((0x4000003bU == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                 | ((0x4033U == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                    | ((0x4013U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                       | ((0x6033U == (0xfe00707fU 
                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                          | ((0x6013U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                             | ((0x33U == (0xfe00707fU 
                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                | ((0x13U == (0x707fU 
                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                   | ((0x1bU == (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                      | ((0x3bU == 
                                          (0xfe00707fU 
                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                         | ((0x7033U 
                                             == (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                            | ((0x7013U 
                                                == 
                                                (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                               | ((0x23U 
                                                   == 
                                                   (0x707fU 
                                                    & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                  | ((0x3023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                     | ((0x1023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                        | ((0x2023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                           | (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_181))))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_556 
        = ((0x7013U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
           | ((0x23U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
              & ((0x3023U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                 & ((0x1023U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                    & ((0x2023U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                       & ((0x63U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                          & ((0x5063U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                             & ((0x7063U != (0x707fU 
                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                & ((0x4063U != (0x707fU 
                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                   & ((0x6063U != (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                      & ((0x1063U != 
                                          (0x707fU 
                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                         & ((0x3073U 
                                             == (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                            | ((0x7073U 
                                                == 
                                                (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                               | ((0x2073U 
                                                   == 
                                                   (0x707fU 
                                                    & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                  | ((0x6073U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                     | ((0x1073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                        | ((0x5073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                           | (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_539))))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1206 
        = ((0x5073U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
           & (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_539));
    vlTOPp->io_diff_isredir = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir;
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1384 
        = ((0U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
            ? (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu_io_IF_pc_sel)
            : ((1U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
                ? ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath_io_d2c_iseq)
                    ? (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1337)
                    : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1339))
                : ((2U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
                    ? ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath_io_d2c_iseq)
                        ? (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1339)
                        : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1337))
                    : ((5U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
                        ? ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath_io_d2c_islt)
                            ? (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1339)
                            : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1337))
                        : ((6U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
                            ? ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath_io_d2c_isltu)
                                ? (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1339)
                                : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1337))
                            : ((3U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
                                ? ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath_io_d2c_islt)
                                    ? (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1337)
                                    : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1339))
                                : ((4U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
                                    ? ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath_io_d2c_isltu)
                                        ? (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1337)
                                        : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1339))
                                    : ((7U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
                                        ? 1U : ((8U 
                                                 == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
                                                 ? 3U
                                                 : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu_io_IF_pc_sel))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_op1_sel 
        = ((0x6fU == (0x7fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 0U : ((0x67U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                     ? 0U : ((3U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 0U : ((0x4003U == (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                       ? 0U : ((0x3003U 
                                                == 
                                                (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                ? 0U
                                                : (
                                                   (0x1003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 0U
                                                    : 
                                                   ((0x5003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 0U
                                                     : 
                                                    ((0x2003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 0U
                                                      : 
                                                     ((0x6003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 0U
                                                       : 
                                                      ((0x37U 
                                                        == 
                                                        (0x7fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 2U
                                                        : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_362)))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_506 
        = ((0x103bU == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 0x19U : ((0x2033U == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                        ? 6U : ((0x2013U == (0x707fU 
                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                 ? 6U : ((0x3013U == 
                                          (0x707fU 
                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                          ? 7U : ((0x3033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                   ? 7U
                                                   : 
                                                  ((0x40005033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 8U
                                                    : 
                                                   ((0x40005013U 
                                                     == 
                                                     (0xfc00707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 8U
                                                     : 
                                                    ((0x4000501bU 
                                                      == 
                                                      (0xfc00707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 9U
                                                      : 
                                                     ((0x4000503bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 9U
                                                       : 
                                                      ((0x5033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 0xaU
                                                        : 
                                                       ((0x5013U 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 0xaU
                                                         : 
                                                        ((0x501bU 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 0xbU
                                                          : 
                                                         ((0x503bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                           ? 0xbU
                                                           : 
                                                          ((0x40000033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                            ? 1U
                                                            : 
                                                           ((0x4000003bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                             ? 1U
                                                             : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_491))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1098 
        = ((0x103bU == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 5U : ((0x2033U == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                     ? 0U : ((0x2013U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 0U : ((0x3013U == (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                       ? 0U : ((0x3033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                ? 0U
                                                : (
                                                   (0x40005033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 0U
                                                    : 
                                                   ((0x40005013U 
                                                     == 
                                                     (0xfc00707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 0U
                                                     : 
                                                    ((0x4000501bU 
                                                      == 
                                                      (0xfc00707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 5U
                                                      : 
                                                     ((0x4000503bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 5U
                                                       : 
                                                      ((0x5033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 0U
                                                        : 
                                                       ((0x5013U 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 0U
                                                         : 
                                                        ((0x501bU 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 5U
                                                          : 
                                                         ((0x503bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                           ? 5U
                                                           : 
                                                          ((0x40000033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                            ? 0U
                                                            : 
                                                           ((0x4000003bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                             ? 5U
                                                             : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1083))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_if_kill 
        = (((0x6fU != (0x7fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
            & ((0x67U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
               & ((3U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                  & ((0x4003U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                     & ((0x3003U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                        & ((0x1003U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                           & ((0x5003U != (0x707fU 
                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                              & ((0x2003U != (0x707fU 
                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                 & (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1178))))))))) 
           | (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_is_fencei));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1037 
        = ((0x67U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 0U : ((3U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                     ? 0U : ((0x4003U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 0U : ((0x3003U == (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                       ? 0U : ((0x1003U 
                                                == 
                                                (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                ? 0U
                                                : (
                                                   (0x5003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 0U
                                                    : 
                                                   ((0x2003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 0U
                                                     : 
                                                    ((0x6003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 0U
                                                      : 
                                                     ((0x37U 
                                                       == 
                                                       (0x7fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 0U
                                                       : 
                                                      ((0x17U 
                                                        == 
                                                        (0x7fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 0U
                                                        : 
                                                       ((0x1033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 0U
                                                         : 
                                                        ((0x1013U 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 0U
                                                          : 
                                                         ((0x101bU 
                                                           == 
                                                           (0xfc00707fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                           ? 0U
                                                           : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1024))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_215 
        = ((0x37U == (0x7fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
           | ((0x17U == (0x7fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
              | ((0x1033U == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                 | ((0x1013U == (0xfc00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                    | ((0x101bU == (0xfc00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                       | ((0x103bU == (0xfe00707fU 
                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                          | ((0x2033U == (0xfe00707fU 
                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                             | ((0x2013U == (0x707fU 
                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                | ((0x3013U == (0x707fU 
                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                   | ((0x3033U == (0xfe00707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                      | ((0x40005033U 
                                          == (0xfe00707fU 
                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                         | ((0x40005013U 
                                             == (0xfc00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                            | ((0x4000501bU 
                                                == 
                                                (0xfc00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                               | ((0x4000503bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                  | ((0x5033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                     | ((0x5013U 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                        | ((0x501bU 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                           | (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_198))))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_573 
        = ((0x4000501bU == (0xfc00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
           | ((0x4000503bU == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
              | ((0x5033U == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                 | ((0x5013U == (0xfc00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                    | ((0x501bU == (0xfc00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                       | ((0x503bU == (0xfe00707fU 
                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                          | ((0x40000033U == (0xfe00707fU 
                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                             | ((0x4000003bU == (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                | ((0x4033U == (0xfe00707fU 
                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                   | ((0x4013U == (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                      | ((0x6033U == 
                                          (0xfe00707fU 
                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                         | ((0x6013U 
                                             == (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                            | ((0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                               | ((0x13U 
                                                   == 
                                                   (0x707fU 
                                                    & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                  | ((0x1bU 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                     | ((0x3bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                        | ((0x7033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                           | (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_556))))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1223 
        = ((0x7033U == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
           | ((0x7013U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
              | ((0x23U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                 | ((0x3023U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                    | ((0x1023U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                       | ((0x2023U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                          | ((0x63U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                             | ((0x5063U == (0x707fU 
                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                | ((0x7063U == (0x707fU 
                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                   | ((0x4063U == (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                      | ((0x6063U == 
                                          (0x707fU 
                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                         | ((0x1063U 
                                             == (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                            | ((0x3073U 
                                                == 
                                                (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                               | ((0x7073U 
                                                   != 
                                                   (0x707fU 
                                                    & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                  & ((0x2073U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                     | ((0x6073U 
                                                         != 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                        & ((0x1073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                           | (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1206))))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1297 
        = ((0x7033U == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
           | ((0x7013U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
              & ((0x23U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                 | ((0x3023U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                    | ((0x1023U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                       | ((0x2023U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                          | ((0x63U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                             | ((0x5063U == (0x707fU 
                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                | ((0x7063U == (0x707fU 
                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                   | ((0x4063U == (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                      | ((0x6063U == 
                                          (0x707fU 
                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                         | ((0x1063U 
                                             == (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                            | ((0x3073U 
                                                != 
                                                (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                               & ((0x7073U 
                                                   != 
                                                   (0x707fU 
                                                    & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                  & ((0x2073U 
                                                      != 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                     & ((0x6073U 
                                                         != 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                        & ((0x1073U 
                                                            != 
                                                            (0x707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                           & (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1206))))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)
            ? 4U : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1384));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT__temp_pc_sel 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)
            ? 4U : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1384));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_csr_op 
        = ((0x6fU == (0x7fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 0U : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1037));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_valid_inst 
        = ((0x6fU == (0x7fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
           | ((0x67U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
              | ((3U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                 | ((0x4003U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                    | ((0x3003U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                       | ((0x1003U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                          | ((0x5003U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                             | ((0x2003U == (0x707fU 
                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                | ((0x6003U == (0x707fU 
                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                   | (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_215))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_590 
        = ((0x3003U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
           | ((0x1003U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
              | ((0x5003U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                 | ((0x2003U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                    | ((0x6003U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                       | ((0x37U == (0x7fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                          | ((0x17U == (0x7fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                             | ((0x1033U == (0xfe00707fU 
                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                | ((0x1013U == (0xfc00707fU 
                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                   | ((0x101bU == (0xfc00707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                      | ((0x103bU == 
                                          (0xfe00707fU 
                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                         | ((0x2033U 
                                             == (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                            | ((0x2013U 
                                                == 
                                                (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                               | ((0x3013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                  | ((0x3033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                     | ((0x40005033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                        | ((0x40005013U 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                           | (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_573))))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1240 
        = ((0x40005013U == (0xfc00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
           | ((0x4000501bU == (0xfc00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
              | ((0x4000503bU == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                 | ((0x5033U == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                    | ((0x5013U == (0xfc00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                       | ((0x501bU == (0xfc00707fU 
                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                          | ((0x503bU == (0xfe00707fU 
                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                             | ((0x40000033U == (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                | ((0x4000003bU == 
                                    (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                   | ((0x4033U == (0xfe00707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                      | ((0x4013U == 
                                          (0x707fU 
                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                         | ((0x6033U 
                                             == (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                            | ((0x6013U 
                                                == 
                                                (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                               | ((0x33U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                  | ((0x13U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                     | ((0x1bU 
                                                         == 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                        | ((0x3bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                           | (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1223))))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1314 
        = ((0x40005013U != (0xfc00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
           & ((0x4000501bU != (0xfc00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
              & ((0x4000503bU == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                 | ((0x5033U == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                    | ((0x5013U != (0xfc00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                       & ((0x501bU != (0xfc00707fU 
                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                          & ((0x503bU == (0xfe00707fU 
                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                             | ((0x40000033U == (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                | ((0x4000003bU == 
                                    (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                   | ((0x4033U == (0xfe00707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                      | ((0x4013U != 
                                          (0x707fU 
                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                         & ((0x6033U 
                                             == (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                            | ((0x6013U 
                                                != 
                                                (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                               & ((0x33U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                  | ((0x13U 
                                                      != 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                     & ((0x1bU 
                                                         != 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                        & ((0x3bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                           | (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1297))))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_control_hazard 
        = ((0U != (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__temp_pc_sel)) 
           & (5U != (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__temp_pc_sel)));
    vlTOPp->io_diff_is_valid = vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_valid_inst;
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1257 
        = ((0x4003U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
           | ((0x3003U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
              | ((0x1003U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                 | ((0x5003U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                    | ((0x2003U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                       | ((0x6003U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                          | ((0x37U != (0x7fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                             & ((0x17U != (0x7fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                & ((0x1033U == (0xfe00707fU 
                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                   | ((0x1013U == (0xfc00707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                      | ((0x101bU == 
                                          (0xfc00707fU 
                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                         | ((0x103bU 
                                             == (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                            | ((0x2033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                               | ((0x2013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                  | ((0x3013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                     | ((0x3033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                        | ((0x40005033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                           | (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1240))))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1331 
        = ((0x4003U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
           & ((0x3003U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
              & ((0x1003U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                 & ((0x5003U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                    & ((0x2003U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                       & ((0x6003U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                          & ((0x37U != (0x7fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                             & ((0x17U != (0x7fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                & ((0x1033U == (0xfe00707fU 
                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                   | ((0x1013U != (0xfc00707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                      & ((0x101bU != 
                                          (0xfc00707fU 
                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                         & ((0x103bU 
                                             == (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                            | ((0x2033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                               | ((0x2013U 
                                                   != 
                                                   (0x707fU 
                                                    & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                  & ((0x3013U 
                                                      != 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                     & ((0x3033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                        | ((0x40005033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                           | (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1314))))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1418 
        = ((((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_rd_addr) 
             == (0x1fU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
                          >> 0xfU))) & ((0x6fU != (0x7fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                        & ((0x67U == 
                                            (0x707fU 
                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                           | ((3U == 
                                               (0x707fU 
                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                              | (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1257))))) 
           | (((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_rd_addr) 
               == (0x1fU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
                            >> 0x14U))) & ((0x6fU != 
                                            (0x7fU 
                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                           & ((0x67U 
                                               != (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                              & ((3U 
                                                  != 
                                                  (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                 & (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1331))))));
    vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1413) 
           & (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1418));
    VL_EXTEND_WQ(66,64, __Vtemp61, vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_iim_ext);
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT___GEN_104[0U] 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)
            ? __Vtemp61[0U] : ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)
                                ? 0U : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)
                                         ? 0U : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_control_hazard)
                                                  ? 0U
                                                  : 
                                                 vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_dec_iim_ext[0U]))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT___GEN_104[1U] 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)
            ? __Vtemp61[1U] : ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)
                                ? 0U : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)
                                         ? 0U : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_control_hazard)
                                                  ? 0U
                                                  : 
                                                 vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_dec_iim_ext[1U]))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT___GEN_104[2U] 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)
            ? __Vtemp61[2U] : ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)
                                ? 0U : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)
                                         ? 0U : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_control_hazard)
                                                  ? 0U
                                                  : 
                                                 vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_dec_iim_ext[2U]))));
}

void Vtop::_initial__TOP__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_initial__TOP__2\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp69[3];
    // Body
    __Vtemp69[0U] = 0x2e747874U;
    __Vtemp69[1U] = 0x65737431U;
    __Vtemp69[2U] = 0x2e2f74U;
    VL_READMEM_N(true, 8, 134217728, 0, VL_CVT_PACK_STR_NW(3, __Vtemp69)
                 , vlTOPp->top__DOT__mymem__DOT__mem
                 , 0, ~VL_ULL(0));
}

void Vtop::_settle__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__3\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp72[4];
    WData/*127:0*/ __Vtemp73[4];
    WData/*127:0*/ __Vtemp76[4];
    WData/*127:0*/ __Vtemp77[4];
    WData/*127:0*/ __Vtemp78[4];
    WData/*95:0*/ __Vtemp81[3];
    WData/*95:0*/ __Vtemp82[3];
    WData/*95:0*/ __Vtemp83[3];
    WData/*95:0*/ __Vtemp84[3];
    WData/*95:0*/ __Vtemp85[3];
    WData/*95:0*/ __Vtemp88[3];
    WData/*95:0*/ __Vtemp91[3];
    WData/*95:0*/ __Vtemp98[3];
    WData/*95:0*/ __Vtemp99[3];
    WData/*95:0*/ __Vtemp100[3];
    WData/*127:0*/ __Vtemp103[4];
    WData/*127:0*/ __Vtemp104[4];
    WData/*127:0*/ __Vtemp105[4];
    WData/*127:0*/ __Vtemp107[4];
    WData/*127:0*/ __Vtemp108[4];
    WData/*95:0*/ __Vtemp111[3];
    WData/*95:0*/ __Vtemp112[3];
    WData/*95:0*/ __Vtemp114[3];
    // Body
    vlTOPp->io_diff_pc_data = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_pc;
    vlTOPp->io_diff_instr_in_wb = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_instr;
    vlTOPp->io_diff_mul_result_hi = (((QData)((IData)(
                                                      vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[2U])));
    vlTOPp->io_diff_mul_result_lo = (((QData)((IData)(
                                                      vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[0U])));
    __Vtemp72[0U] = ((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[1U] 
                      << 0x1fU) | (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[0U] 
                                   >> 1U));
    __Vtemp72[1U] = ((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[2U] 
                      << 0x1fU) | (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[1U] 
                                   >> 1U));
    __Vtemp72[2U] = ((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[3U] 
                      << 0x1fU) | (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[2U] 
                                   >> 1U));
    __Vtemp72[3U] = (0x7fffffffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[3U] 
                                    >> 1U));
    VL_EXTEND_WW(128,127, __Vtemp73, __Vtemp72);
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_129[0U] 
        = __Vtemp73[0U];
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_129[1U] 
        = __Vtemp73[1U];
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_129[2U] 
        = __Vtemp73[2U];
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_129[3U] 
        = __Vtemp73[3U];
    __Vtemp76[0U] = ((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_op2[1U] 
                      << 0x1fU) | (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_op2[0U] 
                                   >> 1U));
    __Vtemp76[1U] = ((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_op2[2U] 
                      << 0x1fU) | (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_op2[1U] 
                                   >> 1U));
    __Vtemp76[2U] = ((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_op2[3U] 
                      << 0x1fU) | (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_op2[2U] 
                                   >> 1U));
    __Vtemp76[3U] = (0x7fffffffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_op2[3U] 
                                    >> 1U));
    VL_EXTEND_WW(128,127, __Vtemp77, __Vtemp76);
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_138[0U] 
        = __Vtemp77[0U];
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_138[1U] 
        = __Vtemp77[1U];
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_138[2U] 
        = __Vtemp77[2U];
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_138[3U] 
        = __Vtemp77[3U];
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_17729 
        = (VL_ULL(1) + vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcycle);
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_17731 
        = (VL_ULL(1) + vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_minstret);
    VL_SUB_W(4, __Vtemp78, vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__rem_result, vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_op2);
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_132[0U] 
        = __Vtemp78[0U];
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_132[1U] 
        = __Vtemp78[1U];
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_132[2U] 
        = __Vtemp78[2U];
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_132[3U] 
        = __Vtemp78[3U];
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_130 
        = VL_GTE_W(4, vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__rem_result, vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_op2);
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1413 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_is_load) 
           | (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_is_csr));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__op1_is_word 
        = (((0x14U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel)) 
            | (0x13U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))) 
           | ((0x18U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel)) 
              | (0x17U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))));
    vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT___T_33 
        = ((((1U & (IData)((vlTOPp->top__DOT__mymem__DOT__temp_read_data 
                            >> 7U))) ? VL_ULL(0xffffffffffffff)
              : VL_ULL(0)) << 8U) | (QData)((IData)(
                                                    (0xffU 
                                                     & (IData)(vlTOPp->top__DOT__mymem__DOT__temp_read_data)))));
    vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT___T_62 
        = ((1U == (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__info_op))
            ? (QData)((IData)((0xffU & (IData)(vlTOPp->top__DOT__mymem__DOT__temp_read_data))))
            : ((2U == (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__info_op))
                ? ((((1U & (IData)((vlTOPp->top__DOT__mymem__DOT__temp_read_data 
                                    >> 0xfU))) ? VL_ULL(0xffffffffffff)
                      : VL_ULL(0)) << 0x10U) | (QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(vlTOPp->top__DOT__mymem__DOT__temp_read_data)))))
                : ((3U == (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__info_op))
                    ? (QData)((IData)((0xffffU & (IData)(vlTOPp->top__DOT__mymem__DOT__temp_read_data))))
                    : ((4U == (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__info_op))
                        ? (((QData)((IData)(((1U & (IData)(
                                                           (vlTOPp->top__DOT__mymem__DOT__temp_read_data 
                                                            >> 0x1fU)))
                                              ? 0xffffffffU
                                              : 0U))) 
                            << 0x20U) | (QData)((IData)(vlTOPp->top__DOT__mymem__DOT__temp_read_data)))
                        : ((5U == (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__info_op))
                            ? (QData)((IData)(vlTOPp->top__DOT__mymem__DOT__temp_read_data))
                            : vlTOPp->top__DOT__mymem__DOT__temp_read_data)))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_41 
        = ((0x11U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel)) 
           | (0x14U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_45 
        = ((0x15U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel)) 
           | (0x18U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_2 
        = ((0xdU == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel)) 
           | (0xeU == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fen 
        = ((((((((((((0xdU == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel)) 
                     | (0xeU == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))) 
                    | (0xfU == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))) 
                   | (0x10U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))) 
                  | (0x11U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))) 
                 | (0x12U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))) 
                | (0x13U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))) 
               | (0x14U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))) 
              | (0x15U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))) 
             | (0x16U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))) 
            | (0x17U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))) 
           | (0x18U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel)));
    vlTOPp->io_diff_is_retire = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_instr_valid;
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_114 
        = (0U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mdu_state));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_118 
        = (1U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mdu_state));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_120 
        = (0x7fU & ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__exe_cycles) 
                    - (IData)(1U)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_143 
        = (2U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mdu_state));
    vlTOPp->top__DOT__mymem__DOT___T_5 = (VL_ULL(1) 
                                          + vlTOPp->top__DOT__mymem__DOT__reg_mtime);
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Ffinish 
        = ((0U != (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mdu_state)) 
           & (1U != (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mdu_state)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_28 
        = (((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie) 
            << 7U) | ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie) 
                      << 3U));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT___T_11 
        = (0U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT___T_12 
        = (1U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT___T_13 
        = (2U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT___T_14 
        = (3U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state));
    vlTOPp->top__DOT__mymem__DOT__nextcnt = (0xffffU 
                                             & ((IData)(1U) 
                                                + (IData)(vlTOPp->top__DOT__mymem__DOT__cnt)));
    vlTOPp->top__DOT__mymem__DOT___T_1 = (0x28U == 
                                          (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlTOPp->top__DOT__mymem__DOT__cnt))));
    vlTOPp->top__DOT__mymem__DOT___T_9 = (0U == (IData)(vlTOPp->top__DOT__mymem__DOT__read_state));
    vlTOPp->top__DOT__mymem__DOT___T_10 = (1U == (IData)(vlTOPp->top__DOT__mymem__DOT__read_state));
    vlTOPp->top__DOT__mymem__DOT___T_62 = (2U == (IData)(vlTOPp->top__DOT__mymem__DOT__read_state));
    vlTOPp->top__DOT__mymem__DOT___GEN_0 = ((0x28U 
                                             == (0xffffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlTOPp->top__DOT__mymem__DOT__cnt))))
                                             ? (VL_ULL(1) 
                                                + vlTOPp->top__DOT__mymem__DOT__reg_mtime)
                                             : vlTOPp->top__DOT__mymem__DOT__reg_mtime);
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_ismret 
        = ((5U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op)) 
           & (0x302U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                   >> 0x14U))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall 
        = ((5U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op)) 
           & (0U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                               >> 0x14U))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak 
        = ((5U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op)) 
           & (1U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                               >> 0x14U))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__wire_csr_op 
        = ((((3U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op)) 
             | (4U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op))) 
            & (0U == (0x1fU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                               >> 0xfU)))) ? 1U : (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_256 
        = ((0U != (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op)) 
           & (5U != (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_174 
        = (((((((((((((((0xf11U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                              >> 0x14U))) 
                        | (0xf12U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                >> 0x14U)))) 
                       | (0xf13U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                               >> 0x14U)))) 
                      | (0xf14U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                              >> 0x14U)))) 
                     | (0x300U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                             >> 0x14U)))) 
                    | (0x301U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                            >> 0x14U)))) 
                   | (0x302U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                           >> 0x14U)))) 
                  | (0x303U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                          >> 0x14U)))) 
                 | (0x304U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                         >> 0x14U)))) 
                | (0x344U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                        >> 0x14U)))) 
               | (0x305U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                       >> 0x14U)))) 
              | (0x306U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) 
             | (0x340U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                     >> 0x14U)))) | 
            (0x341U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                  >> 0x14U)))) | (0x342U 
                                                  == 
                                                  (0xfffU 
                                                   & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                      >> 0x14U))));
    vlTOPp->top__DOT__mymem__DOT___T_63 = (0U == (IData)(vlTOPp->top__DOT__mymem__DOT__write_state));
    vlTOPp->top__DOT__mymem__DOT___T_64 = (1U == (IData)(vlTOPp->top__DOT__mymem__DOT__write_state));
    vlTOPp->top__DOT__mymem__DOT___T_131 = (2U == (IData)(vlTOPp->top__DOT__mymem__DOT__write_state));
    vlTOPp->io_diff_r_0 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0U];
    vlTOPp->io_diff_r_1 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [1U];
    vlTOPp->io_diff_r_2 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [2U];
    vlTOPp->io_diff_r_3 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [3U];
    vlTOPp->io_diff_r_4 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [4U];
    vlTOPp->io_diff_r_5 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [5U];
    vlTOPp->io_diff_r_6 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [6U];
    vlTOPp->io_diff_r_7 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [7U];
    vlTOPp->io_diff_r_8 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [8U];
    vlTOPp->io_diff_r_9 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [9U];
    vlTOPp->io_diff_r_10 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0xaU];
    vlTOPp->io_diff_r_11 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0xbU];
    vlTOPp->io_diff_r_12 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0xcU];
    vlTOPp->io_diff_r_13 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0xdU];
    vlTOPp->io_diff_r_14 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0xeU];
    vlTOPp->io_diff_r_15 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0xfU];
    vlTOPp->io_diff_r_16 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0x10U];
    vlTOPp->io_diff_r_17 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0x11U];
    vlTOPp->io_diff_r_18 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0x12U];
    vlTOPp->io_diff_r_19 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0x13U];
    vlTOPp->io_diff_r_20 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0x14U];
    vlTOPp->io_diff_r_21 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0x15U];
    vlTOPp->io_diff_r_22 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0x16U];
    vlTOPp->io_diff_r_23 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0x17U];
    vlTOPp->io_diff_r_24 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0x18U];
    vlTOPp->io_diff_r_25 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0x19U];
    vlTOPp->io_diff_r_26 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0x1aU];
    vlTOPp->io_diff_r_27 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0x1bU];
    vlTOPp->io_diff_r_28 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0x1cU];
    vlTOPp->io_diff_r_29 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0x1dU];
    vlTOPp->io_diff_r_30 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0x1eU];
    vlTOPp->io_diff_r_31 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
        [0x1fU];
    vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_axi4_arvalid 
        = (((IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__has_request) 
            & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__info_wen))) 
           & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__addr_recv)));
    vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT___T_13 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__has_request) 
           & (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__info_wen));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__add_res 
        = (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
           + vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source);
    vlTOPp->top__DOT__mycore__DOT__dpath_io_d2c_islt 
        = VL_LTS_IQQ(1,64,64, vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source, vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source);
    vlTOPp->top__DOT__mycore__DOT__dpath_io_d2c_isltu 
        = (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
           < vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source);
    vlTOPp->top__DOT__mycore__DOT__dpath_io_d2c_iseq 
        = (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
           == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source);
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT___T_145 
        = (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_pc 
           + vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_bim_ext);
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__wire_pc_jump_target 
        = (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_pc 
           + vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_jim_ext);
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__wire_pc_next_4 
        = (VL_ULL(4) + vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_if_pc);
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT___T_89 
        = ((0x1fU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
                     >> 0x14U)) == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rd_addr));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT___T_95 
        = ((0x1fU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
                     >> 0x14U)) == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rd_addr));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT___T_101 
        = ((0x1fU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
                     >> 0x14U)) == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_rd_addr));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile_io_rp2_data 
        = ((0U == (0x1fU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
                            >> 0x14U))) ? VL_ULL(0)
            : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs
           [(0x1fU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
                      >> 0x14U))]);
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_788 
        = ((0x4000003bU == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 1U : ((0x4033U == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                     ? 1U : ((0x4013U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 1U : ((0x6033U == (0xfe00707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                       ? 1U : ((0x6013U 
                                                == 
                                                (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                ? 1U
                                                : (
                                                   (0x33U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 1U
                                                    : 
                                                   ((0x13U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 1U
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 1U
                                                      : 
                                                     ((0x3bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 1U
                                                       : 
                                                      ((0x7033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 1U
                                                        : 
                                                       ((0x7013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 1U
                                                         : 
                                                        ((0x23U 
                                                          == 
                                                          (0x707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 1U
                                                          : 
                                                         ((0x3023U 
                                                           == 
                                                           (0x707fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                           ? 0xffU
                                                           : 
                                                          ((0x1023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                            ? 3U
                                                            : 
                                                           ((0x2023U 
                                                             == 
                                                             (0x707fU 
                                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                             ? 0xfU
                                                             : 1U)))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_dec_iim_ext[0U] 
        = ((0xfffff000U & ((IData)(((0x80000000U & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                                     ? VL_ULL(0x3fffffffffffff)
                                     : VL_ULL(0))) 
                           << 0xcU)) | (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
                                                  >> 0x14U)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_dec_iim_ext[1U] 
        = ((0xfffU & ((IData)(((0x80000000U & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                                ? VL_ULL(0x3fffffffffffff)
                                : VL_ULL(0))) >> 0x14U)) 
           | (0xfffff000U & ((IData)((((0x80000000U 
                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                                        ? VL_ULL(0x3fffffffffffff)
                                        : VL_ULL(0)) 
                                      >> 0x20U)) << 0xcU)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_dec_iim_ext[2U] 
        = (0xfffU & ((IData)((((0x80000000U & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                                ? VL_ULL(0x3fffffffffffff)
                                : VL_ULL(0)) >> 0x20U)) 
                     >> 0x14U));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_418 
        = ((0x4000003bU == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 0U : ((0x4033U == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                     ? 0U : ((0x4013U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 2U : ((0x6033U == (0xfe00707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                       ? 0U : ((0x6013U 
                                                == 
                                                (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                ? 2U
                                                : (
                                                   (0x33U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 0U
                                                    : 
                                                   ((0x13U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 2U
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 2U
                                                      : 
                                                     ((0x3bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 0U
                                                       : 
                                                      ((0x7033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 0U
                                                        : 
                                                       ((0x7013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 2U
                                                         : 
                                                        ((0x23U 
                                                          == 
                                                          (0x707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 3U
                                                          : 
                                                         ((0x3023U 
                                                           == 
                                                           (0x707fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                           ? 3U
                                                           : 
                                                          ((0x1023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                            ? 3U
                                                            : 
                                                           ((0x2023U 
                                                             == 
                                                             (0x707fU 
                                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                             ? 3U
                                                             : 0U)))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_924 
        = ((0x3023U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 0U : ((0x1023U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                     ? 0U : ((0x2023U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 0U : ((0x63U == (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                       ? 0U : ((0x5063U 
                                                == 
                                                (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                ? 0U
                                                : (
                                                   (0x7063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 0U
                                                    : 
                                                   ((0x4063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 0U
                                                     : 
                                                    ((0x6063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 0U
                                                      : 
                                                     ((0x1063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 0U
                                                       : 
                                                      ((0x3073U 
                                                        == 
                                                        (0x707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 3U
                                                        : 
                                                       ((0x7073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 3U
                                                         : 
                                                        ((0x2073U 
                                                          == 
                                                          (0x707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 3U
                                                          : 
                                                         ((0x6073U 
                                                           == 
                                                           (0x707fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                           ? 3U
                                                           : 
                                                          ((0x1073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                            ? 3U
                                                            : 
                                                           ((0x5073U 
                                                             == 
                                                             (0x707fU 
                                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                             ? 3U
                                                             : 0U)))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_643 
        = ((0x501bU != (0xfc00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
           & ((0x503bU != (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
              & ((0x40000033U != (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                 & ((0x4000003bU != (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                    & ((0x4033U != (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                       & ((0x4013U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                          & ((0x6033U != (0xfe00707fU 
                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                             & ((0x6013U != (0x707fU 
                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                & ((0x33U != (0xfe00707fU 
                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                   & ((0x13U != (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                      & ((0x1bU != 
                                          (0x707fU 
                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                         & ((0x3bU 
                                             != (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                            & ((0x7033U 
                                                != 
                                                (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                               & ((0x7013U 
                                                   != 
                                                   (0x707fU 
                                                    & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                  & ((0x23U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                     | ((0x3023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                        | ((0x1023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                           | (0x2023U 
                                                              == 
                                                              (0x707fU 
                                                               & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)))))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_332 
        = ((0x3023U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 0U : ((0x1023U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                     ? 0U : ((0x2023U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 0U : ((0x63U == (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                       ? 0U : ((0x5063U 
                                                == 
                                                (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                ? 0U
                                                : (
                                                   (0x7063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 0U
                                                    : 
                                                   ((0x4063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 0U
                                                     : 
                                                    ((0x6063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 0U
                                                      : 
                                                     ((0x1063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 0U
                                                       : 
                                                      ((0x3073U 
                                                        == 
                                                        (0x707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 0U
                                                        : 
                                                       ((0x7073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 1U
                                                         : 
                                                        ((0x2073U 
                                                          == 
                                                          (0x707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 0U
                                                          : 
                                                         ((0x6073U 
                                                           == 
                                                           (0x707fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                           ? 1U
                                                           : 
                                                          ((0x1073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                            ? 0U
                                                            : 
                                                           ((0x5073U 
                                                             == 
                                                             (0x707fU 
                                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                             ? 1U
                                                             : 0U)))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_460 
        = ((0xfU == (0xf00fffffU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 0U : ((0x100fU == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                     ? 0U : ((0x2000033U == (0xfe00707fU 
                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 0xdU : ((0x2001033U 
                                         == (0xfe00707fU 
                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                         ? 0xeU : (
                                                   (0x2002033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 0xfU
                                                    : 
                                                   ((0x2003033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 0x10U
                                                     : 
                                                    ((0x200003bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 0xdU
                                                      : 
                                                     ((0x2006033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 0x11U
                                                       : 
                                                      ((0x2007033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 0x12U
                                                        : 
                                                       ((0x200703bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 0x13U
                                                         : 
                                                        ((0x200603bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 0x14U
                                                          : 
                                                         ((0x2004033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                           ? 0x15U
                                                           : 
                                                          ((0x2005033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                            ? 0x16U
                                                            : 
                                                           ((0x200503bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                             ? 0x17U
                                                             : 
                                                            ((0x200403bU 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                              ? 0x18U
                                                              : 0U)))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1052 
        = ((0xfU == (0xf00fffffU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 0U : ((0x100fU == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                     ? 0U : ((0x2000033U == (0xfe00707fU 
                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 0U : ((0x2001033U == 
                                       (0xfe00707fU 
                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                       ? 0U : ((0x2002033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                ? 0U
                                                : (
                                                   (0x2003033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 0U
                                                    : 
                                                   ((0x200003bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 5U
                                                     : 
                                                    ((0x2006033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 0U
                                                      : 
                                                     ((0x2007033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 0U
                                                       : 
                                                      ((0x200703bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 5U
                                                        : 
                                                       ((0x200603bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 5U
                                                         : 
                                                        ((0x2004033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 0U
                                                          : 
                                                         ((0x2005033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                           ? 0U
                                                           : 
                                                          ((0x200503bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                            ? 5U
                                                            : 
                                                           ((0x200403bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                             ? 5U
                                                             : 0U)))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1144 
        = ((0x2023U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
           & ((0x63U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
              & ((0x5063U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                 & ((0x7063U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                    & ((0x4063U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                       & ((0x6063U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                          & ((0x1063U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                             & ((0x3073U != (0x707fU 
                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                & ((0x7073U != (0x707fU 
                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                   & ((0x2073U != (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                      & ((0x6073U != 
                                          (0x707fU 
                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                         & ((0x1073U 
                                             != (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                            & ((0x5073U 
                                                != 
                                                (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                               & ((0x100073U 
                                                   != vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
                                                  & ((0x73U 
                                                      != vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
                                                     & ((0x10500073U 
                                                         != vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
                                                        & ((0x10200073U 
                                                            != vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
                                                           & ((0x30200073U 
                                                               != vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
                                                              & ((0xfU 
                                                                  != 
                                                                  (0xf00fffffU 
                                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                                 & (0x100fU 
                                                                    == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))))))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_994 
        = ((0x5063U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 0U : ((0x7063U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                     ? 0U : ((0x4063U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 0U : ((0x6063U == (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                       ? 0U : ((0x1063U 
                                                == 
                                                (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                ? 0U
                                                : (
                                                   (0x3073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 3U
                                                    : 
                                                   ((0x7073U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 3U
                                                     : 
                                                    ((0x2073U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 4U
                                                      : 
                                                     ((0x6073U 
                                                       == 
                                                       (0x707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 4U
                                                       : 
                                                      ((0x1073U 
                                                        == 
                                                        (0x707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 2U
                                                        : 
                                                       ((0x5073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 2U
                                                         : 
                                                        ((0x100073U 
                                                          == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                                                          ? 5U
                                                          : 
                                                         ((0x73U 
                                                           == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                                                           ? 5U
                                                           : 
                                                          ((0x10500073U 
                                                            == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                                                            ? 0U
                                                            : 
                                                           ((0x10200073U 
                                                             == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                                                             ? 5U
                                                             : 
                                                            ((0x30200073U 
                                                              == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                                                              ? 5U
                                                              : 0U))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_162 
        = ((0x2000033U == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
           | ((0x2001033U == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
              | ((0x2002033U == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                 | ((0x2003033U == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                    | ((0x200003bU == (0xfe00707fU 
                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                       | ((0x2006033U == (0xfe00707fU 
                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                          | ((0x2007033U == (0xfe00707fU 
                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                             | ((0x200703bU == (0xfe00707fU 
                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                | ((0x200603bU == (0xfe00707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                   | ((0x2004033U == 
                                       (0xfe00707fU 
                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                      | ((0x2005033U 
                                          == (0xfe00707fU 
                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                         | ((0x200503bU 
                                             == (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                            | (0x200403bU 
                                               == (0xfe00707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_ports_0_rdata 
        = ((0U == (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__info_op))
            ? vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT___T_33
            : vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT___T_62);
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__op2_is_signed 
        = (((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_2) 
            | (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_41)) 
           | (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_45));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_4 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_2) 
           | (0xfU == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fexe_stall 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fen) 
           & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Ffinish)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_39 
        = (((QData)((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp)) 
            << 0xbU) | (QData)((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_28)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__write_illgal 
        = ((((2U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__wire_csr_op)) 
             | (3U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__wire_csr_op))) 
            | (4U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__wire_csr_op))) 
           & (3U == (3U & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                           >> 0x1eU))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_189 
        = ((((((((((((((((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_174) 
                         | (0x343U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                 >> 0x14U)))) 
                        | (0x3a0U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                >> 0x14U)))) 
                       | (0x3a1U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                               >> 0x14U)))) 
                      | (0xb00U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                              >> 0x14U)))) 
                     | (0xb02U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                             >> 0x14U)))) 
                    | (0x320U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                            >> 0x14U)))) 
                   | (0x3b0U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                           >> 0x14U)))) 
                  | (0x3b1U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                          >> 0x14U)))) 
                 | (0x3b2U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                         >> 0x14U)))) 
                | (0x3b3U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                        >> 0x14U)))) 
               | (0x3b4U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                       >> 0x14U)))) 
              | (0x3b5U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) 
             | (0x3b6U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                     >> 0x14U)))) | 
            (0x3b7U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                  >> 0x14U)))) | (0x3b8U 
                                                  == 
                                                  (0xfffU 
                                                   & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                      >> 0x14U))));
    vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_axi4_awvalid 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT___T_13) 
           & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__addr_recv)));
    vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_axi4_wvalid 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT___T_13) 
           & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__data_recv)));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu_io_EXE_actual_branch 
        = ((1U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
            ? ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath_io_d2c_iseq)
                ? 1U : 2U) : ((2U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
                               ? ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath_io_d2c_iseq)
                                   ? 2U : 1U) : ((5U 
                                                  == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
                                                  ? 
                                                 ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath_io_d2c_islt)
                                                   ? 2U
                                                   : 1U)
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
                                                   ? 
                                                  ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath_io_d2c_isltu)
                                                    ? 2U
                                                    : 1U)
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
                                                    ? 
                                                   ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath_io_d2c_islt)
                                                     ? 1U
                                                     : 2U)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
                                                     ? 
                                                    ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath_io_d2c_isltu)
                                                      ? 1U
                                                      : 2U)
                                                     : 0U))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_803 
        = ((0x101bU == (0xfc00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 1U : ((0x103bU == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                     ? 1U : ((0x2033U == (0xfe00707fU 
                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 1U : ((0x2013U == (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                       ? 1U : ((0x3013U 
                                                == 
                                                (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                ? 1U
                                                : (
                                                   (0x3033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 1U
                                                    : 
                                                   ((0x40005033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 1U
                                                     : 
                                                    ((0x40005013U 
                                                      == 
                                                      (0xfc00707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 1U
                                                      : 
                                                     ((0x4000501bU 
                                                       == 
                                                       (0xfc00707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 1U
                                                       : 
                                                      ((0x4000503bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 1U
                                                        : 
                                                       ((0x5033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 1U
                                                         : 
                                                        ((0x5013U 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 1U
                                                          : 
                                                         ((0x501bU 
                                                           == 
                                                           (0xfc00707fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                           ? 1U
                                                           : 
                                                          ((0x503bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                            ? 1U
                                                            : 
                                                           ((0x40000033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                             ? 1U
                                                             : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_788))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_433 
        = ((0x101bU == (0xfc00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 2U : ((0x103bU == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                     ? 0U : ((0x2033U == (0xfe00707fU 
                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 0U : ((0x2013U == (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                       ? 2U : ((0x3013U 
                                                == 
                                                (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                ? 2U
                                                : (
                                                   (0x3033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 0U
                                                    : 
                                                   ((0x40005033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 0U
                                                     : 
                                                    ((0x40005013U 
                                                      == 
                                                      (0xfc00707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 2U
                                                      : 
                                                     ((0x4000501bU 
                                                       == 
                                                       (0xfc00707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 2U
                                                       : 
                                                      ((0x4000503bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 0U
                                                        : 
                                                       ((0x5033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 0U
                                                         : 
                                                        ((0x5013U 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 2U
                                                          : 
                                                         ((0x501bU 
                                                           == 
                                                           (0xfc00707fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                           ? 2U
                                                           : 
                                                          ((0x503bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                            ? 0U
                                                            : 
                                                           ((0x40000033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                             ? 0U
                                                             : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_418))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_939 
        = ((0x501bU == (0xfc00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 0U : ((0x503bU == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                     ? 0U : ((0x40000033U == (0xfe00707fU 
                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 0U : ((0x4000003bU 
                                       == (0xfe00707fU 
                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                       ? 0U : ((0x4033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                ? 0U
                                                : (
                                                   (0x4013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 0U
                                                    : 
                                                   ((0x6033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 0U
                                                     : 
                                                    ((0x6013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 0U
                                                      : 
                                                     ((0x33U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 0U
                                                       : 
                                                      ((0x13U 
                                                        == 
                                                        (0x707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 0U
                                                        : 
                                                       ((0x1bU 
                                                         == 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 0U
                                                         : 
                                                        ((0x3bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 0U
                                                          : 
                                                         ((0x7033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                           ? 0U
                                                           : 
                                                          ((0x7013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                            ? 0U
                                                            : 
                                                           ((0x23U 
                                                             == 
                                                             (0x707fU 
                                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                             ? 0U
                                                             : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_924))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_659 
        = ((0x37U != (0x7fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
           & ((0x17U != (0x7fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
              & ((0x1033U != (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                 & ((0x1013U != (0xfc00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                    & ((0x101bU != (0xfc00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                       & ((0x103bU != (0xfe00707fU 
                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                          & ((0x2033U != (0xfe00707fU 
                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                             & ((0x2013U != (0x707fU 
                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                & ((0x3013U != (0x707fU 
                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                   & ((0x3033U != (0xfe00707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                      & ((0x40005033U 
                                          != (0xfe00707fU 
                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                         & ((0x40005013U 
                                             != (0xfc00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                            & ((0x4000501bU 
                                                != 
                                                (0xfc00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                               & ((0x4000503bU 
                                                   != 
                                                   (0xfe00707fU 
                                                    & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                  & ((0x5033U 
                                                      != 
                                                      (0xfe00707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                     & ((0x5013U 
                                                         != 
                                                         (0xfc00707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                        & (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_643)))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_347 
        = ((0x501bU == (0xfc00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 0U : ((0x503bU == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                     ? 0U : ((0x40000033U == (0xfe00707fU 
                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 0U : ((0x4000003bU 
                                       == (0xfe00707fU 
                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                       ? 0U : ((0x4033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                ? 0U
                                                : (
                                                   (0x4013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 0U
                                                    : 
                                                   ((0x6033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 0U
                                                     : 
                                                    ((0x6013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 0U
                                                      : 
                                                     ((0x33U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 0U
                                                       : 
                                                      ((0x13U 
                                                        == 
                                                        (0x707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 0U
                                                        : 
                                                       ((0x1bU 
                                                         == 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 0U
                                                         : 
                                                        ((0x3bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 0U
                                                          : 
                                                         ((0x7033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                           ? 0U
                                                           : 
                                                          ((0x7013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                            ? 0U
                                                            : 
                                                           ((0x23U 
                                                             == 
                                                             (0x707fU 
                                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                             ? 0U
                                                             : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_332))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_476 
        = ((0x5063U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 0U : ((0x7063U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                     ? 0U : ((0x4063U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 0U : ((0x6063U == (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                       ? 0U : ((0x1063U 
                                                == 
                                                (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                ? 0U
                                                : (
                                                   (0x3073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 0xcU
                                                    : 
                                                   ((0x7073U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 0xcU
                                                     : 
                                                    ((0x2073U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 0xcU
                                                      : 
                                                     ((0x6073U 
                                                       == 
                                                       (0x707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 0xcU
                                                       : 
                                                      ((0x1073U 
                                                        == 
                                                        (0x707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 0xcU
                                                        : 
                                                       ((0x5073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 0xcU
                                                         : 
                                                        ((0x100073U 
                                                          == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                                                          ? 0U
                                                          : 
                                                         ((0x73U 
                                                           == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                                                           ? 0U
                                                           : 
                                                          ((0x10500073U 
                                                            == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                                                            ? 0U
                                                            : 
                                                           ((0x10200073U 
                                                             == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                                                             ? 0U
                                                             : 
                                                            ((0x30200073U 
                                                              == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                                                              ? 0U
                                                              : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_460)))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1068 
        = ((0x5063U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 0U : ((0x7063U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                     ? 0U : ((0x4063U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 0U : ((0x6063U == (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                       ? 0U : ((0x1063U 
                                                == 
                                                (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                ? 0U
                                                : (
                                                   (0x3073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 0U
                                                    : 
                                                   ((0x7073U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 0U
                                                     : 
                                                    ((0x2073U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 0U
                                                      : 
                                                     ((0x6073U 
                                                       == 
                                                       (0x707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 0U
                                                       : 
                                                      ((0x1073U 
                                                        == 
                                                        (0x707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 0U
                                                        : 
                                                       ((0x5073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 0U
                                                         : 
                                                        ((0x100073U 
                                                          == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                                                          ? 0U
                                                          : 
                                                         ((0x73U 
                                                           == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                                                           ? 0U
                                                           : 
                                                          ((0x10500073U 
                                                            == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                                                            ? 0U
                                                            : 
                                                           ((0x10200073U 
                                                             == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                                                             ? 0U
                                                             : 
                                                            ((0x30200073U 
                                                              == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)
                                                              ? 0U
                                                              : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1052)))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1161 
        = ((0x501bU != (0xfc00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
           & ((0x503bU != (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
              & ((0x40000033U != (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                 & ((0x4000003bU != (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                    & ((0x4033U != (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                       & ((0x4013U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                          & ((0x6033U != (0xfe00707fU 
                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                             & ((0x6013U != (0x707fU 
                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                & ((0x33U != (0xfe00707fU 
                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                   & ((0x13U != (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                      & ((0x1bU != 
                                          (0x707fU 
                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                         & ((0x3bU 
                                             != (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                            & ((0x7033U 
                                                != 
                                                (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                               & ((0x7013U 
                                                   != 
                                                   (0x707fU 
                                                    & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                  & ((0x23U 
                                                      != 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                     & ((0x3023U 
                                                         != 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                        & ((0x1023U 
                                                            != 
                                                            (0x707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                           & (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1144))))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1009 
        = ((0x4033U == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 0U : ((0x4013U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                     ? 0U : ((0x6033U == (0xfe00707fU 
                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 0U : ((0x6013U == (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                       ? 0U : ((0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                ? 0U
                                                : (
                                                   (0x13U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 0U
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 0U
                                                     : 
                                                    ((0x3bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 0U
                                                      : 
                                                     ((0x7033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 0U
                                                       : 
                                                      ((0x7013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 0U
                                                        : 
                                                       ((0x23U 
                                                         == 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 0U
                                                         : 
                                                        ((0x3023U 
                                                          == 
                                                          (0x707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 0U
                                                          : 
                                                         ((0x1023U 
                                                           == 
                                                           (0x707fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                           ? 0U
                                                           : 
                                                          ((0x2023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                            ? 0U
                                                            : 
                                                           ((0x63U 
                                                             == 
                                                             (0x707fU 
                                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                             ? 0U
                                                             : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_994))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_181 
        = ((0x63U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
           | ((0x5063U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
              | ((0x7063U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                 | ((0x4063U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                    | ((0x6063U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                       | ((0x1063U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                          | ((0x3073U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                             | ((0x7073U == (0x707fU 
                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                | ((0x2073U == (0x707fU 
                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                   | ((0x6073U == (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                      | ((0x1073U == 
                                          (0x707fU 
                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                         | ((0x5073U 
                                             == (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                            | ((0x100073U 
                                                == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
                                               | ((0x73U 
                                                   == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
                                                  | ((0x10500073U 
                                                      == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
                                                     | ((0x10200073U 
                                                         == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
                                                        | ((0x30200073U 
                                                            == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
                                                           | ((0xfU 
                                                               == 
                                                               (0xf00fffffU 
                                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                              | ((0x100fU 
                                                                  == vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
                                                                 | (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_162))))))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_539 
        = ((0x100073U != vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
           & ((0x73U != vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
              & ((0x10500073U != vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
                 & ((0x10200073U != vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
                    & ((0x30200073U != vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
                       & ((0xfU != (0xf00fffffU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                          & ((0x100fU != vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr) 
                             & (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_162))))))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__wire_pc_bpu_target 
        = (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_if_pc 
           + ((((1U & (IData)((vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_ports_0_rdata 
                               >> 0x1fU))) ? VL_ULL(0x7ffffffffffff)
                 : VL_ULL(0)) << 0xdU) | (QData)((IData)(
                                                         ((0x1000U 
                                                           & ((IData)(
                                                                      (vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_ports_0_rdata 
                                                                       >> 0x1fU)) 
                                                              << 0xcU)) 
                                                          | ((0x800U 
                                                              & ((IData)(
                                                                         (vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_ports_0_rdata 
                                                                          >> 7U)) 
                                                                 << 0xbU)) 
                                                             | ((0x7e0U 
                                                                 & ((IData)(
                                                                            (vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_ports_0_rdata 
                                                                             >> 0x19U)) 
                                                                    << 5U)) 
                                                                | (0x1eU 
                                                                   & ((IData)(
                                                                              (vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_ports_0_rdata 
                                                                               >> 8U)) 
                                                                      << 1U)))))))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__op2_is_neg 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__op1_is_word)
            ? ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__op2_is_signed) 
               & (IData)((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source 
                          >> 0x1fU))) : ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__op2_is_signed) 
                                         & (IData)(
                                                   (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source 
                                                    >> 0x3fU))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_6 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_4) 
           | (0x10U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__op1_is_signed 
        = (((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_4) 
            | (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_41)) 
           | (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_45));
    vlTOPp->io_diff_alu_exe_stall = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fexe_stall;
    vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__data_back 
        = (((IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__has_request) 
            & (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__addr_recv)) 
           & ((((0U != (IData)(vlTOPp->top__DOT__mymem__DOT__read_state)) 
                & ((1U != (IData)(vlTOPp->top__DOT__mymem__DOT__read_state)) 
                   & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fexe_stall)))) 
               & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fexe_stall))) 
              | (((0U != (IData)(vlTOPp->top__DOT__mymem__DOT__write_state)) 
                  & ((1U != (IData)(vlTOPp->top__DOT__mymem__DOT__write_state)) 
                     & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fexe_stall)))) 
                 & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fexe_stall)))));
    vlTOPp->io_diff_mstatus = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_39;
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9396 
        = ((((((((((0x300U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                         >> 0x14U)))
                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_39
                    : VL_ULL(0)) | ((0x301U == (0xfffU 
                                                & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                   >> 0x14U)))
                                     ? VL_ULL(0x8000000000001100)
                                     : VL_ULL(0))) 
                 | ((0x304U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                          >> 0x14U)))
                     ? (QData)((IData)((((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mie_mti) 
                                         << 7U) | ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mie_msi) 
                                                   << 3U))))
                     : VL_ULL(0))) | ((0x344U == (0xfffU 
                                                  & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                     >> 0x14U)))
                                       ? (QData)((IData)(
                                                         (((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mip_mti) 
                                                           << 7U) 
                                                          | ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mip_msi) 
                                                             << 3U))))
                                       : VL_ULL(0))) 
               | ((0x305U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                        >> 0x14U)))
                   ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtvec
                   : VL_ULL(0))) | ((0x340U == (0xfffU 
                                                & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                   >> 0x14U)))
                                     ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mscratch
                                     : VL_ULL(0))) 
             | ((0x341U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U))) ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc
                 : VL_ULL(0))) | ((0x342U == (0xfffU 
                                              & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                 >> 0x14U)))
                                   ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcause
                                   : VL_ULL(0))) | 
           ((0x343U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                  >> 0x14U))) ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtval
             : VL_ULL(0)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_204 
        = ((((((((((((((((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_189) 
                         | (0x3b9U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                 >> 0x14U)))) 
                        | (0x3baU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                >> 0x14U)))) 
                       | (0x3bbU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                               >> 0x14U)))) 
                      | (0x3bcU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                              >> 0x14U)))) 
                     | (0x3bdU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                             >> 0x14U)))) 
                    | (0x3beU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                            >> 0x14U)))) 
                   | (0x3bfU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                           >> 0x14U)))) 
                  | (0xb03U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                          >> 0x14U)))) 
                 | (0xb04U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                         >> 0x14U)))) 
                | (0xb05U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                        >> 0x14U)))) 
               | (0xb06U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                       >> 0x14U)))) 
              | (0xb07U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) 
             | (0xb08U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                     >> 0x14U)))) | 
            (0xb09U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                  >> 0x14U)))) | (0xb0aU 
                                                  == 
                                                  (0xfffU 
                                                   & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                      >> 0x14U))));
    vlTOPp->top__DOT__mymem__DOT__wire_wstrb = ((0U 
                                                 == (IData)(vlTOPp->top__DOT__mymem__DOT__write_state))
                                                 ? 0U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlTOPp->top__DOT__mymem__DOT__write_state))
                                                  ? 
                                                 ((IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_axi4_wvalid)
                                                   ? (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__info_mask)
                                                   : 0U)
                                                  : 0U));
    vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel 
        = ((0x6fU == (0x7fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 0U : ((0x67U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                     ? 0U : ((3U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 2U : ((0x4003U == (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                       ? 2U : ((0x3003U 
                                                == 
                                                (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                ? 2U
                                                : (
                                                   (0x1003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 2U
                                                    : 
                                                   ((0x5003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 2U
                                                     : 
                                                    ((0x2003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 2U
                                                      : 
                                                     ((0x6003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 2U
                                                       : 
                                                      ((0x37U 
                                                        == 
                                                        (0x7fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 0U
                                                        : 
                                                       ((0x17U 
                                                         == 
                                                         (0x7fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 1U
                                                         : 
                                                        ((0x1033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 0U
                                                          : 
                                                         ((0x1013U 
                                                           == 
                                                           (0xfc00707fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                           ? 2U
                                                           : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_433))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_954 
        = ((0x17U == (0x7fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 0U : ((0x1033U == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                     ? 0U : ((0x1013U == (0xfc00707fU 
                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 0U : ((0x101bU == (0xfc00707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                       ? 0U : ((0x103bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                ? 0U
                                                : (
                                                   (0x2033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 0U
                                                    : 
                                                   ((0x2013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 0U
                                                     : 
                                                    ((0x3013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 0U
                                                      : 
                                                     ((0x3033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 0U
                                                       : 
                                                      ((0x40005033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 0U
                                                        : 
                                                       ((0x40005013U 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 0U
                                                         : 
                                                        ((0x4000501bU 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 0U
                                                          : 
                                                         ((0x4000503bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                           ? 0U
                                                           : 
                                                          ((0x5033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                            ? 0U
                                                            : 
                                                           ((0x5013U 
                                                             == 
                                                             (0xfc00707fU 
                                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                             ? 0U
                                                             : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_939))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_667 
        = ((0x67U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
           & ((3U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
              | ((0x4003U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                 | ((0x3003U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                    | ((0x1003U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                       | ((0x5003U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                          | ((0x2003U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                             | ((0x6003U == (0x707fU 
                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                | (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_659)))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_889 
        = ((0x67U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
           & ((3U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
              & ((0x4003U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                 & ((0x3003U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                    & ((0x1003U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                       & ((0x5003U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                          & ((0x2003U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                             & ((0x6003U != (0x707fU 
                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                & (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_659)))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_362 
        = ((0x17U == (0x7fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 2U : ((0x1033U == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                     ? 0U : ((0x1013U == (0xfc00707fU 
                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 0U : ((0x101bU == (0xfc00707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                       ? 0U : ((0x103bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                ? 0U
                                                : (
                                                   (0x2033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 0U
                                                    : 
                                                   ((0x2013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 0U
                                                     : 
                                                    ((0x3013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 0U
                                                      : 
                                                     ((0x3033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 0U
                                                       : 
                                                      ((0x40005033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 0U
                                                        : 
                                                       ((0x40005013U 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 0U
                                                         : 
                                                        ((0x4000501bU 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 0U
                                                          : 
                                                         ((0x4000503bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                           ? 0U
                                                           : 
                                                          ((0x5033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                            ? 0U
                                                            : 
                                                           ((0x5013U 
                                                             == 
                                                             (0xfc00707fU 
                                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                             ? 0U
                                                             : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_347))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_491 
        = ((0x4033U == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 4U : ((0x4013U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                     ? 4U : ((0x6033U == (0xfe00707fU 
                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 3U : ((0x6013U == (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                       ? 3U : ((0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                ? 0U
                                                : (
                                                   (0x13U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 0U
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 0U
                                                     : 
                                                    ((0x3bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 0U
                                                      : 
                                                     ((0x7033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 2U
                                                       : 
                                                      ((0x7013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 2U
                                                        : 
                                                       ((0x23U 
                                                         == 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 0U
                                                         : 
                                                        ((0x3023U 
                                                          == 
                                                          (0x707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 0U
                                                          : 
                                                         ((0x1023U 
                                                           == 
                                                           (0x707fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                           ? 0U
                                                           : 
                                                          ((0x2023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                            ? 0U
                                                            : 
                                                           ((0x63U 
                                                             == 
                                                             (0x707fU 
                                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                             ? 0U
                                                             : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_476))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1083 
        = ((0x4033U == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 0U : ((0x4013U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                     ? 0U : ((0x6033U == (0xfe00707fU 
                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 0U : ((0x6013U == (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                       ? 0U : ((0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                ? 0U
                                                : (
                                                   (0x13U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 0U
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 5U
                                                     : 
                                                    ((0x3bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 5U
                                                      : 
                                                     ((0x7033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 0U
                                                       : 
                                                      ((0x7013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 0U
                                                        : 
                                                       ((0x23U 
                                                         == 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 0U
                                                         : 
                                                        ((0x3023U 
                                                          == 
                                                          (0x707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 0U
                                                          : 
                                                         ((0x1023U 
                                                           == 
                                                           (0x707fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                           ? 0U
                                                           : 
                                                          ((0x2023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                            ? 0U
                                                            : 
                                                           ((0x63U 
                                                             == 
                                                             (0x707fU 
                                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                             ? 0U
                                                             : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1068))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1178 
        = ((0x6003U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
           & ((0x37U != (0x7fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
              & ((0x17U != (0x7fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                 & ((0x1033U != (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                    & ((0x1013U != (0xfc00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                       & ((0x101bU != (0xfc00707fU 
                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                          & ((0x103bU != (0xfe00707fU 
                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                             & ((0x2033U != (0xfe00707fU 
                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                & ((0x2013U != (0x707fU 
                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                   & ((0x3013U != (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                      & ((0x3033U != 
                                          (0xfe00707fU 
                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                         & ((0x40005033U 
                                             != (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                            & ((0x40005013U 
                                                != 
                                                (0xfc00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                               & ((0x4000501bU 
                                                   != 
                                                   (0xfc00707fU 
                                                    & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                  & ((0x4000503bU 
                                                      != 
                                                      (0xfe00707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                     & ((0x5033U 
                                                         != 
                                                         (0xfe00707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                        & ((0x5013U 
                                                            != 
                                                            (0xfc00707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                           & (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1161))))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1024 
        = ((0x103bU == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 0U : ((0x2033U == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                     ? 0U : ((0x2013U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 0U : ((0x3013U == (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                       ? 0U : ((0x3033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                ? 0U
                                                : (
                                                   (0x40005033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 0U
                                                    : 
                                                   ((0x40005013U 
                                                     == 
                                                     (0xfc00707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 0U
                                                     : 
                                                    ((0x4000501bU 
                                                      == 
                                                      (0xfc00707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 0U
                                                      : 
                                                     ((0x4000503bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 0U
                                                       : 
                                                      ((0x5033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 0U
                                                        : 
                                                       ((0x5013U 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 0U
                                                         : 
                                                        ((0x501bU 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 0U
                                                          : 
                                                         ((0x503bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                           ? 0U
                                                           : 
                                                          ((0x40000033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                            ? 0U
                                                            : 
                                                           ((0x4000003bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                             ? 0U
                                                             : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1009))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_198 
        = ((0x503bU == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
           | ((0x40000033U == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
              | ((0x4000003bU == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                 | ((0x4033U == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                    | ((0x4013U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                       | ((0x6033U == (0xfe00707fU 
                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                          | ((0x6013U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                             | ((0x33U == (0xfe00707fU 
                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                | ((0x13U == (0x707fU 
                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                   | ((0x1bU == (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                      | ((0x3bU == 
                                          (0xfe00707fU 
                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                         | ((0x7033U 
                                             == (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                            | ((0x7013U 
                                                == 
                                                (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                               | ((0x23U 
                                                   == 
                                                   (0x707fU 
                                                    & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                  | ((0x3023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                     | ((0x1023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                        | ((0x2023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                           | (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_181))))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_556 
        = ((0x7013U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
           | ((0x23U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
              & ((0x3023U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                 & ((0x1023U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                    & ((0x2023U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                       & ((0x63U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                          & ((0x5063U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                             & ((0x7063U != (0x707fU 
                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                & ((0x4063U != (0x707fU 
                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                   & ((0x6063U != (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                      & ((0x1063U != 
                                          (0x707fU 
                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                         & ((0x3073U 
                                             == (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                            | ((0x7073U 
                                                == 
                                                (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                               | ((0x2073U 
                                                   == 
                                                   (0x707fU 
                                                    & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                  | ((0x6073U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                     | ((0x1073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                        | ((0x5073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                           | (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_539))))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1206 
        = ((0x5073U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
           & (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_539));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__abs_op2 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__op1_is_word)
            ? ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__op2_is_neg)
                ? (QData)((IData)(((IData)(1U) + (~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)))))
                : (QData)((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)))
            : ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__op2_is_neg)
                ? (VL_ULL(1) + (~ vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source))
                : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__is_div_op 
        = ((((((((((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_6) 
                   | (0x14U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))) 
                  | (0x11U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))) 
                 | (0x12U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))) 
                | (0x13U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))) 
               | (0x15U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))) 
              | (0x16U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))) 
             | (0x17U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))) 
            | (0x18U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))) 
           & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_6)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__op1_is_neg 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__op1_is_word)
            ? ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__op1_is_signed) 
               & (IData)((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
                          >> 0x1fU))) : ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__op1_is_signed) 
                                         & (IData)(
                                                   (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
                                                    >> 0x3fU))));
    vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT___GEN_2 
        = (1U & ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__has_request)) 
                 | ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__data_back)) 
                    & (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__has_request))));
    vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_ports_0_data_valid 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__data_back) 
           & (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__do_inst_request));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1422 
        = (1U & ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_en)) 
                 | ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_en) 
                    & ((IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__data_back) 
                       & (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__do_data_request)))));
    vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT___GEN_25 
        = ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__data_back)) 
           & (((IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_axi4_wvalid) 
               & ((0U != (IData)(vlTOPp->top__DOT__mymem__DOT__write_state)) 
                  & (1U == (IData)(vlTOPp->top__DOT__mymem__DOT__write_state)))) 
              | (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__data_recv)));
    vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT___GEN_24 
        = ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__data_back)) 
           & ((((IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_axi4_awvalid) 
                & (0U == (IData)(vlTOPp->top__DOT__mymem__DOT__write_state))) 
               | ((IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_axi4_arvalid) 
                  & (0U == (IData)(vlTOPp->top__DOT__mymem__DOT__read_state)))) 
              | (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge__DOT__addr_recv)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9406 
        = ((((((((((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9396 
                    | ((0x3a0U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                             >> 0x14U)))
                        ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_pmpcfg0
                        : VL_ULL(0))) | ((0x3a1U == 
                                          (0xfffU & 
                                           (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                            >> 0x14U)))
                                          ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_pmpcfg1
                                          : VL_ULL(0))) 
                  | ((0xb00U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                           >> 0x14U)))
                      ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcycle
                      : VL_ULL(0))) | ((0xb02U == (0xfffU 
                                                   & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                      >> 0x14U)))
                                        ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_minstret
                                        : VL_ULL(0))) 
                | ((0x320U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                         >> 0x14U)))
                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcounterinhibit
                    : VL_ULL(0))) | ((0x3b0U == (0xfffU 
                                                 & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                    >> 0x14U)))
                                      ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_0
                                      : VL_ULL(0))) 
              | ((0x3b1U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                       >> 0x14U))) ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_1
                  : VL_ULL(0))) | ((0x3b2U == (0xfffU 
                                               & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                  >> 0x14U)))
                                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_2
                                    : VL_ULL(0))) | 
            ((0x3b3U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                   >> 0x14U))) ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_3
              : VL_ULL(0))) | ((0x3b4U == (0xfffU & 
                                           (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                            >> 0x14U)))
                                ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_4
                                : VL_ULL(0)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_219 
        = ((((((((((((((((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_204) 
                         | (0xb0bU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                 >> 0x14U)))) 
                        | (0xb0cU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                >> 0x14U)))) 
                       | (0xb0dU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                               >> 0x14U)))) 
                      | (0xb0eU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                              >> 0x14U)))) 
                     | (0xb0fU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                             >> 0x14U)))) 
                    | (0xb10U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                            >> 0x14U)))) 
                   | (0xb11U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                           >> 0x14U)))) 
                  | (0xb12U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                          >> 0x14U)))) 
                 | (0xb13U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                         >> 0x14U)))) 
                | (0xb14U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                        >> 0x14U)))) 
               | (0xb15U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                       >> 0x14U)))) 
              | (0xb16U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) 
             | (0xb17U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                     >> 0x14U)))) | 
            (0xb18U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                  >> 0x14U)))) | (0xb19U 
                                                  == 
                                                  (0xfffU 
                                                   & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                      >> 0x14U))));
    vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_op1_sel 
        = ((0x6fU == (0x7fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 0U : ((0x67U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                     ? 0U : ((3U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 0U : ((0x4003U == (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                       ? 0U : ((0x3003U 
                                                == 
                                                (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                ? 0U
                                                : (
                                                   (0x1003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 0U
                                                    : 
                                                   ((0x5003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 0U
                                                     : 
                                                    ((0x2003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 0U
                                                      : 
                                                     ((0x6003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 0U
                                                       : 
                                                      ((0x37U 
                                                        == 
                                                        (0x7fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 2U
                                                        : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_362)))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_506 
        = ((0x103bU == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 0x19U : ((0x2033U == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                        ? 6U : ((0x2013U == (0x707fU 
                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                 ? 6U : ((0x3013U == 
                                          (0x707fU 
                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                          ? 7U : ((0x3033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                   ? 7U
                                                   : 
                                                  ((0x40005033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 8U
                                                    : 
                                                   ((0x40005013U 
                                                     == 
                                                     (0xfc00707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 8U
                                                     : 
                                                    ((0x4000501bU 
                                                      == 
                                                      (0xfc00707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 9U
                                                      : 
                                                     ((0x4000503bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 9U
                                                       : 
                                                      ((0x5033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 0xaU
                                                        : 
                                                       ((0x5013U 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 0xaU
                                                         : 
                                                        ((0x501bU 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 0xbU
                                                          : 
                                                         ((0x503bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                           ? 0xbU
                                                           : 
                                                          ((0x40000033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                            ? 1U
                                                            : 
                                                           ((0x4000003bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                             ? 1U
                                                             : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_491))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1098 
        = ((0x103bU == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 5U : ((0x2033U == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                     ? 0U : ((0x2013U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 0U : ((0x3013U == (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                       ? 0U : ((0x3033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                ? 0U
                                                : (
                                                   (0x40005033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 0U
                                                    : 
                                                   ((0x40005013U 
                                                     == 
                                                     (0xfc00707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 0U
                                                     : 
                                                    ((0x4000501bU 
                                                      == 
                                                      (0xfc00707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 5U
                                                      : 
                                                     ((0x4000503bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 5U
                                                       : 
                                                      ((0x5033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 0U
                                                        : 
                                                       ((0x5013U 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 0U
                                                         : 
                                                        ((0x501bU 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 5U
                                                          : 
                                                         ((0x503bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                           ? 5U
                                                           : 
                                                          ((0x40000033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                            ? 0U
                                                            : 
                                                           ((0x4000003bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                             ? 5U
                                                             : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1083))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_if_kill 
        = (((0x6fU != (0x7fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
            & ((0x67U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
               & ((3U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                  & ((0x4003U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                     & ((0x3003U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                        & ((0x1003U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                           & ((0x5003U != (0x707fU 
                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                              & ((0x2003U != (0x707fU 
                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                 & (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1178))))))))) 
           | (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_is_fencei));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1037 
        = ((0x67U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 0U : ((3U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                     ? 0U : ((0x4003U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                              ? 0U : ((0x3003U == (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                       ? 0U : ((0x1003U 
                                                == 
                                                (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                ? 0U
                                                : (
                                                   (0x5003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                    ? 0U
                                                    : 
                                                   ((0x2003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                     ? 0U
                                                     : 
                                                    ((0x6003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                      ? 0U
                                                      : 
                                                     ((0x37U 
                                                       == 
                                                       (0x7fU 
                                                        & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                       ? 0U
                                                       : 
                                                      ((0x17U 
                                                        == 
                                                        (0x7fU 
                                                         & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                        ? 0U
                                                        : 
                                                       ((0x1033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                         ? 0U
                                                         : 
                                                        ((0x1013U 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                          ? 0U
                                                          : 
                                                         ((0x101bU 
                                                           == 
                                                           (0xfc00707fU 
                                                            & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
                                                           ? 0U
                                                           : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1024))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_215 
        = ((0x37U == (0x7fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
           | ((0x17U == (0x7fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
              | ((0x1033U == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                 | ((0x1013U == (0xfc00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                    | ((0x101bU == (0xfc00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                       | ((0x103bU == (0xfe00707fU 
                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                          | ((0x2033U == (0xfe00707fU 
                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                             | ((0x2013U == (0x707fU 
                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                | ((0x3013U == (0x707fU 
                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                   | ((0x3033U == (0xfe00707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                      | ((0x40005033U 
                                          == (0xfe00707fU 
                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                         | ((0x40005013U 
                                             == (0xfc00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                            | ((0x4000501bU 
                                                == 
                                                (0xfc00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                               | ((0x4000503bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                  | ((0x5033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                     | ((0x5013U 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                        | ((0x501bU 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                           | (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_198))))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_573 
        = ((0x4000501bU == (0xfc00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
           | ((0x4000503bU == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
              | ((0x5033U == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                 | ((0x5013U == (0xfc00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                    | ((0x501bU == (0xfc00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                       | ((0x503bU == (0xfe00707fU 
                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                          | ((0x40000033U == (0xfe00707fU 
                                              & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                             | ((0x4000003bU == (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                | ((0x4033U == (0xfe00707fU 
                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                   | ((0x4013U == (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                      | ((0x6033U == 
                                          (0xfe00707fU 
                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                         | ((0x6013U 
                                             == (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                            | ((0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                               | ((0x13U 
                                                   == 
                                                   (0x707fU 
                                                    & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                  | ((0x1bU 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                     | ((0x3bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                        | ((0x7033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                           | (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_556))))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1223 
        = ((0x7033U == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
           | ((0x7013U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
              | ((0x23U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                 | ((0x3023U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                    | ((0x1023U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                       | ((0x2023U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                          | ((0x63U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                             | ((0x5063U == (0x707fU 
                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                | ((0x7063U == (0x707fU 
                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                   | ((0x4063U == (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                      | ((0x6063U == 
                                          (0x707fU 
                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                         | ((0x1063U 
                                             == (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                            | ((0x3073U 
                                                == 
                                                (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                               | ((0x7073U 
                                                   != 
                                                   (0x707fU 
                                                    & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                  & ((0x2073U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                     | ((0x6073U 
                                                         != 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                        & ((0x1073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                           | (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1206))))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1297 
        = ((0x7033U == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
           | ((0x7013U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
              & ((0x23U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                 | ((0x3023U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                    | ((0x1023U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                       | ((0x2023U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                          | ((0x63U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                             | ((0x5063U == (0x707fU 
                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                | ((0x7063U == (0x707fU 
                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                   | ((0x4063U == (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                      | ((0x6063U == 
                                          (0x707fU 
                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                         | ((0x1063U 
                                             == (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                            | ((0x3073U 
                                                != 
                                                (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                               & ((0x7073U 
                                                   != 
                                                   (0x707fU 
                                                    & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                  & ((0x2073U 
                                                      != 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                     & ((0x6073U 
                                                         != 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                        & ((0x1073U 
                                                            != 
                                                            (0x707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                           & (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1206))))))))))))))))));
    vlTOPp->io_diff_abs_op2 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__abs_op2;
    VL_EXTEND_WQ(65,64, __Vtemp81, ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fen)
                                     ? VL_ULL(0) : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_result));
    VL_EXTEND_WQ(65,64, __Vtemp82, vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_result);
    __Vtemp83[0U] = 1U;
    __Vtemp83[1U] = 0U;
    __Vtemp83[2U] = 0U;
    __Vtemp84[0U] = (0xfffffffeU & ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_result) 
                                    << 1U));
    __Vtemp84[1U] = ((1U & ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_result) 
                            >> 0x1fU)) | (0xfffffffeU 
                                          & ((IData)(
                                                     (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_result 
                                                      >> 0x20U)) 
                                             << 1U)));
    __Vtemp84[2U] = (1U & ((IData)((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_result 
                                    >> 0x20U)) >> 0x1fU));
    VL_ADD_W(3, __Vtemp85, __Vtemp83, __Vtemp84);
    VL_EXTEND_WQ(65,64, __Vtemp88, vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_result);
    VL_EXTEND_WQ(65,64, __Vtemp91, vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_result);
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___GEN_38[0U] 
        = ((0U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mdu_state))
            ? __Vtemp81[0U] : ((1U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mdu_state))
                                ? ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_6)
                                    ? __Vtemp82[0U]
                                    : ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__is_div_op)
                                        ? ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_130)
                                            ? __Vtemp85[0U]
                                            : (0xfffffffeU 
                                               & ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_result) 
                                                  << 1U)))
                                        : __Vtemp88[0U]))
                                : __Vtemp91[0U]));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___GEN_38[1U] 
        = ((0U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mdu_state))
            ? __Vtemp81[1U] : ((1U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mdu_state))
                                ? ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_6)
                                    ? __Vtemp82[1U]
                                    : ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__is_div_op)
                                        ? ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_130)
                                            ? __Vtemp85[1U]
                                            : ((1U 
                                                & ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_result) 
                                                   >> 0x1fU)) 
                                               | (0xfffffffeU 
                                                  & ((IData)(
                                                             (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_result 
                                                              >> 0x20U)) 
                                                     << 1U))))
                                        : __Vtemp88[1U]))
                                : __Vtemp91[1U]));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___GEN_38[2U] 
        = (1U & ((0U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mdu_state))
                  ? __Vtemp81[2U] : ((1U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mdu_state))
                                      ? ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_6)
                                          ? __Vtemp82[2U]
                                          : ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__is_div_op)
                                              ? ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_130)
                                                  ? 
                                                 __Vtemp85[2U]
                                                  : 
                                                 (1U 
                                                  & ((IData)(
                                                             (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_result 
                                                              >> 0x20U)) 
                                                     >> 0x1fU)))
                                              : __Vtemp88[2U]))
                                      : __Vtemp91[2U])));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__abs_op1 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__op1_is_word)
            ? ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__op1_is_neg)
                ? (QData)((IData)(((IData)(1U) + (~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source)))))
                : (QData)((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source)))
            : ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__op1_is_neg)
                ? (VL_ULL(1) + (~ vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source))
                : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_70 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__op1_is_neg) 
           == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__op2_is_neg));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT___T_169 
        = (1U & ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1422)) 
                 & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_ports_0_data_valid))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT___T_171 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1422) 
           & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_ports_0_data_valid)));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall 
        = (1U & ((~ (IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_ports_0_data_valid)) 
                 | (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1422))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9416 
        = ((((((((((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9406 
                    | ((0x3b5U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                             >> 0x14U)))
                        ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_5
                        : VL_ULL(0))) | ((0x3b6U == 
                                          (0xfffU & 
                                           (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                            >> 0x14U)))
                                          ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_6
                                          : VL_ULL(0))) 
                  | ((0x3b7U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                           >> 0x14U)))
                      ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_7
                      : VL_ULL(0))) | ((0x3b8U == (0xfffU 
                                                   & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                      >> 0x14U)))
                                        ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_8
                                        : VL_ULL(0))) 
                | ((0x3b9U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                         >> 0x14U)))
                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_9
                    : VL_ULL(0))) | ((0x3baU == (0xfffU 
                                                 & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                    >> 0x14U)))
                                      ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_10
                                      : VL_ULL(0))) 
              | ((0x3bbU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                       >> 0x14U))) ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_11
                  : VL_ULL(0))) | ((0x3bcU == (0xfffU 
                                               & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                  >> 0x14U)))
                                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_12
                                    : VL_ULL(0))) | 
            ((0x3bdU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                   >> 0x14U))) ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_13
              : VL_ULL(0))) | ((0x3beU == (0xfffU & 
                                           (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                            >> 0x14U)))
                                ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_14
                                : VL_ULL(0)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_234 
        = ((((((((((((((((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_219) 
                         | (0xb1aU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                 >> 0x14U)))) 
                        | (0xb1bU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                >> 0x14U)))) 
                       | (0xb1cU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                               >> 0x14U)))) 
                      | (0xb1dU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                              >> 0x14U)))) 
                     | (0xb1eU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                             >> 0x14U)))) 
                    | (0xb1fU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                            >> 0x14U)))) 
                   | (0x323U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                           >> 0x14U)))) 
                  | (0x324U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                          >> 0x14U)))) 
                 | (0x325U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                         >> 0x14U)))) 
                | (0x326U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                        >> 0x14U)))) 
               | (0x327U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                       >> 0x14U)))) 
              | (0x328U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) 
             | (0x329U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                     >> 0x14U)))) | 
            (0x32aU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                  >> 0x14U)))) | (0x32bU 
                                                  == 
                                                  (0xfffU 
                                                   & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                      >> 0x14U))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_csr_op 
        = ((0x6fU == (0x7fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr))
            ? 0U : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1037));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_valid_inst 
        = ((0x6fU == (0x7fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
           | ((0x67U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
              | ((3U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                 | ((0x4003U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                    | ((0x3003U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                       | ((0x1003U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                          | ((0x5003U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                             | ((0x2003U == (0x707fU 
                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                | ((0x6003U == (0x707fU 
                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                   | (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_215))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_590 
        = ((0x3003U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
           | ((0x1003U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
              | ((0x5003U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                 | ((0x2003U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                    | ((0x6003U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                       | ((0x37U == (0x7fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                          | ((0x17U == (0x7fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                             | ((0x1033U == (0xfe00707fU 
                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                | ((0x1013U == (0xfc00707fU 
                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                   | ((0x101bU == (0xfc00707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                      | ((0x103bU == 
                                          (0xfe00707fU 
                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                         | ((0x2033U 
                                             == (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                            | ((0x2013U 
                                                == 
                                                (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                               | ((0x3013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                  | ((0x3033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                     | ((0x40005033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                        | ((0x40005013U 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                           | (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_573))))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1240 
        = ((0x40005013U == (0xfc00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
           | ((0x4000501bU == (0xfc00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
              | ((0x4000503bU == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                 | ((0x5033U == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                    | ((0x5013U == (0xfc00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                       | ((0x501bU == (0xfc00707fU 
                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                          | ((0x503bU == (0xfe00707fU 
                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                             | ((0x40000033U == (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                | ((0x4000003bU == 
                                    (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                   | ((0x4033U == (0xfe00707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                      | ((0x4013U == 
                                          (0x707fU 
                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                         | ((0x6033U 
                                             == (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                            | ((0x6013U 
                                                == 
                                                (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                               | ((0x33U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                  | ((0x13U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                     | ((0x1bU 
                                                         == 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                        | ((0x3bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                           | (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1223))))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1314 
        = ((0x40005013U != (0xfc00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
           & ((0x4000501bU != (0xfc00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
              & ((0x4000503bU == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                 | ((0x5033U == (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                    | ((0x5013U != (0xfc00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                       & ((0x501bU != (0xfc00707fU 
                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                          & ((0x503bU == (0xfe00707fU 
                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                             | ((0x40000033U == (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                | ((0x4000003bU == 
                                    (0xfe00707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                   | ((0x4033U == (0xfe00707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                      | ((0x4013U != 
                                          (0x707fU 
                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                         & ((0x6033U 
                                             == (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                            | ((0x6013U 
                                                != 
                                                (0x707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                               & ((0x33U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                  | ((0x13U 
                                                      != 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                     & ((0x1bU 
                                                         != 
                                                         (0x707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                        & ((0x3bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                           | (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1297))))))))))))))))));
    vlTOPp->io_diff_abs_op1 = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__abs_op1;
    VL_EXTEND_WQ(65,64, __Vtemp98, vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__abs_op1);
    VL_EXTEND_WQ(65,64, __Vtemp99, (((QData)((IData)(
                                                     vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[2U]))));
    VL_ADD_W(3, __Vtemp100, __Vtemp98, __Vtemp99);
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_126[0U] 
        = (IData)((VL_ULL(0x7fffffffffffffff) & (((QData)((IData)(
                                                                  vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[2U])) 
                                                  << 0x3fU) 
                                                 | (((QData)((IData)(
                                                                     vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[1U])) 
                                                     << 0x1fU) 
                                                    | ((QData)((IData)(
                                                                       vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[0U])) 
                                                       >> 1U)))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_126[1U] 
        = ((0x80000000U & (__Vtemp100[0U] << 0x1fU)) 
           | (IData)(((VL_ULL(0x7fffffffffffffff) & 
                       (((QData)((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[2U])) 
                         << 0x3fU) | (((QData)((IData)(
                                                       vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[1U])) 
                                       << 0x1fU) | 
                                      ((QData)((IData)(
                                                       vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[0U])) 
                                       >> 1U)))) >> 0x20U)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_126[2U] 
        = ((0x7fffffffU & (__Vtemp100[0U] >> 1U)) | 
           (0x80000000U & (__Vtemp100[1U] << 0x1fU)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_126[3U] 
        = ((0x7fffffffU & (__Vtemp100[1U] >> 1U)) | 
           (0x80000000U & (__Vtemp100[2U] << 0x1fU)));
    __Vtemp103[0U] = 1U;
    __Vtemp103[1U] = 0U;
    __Vtemp103[2U] = 0U;
    __Vtemp103[3U] = 0U;
    __Vtemp104[0U] = (~ vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[0U]);
    __Vtemp104[1U] = (~ vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[1U]);
    __Vtemp104[2U] = (~ vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[2U]);
    __Vtemp104[3U] = (~ vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[3U]);
    VL_ADD_W(4, __Vtemp105, __Vtemp103, __Vtemp104);
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_158 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_70)
            ? (((QData)((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[3U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[2U])))
            : (((QData)((IData)(__Vtemp105[3U])) << 0x20U) 
               | (QData)((IData)(__Vtemp105[2U]))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_187 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_70)
            ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_result
            : (VL_ULL(1) + (~ vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_result)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasinterrupt 
        = (((((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mip_mti) 
              & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mie_mti)) 
             & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie)) 
            & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall))) 
           & (VL_ULL(0) != vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_pc));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__isBtype 
        = ((VL_ULL(0x63) == (VL_ULL(0x7f) & (QData)((IData)(vlTOPp->top__DOT__mycore__DOT__bus_bridge_io_ports_0_rdata)))) 
           & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9426 
        = ((((((((((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9416 
                    | ((0x3bfU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                             >> 0x14U)))
                        ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_15
                        : VL_ULL(0))) | ((0xb03U == 
                                          (0xfffU & 
                                           (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                            >> 0x14U)))
                                          ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_0
                                          : VL_ULL(0))) 
                  | ((0xb04U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                           >> 0x14U)))
                      ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_1
                      : VL_ULL(0))) | ((0xb05U == (0xfffU 
                                                   & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                      >> 0x14U)))
                                        ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_2
                                        : VL_ULL(0))) 
                | ((0xb06U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                         >> 0x14U)))
                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_3
                    : VL_ULL(0))) | ((0xb07U == (0xfffU 
                                                 & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                    >> 0x14U)))
                                      ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_4
                                      : VL_ULL(0))) 
              | ((0xb08U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                       >> 0x14U))) ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_5
                  : VL_ULL(0))) | ((0xb09U == (0xfffU 
                                               & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                  >> 0x14U)))
                                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_6
                                    : VL_ULL(0))) | 
            ((0xb0aU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                   >> 0x14U))) ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_7
              : VL_ULL(0))) | ((0xb0bU == (0xfffU & 
                                           (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                            >> 0x14U)))
                                ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_8
                                : VL_ULL(0)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_249 
        = ((((((((((((((((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_234) 
                         | (0x32cU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                 >> 0x14U)))) 
                        | (0x32dU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                >> 0x14U)))) 
                       | (0x32eU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                               >> 0x14U)))) 
                      | (0x32fU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                              >> 0x14U)))) 
                     | (0x330U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                             >> 0x14U)))) 
                    | (0x331U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                            >> 0x14U)))) 
                   | (0x332U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                           >> 0x14U)))) 
                  | (0x333U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                          >> 0x14U)))) 
                 | (0x334U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                         >> 0x14U)))) 
                | (0x335U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                        >> 0x14U)))) 
               | (0x336U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                       >> 0x14U)))) 
              | (0x337U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) 
             | (0x338U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                     >> 0x14U)))) | 
            (0x339U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                  >> 0x14U)))) | (0x33aU 
                                                  == 
                                                  (0xfffU 
                                                   & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                      >> 0x14U))));
    vlTOPp->io_diff_is_valid = vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_valid_inst;
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1257 
        = ((0x4003U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
           | ((0x3003U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
              | ((0x1003U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                 | ((0x5003U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                    | ((0x2003U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                       | ((0x6003U == (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                          | ((0x37U != (0x7fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                             & ((0x17U != (0x7fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                & ((0x1033U == (0xfe00707fU 
                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                   | ((0x1013U == (0xfc00707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                      | ((0x101bU == 
                                          (0xfc00707fU 
                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                         | ((0x103bU 
                                             == (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                            | ((0x2033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                               | ((0x2013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                  | ((0x3013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                     | ((0x3033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                        | ((0x40005033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                           | (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1240))))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1331 
        = ((0x4003U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
           & ((0x3003U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
              & ((0x1003U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                 & ((0x5003U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                    & ((0x2003U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                       & ((0x6003U != (0x707fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                          & ((0x37U != (0x7fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                             & ((0x17U != (0x7fU & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                & ((0x1033U == (0xfe00707fU 
                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                   | ((0x1013U != (0xfc00707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                      & ((0x101bU != 
                                          (0xfc00707fU 
                                           & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                         & ((0x103bU 
                                             == (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                            | ((0x2033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                               | ((0x2013U 
                                                   != 
                                                   (0x707fU 
                                                    & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                  & ((0x3013U 
                                                      != 
                                                      (0x707fU 
                                                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                     & ((0x3033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                        | ((0x40005033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                           | (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1314))))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fresult 
        = ((0U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mdu_state))
            ? VL_ULL(0) : ((1U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mdu_state))
                            ? VL_ULL(0) : ((2U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mdu_state))
                                            ? ((0xdU 
                                                == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                                ? ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_70)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[0U])))
                                                    : 
                                                   (VL_ULL(1) 
                                                    + 
                                                    (~ 
                                                     (((QData)((IData)(
                                                                       vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[0U]))))))
                                                : (
                                                   (0xeU 
                                                    == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_158
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                                     ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_158
                                                     : 
                                                    ((0x10U 
                                                      == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                                      ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_158
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__rem_result[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__rem_result[0U])))
                                                       : 
                                                      ((0x12U 
                                                        == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                                        ? 
                                                       (((QData)((IData)(
                                                                         vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__rem_result[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__rem_result[0U])))
                                                        : 
                                                       ((0x13U 
                                                         == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                                         ? 
                                                        (((QData)((IData)(
                                                                          vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__rem_result[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__rem_result[0U])))
                                                         : 
                                                        ((0x14U 
                                                          == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                                          ? 
                                                         (((QData)((IData)(
                                                                           vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__rem_result[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__rem_result[0U])))
                                                          : 
                                                         ((0x15U 
                                                           == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                                           ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_187
                                                           : 
                                                          ((0x16U 
                                                            == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                                            ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_187
                                                            : 
                                                           ((0x17U 
                                                             == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                                             ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_187
                                                             : 
                                                            ((0x18U 
                                                              == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                                              ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_187
                                                              : 
                                                             (((QData)((IData)(
                                                                               vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result[0U])))))))))))))))
                                            : VL_ULL(0))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__prv_now 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)
            ? 3U : ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasinterrupt)
                     ? 3U : ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_ismret)
                              ? (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp)
                              : 3U)));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu_io_IF_pc_sel 
        = ((0U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state))
            ? 0U : ((1U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state))
                     ? 0U : ((2U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state))
                              ? ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__isBtype)
                                  ? 5U : 0U) : ((3U 
                                                 == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state))
                                                 ? 
                                                ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__isBtype)
                                                  ? 5U
                                                  : 0U)
                                                 : 0U))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9436 
        = ((((((((((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9426 
                    | ((0xb0cU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                             >> 0x14U)))
                        ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_9
                        : VL_ULL(0))) | ((0xb0dU == 
                                          (0xfffU & 
                                           (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                            >> 0x14U)))
                                          ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_10
                                          : VL_ULL(0))) 
                  | ((0xb0eU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                           >> 0x14U)))
                      ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_11
                      : VL_ULL(0))) | ((0xb0fU == (0xfffU 
                                                   & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                      >> 0x14U)))
                                        ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_12
                                        : VL_ULL(0))) 
                | ((0xb10U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                         >> 0x14U)))
                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_13
                    : VL_ULL(0))) | ((0xb11U == (0xfffU 
                                                 & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                    >> 0x14U)))
                                      ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_14
                                      : VL_ULL(0))) 
              | ((0xb12U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                       >> 0x14U))) ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_15
                  : VL_ULL(0))) | ((0xb13U == (0xfffU 
                                               & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                  >> 0x14U)))
                                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_16
                                    : VL_ULL(0))) | 
            ((0xb14U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                   >> 0x14U))) ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_17
              : VL_ULL(0))) | ((0xb15U == (0xfffU & 
                                           (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                            >> 0x14U)))
                                ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_18
                                : VL_ULL(0)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__legalcsrnumber 
        = ((((((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_249) 
               | (0x33bU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                       >> 0x14U)))) 
              | (0x33cU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U)))) 
             | (0x33dU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                     >> 0x14U)))) | 
            (0x33eU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                  >> 0x14U)))) | (0x33fU 
                                                  == 
                                                  (0xfffU 
                                                   & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                      >> 0x14U))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1418 
        = ((((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_rd_addr) 
             == (0x1fU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
                          >> 0xfU))) & ((0x6fU != (0x7fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                        & ((0x67U == 
                                            (0x707fU 
                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                           | ((3U == 
                                               (0x707fU 
                                                & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                              | (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1257))))) 
           | (((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_rd_addr) 
               == (0x1fU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr 
                            >> 0x14U))) & ((0x6fU != 
                                            (0x7fU 
                                             & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                           & ((0x67U 
                                               != (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                              & ((3U 
                                                  != 
                                                  (0x707fU 
                                                   & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr)) 
                                                 & (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1331))))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_95 
        = ((9U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
            ? (QData)((IData)(VL_SHIFTRS_III(32,32,5, (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source), 
                                             (0x1fU 
                                              & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)))))
            : ((0xaU == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                ? (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
                   >> (0x3fU & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)))
                : ((0xbU == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                    ? (QData)((IData)(((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source) 
                                       >> (0x1fU & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)))))
                    : ((0xcU == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                        ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source
                        : ((0xdU == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                            ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fresult
                            : ((0xeU == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fresult
                                : ((0xfU == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fresult
                                    : ((0x10U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                        ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fresult
                                        : ((0x11U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                            ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fresult
                                            : ((0x12U 
                                                == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                                ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fresult
                                                : (
                                                   (0x13U 
                                                    == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fresult
                                                    : 
                                                   ((0x14U 
                                                     == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                                     ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fresult
                                                     : 
                                                    ((0x15U 
                                                      == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                                      ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fresult
                                                      : 
                                                     ((0x16U 
                                                       == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                                       ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fresult
                                                       : 
                                                      ((0x17U 
                                                        == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                                        ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fresult
                                                        : 
                                                       ((0x18U 
                                                         == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                                         ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fresult
                                                         : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__add_res))))))))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1337 
        = ((1U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_pc_branch))
            ? (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu_io_IF_pc_sel)
            : 2U);
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1339 
        = ((1U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_pc_branch))
            ? 2U : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu_io_IF_pc_sel));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9446 
        = ((((((((((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9436 
                    | ((0xb16U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                             >> 0x14U)))
                        ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_19
                        : VL_ULL(0))) | ((0xb17U == 
                                          (0xfffU & 
                                           (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                            >> 0x14U)))
                                          ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_20
                                          : VL_ULL(0))) 
                  | ((0xb18U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                           >> 0x14U)))
                      ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_21
                      : VL_ULL(0))) | ((0xb19U == (0xfffU 
                                                   & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                      >> 0x14U)))
                                        ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_22
                                        : VL_ULL(0))) 
                | ((0xb1aU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                         >> 0x14U)))
                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_23
                    : VL_ULL(0))) | ((0xb1bU == (0xfffU 
                                                 & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                    >> 0x14U)))
                                      ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_24
                                      : VL_ULL(0))) 
              | ((0xb1cU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                       >> 0x14U))) ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_25
                  : VL_ULL(0))) | ((0xb1dU == (0xfffU 
                                               & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                  >> 0x14U)))
                                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_26
                                    : VL_ULL(0))) | 
            ((0xb1eU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                   >> 0x14U))) ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_27
              : VL_ULL(0))) | ((0xb1fU == (0xfffU & 
                                           (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                            >> 0x14U)))
                                ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_28
                                : VL_ULL(0)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__read_illegal 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_256) 
           & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__legalcsrnumber)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen 
        = (((((~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__write_illgal)) 
              & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__legalcsrnumber)) 
             & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_reg_mem_exception))) 
            & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall))) 
           & (((0U != (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__wire_csr_op)) 
               & (5U != (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__wire_csr_op))) 
              & (1U != (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__wire_csr_op))));
    vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1413) 
           & (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1418));
    VL_EXTEND_WQ(127,64, __Vtemp107, vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source);
    VL_SHIFTL_WWI(127,127,6, __Vtemp108, __Vtemp107, 
                  (0x3fU & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)));
    VL_EXTEND_WQ(95,64, __Vtemp111, vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source);
    VL_SHIFTL_WWI(95,95,5, __Vtemp112, __Vtemp111, 
                  (0x1fU & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__res_temp 
        = ((0U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
            ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__add_res
            : ((1U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                ? (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
                   - vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)
                : ((2U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                    ? (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
                       & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)
                    : ((3U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                        ? (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
                           | vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)
                        : ((4U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                            ? (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
                               ^ vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)
                            : ((5U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                ? (((QData)((IData)(
                                                    __Vtemp108[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                __Vtemp108[0U])))
                                : ((0x19U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                    ? (((QData)((IData)(
                                                        __Vtemp112[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    __Vtemp112[0U])))
                                    : ((6U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                        ? (QData)((IData)(
                                                          VL_LTS_IQQ(1,64,64, vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source, vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)))
                                        : ((7U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                            ? (QData)((IData)(
                                                              (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source 
                                                               < vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)))
                                            : ((8U 
                                                == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel))
                                                ? VL_SHIFTRS_QQI(64,64,6, vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source, 
                                                                 (0x3fU 
                                                                  & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source)))
                                                : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_95))))))))));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1384 
        = ((0U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
            ? (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu_io_IF_pc_sel)
            : ((1U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
                ? ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath_io_d2c_iseq)
                    ? (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1337)
                    : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1339))
                : ((2U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
                    ? ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath_io_d2c_iseq)
                        ? (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1339)
                        : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1337))
                    : ((5U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
                        ? ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath_io_d2c_islt)
                            ? (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1339)
                            : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1337))
                        : ((6U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
                            ? ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath_io_d2c_isltu)
                                ? (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1339)
                                : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1337))
                            : ((3U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
                                ? ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath_io_d2c_islt)
                                    ? (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1337)
                                    : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1339))
                                : ((4U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
                                    ? ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath_io_d2c_isltu)
                                        ? (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1337)
                                        : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1339))
                                    : ((7U == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
                                        ? 1U : ((8U 
                                                 == (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_exe_branch))
                                                 ? 3U
                                                 : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cp_bpu_io_IF_pc_sel))))))))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9456 
        = ((((((((((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9446 
                    | ((0x323U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                             >> 0x14U)))
                        ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_0
                        : VL_ULL(0))) | ((0x324U == 
                                          (0xfffU & 
                                           (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                            >> 0x14U)))
                                          ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_1
                                          : VL_ULL(0))) 
                  | ((0x325U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                           >> 0x14U)))
                      ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_2
                      : VL_ULL(0))) | ((0x326U == (0xfffU 
                                                   & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                      >> 0x14U)))
                                        ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_3
                                        : VL_ULL(0))) 
                | ((0x327U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                         >> 0x14U)))
                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_4
                    : VL_ULL(0))) | ((0x328U == (0xfffU 
                                                 & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                    >> 0x14U)))
                                      ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_5
                                      : VL_ULL(0))) 
              | ((0x329U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                       >> 0x14U))) ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_6
                  : VL_ULL(0))) | ((0x32aU == (0xfffU 
                                               & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                  >> 0x14U)))
                                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_7
                                    : VL_ULL(0))) | 
            ((0x32bU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                   >> 0x14U))) ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_8
              : VL_ULL(0))) | ((0x32cU == (0xfffU & 
                                           (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                            >> 0x14U)))
                                ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_9
                                : VL_ULL(0)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_enable 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_256) 
           & (~ (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__read_illegal)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__exception_in_csr 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__read_illegal) 
           | (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__write_illgal));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res 
        = ((0U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_ext_sel))
            ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__res_temp
            : ((1U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_ext_sel))
                ? ((((1U & (IData)((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__res_temp 
                                    >> 7U))) ? VL_ULL(0xffffffffffffff)
                      : VL_ULL(0)) << 8U) | (QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__res_temp)))))
                : ((2U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_ext_sel))
                    ? (QData)((IData)((0xffU & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__res_temp))))
                    : ((3U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_ext_sel))
                        ? ((((1U & (IData)((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__res_temp 
                                            >> 0xfU)))
                              ? VL_ULL(0xffffffffffff)
                              : VL_ULL(0)) << 0x10U) 
                           | (QData)((IData)((0xffffU 
                                              & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__res_temp)))))
                        : ((4U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_ext_sel))
                            ? (QData)((IData)((0xffffU 
                                               & (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__res_temp))))
                            : ((5U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_ext_sel))
                                ? (((QData)((IData)(
                                                    ((1U 
                                                      & (IData)(
                                                                (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__res_temp 
                                                                 >> 0x1fU)))
                                                      ? 0xffffffffU
                                                      : 0U))) 
                                    << 0x20U) | (QData)((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__res_temp)))
                                : ((6U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_ext_sel))
                                    ? (QData)((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__res_temp))
                                    : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__res_temp)))))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9466 
        = ((((((((((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9456 
                    | ((0x32dU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                             >> 0x14U)))
                        ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_10
                        : VL_ULL(0))) | ((0x32eU == 
                                          (0xfffU & 
                                           (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                            >> 0x14U)))
                                          ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_11
                                          : VL_ULL(0))) 
                  | ((0x32fU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                           >> 0x14U)))
                      ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_12
                      : VL_ULL(0))) | ((0x330U == (0xfffU 
                                                   & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                      >> 0x14U)))
                                        ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_13
                                        : VL_ULL(0))) 
                | ((0x331U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                         >> 0x14U)))
                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_14
                    : VL_ULL(0))) | ((0x332U == (0xfffU 
                                                 & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                    >> 0x14U)))
                                      ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_15
                                      : VL_ULL(0))) 
              | ((0x333U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                       >> 0x14U))) ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_16
                  : VL_ULL(0))) | ((0x334U == (0xfffU 
                                               & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                  >> 0x14U)))
                                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_17
                                    : VL_ULL(0))) | 
            ((0x335U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                   >> 0x14U))) ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_18
              : VL_ULL(0))) | ((0x336U == (0xfffU & 
                                           (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                            >> 0x14U)))
                                ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_19
                                : VL_ULL(0)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fcsr_illegal_ins_exception 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__exception_in_csr) 
           | (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_reg_mem_exception));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9475 
        = (((((((((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9466 
                   | ((0x337U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                            >> 0x14U)))
                       ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_20
                       : VL_ULL(0))) | ((0x338U == 
                                         (0xfffU & 
                                          (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                           >> 0x14U)))
                                         ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_21
                                         : VL_ULL(0))) 
                 | ((0x339U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                          >> 0x14U)))
                     ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_22
                     : VL_ULL(0))) | ((0x33aU == (0xfffU 
                                                  & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                     >> 0x14U)))
                                       ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_23
                                       : VL_ULL(0))) 
               | ((0x33bU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                        >> 0x14U)))
                   ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_24
                   : VL_ULL(0))) | ((0x33cU == (0xfffU 
                                                & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                   >> 0x14U)))
                                     ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_25
                                     : VL_ULL(0))) 
             | ((0x33dU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                      >> 0x14U))) ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_26
                 : VL_ULL(0))) | ((0x33eU == (0xfffU 
                                              & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                                 >> 0x14U)))
                                   ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_27
                                   : VL_ULL(0))) | 
           ((0x33fU == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                  >> 0x14U))) ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_28
             : VL_ULL(0)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___GEN_244 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fcsr_illegal_ins_exception)
            ? (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie)
            : ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall)
                ? (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie)
                : ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak)
                    ? (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie)
                    : (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasexception 
        = (((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fcsr_illegal_ins_exception) 
            | (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall)) 
           | (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_data 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_enable)
            ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9475
            : VL_ULL(0));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_17750 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasexception) 
           | (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasinterrupt));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9479 
        = (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_data 
           | vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out);
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9482 
        = (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_data 
           & (~ vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_17750) 
           | (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_ismret));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data 
        = ((2U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op))
            ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out
            : ((4U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op))
                ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9479
                : ((3U == (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op))
                    ? vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9482
                    : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_data)));
    vlTOPp->io_diff_isredir = vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir;
    vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)
            ? 4U : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1384));
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT__temp_pc_sel 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)
            ? 4U : (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT___T_1384));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___GEN_92 
        = (1U & ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen)
                  ? ((0x300U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                           >> 0x14U)))
                      ? (IData)((vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data 
                                 >> 7U)) : (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie))
                  : (IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie)));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT___GEN_99 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen)
            ? ((0x341U == (0xfffU & (vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr 
                                     >> 0x14U))) ? 
               (VL_ULL(0xfffffffffffffffc) & vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data)
                : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc)
            : vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc);
    vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_control_hazard 
        = ((0U != (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__temp_pc_sel)) 
           & (5U != (IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__temp_pc_sel)));
    VL_EXTEND_WQ(66,64, __Vtemp114, vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_iim_ext);
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT___GEN_104[0U] 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)
            ? __Vtemp114[0U] : ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)
                                 ? 0U : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)
                                          ? 0U : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_control_hazard)
                                                   ? 0U
                                                   : 
                                                  vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_dec_iim_ext[0U]))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT___GEN_104[1U] 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)
            ? __Vtemp114[1U] : ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)
                                 ? 0U : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)
                                          ? 0U : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_control_hazard)
                                                   ? 0U
                                                   : 
                                                  vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_dec_iim_ext[1U]))));
    vlTOPp->top__DOT__mycore__DOT__dpath__DOT___GEN_104[2U] 
        = ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall)
            ? __Vtemp114[2U] : ((IData)(vlTOPp->top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir)
                                 ? 0U : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard)
                                          ? 0U : ((IData)(vlTOPp->top__DOT__mycore__DOT__cpath__DOT__cs_wire_control_hazard)
                                                   ? 0U
                                                   : 
                                                  vlTOPp->top__DOT__mycore__DOT__dpath__DOT__dp_dec_iim_ext[2U]))));
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_initial\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
    vlTOPp->_initial__TOP__2(vlSymsp);
}

void Vtop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::final\n"); );
    // Variables
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop::_eval_settle(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_settle\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
}

VL_INLINE_OPT QData Vtop::_change_request(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG

void Vtop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_ctor_var_reset\n"); );
    // Body
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
    io_diff_alu_exe_stall = VL_RAND_RESET_I(1);
    io_diff_mul_result_hi = VL_RAND_RESET_Q(64);
    io_diff_mul_result_lo = VL_RAND_RESET_Q(64);
    io_diff_abs_op1 = VL_RAND_RESET_Q(64);
    io_diff_abs_op2 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath_io_d2c_islt = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath_io_d2c_isltu = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath_io_d2c_iseq = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__cpath_io_c2d_cp_pc_sel = VL_RAND_RESET_I(3);
    top__DOT__mycore__DOT__cpath_io_c2d_cp_op1_sel = VL_RAND_RESET_I(2);
    top__DOT__mycore__DOT__cpath_io_c2d_cp_op2_sel = VL_RAND_RESET_I(2);
    top__DOT__mycore__DOT__cpath_io_c2d_cp_if_kill = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__cpath_io_c2d_cp_data_hazard = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__bus_bridge_io_ports_0_rdata = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__bus_bridge_io_ports_0_data_valid = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__bus_bridge_io_axi4_awvalid = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__bus_bridge_io_axi4_arvalid = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__bus_bridge_io_axi4_wvalid = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__regfile_io_rp2_data = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__dp_alu_io_res = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fisredir = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__csr_io___05Fcsr_illegal_ins_exception = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__reg_if_pc = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__wire_pc_next_4 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__wire_pc_bpu_target = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_pc = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_bim_ext = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT___T_145 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op1_source = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_iim_ext = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_jim_ext = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__wire_pc_jump_target = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr = VL_RAND_RESET_I(32);
    top__DOT__mycore__DOT__dpath__DOT__reg_dec_instr_valid = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__reg_dec_pc = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__reg_dec_pc_branch = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(66, top__DOT__mycore__DOT__dpath__DOT__dp_dec_iim_ext);
    top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rd_addr = VL_RAND_RESET_I(5);
    top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rd_addr = VL_RAND_RESET_I(5);
    top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_rd_addr = VL_RAND_RESET_I(5);
    top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rf_wen = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rf_wen = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_rf_wen = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_op2_source = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_instr = VL_RAND_RESET_I(32);
    top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_wb_data = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_wb_sel = VL_RAND_RESET_I(2);
    top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_alu_out = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_pc = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT___T_89 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT___T_95 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT___T_101 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_rs2_data = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_sel = VL_RAND_RESET_I(5);
    top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_en = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_read_op = VL_RAND_RESET_I(3);
    top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_write_mask = VL_RAND_RESET_I(8);
    top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_mem_wen = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_alu_ext_sel = VL_RAND_RESET_I(3);
    top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_wb_sel = VL_RAND_RESET_I(2);
    top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_csr_op = VL_RAND_RESET_I(3);
    top__DOT__mycore__DOT__dpath__DOT__dp_exe_reg_instr_valid = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__dp_exe_pc_branch = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(66, top__DOT__mycore__DOT__dpath__DOT___GEN_104);
    top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr = VL_RAND_RESET_I(32);
    top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_instr_valid = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_rs2_data = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_en = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_read_op = VL_RAND_RESET_I(3);
    top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_write_mask = VL_RAND_RESET_I(8);
    top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_mem_wen = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__dp_mem_reg_csr_op = VL_RAND_RESET_I(3);
    top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_instr_valid = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_pc = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_instr = VL_RAND_RESET_I(32);
    top__DOT__mycore__DOT__dpath__DOT___T_169 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT___T_171 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fen = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fresult = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Ffinish = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu_io___05Fexe_stall = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__add_res = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT___T_95 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__res_temp = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_2 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_4 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_6 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__op1_is_word = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_41 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_45 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__op1_is_signed = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__op2_is_signed = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__op1_is_neg = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__op2_is_neg = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_70 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__abs_op1 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__abs_op2 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__is_div_op = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mdu_state = VL_RAND_RESET_I(2);
    top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__exe_cycles = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(128, top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__mul_result);
    VL_RAND_RESET_W(128, top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__rem_result);
    VL_RAND_RESET_W(128, top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_op2);
    top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT__div_result = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_114 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_118 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_120 = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(128, top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_126);
    VL_RAND_RESET_W(128, top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_129);
    top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_130 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_132);
    VL_RAND_RESET_W(128, top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_138);
    top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_143 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_158 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___T_187 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, top__DOT__mycore__DOT__dpath__DOT__dp_alu__DOT__mdu__DOT___GEN_38);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtvec = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcause = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mie_mti = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mie_msi = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mip_mti = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mip_msi = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtval = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mscratch = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpp = VL_RAND_RESET_I(2);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_pmpcfg0 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_pmpcfg1 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_0 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_1 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_2 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_3 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_4 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_5 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_6 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_7 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_8 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_9 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_10 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_11 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_12 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_13 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_14 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_pmpaddr_15 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcycle = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_minstret = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_0 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_1 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_2 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_3 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_4 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_5 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_6 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_7 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_8 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_9 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_10 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_11 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_12 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_13 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_14 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_15 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_16 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_17 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_18 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_19 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_20 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_21 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_22 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_23 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_24 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_25 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_26 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_27 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmcounter_28 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcounterinhibit = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_0 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_1 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_2 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_3 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_4 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_5 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_6 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_7 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_8 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_9 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_10 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_11 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_12 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_13 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_14 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_15 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_16 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_17 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_18 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_19 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_20 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_21 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_22 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_23 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_24 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_25 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_26 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_27 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__regs_mhpmevet_28 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__wire_csr_op = VL_RAND_RESET_I(3);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__write_illgal = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_28 = VL_RAND_RESET_I(11);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_39 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_174 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_189 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_204 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_219 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_234 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_249 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__legalcsrnumber = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_256 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__read_illegal = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__exception_in_csr = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_enable = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9396 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9406 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9416 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9426 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9436 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9446 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9456 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9466 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9475 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_read_data = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9479 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_9482 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_write_data = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_wen = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT___GEN_92 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT___GEN_99 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isecall = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_isebreak = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_ismret = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasexception = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_17729 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_17731 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__csr_hasinterrupt = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT__prv_now = VL_RAND_RESET_I(2);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT___GEN_244 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__dpath__DOT__csr__DOT___T_17750 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__cpath__DOT__cp_bpu_io_EXE_actual_branch = VL_RAND_RESET_I(2);
    top__DOT__mycore__DOT__cpath__DOT__cp_bpu_io_IF_pc_sel = VL_RAND_RESET_I(3);
    top__DOT__mycore__DOT__cpath__DOT___T_162 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__cpath__DOT___T_181 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__cpath__DOT___T_198 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__cpath__DOT___T_215 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__cpath__DOT__cs_valid_inst = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__cpath__DOT___T_332 = VL_RAND_RESET_I(2);
    top__DOT__mycore__DOT__cpath__DOT___T_347 = VL_RAND_RESET_I(2);
    top__DOT__mycore__DOT__cpath__DOT___T_362 = VL_RAND_RESET_I(2);
    top__DOT__mycore__DOT__cpath__DOT___T_418 = VL_RAND_RESET_I(2);
    top__DOT__mycore__DOT__cpath__DOT___T_433 = VL_RAND_RESET_I(2);
    top__DOT__mycore__DOT__cpath__DOT___T_460 = VL_RAND_RESET_I(5);
    top__DOT__mycore__DOT__cpath__DOT___T_476 = VL_RAND_RESET_I(5);
    top__DOT__mycore__DOT__cpath__DOT___T_491 = VL_RAND_RESET_I(5);
    top__DOT__mycore__DOT__cpath__DOT___T_506 = VL_RAND_RESET_I(5);
    top__DOT__mycore__DOT__cpath__DOT___T_539 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__cpath__DOT___T_556 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__cpath__DOT___T_573 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__cpath__DOT___T_590 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__cpath__DOT___T_643 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__cpath__DOT___T_659 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__cpath__DOT___T_667 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__cpath__DOT___T_788 = VL_RAND_RESET_I(8);
    top__DOT__mycore__DOT__cpath__DOT___T_803 = VL_RAND_RESET_I(8);
    top__DOT__mycore__DOT__cpath__DOT___T_889 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__cpath__DOT___T_924 = VL_RAND_RESET_I(2);
    top__DOT__mycore__DOT__cpath__DOT___T_939 = VL_RAND_RESET_I(2);
    top__DOT__mycore__DOT__cpath__DOT___T_954 = VL_RAND_RESET_I(2);
    top__DOT__mycore__DOT__cpath__DOT___T_994 = VL_RAND_RESET_I(3);
    top__DOT__mycore__DOT__cpath__DOT___T_1009 = VL_RAND_RESET_I(3);
    top__DOT__mycore__DOT__cpath__DOT___T_1024 = VL_RAND_RESET_I(3);
    top__DOT__mycore__DOT__cpath__DOT___T_1037 = VL_RAND_RESET_I(3);
    top__DOT__mycore__DOT__cpath__DOT__cs_csr_op = VL_RAND_RESET_I(3);
    top__DOT__mycore__DOT__cpath__DOT___T_1052 = VL_RAND_RESET_I(3);
    top__DOT__mycore__DOT__cpath__DOT___T_1068 = VL_RAND_RESET_I(3);
    top__DOT__mycore__DOT__cpath__DOT___T_1083 = VL_RAND_RESET_I(3);
    top__DOT__mycore__DOT__cpath__DOT___T_1098 = VL_RAND_RESET_I(3);
    top__DOT__mycore__DOT__cpath__DOT___T_1144 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__cpath__DOT___T_1161 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__cpath__DOT___T_1178 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__cpath__DOT___T_1206 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__cpath__DOT___T_1223 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__cpath__DOT___T_1240 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__cpath__DOT___T_1257 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__cpath__DOT___T_1297 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__cpath__DOT___T_1314 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__cpath__DOT___T_1331 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__cpath__DOT__cs_exe_branch = VL_RAND_RESET_I(4);
    top__DOT__mycore__DOT__cpath__DOT___T_1337 = VL_RAND_RESET_I(3);
    top__DOT__mycore__DOT__cpath__DOT___T_1339 = VL_RAND_RESET_I(3);
    top__DOT__mycore__DOT__cpath__DOT___T_1384 = VL_RAND_RESET_I(3);
    top__DOT__mycore__DOT__cpath__DOT__temp_pc_sel = VL_RAND_RESET_I(3);
    top__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_is_csr = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_is_fencei = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__cpath__DOT__cs_wire_control_hazard = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_is_load = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_rd_addr = VL_RAND_RESET_I(5);
    top__DOT__mycore__DOT__cpath__DOT___T_1413 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__cpath__DOT___T_1418 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__cpath__DOT__cs_reg_dec_imem_valid = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__cpath__DOT__cs_reg_exe_exception = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__cpath__DOT__cs_reg_mem_exception = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__cpath__DOT___T_1422 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__cpath__DOT__cs_wire_pipeline_stall = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state = VL_RAND_RESET_I(2);
    top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__isBtype = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT___T_11 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT___T_12 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT___T_13 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT___T_14 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__bus_bridge__DOT__has_request = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__bus_bridge__DOT__do_data_request = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__bus_bridge__DOT__do_inst_request = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__bus_bridge__DOT__addr_recv = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__bus_bridge__DOT__data_recv = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__bus_bridge__DOT__info_addr = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__bus_bridge__DOT__info_mask = VL_RAND_RESET_I(8);
    top__DOT__mycore__DOT__bus_bridge__DOT__info_op = VL_RAND_RESET_I(3);
    top__DOT__mycore__DOT__bus_bridge__DOT__info_wdata = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__bus_bridge__DOT__info_wen = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__bus_bridge__DOT__data_back = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__bus_bridge__DOT___GEN_2 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__bus_bridge__DOT___GEN_24 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__bus_bridge__DOT___GEN_25 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__bus_bridge__DOT___T_13 = VL_RAND_RESET_I(1);
    top__DOT__mycore__DOT__bus_bridge__DOT___T_33 = VL_RAND_RESET_Q(64);
    top__DOT__mycore__DOT__bus_bridge__DOT___T_62 = VL_RAND_RESET_Q(64);
    { int __Vi0=0; for (; __Vi0<134217728; ++__Vi0) {
            top__DOT__mymem__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }}
    top__DOT__mymem__DOT__reg_mtimecmp = VL_RAND_RESET_Q(64);
    top__DOT__mymem__DOT__reg_mtime = VL_RAND_RESET_Q(64);
    top__DOT__mymem__DOT__uart_control = VL_RAND_RESET_I(32);
    top__DOT__mymem__DOT__uart_state = VL_RAND_RESET_I(32);
    top__DOT__mymem__DOT__cnt = VL_RAND_RESET_I(16);
    top__DOT__mymem__DOT__nextcnt = VL_RAND_RESET_I(16);
    top__DOT__mymem__DOT___T_1 = VL_RAND_RESET_I(1);
    top__DOT__mymem__DOT___T_5 = VL_RAND_RESET_Q(64);
    top__DOT__mymem__DOT___GEN_0 = VL_RAND_RESET_Q(64);
    top__DOT__mymem__DOT__read_state = VL_RAND_RESET_I(2);
    top__DOT__mymem__DOT__write_state = VL_RAND_RESET_I(2);
    top__DOT__mymem__DOT__reg_awaddr = VL_RAND_RESET_Q(64);
    top__DOT__mymem__DOT__reg_araddr = VL_RAND_RESET_Q(64);
    top__DOT__mymem__DOT__temp_read_data = VL_RAND_RESET_Q(64);
    top__DOT__mymem__DOT___T_9 = VL_RAND_RESET_I(1);
    top__DOT__mymem__DOT___T_10 = VL_RAND_RESET_I(1);
    top__DOT__mymem__DOT___T_62 = VL_RAND_RESET_I(1);
    top__DOT__mymem__DOT___T_63 = VL_RAND_RESET_I(1);
    top__DOT__mymem__DOT___T_64 = VL_RAND_RESET_I(1);
    top__DOT__mymem__DOT__wire_wstrb = VL_RAND_RESET_I(8);
    top__DOT__mymem__DOT___T_131 = VL_RAND_RESET_I(1);
    top__DOT__mymem__DOT__uart__DOT__uart_helper_ch_get = VL_RAND_RESET_I(8);
    __Vtablechg1[0] = 0U;
    __Vtablechg1[1] = 1U;
    __Vtablechg1[2] = 0U;
    __Vtablechg1[3] = 1U;
    __Vtablechg1[4] = 0U;
    __Vtablechg1[5] = 1U;
    __Vtablechg1[6] = 1U;
    __Vtablechg1[7] = 1U;
    __Vtablechg1[8] = 0U;
    __Vtablechg1[9] = 1U;
    __Vtablechg1[10] = 1U;
    __Vtablechg1[11] = 1U;
    __Vtablechg1[12] = 0U;
    __Vtablechg1[13] = 1U;
    __Vtablechg1[14] = 1U;
    __Vtablechg1[15] = 1U;
    __Vtablechg1[16] = 0U;
    __Vtablechg1[17] = 1U;
    __Vtablechg1[18] = 0U;
    __Vtablechg1[19] = 1U;
    __Vtablechg1[20] = 1U;
    __Vtablechg1[21] = 1U;
    __Vtablechg1[22] = 1U;
    __Vtablechg1[23] = 1U;
    __Vtablechg1[24] = 1U;
    __Vtablechg1[25] = 1U;
    __Vtablechg1[26] = 1U;
    __Vtablechg1[27] = 1U;
    __Vtablechg1[28] = 1U;
    __Vtablechg1[29] = 1U;
    __Vtablechg1[30] = 1U;
    __Vtablechg1[31] = 1U;
    __Vtablechg1[32] = 0U;
    __Vtablechg1[33] = 1U;
    __Vtablechg1[34] = 0U;
    __Vtablechg1[35] = 1U;
    __Vtablechg1[36] = 1U;
    __Vtablechg1[37] = 1U;
    __Vtablechg1[38] = 1U;
    __Vtablechg1[39] = 1U;
    __Vtablechg1[40] = 1U;
    __Vtablechg1[41] = 1U;
    __Vtablechg1[42] = 1U;
    __Vtablechg1[43] = 1U;
    __Vtablechg1[44] = 1U;
    __Vtablechg1[45] = 1U;
    __Vtablechg1[46] = 1U;
    __Vtablechg1[47] = 1U;
    __Vtablechg1[48] = 0U;
    __Vtablechg1[49] = 1U;
    __Vtablechg1[50] = 0U;
    __Vtablechg1[51] = 1U;
    __Vtablechg1[52] = 1U;
    __Vtablechg1[53] = 1U;
    __Vtablechg1[54] = 1U;
    __Vtablechg1[55] = 1U;
    __Vtablechg1[56] = 1U;
    __Vtablechg1[57] = 1U;
    __Vtablechg1[58] = 1U;
    __Vtablechg1[59] = 1U;
    __Vtablechg1[60] = 1U;
    __Vtablechg1[61] = 1U;
    __Vtablechg1[62] = 1U;
    __Vtablechg1[63] = 1U;
    __Vtablechg1[64] = 0U;
    __Vtablechg1[65] = 1U;
    __Vtablechg1[66] = 0U;
    __Vtablechg1[67] = 1U;
    __Vtablechg1[68] = 1U;
    __Vtablechg1[69] = 1U;
    __Vtablechg1[70] = 1U;
    __Vtablechg1[71] = 1U;
    __Vtablechg1[72] = 1U;
    __Vtablechg1[73] = 1U;
    __Vtablechg1[74] = 1U;
    __Vtablechg1[75] = 1U;
    __Vtablechg1[76] = 1U;
    __Vtablechg1[77] = 1U;
    __Vtablechg1[78] = 1U;
    __Vtablechg1[79] = 1U;
    __Vtablechg1[80] = 0U;
    __Vtablechg1[81] = 1U;
    __Vtablechg1[82] = 0U;
    __Vtablechg1[83] = 1U;
    __Vtablechg1[84] = 1U;
    __Vtablechg1[85] = 1U;
    __Vtablechg1[86] = 1U;
    __Vtablechg1[87] = 1U;
    __Vtablechg1[88] = 1U;
    __Vtablechg1[89] = 1U;
    __Vtablechg1[90] = 1U;
    __Vtablechg1[91] = 1U;
    __Vtablechg1[92] = 1U;
    __Vtablechg1[93] = 1U;
    __Vtablechg1[94] = 1U;
    __Vtablechg1[95] = 1U;
    __Vtablechg1[96] = 0U;
    __Vtablechg1[97] = 1U;
    __Vtablechg1[98] = 0U;
    __Vtablechg1[99] = 1U;
    __Vtablechg1[100] = 1U;
    __Vtablechg1[101] = 1U;
    __Vtablechg1[102] = 1U;
    __Vtablechg1[103] = 1U;
    __Vtablechg1[104] = 1U;
    __Vtablechg1[105] = 1U;
    __Vtablechg1[106] = 1U;
    __Vtablechg1[107] = 1U;
    __Vtablechg1[108] = 1U;
    __Vtablechg1[109] = 1U;
    __Vtablechg1[110] = 1U;
    __Vtablechg1[111] = 1U;
    __Vtablechg1[112] = 0U;
    __Vtablechg1[113] = 1U;
    __Vtablechg1[114] = 0U;
    __Vtablechg1[115] = 1U;
    __Vtablechg1[116] = 1U;
    __Vtablechg1[117] = 1U;
    __Vtablechg1[118] = 1U;
    __Vtablechg1[119] = 1U;
    __Vtablechg1[120] = 1U;
    __Vtablechg1[121] = 1U;
    __Vtablechg1[122] = 1U;
    __Vtablechg1[123] = 1U;
    __Vtablechg1[124] = 1U;
    __Vtablechg1[125] = 1U;
    __Vtablechg1[126] = 1U;
    __Vtablechg1[127] = 1U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[0] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[1] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[2] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[3] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[4] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[5] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[6] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[7] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[8] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[9] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[10] = 1U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[11] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[12] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[13] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[14] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[15] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[16] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[17] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[18] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[19] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[20] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[21] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[22] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[23] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[24] = 2U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[25] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[26] = 1U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[27] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[28] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[29] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[30] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[31] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[32] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[33] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[34] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[35] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[36] = 3U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[37] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[38] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[39] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[40] = 1U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[41] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[42] = 1U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[43] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[44] = 3U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[45] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[46] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[47] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[48] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[49] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[50] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[51] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[52] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[53] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[54] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[55] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[56] = 2U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[57] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[58] = 1U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[59] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[60] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[61] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[62] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[63] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[64] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[65] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[66] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[67] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[68] = 3U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[69] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[70] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[71] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[72] = 2U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[73] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[74] = 1U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[75] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[76] = 3U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[77] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[78] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[79] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[80] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[81] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[82] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[83] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[84] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[85] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[86] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[87] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[88] = 2U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[89] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[90] = 1U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[91] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[92] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[93] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[94] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[95] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[96] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[97] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[98] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[99] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[100] = 3U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[101] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[102] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[103] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[104] = 1U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[105] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[106] = 1U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[107] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[108] = 3U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[109] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[110] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[111] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[112] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[113] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[114] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[115] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[116] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[117] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[118] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[119] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[120] = 2U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[121] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[122] = 1U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[123] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[124] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[125] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[126] = 0U;
    __Vtable1_top__DOT__mycore__DOT__cpath__DOT__cp_bpu__DOT__prediction_state[127] = 0U;
}
