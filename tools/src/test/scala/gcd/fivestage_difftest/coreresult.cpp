#include "coreresult.h"
#include "common.h"
#include <iostream>
#include <string.h>


coreresult::coreresult(Vtop* in,Ram* ram_in)
{
    top = in;
    core_ram = ram_in;
    cycle_time = 0;

    coreInit(1);

    #ifdef LOG
    std::cout << "[info] copying core's instructions and data to ram...\n" << std::endl;
    #endif
    memcpy(core_ram,top->top__DOT__mymem__DOT__mem,RAMSIZE);
    #ifdef LOG
    std::cout << "[info] copy down\n" << std::endl;
    #endif
}
system_word coreresult::coreGetcycle_time()
{
    return cycle_time;
}
void coreresult::coreGetRegs(reg_info* info)
{
    info->regs[0] = top->io_diff_r_0;
    info->regs[1] = top->io_diff_r_1;
    info->regs[2] = top->io_diff_r_2;
    info->regs[3] = top->io_diff_r_3;
    info->regs[4] = top->io_diff_r_4;
    info->regs[5] = top->io_diff_r_5;
    info->regs[6] = top->io_diff_r_6;
    info->regs[7] = top->io_diff_r_7;
    info->regs[8] = top->io_diff_r_8;
    info->regs[9] = top->io_diff_r_9;
    info->regs[10] = top->io_diff_r_10;
    info->regs[11] = top->io_diff_r_11;
    info->regs[12] = top->io_diff_r_12;
    info->regs[13] = top->io_diff_r_13;
    info->regs[14] = top->io_diff_r_14;
    info->regs[15] = top->io_diff_r_15;
    info->regs[16] = top->io_diff_r_16;
    info->regs[17] = top->io_diff_r_17;
    info->regs[18] = top->io_diff_r_18;
    info->regs[19] = top->io_diff_r_19;
    info->regs[20] = top->io_diff_r_20;
    info->regs[21] = top->io_diff_r_21;
    info->regs[22] = top->io_diff_r_22;
    info->regs[23] = top->io_diff_r_23;
    info->regs[24] = top->io_diff_r_24;
    info->regs[25] = top->io_diff_r_25;
    info->regs[26] = top->io_diff_r_26;
    info->regs[27] = top->io_diff_r_27;
    info->regs[28] = top->io_diff_r_28;
    info->regs[29] = top->io_diff_r_29;
    info->regs[30] = top->io_diff_r_30;
    info->regs[31] = top->io_diff_r_31;
    
    info->pc = top->io_diff_pc_data;
}
void coreresult::coreInit(int n)
{
    //reset for n cycles
    for(int i=0;i<n;i++)
    {
        top->reset = 1;
        top->clock = 0;
        top->eval();
        top->clock = 1;
        top->eval();
        top->reset = 0;
    }
}
void coreresult::coreStep(int n)
{
    //step forward for n cycles
    for(int i=0;i<n;i++)
    {
        top->clock = (top->clock == 1 ? 0 : 1);
        top->eval();
        top->clock = (top->clock == 1 ? 0 : 1);
        top->eval();
        cycle_time++;
    }
}
Vtop* coreresult::getTop()
{
    return top;
}

