#include <verilated.h>      
#include "Vtop.h"
#include <iostream>
#include "uart.h"
#include <stdio.h>

vluint64_t main_time = 0;

double sc_time_stamp()
{
    return main_time;
}

void print_redir(Vtop* target)
{
    if(target->top__DOT__mycore__DOT__cpath__DOT__cs_reg_mem_exception)
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

void print_MMU_stage(Vtop* target)
{
    switch (target->top__DOT__mycore__DOT__dmmu__DOT__mmu_stage)
    {
        case 0:
            printf("dmmu is in idle stage\n");
            break;
        case 1:
            printf("dmmu is in translate stage\n");
            break;
        case 2:
            printf("dmmu is in access stage\n");
            break;
        
        default:
            break;
    }

    switch (target->top__DOT__mycore__DOT__immu__DOT__mmu_stage)
    {
        case 0:
            printf("immu is in idle stage\n");
            break;
        case 1:
            printf("immu is in translate stage\n");
            break;
        case 2:
            printf("immu is in access stage\n");
            break;
        
        default:
            break;
    }
}

void print_tlb_ptw_stage(Vtop* target)
{
    switch (target->io_diff_tlb_stage)
    {
        case 0:
            printf("itlb is in tlb_idle stage\n");
            break;
        case 1:
            printf("itlb is in tlb_find_tlb stage\n");
            break;
        case 2:
            printf("itlb is in tlb_find_entry stage\n");
            break;
        case 3:
            printf("itlb is in tlb_write_back stage\n");
            break;
        case 4:
            printf("itlb is in tlb_find_ptw stage\n");
            break;
        
        default:
            break;
    }

    switch (target->io_diff_ptw_stage)
    {
        case 0:
            printf("iptw is in ptw_idle stage\n");
            break;
        case 1:
            printf("iptw is in ptw_vpn2 stage\n");
            break;
        case 2:
            printf("iptw is in ptw_vpn1 stage\n");
            break;
        case 3:
            printf("iptw is in ptw_vpn0 stage\n");
            break;
        
        default:
            break;
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
            printf("$x%d : [%lx] ",i,(unsigned long)target->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs[i]);
        }else if(i == 1)
        {
            printf("$ra : [%lx] ",(unsigned long)target->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs[i]);
        }else if(i == 2)
        {
            printf("$sp : [%lx] ",(unsigned long)target->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs[i]);
        }else if(i == 3)
        {
            printf("$gp : [%lx] ",(unsigned long)target->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs[i]);
        }else if(i == 4)
        {
            printf("$tp : [%lx] ",(unsigned long)target->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs[i]);
        }else if( (i>=5 && i<=7) || (i>=28 && i<=31))
        {
            printf("$t%d : [%lx] ",temp_cnt++,(unsigned long)target->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs[i]);
        }else if(i == 8)
        {
            printf("$fp : [%lx] ",(unsigned long)target->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs[i]);
        }else if( (i == 9) || (i>=18 && i<=27))
        {
            printf("$s%d : [%lx] ",save_cnt++,(unsigned long)target->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs[i]);
        }else if( (i>=10 && i<=11) || (i>=12 && i<=17))
        {
            printf("$a%d : [%lx] ",arg_cnt++,(unsigned long)target->top__DOT__mycore__DOT__dpath__DOT__regfile__DOT__regs[i]);
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
    printf("mepc : [%lx] ",(unsigned long)target->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mepc);
    printf("mcause : [%lx] ",(unsigned long)target->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mcause);
    printf("mtval : [%lx] ",(unsigned long)target->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtval);
    printf("mtvec : [%lx] ",(unsigned long)target->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mtvec);
    printf("mscratch : [%lx] \n",(unsigned long)target->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mscratch);
    printf("mip_time : [%lx] \n",(unsigned long)target->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mip_mti);
    printf("mie_time : [%lx] \n",(unsigned long)target->top__DOT__mycore__DOT__dpath__DOT__csr__DOT__reg_mie_mti);
}
void print_pc(Vtop* target)
{
    printf("pc (in instruction fetch stage) :[%lx]\n",(unsigned long)target->top__DOT__mycore__DOT__dpath__DOT__reg_if_pc);    

    printf("pc (in write back stage) :[%lx]\n",(unsigned long)target->io_diff_pc_data);    
}
void print_rf_valid(Vtop* target)
{
    if(target->top__DOT__mycore__DOT__dpath__DOT__dp_wb_reg_rf_wen)
    {
        printf("the instruction in write back stage will write reg file\n");
    }else
    {
        printf("the instruction in write back stage will not  write reg file\n");
    }
    
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
        printf("mem[0x%x]: 0x%lx\n",(unsigned int)i*8,(unsigned long)target->top__DOT__mem__DOT__mem[i]);
    }
}
void print_icache(Vtop* target)
{
    switch (target->top__DOT__mycore__DOT__icache__DOT__cache_stage)
    {
    case 0:
        printf("icache is in cache_idle stage\n");
        break;
    case 1:
        printf("icache is in cache_find_index stage\n");
        break;
    case 2:
        printf("icache is in cache_resp stage\n");
        break;
    case 3:
        printf("icache is in cache_write_back stage\n");
        break;
    case 4:
        printf("icache is in cache_write_allocate stage\n");
        break;
    case 5:
        printf("icache is in cache_do_flush stage\n");
        break;
    case 6:
        printf("icache is in cache_flush_block stage\n");
        break;
    case 7:
        printf("icache is in icache_flush stage\n");
        printf("icache's flush index is : %ld\n",(unsigned long)target->top__DOT__mycore__DOT__icache__DOT__icache_flush_now);
        break;
    case 8:
        printf("icache is in cache_flush_finish stage\n");
        break;
    default:
        break;
    }

    if(target->top__DOT__mycore__DOT__icache__DOT__cache_miss)
    {
        printf("icache miss\n");
    }else
    {
        printf("icache hit\n");
    }
    
}

void print_dcache(Vtop* target)
{
    switch (target->top__DOT__mycore__DOT__dcache__DOT__cache_stage)
    {
    case 0:
        printf("dcache is in cache_idle stage\n");
        break;
    case 1:
        printf("dcache is in cache_find_index stage\n");
        break;
    case 2:
        printf("dcache is in cache_resp stage\n");
        break;
    case 3:
        printf("dcache is in cache_write_back stage\n");
        break;
    case 4:
        printf("dcache is in cache_write_allocate stage\n");
        break;
    case 5:
        printf("dcache is in cache_do_flush stage\n");
        printf("dcache's flush index is : %ld\n",(unsigned long)target->top__DOT__mycore__DOT__dcache__DOT__flush_now);
        break;
    case 6:
        printf("dcache is in cache_flush_block stage\n");
        printf("dcache's flush index is : %ld\n",(unsigned long)target->top__DOT__mycore__DOT__dcache__DOT__flush_now);
        break;
    case 7:
        printf("dcache is in icache_flush stage\n");
        break;
    case 8:
        printf("dcache is in cache_flush_finish stage\n");
        break;
    default:
        break;
    }

    if(target->top__DOT__mycore__DOT__dcache__DOT__cache_miss)
    {
        printf("dcache miss\n");
    }else
    {
        printf("dcache hit\n");
    }
    
}

void print_dcross_bar(Vtop* target)
{
    switch (target->top__DOT__mycore__DOT__dcache_cross_bar__DOT__write_state)
    {
    case 0:
        printf("dcross_bar is in write_idle stage\n");
        break;
    case 1:
        printf("dcross_bar is in write_burst stage\n");
        break;
    case 2:
        printf("dcross_bar is in write_resp stage\n");
        break;
    default:
        break;
    }
    switch (target->top__DOT__mycore__DOT__dcache_cross_bar__DOT__read_state)
    {
    case 0:
        printf("dcross_bar is in read_idle stage\n");
        break;
    case 1:
        printf("dcross_bar is in read_burst stage\n");
        break;
    case 2:
        printf("dcross_bar is in read_resp stage\n");
        break;
    default:
        break;
    }
}

void print_icross_bar(Vtop* target)
{
    switch (target->top__DOT__mycore__DOT__icache_cross_bar__DOT__write_state)
    {
    case 0:
        printf("icross_bar is in write_idle stage\n");
        break;
    case 1:
        printf("icross_bar is in write_burst stage\n");
        break;
    case 2:
        printf("icross_bar is in write_resp stage\n");
        break;
    default:
        break;
    }
    switch (target->top__DOT__mycore__DOT__icache_cross_bar__DOT__read_state)
    {
    case 0:
        printf("icross_bar is in read_idle stage\n");
        break;
    case 1:
        printf("icross_bar is in read_burst stage\n");
        break;
    case 2:
        printf("icross_bar is in read_resp stage\n");
        break;
    default:
        break;
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
void print_exe_stall(Vtop* target)
{
    printf("exe_stall : [%d]\n",target->io_diff_alu_exe_stall);
    printf("pipline stall : [%d]\n",target->top__DOT__mycore__DOT__cpath_io_c2d_cp_pipeline_stall);
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

void print_mul_info(Vtop* target)
{
    printf("mul_result_hi : %lx\nmul_result_lo : %lx\nabs_op1 : %lx\nabs_op2 : %lx\n",target->io_diff_mul_result_hi,target->io_diff_mul_result_lo,target->io_diff_abs_op1,target->io_diff_abs_op2);
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
            print_rf_valid(target);
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
    uart_init("12asa");
    
    while(!Verilated::gotFinish())
    {
        if(main_time % 10 == 0)
        {
            top->clock = ! (top->clock);
        }
        top->eval();


        if(main_time % 20 == 0)
        {
            if(main_time > 0 && main_time < 100000)
            {
                printf("in cycle %d:\n",(int)main_time / 20);
                print_valid(top);
                print_pc(top);
                print_exe_stall(top);
                print_mul_info(top);
                print_icache(top);
                print_dcache(top);
                print_MMU_stage(top);
                print_tlb_ptw_stage(top);
                print_icross_bar(top);
                print_dcross_bar(top);
                // print_rfen(top);
                print_instr(top);
                print_wbsel(top);
                print_rf_valid(top);
                print_mem(top);
                print_redir(top);
                print_retire(top);
                print_regs(top);
                printcsrs(top);
                printf("============================================   end  ================================================\n");
            }
        }
         
        main_time += 10;

        if(main_time == 100000)
        {
            break;
        }
    }

    return 0;
}