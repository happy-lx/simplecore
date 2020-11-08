#include "Ram.h"
#include "common.h"

Ram::Ram()
{
    ramsize_system = RAMSIZE / sizeof(system_word);
}

int Ram::get_ramsize_system()
{
    return ramsize_system;
}
uint_8* Ram::get_ram_start_addr()
{
    return ram;
}

