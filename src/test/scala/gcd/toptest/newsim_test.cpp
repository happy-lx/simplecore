#include <verilated.h>      
#include "Vtop.h"
#include <iostream>
#include <stdio.h>

vluint64_t main_time = 0;

double sc_time_stamp()
{
    return main_time;
}

void print_redir(Vtop* target)
{
    if(target->v__DOT__mycore__DOT__cpath__DOT__cs_reg_mem_exception)
    {
        printf("detect a illegal instruction excepiton in mem stage\n");
    }else
    {
        printf("no excepiton detected in mem stage\n");
    }

    if(target->io_diff_isredir)
    {
        printf("exception or mret happened , pc redirect\n");
    }else
    {
        printf("exception or mret not happened , pc not redirect\n");
    }
}

void print_regs(Vtop* target)
{
    int temp_cnt = 0;
    int save_cnt = 0;
    int arg_cnt = 0;

    for(int i=0;i<32;i++)
    {
        if(i == 0)
        {
            printf("$x%d : [%lx] ",i,(unsigned long)target->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs[i]);
        }else if(i == 1)
        {
            printf("$ra : [%lx] ",(unsigned long)target->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs[i]);
        }else if(i == 2)
        {
            printf("$sp : [%lx] ",(unsigned long)target->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs[i]);
        }else if(i == 3)
        {
            printf("$gp : [%lx] ",(unsigned long)target->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs[i]);
        }else if(i == 4)
        {
            printf("$tp : [%lx] ",(unsigned long)target->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs[i]);
        }else if( (i>=5 && i<=7) || (i>=28 && i<=31))
        {
            printf("$t%d : [%lx] ",temp_cnt++,(unsigned long)target->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs[i]);
        }else if(i == 8)
        {
            printf("$fp : [%lx] ",(unsigned long)target->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs[i]);
        }else if( (i == 9) || (i>=18 && i<=27))
        {
            printf("$s%d : [%lx] ",save_cnt++,(unsigned long)target->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs[i]);
        }else if( (i>=10 && i<=11) || (i>=12 && i<=17))
        {
            printf("$a%d : [%lx] ",arg_cnt++,(unsigned long)target->v__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs[i]);
        }
        
        
        if(i%10 == 0)
        {
            printf("\n");
        }
    }
    printf("\n");
}
void printcsrs(Vtop* target)
{
    printf("mstatus : [%lx] ",(unsigned long)target->io_diff_mstatus);
    printf("mepc : [%lx] ",(unsigned long)target->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc);
    printf("mcause : [%lx] ",(unsigned long)target->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcause);
    printf("mtval : [%lx] ",(unsigned long)target->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtval);
    printf("mtvec : [%lx] ",(unsigned long)target->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtvec);
    printf("mscratch : [%lx] \n",(unsigned long)target->v__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mscratch);
}
void print_pc(Vtop* target)
{
    printf("pc (in instruction fetch stage) :[%lx]\n",(unsigned long)target->v__DOT__mycore__DOT__dpath__DOT__reg_if_pc);    

    printf("pc (in write back stage) :[%lx]\n",(unsigned long)target->io_diff_pc_data);    
}

void print_valid(Vtop* target)
{
    printf("is valid (in decode stage) ? ");
    if(target -> io_diff_is_valid)
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
    for(int i=0;i<32;i++)
    {
        printf("mem[0x%x]: 0x%x\n",(unsigned int)i,(unsigned int)target->v__DOT__mycore__DOT__mymem__DOT__mem[i]);
    }
}

void print_instr(Vtop* target)
{
    printf("instruction (in write back stage): %lx\n",(unsigned long)target->io_diff_instr_in_wb);
}

void print_wbsel(Vtop* target)
{
    // printf("wbsel: [%x]\n pc_4: [%lx]\n",(unsigned)target->v__DOT__mycore__DOT__cpath_io_c2d_cp_wb_sel,(unsigned long)target->v__DOT__mycore__DOT__dpath__DOT__temp_pc_next_4);
}
void print_retire(Vtop* target)
{
    if(target->io_diff_is_retire)
    {
        printf("a legal instruction will commit \n");
    }else
    {
        printf("no legal instruction will commit \n");
    }
}
void print_rfen(Vtop* target)
{
    // if(target->io_diff_rf_wen)
    // {
    //     printf("rf_wen is true\n");
    // }else
    // {
    //     printf("rf_wen is false\n");
    // }

    // if(target->io_diff_rf_cp_wen)
    // {
    //     printf("rf_wen from cpath is true\n");
    // }else
    // {
    //     printf("rf_wen from cpath is false\n");
    // }
    // if(target->v__DOT__mycore__DOT__cpath_io_c2d_cp_reg_wen)
    // {
    //     printf("rf_wen local is true\n");
    // }else
    // {
    //     printf("rf_wen local is false\n");
    // }
    
    
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
            printf("in init cycle \n");
            print_valid(target);
            print_pc(target);
            // print_rfen(top);
            print_instr(target);
            print_wbsel(target);
            print_mem(target);
            print_redir(target);
            print_retire(target);
            print_regs(target);
            printcsrs(target);
            printf("============================================   end  ================================================\n");
        target->reset = 0;
    }
}

int main(int argc,char** argv)
{
    Verilated::commandArgs(argc,argv);

    Vtop* top = new Vtop();

    reset_cycle(top,1);

    // put_to_pipeline(top,4);
    
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
            // print_rfen(top);
            print_instr(top);
            print_wbsel(top);
            print_mem(top);
            print_redir(top);
            print_retire(top);
            print_regs(top);
            printcsrs(top);
            printf("============================================   end  ================================================\n");
        }
         
        main_time ++;

        if(main_time == 300)
        {
            break;
        }
    }

    return 0;
}