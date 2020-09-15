#include "verilated.h"         // Defines common routines
#include "Vmemorymodule.h"
#include <iostream>


vluint64_t main_time = 0;

double sc_time_stamp () {       // Called by $time in Verilog
   return main_time;           // converts to double, to match
                                 // what SystemC does
}

int main(int argc,char** argv)
{
    Verilated::commandArgs(argc, argv);   // Remember args

    Vmemorymodule * top = new Vmemorymodule();

    top->reset = 1;
    top->eval();
    top->reset = 0;
    int i = 0;

    while(!Verilated::gotFinish())
    {
        top->clock = 0;
        top->io_ports_0_req_valid = 1;
        top->io_ports_0_req_bits_addr = i * 8;
        top->io_ports_0_req_bits_mask = 255;
        top->io_ports_0_req_bits_wdata = main_time;
        top->io_ports_0_req_bits_memen = 1;
        top->io_ports_0_req_bits_wen = 1;
        top->io_ports_0_req_bits_op = 1;
        top->io_ports_0_resp_ready = 1;

        top->io_ports_1_req_valid = 1;
        top->io_ports_1_req_bits_addr = i * 8;
        top->io_ports_1_req_bits_mask = 31;
        top->io_ports_1_req_bits_wdata = main_time;
        top->io_ports_1_req_bits_memen = 1;
        top->io_ports_1_req_bits_wen = 1;
        top->io_ports_1_req_bits_op = 6;
        top->io_ports_1_resp_ready = 1;

        top->eval();
        top->clock = 1;
        top->eval();

        if(top->io_ports_0_resp_valid)
        {
            std::cout << "is valid? : [" << "true" << "] read data : " << top->io_ports_0_resp_bits_rdata << " write data: "<< top->io_ports_0_req_bits_wdata << endl;
        }else
        {
            std::cout << "is valid? : [" << "false" << "] read data : " << top->io_ports_0_resp_bits_rdata << " write data: "<< top->io_ports_0_req_bits_wdata << endl;
        }
        
        

        main_time ++;
        i++;

        if(main_time == 400)
        {
            break;
        }
    }
    delete top;
    return 0;
}