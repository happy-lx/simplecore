// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef _VTOP___024UNIT_H_
#define _VTOP___024UNIT_H_  // guard

#include "verilated_heavy.h"
#include "Vtop__Dpi.h"

//==========

class Vtop__Syms;

//----------

VL_MODULE(Vtop___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    Vtop__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop___024unit);  ///< Copying not allowed
  public:
    Vtop___024unit(const char* name = "TOP");
    ~Vtop___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
    void __Vdpiimwrap_uart_getchar_TOP____024unit(CData/*7:0*/(&  ch));
    void __Vdpiimwrap_uart_putchar_TOP____024unit(const CData/*7:0*/ ch);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
