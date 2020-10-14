// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif
    
    
    // DPI IMPORTS
    // DPI import at UARTHelper.v:2
    extern void uart_getchar(char* ch);
    // DPI import at UARTHelper.v:5
    extern void uart_putchar(char ch);
    
#ifdef __cplusplus
}
#endif
