#ifndef __NEMURESULT_H__
#define __NEMURESULT_H__

#include "common.h"
#include "reg_info.h"
#include "Ram.h"

class nemuresult
{
private:
    Ram* nemu_ram;

    //function from dll
    typedef void(* dllMemoryFromDUT_t) (system_word start_addr,void* src,int word_num);
    typedef void(* dllSetRegs_t) (const void* in);
    typedef void(* dllGetRegs_t) (void* in);
    typedef void(* dllStep_t) (int n);
    typedef void(* dllInit_t)();

    dllMemoryFromDUT_t dllMemoryFromDUT;
    dllSetRegs_t dllSetRegs;
    dllGetRegs_t dllGetRegs;
    dllStep_t dllStep;
    dllInit_t dllInit;

    system_word cycle_time;

public:
    nemuresult(Ram* ram_addr);
    void getRegs(reg_info* info);
    void setRegs(reg_info* info);
    void step(int n);
    system_word getCycle();
};





#endif 