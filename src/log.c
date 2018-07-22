// test.c
// project joyc file
//
// A module logger



#include <stdio.h>

void Logg(const char* s)
{
    printf("log:%s\n", s);
}


void Error(const char* s)
{
    printf("<color='red'>error:</color>%s\n", s);
}
