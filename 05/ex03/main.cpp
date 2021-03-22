#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include <iostream>
#include <cstdlib>
int main(void)
{
	srand(time(NULL));
	Intern intern;
	{Form *form = intern.makeform("PresidentialPardonForm", "Bender"); std::cout << *form << std::endl; delete form;}
	std::cout << "Continue ? ";
	std::cin.get();
	{Form *form = intern.makeform("RobotomyRequestForm", "Bender"); std::cout << *form << std::endl; delete form;}
	std::cout << "Continue ? ";
	std::cin.get();
	{Form *form = intern.makeform("ShrubberyCreationForm", "Bender"); std::cout << *form << std::endl; delete form;}
	std::cout << "Continue ? ";
	std::cin.get();
	{Form *form = intern.makeform("NotExistForm", "Bender"); delete form;}
	return 0;
}
