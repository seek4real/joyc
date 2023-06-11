// Logger
// c++ version


#include "logger.h"

#include <string>
#include <iostream>


core::Logger::Logger()
{
}

core::Logger::~Logger()
{
}


void
core::Logger::log(std::string& str)
{
	std::cout << "Logger:" << str << std::endl;
}