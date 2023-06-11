// test.c
// project joyc file
//
// A module logger



#include <stdio.h>

void log(const char* s)
{
    //printf("log:%s\n", s);
	print(s);
	print("\n");
}


void error(const char* s)
{
    printf("error:%s\n", s);
}
