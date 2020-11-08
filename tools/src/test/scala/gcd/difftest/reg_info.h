#ifndef __REG_INFO_H__
#define __REG_INFO_H__

#include "common.h"

struct reg_info
{
    system_word regs[REGNUM];
    system_word pc;
    system_word empty[6];
};

#endif