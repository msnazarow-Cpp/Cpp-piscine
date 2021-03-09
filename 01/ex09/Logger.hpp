#pragma once
#include <string>

class Logger
{
private:
	std::string filename;
	void logToConsole(std::string);
	void logToFile(std::string);
	std::string makeLogEntry(std::string);
public:
	void log(std::string const & dest, std::string const & message);
	Logger(std::string);
	~Logger() {}
};