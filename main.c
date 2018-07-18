// indexc
// A compiler and parser for index programming language
// 
// This project just for practice by pure c
//


//#program once


#include <stdio.h>
#include <stdlib.h>




extern void Logg(const char*);


int main(int argc, char* argv[])
{
    printf("init ");
    int a, b, c = { 0, 1, 2};
    printf("\n");
    printf("a:%d, b:%d, c:%d \n", a, b, c);

    Logg("Hello World");

    return 0;
}

