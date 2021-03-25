#include <cstdlib>
#include <iostream>
#include <sstream>
#include "Calculator.hpp"
int exit_error(int n, const char *s)
{
	std::cerr << s << std::endl;
	exit(n);
}


int main(int argc, char const *argv[])
{
    if (argc != 2)
		exit_error(1, "ERROR: Wrong number of arguments");
    Calculator calc;
    try
    {
        calc.parse(argv[1]);
        calc.printTokens();
        calc.printPostfix();
        calc.printSteps();
    }
    catch(const std::exception& e)
    {
      std::cerr << e.what() << '\n';
    }
    
    
    return 0;
}
