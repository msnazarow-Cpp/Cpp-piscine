#include "Logger.hpp"

int main(void)
{
	Logger logger("out");
	logger.log("logToConsole", "I'm gonna swing\n");
	logger.log("logToFile", "from the chandelier\n");
	logger.log("Nowhere","I'm gonna live\n");
	return 0;
}
