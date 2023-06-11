// logger.h


//#pragma once

#ifndef _JOYC_CORE_LOGGER_
#define _JOYC_CORE_LOGGER_

#include <string>

namespace core
{
	class Logger
	{
	public:
		Logger();
		~Logger();
		virtual void log(std::string&);
	private:

	};


}


#endif // !_JOYC_CORE_LOGGER_
