// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vmemorymodule_H_
#define _Vmemorymodule_H_

#include "verilated.h"
class Vmemorymodule__Syms;

//----------

VL_MODULE(Vmemorymodule) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_ports_0_req_ready,0,0);
    VL_IN8(io_ports_0_req_valid,0,0);
    VL_IN8(io_ports_0_req_bits_mask,7,0);
    VL_IN8(io_ports_0_req_bits_op,2,0);
    VL_IN8(io_ports_0_req_bits_memen,0,0);
    VL_IN8(io_ports_0_req_bits_wen,0,0);
    VL_IN8(io_ports_0_resp_ready,0,0);
    VL_OUT8(io_ports_0_resp_valid,0,0);
    VL_OUT8(io_ports_1_req_ready,0,0);
    VL_IN8(io_ports_1_req_valid,0,0);
    VL_IN8(io_ports_1_req_bits_mask,7,0);
    VL_IN8(io_ports_1_req_bits_op,2,0);
    VL_IN8(io_ports_1_req_bits_memen,0,0);
    VL_IN8(io_ports_1_req_bits_wen,0,0);
    VL_IN8(io_ports_1_resp_ready,0,0);
    VL_OUT8(io_ports_1_resp_valid,0,0);
    //char	__VpadToAlign18[2];
    VL_IN(io_ports_0_req_bits_addr,31,0);
    VL_IN(io_ports_1_req_bits_addr,31,0);
    //char	__VpadToAlign28[4];
    VL_IN64(io_ports_0_req_bits_wdata,63,0);
    VL_OUT64(io_ports_0_resp_bits_rdata,63,0);
    VL_IN64(io_ports_1_req_bits_wdata,63,0);
    VL_OUT64(io_ports_1_resp_bits_rdata,63,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(v__DOT__mem___05FT_96_data,7,0);
    VL_SIG8(v__DOT__mem___05FT_98_data,7,0);
    VL_SIG8(v__DOT__mem___05FT_100_data,7,0);
    VL_SIG8(v__DOT__mem___05FT_102_data,7,0);
    VL_SIG8(v__DOT__mem___05FT_104_data,7,0);
    VL_SIG8(v__DOT__mem___05FT_106_data,7,0);
    VL_SIG8(v__DOT__mem___05FT_108_data,7,0);
    VL_SIG8(v__DOT__mem___05FT_110_data,7,0);
    VL_SIG8(v__DOT__mem___05FT_112_data,7,0);
    VL_SIG8(v__DOT__mem___05FT_114_data,7,0);
    VL_SIG8(v__DOT__mem___05FT_116_data,7,0);
    VL_SIG8(v__DOT__mem___05FT_118_data,7,0);
    VL_SIG8(v__DOT__mem___05FT_120_data,7,0);
    VL_SIG8(v__DOT__mem___05FT_122_data,7,0);
    VL_SIG8(v__DOT__mem___05FT_124_data,7,0);
    VL_SIG8(v__DOT__mem___05FT_126_data,7,0);
    //char	__VpadToAlign84[4];
    VL_SIG8(v__DOT__mem[16777216],7,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clock,0,0);
    //char	__VpadToAlign16777309[3];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    //char	__VpadToAlign16777316[4];
    Vmemorymodule__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Vmemorymodule& operator= (const Vmemorymodule&);	///< Copying not allowed
    Vmemorymodule(const Vmemorymodule&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vmemorymodule(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vmemorymodule();
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vmemorymodule__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vmemorymodule__Syms* symsp, bool first);
  private:
    static QData	_change_request(Vmemorymodule__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__2(Vmemorymodule__Syms* __restrict vlSymsp);
    static void	_combo__TOP__5(Vmemorymodule__Syms* __restrict vlSymsp);
    static void	_combo__TOP__7(Vmemorymodule__Syms* __restrict vlSymsp);
    static void	_eval(Vmemorymodule__Syms* __restrict vlSymsp);
    static void	_eval_initial(Vmemorymodule__Syms* __restrict vlSymsp);
    static void	_eval_settle(Vmemorymodule__Syms* __restrict vlSymsp);
    static void	_initial__TOP__1(Vmemorymodule__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__4(Vmemorymodule__Syms* __restrict vlSymsp);
    static void	_settle__TOP__6(Vmemorymodule__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
