#include "verilated.h"
#include "Vtop.h"
#include "reg_info.h"
#include "common.h"
#include "Ram.h"
#include "coreresult.h"
#include "nemuresult.h"
#include <iostream>
#include <stdio.h>

vluint64_t main_time = 0;
double sc_time_stamp()
{
    return main_time;
}

void print_info(reg_info* target,int flag)
{
    int temp_cnt = 0;
    int save_cnt = 0;
    int arg_cnt = 0;

    if(flag == 1)
    {
        printf("dumping nemu regs :\n");
    }else
    {
        printf("dumping core regs :\n");
    }

    for(int i=0;i<32;i++)
    {
        if(i == 0)
        {
            printf("$x%d : [%lx] ",i,(unsigned long)target->regs[i]);
        }else if(i == 1)
        {
            printf("$ra : [%lx] ",(unsigned long)target->regs[i]);
        }else if(i == 2)
        {
            printf("$sp : [%lx] ",(unsigned long)target->regs[i]);
        }else if(i == 3)
        {
            printf("$gp : [%lx] ",(unsigned long)target->regs[i]);
        }else if(i == 4)
        {
            printf("$tp : [%lx] ",(unsigned long)target->regs[i]);
        }else if( (i>=5 && i<=7) || (i>=28 && i<=31))
        {
            printf("$t%d : [%lx] ",temp_cnt++,(unsigned long)target->regs[i]);
        }else if(i == 8)
        {
            printf("$fp : [%lx] ",(unsigned long)target->regs[i]);
        }else if( (i == 9) || (i>=18 && i<=27))
        {
            printf("$s%d : [%lx] ",save_cnt++,(unsigned long)target->regs[i]);
        }else if( (i>=10 && i<=11) || (i>=12 && i<=17))
        {
            printf("$a%d : [%lx] ",arg_cnt++,(unsigned long)target->regs[i]);
        }
        
        
        if(i%10 == 0)
        {
            printf("\n");
        }
    }
    printf("$pc : [%lx]",target->pc);
    printf("\n");
}

int main(int argc , char** argv)
{
    Verilated::commandArgs(argc,argv);

    Vtop* top = new Vtop();
    reg_info* info_nemu = new reg_info();
    reg_info* info_core = new reg_info();
    Ram* ram = new Ram();

    coreresult* core = new coreresult(top,ram);
    nemuresult* nemu = new nemuresult(ram);

    // core->coreStep(1);
    // nemu->step(1);

    // core->coreGetRegs(info_core);
    // nemu->getRegs(info_nemu);

    // printf("========================================== in init cycle ==========================================\n");
    // print_info(info_core,0);
    // print_info(info_nemu,1);
    // printf("========================================== init cycle ends ==========================================\n");




    while(!Verilated::gotFinish())
    {
        printf("========================================== in cycle [%ld] ==========================================\n",nemu->getCycle());
        while(true)
        {
            if(core->getTop()->io_diff_is_retire)
            {
                break;
            }
            core->coreStep(1);
        }
        core->coreStep(1);
        nemu->step(1);
        
        core->coreGetRegs(info_core);
        nemu->getRegs(info_nemu);

        print_info(info_core,0);
        print_info(info_nemu,1);
        printf("========================================== cycle [%ld] ends ==========================================\n",nemu->getCycle()-1);

        if(nemu->getCycle() == (system_word)8)
        {
            break;
        }
    }

    #ifdef LOG
    std::cout << "[info] simulation successfully!\n" << std::endl;
    #endif

    

}