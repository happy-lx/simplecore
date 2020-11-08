#include "uart.h"
#include <fstream>

std::ifstream input_file;

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

void uart_putchar(char ch)
{
    //put a char to terminal
    printf("%c",ch);
}