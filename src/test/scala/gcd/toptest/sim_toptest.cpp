#include <verilated.h>      
#include "Vtop.h"
#include <iostream>
#include <stdio.h>

vluint64_t main_time = 0;

double sc_time_stamp()
{
    return main_time;
}

int main(int argc,char** argv)
{
    Verilated::commandArgs(argc,argv);

    Vtop* top = new Vtop();

    int rest_cnt = 5;
    
    
    top->reset = 0;
    
    while(!Verilated::gotFinish())
    {
        if(main_time % 10 == 0)
        {
            top->clock = ! (top->clock);
        }
        top->eval();


        printf("imem out: %lx\n",(long unsigned int)(top->v__DOT__mycore__DOT__mymem_io_ports_0_resp_bits_rdata));
        // printf("now in cycle[%d] : $pc[%x],$r0[%x],$r1[%x],$r2[%x],$r3[%x],$r4[%x],$r5[%x],$r6[%x],$r7[%x],$r8[%x],$r9[%x],$r10[%x]\n",(int)main_time/10,(unsigned int)top->io_diff_pc_data,(unsigned int)top->io_diff_r_0,(unsigned int)top->io_diff_r_1,(unsigned int)top->io_diff_r_2,(unsigned int)top->io_diff_r_3,(unsigned int)top->io_diff_r_4,(unsigned int)top->io_diff_r_5,(unsigned int)top->io_diff_r_6,(unsigned int)top->io_diff_r_7,(unsigned int)top->io_diff_r_8,(unsigned int)top->io_diff_r_9,(unsigned int)top->io_diff_r_10);
        printf("now in cycle[%d]: $pc[%x]\n",(int)main_time/10,(unsigned int)top->io_diff_pc_data);
        for(int i=0;i<16;i++)
        {
            printf("instruction mem 0x%d : %x\n",i,top->v__DOT__mycore__DOT__mymem__DOT__mem[i]);
        }
        for(int i=0;i<32;i++)
        {
            printf("$r%d:[%x] ",i,(unsigned int)top->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs[i]);
        }
        printf("\n");
        // cout << "pc is " << top->io_diff_pc_data <<  endl ;
        // cout << "r0 is " << top->io_diff_pc_data <<  endl ;
        // cout << "r1 is " << top->io_diff_pc_data <<  endl ;
        // cout << "r2 is " << top->io_diff_pc_data <<  endl ;
        main_time ++;

        if(main_time == 100)
        {
            break;
        }
    }

    return 0;
}