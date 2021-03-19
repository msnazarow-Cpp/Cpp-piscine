#include "Form.hpp"
#include <iostream>

int main(void)
{

	try
	{
		Form form("Diloma",151, 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form form("Diloma", 0, 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Form form("Diloma",50, 10);
		std::cout << form << std::endl;
		form.beSigned(Bureaucrat("Loh", 100));
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	Form form("Diloma",50, 10);
	Bureaucrat Loh("Loh", 100);
	Loh.signForm(form);
	Bureaucrat Crutoy("Krutoy", 1);
	Crutoy.signForm(form);


	return 0;
}
