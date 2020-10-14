#include "uart.h"
#include <fstream>
#include <string>
#include <vector>

std::vector<char> cmd;
int point = 0;

void uart_init(std::string init_str)
{
    std::string test = init_str;
    for(int i=0;i<test.length();i++)
    {
        cmd.push_back(test[i]);
    }
}
void uart_close()
{
    cmd.clear();
}

void uart_getchar(char* ch)
{

    if(point == cmd.size())
    {
        *ch = '0';
        // printf("$%d ",point);
    }else
    {
        *ch = cmd[point++];
        // printf("$%d ",point);
    }
    
    
    
    
}

void uart_putchar(char ch)
{
    //put a char to terminal
    printf("%c",ch);
}