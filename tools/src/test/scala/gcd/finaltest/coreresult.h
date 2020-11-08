#ifndef __CORERESULT_H__
#define __CORERESULT_H__

#include "reg_info.h"
#include "common.h"
#include "verilated.h"
#include "Vtop.h"

class coreresult
{
private:
    system_word cycle_time;
    Vtop* top;

public:
    coreresult(Vtop* in);
    void coreGetRegs(reg_info* info);
    void coreStep(int n);
    void coreInit(int n);
    Vtop* getTop();
    system_word coreGetcycle_time();
};



#endif 