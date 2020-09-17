#include <verilated.h>      
#include "Vtop.h"
#include <iostream>
#include <stdio.h>

vluint64_t main_time = 0;

double sc_time_stamp()
{
    return main_time;
}
void reset_cycle(Vtop* target,int cycle)
{
    for(int i=0;i<cycle;i++)
    {
        target->reset = 1;
        target->clock = 0;
        target->eval();
        target->clock = 1;
        target->eval();
        target->reset = 0;
    }
}

void print_regs(Vtop* target)
{
    for(int i=0;i<32;i++)
    {
        printf("$r%d : [%x] ",i,(unsigned int)target->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs[i]);
        if(i%10 == 0)
        {
            printf("\n");
        }
    }
    printf("\n");
}
void print_pc(Vtop* target)
{
    printf("pc :[%lx]\n",(unsigned long)target->io_diff_pc_data);    
}

void print_valid(Vtop* target)
{
    printf("is valid ? ");
    if(target -> v__DOT__mycore__DOT__cpath__DOT__cs_valid_inst)
    {
        printf("[Y]");
    }else
    {
        printf("[N]");
    }
    printf("\n");
    
}
void print_mem(Vtop* target)
{
    for(int i=0;i<16;i++)
    {
        printf("mem[0x%x]: 0x%x\n",(unsigned int)i,(unsigned int)target->v__DOT__mycore__DOT__mymem__DOT__mem[i]);
    }
}

void print_instr(Vtop* target)
{
    printf("instruction: %lx\n",(unsigned long)target->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata);
}

int main(int argc,char** argv)
{
    Verilated::commandArgs(argc,argv);

    Vtop* top = new Vtop();

    reset_cycle(top,1);
    
    while(!Verilated::gotFinish())
    {
        if(main_time % 10 == 0)
        {
            top->clock = ! (top->clock);
        }
        top->eval();


        if(main_time % 20 == 0)
        {
            printf("in cycle %d:\n",(int)main_time / 20);
            print_valid(top);
            print_pc(top);
            print_instr(top);
            print_mem(top);
            print_regs(top);

        }
         
        main_time ++;

        if(main_time == 100)
        {
            break;
        }
    }

    return 0;
}