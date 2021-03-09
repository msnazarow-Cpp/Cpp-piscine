#include "Logger.hpp"
#include <fstream>
#include <iostream>

Logger::Logger(std::string filename):filename(filename){};
void Logger::logToConsole(std::string message)
{
	std::cout << makeLogEntry(message);
}
void Logger::logToFile(std::string message)
{
	std::ofstream file;

	file.open(filename.c_str());
	file << makeLogEntry(message);
}
std::string Logger::makeLogEntry(std::string message)
{
	time_t		now = time(0);
	struct tm	tstruct;
	char		buf[80];
	tstruct = *localtime(&now);
	strftime(buf, sizeof(buf), "[%Y%m%d_%OH%OM%OS] ", &tstruct);
	return (std::string(buf) + message);
}
void Logger::log(std::string const & dest, std::string const & message)
{
	typedef void (Logger:: *myfunc)(std::string);
	myfunc funks[] = {&Logger::logToFile, &Logger::logToConsole};

	std::string str[] = {"logToFile", "logToConsole"};
	int i = -1;
	while (!str[++i].empty())
		if (str[i] == dest){
			(this->*funks[i])(message);
			return ;}
	std::cout << "no such method\n";
}