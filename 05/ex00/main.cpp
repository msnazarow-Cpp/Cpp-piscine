#include "Bureaucrat.hpp"
#include <iostream>

int main(void)
{

	try
	{
		Bureaucrat crat("Kolya", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat crut("Borya", -10);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat crot("Valya", 1);
		std::cout << crot << std::endl;
		crot.incGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
