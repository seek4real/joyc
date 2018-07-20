// test.c
// project indexc file
//
// A module logger


//#program once


#include <stdio.h>

void Logg(const char* s)
{
    printf("log:%s\n", s);
}


void Error(const char* s)
{
    printf("error:%s\n", s);
}
