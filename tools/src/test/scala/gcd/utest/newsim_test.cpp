#include <verilated.h>      
#include "Vtop.h"
#include <iostream>
#include <stdio.h>
#include <fstream>
#include "uart.h"
#include "Vtop__Dpi.h"


vluint64_t main_time = 0;

double sc_time_stamp()
{
    return main_time;
}

 
void put_to_pipeline(Vtop* target,int cycle)
{
    for(int i=0;i<cycle;i++)
    {
        target->clock = 0;
        target->eval();
        target->clock = 1;
        target->eval();
    }
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
            // printf("in init cycle \n");
            // print_valid(target);
            // print_pc(target);
            // // print_rfen(top);
            // print_instr(target);
            // print_wbsel(target);
            // print_rf_valid(target);
            // print_mem(target);
            // print_redir(target);
            // print_retire(target);
            // print_regs(target);
            // printcsrs(target);
            // printf("============================================   end  ================================================\n");
        target->reset = 0;
    }
}

int main(int argc,char** argv)
{
    Verilated::commandArgs(argc,argv);

    Vtop* top = new Vtop();

    reset_cycle(top,1);

    // put_to_pipeline(top,4);
    uart_init("help\nps\nps\nlist_msgqueue\nlist_mempool\nlist_timer\nps\nmemcheck\nmemtrace\nps\nps\nps\nps\nps\nps\nps\nps\nps\nps\nps\nps\nps\nps\nps\nps\nps\nps\nps\n");
    
    long long cnt = 0;

    while(!Verilated::gotFinish())
    {
        top->clock = (top->clock == 1 ? 0 : 1);
        top->eval();
        top->clock = (top->clock == 1 ? 0 : 1);
        top->eval();
        cnt ++ ;

        // if(cnt > 1 && cnt < 500000 || cnt == 1)
        // {
        //     printf("mtime:%lx mtimecmp:%lx mepc:%lx ra:%lx sp:%lx pc:%lx \n",top->top__DOT__mymem__DOT__reg_mtime,top->top__DOT__mymem__DOT__reg_mtimecmp,top->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc,top->io_diff_r_1,top->io_diff_r_2,top->io_diff_pc_data);
        // }
        // if(cnt == 500000)
        // {
        //     break;
        // }

        // printf("uart_control:%x\n",(unsigned)top->top__DOT__mymem__DOT__uart_control);
        // printf("uart_state:%x\n",(unsigned)top->top__DOT__mymem__DOT__uart_state);
        // printf("mtime:%x\n",(unsigned)top->top__DOT__mymem__DOT__reg_mtime);
        // printf("mtimecmp:%x\n",(unsigned)top->top__DOT__mymem__DOT__reg_mtimecmp);
        // if(cnt == 10000000)
        // break;
    }
    // printf("simulation successfully!\n");c
    uart_close();

    return 0;
}