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
	{Form *form = intern.makeform("PresidentialPardonForm", "Bender"); delete form;}
	{Form *form = intern.makeform("RobotomyRequestForm", "Bender"); delete form;}
	{Form *form = intern.makeform("ShrubberyCreationForm", "Bender"); delete form;}
	{Form *form = intern.makeform("NotExistForm", "Bender"); delete form;}
	return 0;
}
