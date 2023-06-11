// joyc
// A compiler and parser for index programming language
// 
// This project just for practice by C++
// 代码格式按照Google c++ guide
//


#include <stdio.h>
#include <stdlib.h>

#include "core/logger.h"
#include "help.h"



int main(int argc, char* argv[])
{

	std::string str(help_str);
	core::Logger logger;
	logger.log(str);

	system("pause");
    return 0;
}

