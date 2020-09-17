#include <verilated.h>      
#include "Vtop.memorymodule.mem.h"
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

    top -> eval();
    

    return 0;
}