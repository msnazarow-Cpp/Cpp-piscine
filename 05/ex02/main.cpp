#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

int main(void)
{

	try
	{
		PresidentialPardonForm form("Diloma");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		RobotomyRequestForm form("Diloma");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		ShrubberyCreationForm form("Diloma");
		std::cout << form << std::endl;
		form.beSigned(Bureaucrat("Loh", 100));
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	ShrubberyCreationForm form("Diloma");
	Bureaucrat Loh("Loh", 150);
	Loh.signForm(form);
	Bureaucrat Crutoy("Krutoy", 1);
	form.execute(Crutoy);
	Crutoy.signForm(form);
	form.execute(Crutoy);

	return 0;
}
