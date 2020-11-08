#ifndef __COMMON_H__
#define __COMMON_H__

#define __RV64__
#define LOG

#define STARTADDR 0x80000000
#define RAMSIZE (128 * 1024 * 1024)
#define REGNUM 32

typedef unsigned int uint_32;
typedef unsigned long uint_64;
typedef unsigned char uint_8;

#ifdef __RV64__
typedef uint_64 system_word;

#else
typedef uint_32 system_word;

#endif


#endif