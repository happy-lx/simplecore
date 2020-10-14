#ifndef __UART_H__
#define __UART_H__
#include "Vtop__Dpi.h"
#include "svdpi.h"
#include <string>
#include <stdio.h>
#include <iostream>

void uart_init(std::string filepath);


void uart_getchar(char* ch);


void uart_putchar(char ch);

void uart_close();


#endif