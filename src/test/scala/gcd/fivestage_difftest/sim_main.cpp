#include "verilated.h"
#include "Vtop.h"
#include "reg_info.h"
#include "common.h"
#include "Ram.h"
#include "coreresult.h"
#include "nemuresult.h"
#include "uart.h"
#include <iostream>
#include <stdio.h>
#include <string.h>


#define RED  \033[1;31;40m
#define DONE \033[0m
#define GREEN \033[1;32;40m

vluint64_t main_time = 0;

const char* RegRef[REGNUM+1] = {
    "$0" , "ra" , "sp" , "gp" , "tp" ,"t0" , "t1" , "t2" , "s0" , "s1" , "a0" , "a1" , "a2",
    "a3" , "a4" , "a5" , "a6" , "a7" , "s2" , "s3" ,"s4" ,"s5" ,"s6" ,"s7" ,"s8" ,"s9" ,"s10" ,
    "s11" ,"t3" ,"t4" ,"t5" ,"t6" ,"pc" 
};

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
        // if(i == 0)
        // {
        //     printf("$x%d : [%lx] ",i,(unsigned long)target->regs[i]);
        // }else if(i == 1)
        // {
        //     printf("$ra : [%lx] ",(unsigned long)target->regs[i]);
        // }else if(i == 2)
        // {
        //     printf("$sp : [%lx] ",(unsigned long)target->regs[i]);
        // }else if(i == 3)
        // {
        //     printf("$gp : [%lx] ",(unsigned long)target->regs[i]);
        // }else if(i == 4)
        // {
        //     printf("$tp : [%lx] ",(unsigned long)target->regs[i]);
        // }else if( (i>=5 && i<=7) || (i>=28 && i<=31))
        // {
        //     printf("$t%d : [%lx] ",temp_cnt++,(unsigned long)target->regs[i]);
        // }else if(i == 8)
        // {
        //     printf("$fp : [%lx] ",(unsigned long)target->regs[i]);
        // }else if( (i == 9) || (i>=18 && i<=27))
        // {
        //     printf("$s%d : [%lx] ",save_cnt++,(unsigned long)target->regs[i]);
        // }else if( (i>=10 && i<=11) || (i>=12 && i<=17))
        // {
        //     printf("$a%d : [%lx] ",arg_cnt++,(unsigned long)target->regs[i]);
        // }
        
        printf("%s: 0x%016lx ",RegRef[i],(unsigned long)target->regs[i]);

        if(i%3 == 0)
        {
            printf("\n");
        }
    }
    printf("pc : 0x%016lx",target->pc);
    printf("\n");
}



void getDiff(reg_info* nemu, reg_info* core)
{
    for(int i=0;i<REGNUM ;i++)
    {
        if(core->regs[i] != nemu->regs[i])
        {
            printf("core's %s: 0x%016lx \n",RegRef[i],(unsigned long)core->regs[i]);
            printf("nemu's %s: 0x%016lx \n",RegRef[i],(unsigned long)nemu->regs[i]);
        }
    }
    if(core->pc != nemu->pc)
    {
        printf("core's pc: 0x%016lx \n",(unsigned long)core->pc);
        printf("nemu's pc: 0x%016lx \n",(unsigned long)nemu->pc);
    }
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

    uart_init("cmd.txt");

    // core->coreStep(1);
    // nemu->step(1);

    // core->coreGetRegs(info_core);
    // nemu->getRegs(info_nemu);

    // printf("========================================== in init cycle ==========================================\n");
    // print_info(info_core,0);
    // print_info(info_nemu,1);
    // printf("========================================== init cycle ends ==========================================\n");


    int error_cnt = 0;
    int total_cnt = 0;

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
        //if there is a branch or jump or exception
        //the instruction which causes branch , jump , exeception
        //will set the retire signal in write back stage
        //but there will be a bunch of nop instruction
        //which has a feature that the pc is zero
        //but interrupt is not useful in this way
        core->coreStep(1);
        // while(core->getTop()->io_diff_pc_data == (unsigned long)0)
        // {
        //     core->coreStep(1);
        // }
        while(!core->getTop()->io_diff_is_retire)
        {
            core->coreStep(1);
        }
        nemu->step(1);
        
        core->coreGetRegs(info_core);
        nemu->getRegs(info_nemu);

        print_info(info_core,0);
        print_info(info_nemu,1);

        int has_error = memcmp(info_core,info_nemu,sizeof(system_word)*(REGNUM + 1));//compare the 32 common register and pc 
        if(has_error)
        {
            printf("\033[1;31;40m[ERROR] core's regs is not equal with nemu's regs \033[0m \n");
            getDiff(info_nemu,info_core);
            error_cnt++;

        }else
        {
            printf("\033[1;32;40m[PASS] core's regs is equal with nemu's regs \033[0m \n");
        }
        total_cnt++;
        
        printf("next instruction is %x\n",(unsigned)core->getTop()->io_diff_instr_in_wb);

        printf("========================================== cycle [%ld] ends ==========================================\n",nemu->getCycle()-1);

        // if(nemu->getCycle() == (system_word)500000)
        // {
        //     break;
        // }
        if(error_cnt > 0)
        {
            break;
        }
    }

    #ifdef LOG
    printf("\033[1;32;40m[info] simulation successfully!\033[0m \n");
    printf("\033[1;32;40m[info] correct rate : %.2f\033[0m \n",(float)(total_cnt - error_cnt) * 100/total_cnt);
    printf("\033[1;31;40m[info] error   rate : %.2f\033[0m \n",(float)(error_cnt) * 100/total_cnt);
    #endif

    

}