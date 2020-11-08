#include "verilated.h"
#include "Vtop.h"
#include "reg_info.h"
#include "common.h"
#include "coreresult.h"
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


int main(int argc , char** argv)
{
    Verilated::commandArgs(argc,argv);

    Vtop* top = new Vtop();
    reg_info* info_core = new reg_info();

    coreresult* core = new coreresult(top);

    uart_init("cmd.txt");


    while(!Verilated::gotFinish())
    {
        core->coreStep(1);
        if(core->coreGetcycle_time() == 1000000)
        {
            break;
        }
    }

    #ifdef LOG
    printf("\033[1;32;40m[info] simulation successfully!\033[0m \n");
    #endif

    

}