#include "nemuresult.h"
#include <dlfcn.h>
#include <stdlib.h>
#include <assert.h>
#include <iostream>

nemuresult::nemuresult(Ram* ram_addr)
{
    nemu_ram = ram_addr;
    cycle_time = 0;

    void* nemu = dlopen("../lib/riscv64-nemu-interpreter-so",RTLD_LAZY | RTLD_DEEPBIND);
    assert(nemu != NULL);

    #ifdef LOG
    std::cout << "[info] load nemu interpreter successfully!" << std::endl;
    #endif

    dllMemoryFromDUT = (dllMemoryFromDUT_t)dlsym(nemu, "difftest_memcpy_from_dut");
    dllSetRegs = (dllSetRegs_t)dlsym(nemu, "difftest_setregs");
    dllGetRegs = (dllGetRegs_t)dlsym(nemu, "difftest_getregs");
    dllStep = (dllStep_t)dlsym(nemu, "difftest_exec");
    dllInit = (dllInit_t)dlsym(nemu, "difftest_init");

    #ifdef LOG
    std::cout << "[info] initing nemu..." << std::endl;
    #endif
    dllInit();
    #ifdef LOG
    std::cout << "[info] init nemu down" << std::endl;
    #endif

    #ifdef LOG
    std::cout << "[info] loading instructions and data from ram to nemu..." << std::endl;
    #endif

    dllMemoryFromDUT(STARTADDR,nemu_ram->get_ram_start_addr(),nemu_ram->get_ramsize_system());

    #ifdef LOG
    std::cout << "[info] load instructions and data from ram to nemu down" << std::endl;
    #endif

}

void nemuresult::getRegs(reg_info* info)
{
    dllGetRegs(info);
}

void nemuresult::setRegs(reg_info* info)
{
    dllSetRegs(info);
}

void nemuresult::step(int n)
{
    dllStep(n);
    cycle_time += n;
}
system_word nemuresult::getCycle()
{
    return cycle_time;
}

