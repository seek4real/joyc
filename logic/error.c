// test.c
// project joyc file
//
// A module logger





#include "error.h"
#include <stdio.h>
#include <stdarg.h>




void error_print(const char* pFile, int line, const char* pFmt, ...)
{
	va_list vlArgs = NULL;
	va_start(vlArgs, pFmt);
    printf("Error [%s]:[%d]:%s .\n", pFile, line, pFmt);
	va_end(vlArgs);
}
