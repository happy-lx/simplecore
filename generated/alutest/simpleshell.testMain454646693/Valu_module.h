// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Valu_module_H_
#define _Valu_module_H_

#include "verilated.h"
class Valu_module__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Valu_module) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_op,4,0);
    VL_IN8(io_res_ext_op,2,0);
    //char	__VpadToAlign4[4];
    VL_IN64(io_input1,63,0);
    VL_IN64(io_input2,63,0);
    VL_OUT64(io_res,63,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    //char	__VpadToAlign36[4];
    VL_SIGW(v__DOT___T_39,127,0,4);
    VL_SIGW(v__DOT___T_112,64,0,3);
    //char	__VpadToAlign68[4];
    VL_SIG64(v__DOT__add_res,63,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    //char	__VpadToAlign92[4];
    Valu_module__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Valu_module& operator= (const Valu_module&);	///< Copying not allowed
    Valu_module(const Valu_module&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Valu_module(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Valu_module();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Valu_module__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Valu_module__Syms* symsp, bool first);
  private:
    static QData	_change_request(Valu_module__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__1(Valu_module__Syms* __restrict vlSymsp);
    static void	_combo__TOP__3(Valu_module__Syms* __restrict vlSymsp);
    static void	_eval(Valu_module__Syms* __restrict vlSymsp);
    static void	_eval_initial(Valu_module__Syms* __restrict vlSymsp);
    static void	_eval_settle(Valu_module__Syms* __restrict vlSymsp);
    static void	_settle__TOP__2(Valu_module__Syms* __restrict vlSymsp);
    static void	_settle__TOP__4(Valu_module__Syms* __restrict vlSymsp);
    static void	traceChgThis(Valu_module__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(Valu_module__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(Valu_module__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(Valu_module__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(Valu_module__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(Valu_module__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(Valu_module__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
