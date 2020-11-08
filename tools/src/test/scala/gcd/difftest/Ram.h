#ifndef __RAM_H__
#define __RAM_H__
#include "common.h"

//定义一个可以存放所有simplecore内存空间大小的一个ram，并且在初始化的时候将其中的内容(instruction)
//复制到nemu中
class Ram
{
private:
    uint_8 ram[RAMSIZE];
    int ramsize_system;

public:
    Ram();
    int get_ramsize_system();
    uint_8* get_ram_start_addr();
};


#endif