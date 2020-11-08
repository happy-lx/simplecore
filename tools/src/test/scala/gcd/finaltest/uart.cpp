#include "svdpi.h"
#include "Vtop__Dpi.h"
#include "common.h"
#include <fstream>
#include <stdio.h>
#include <iostream>

ifstream input_file


void uart_init(std::string filepath)
{
    input_file.open(filepath.c_str(),std::ios::in);
}

void uart_getchar(char* ch)
{
    //read from file 
    if(!input_file.eof())
    {
        input_file.get(*ch);
    }else
    {
        *ch = (char)0;
    }
    
}

void void uart_putchar(char ch)
{
    //put a char to terminal
    printf("%c",ch);
}