// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024unit.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vtop___024unit) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtop___024unit::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtop___024unit::~Vtop___024unit() {
}

VL_INLINE_OPT void Vtop___024unit::__Vdpiimwrap_uart_getchar_TOP____024unit(CData/*7:0*/(&  ch)) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit::__Vdpiimwrap_uart_getchar_TOP____024unit\n"); );
    // Body
    char ch__Vcvt;
    uart_getchar(&ch__Vcvt);
    ch = (0xffU & ch__Vcvt);
}

VL_INLINE_OPT void Vtop___024unit::__Vdpiimwrap_uart_putchar_TOP____024unit(const CData/*7:0*/ ch) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit::__Vdpiimwrap_uart_putchar_TOP____024unit\n"); );
    // Body
    char ch__Vcvt;
    ch__Vcvt = ch;
    uart_putchar(ch__Vcvt);
}

void Vtop___024unit::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit::_ctor_var_reset\n"); );
}
