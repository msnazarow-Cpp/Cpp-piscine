#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

Form *Intern::makeform(std::string const & name, std::string const & target) {

	typedef Form *(*f)(std::string target);
	std::string names[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
	f creates[3] = {reinterpret_cast<f>(&PresidentialPardonForm::create), reinterpret_cast<f>(&RobotomyRequestForm::create), reinterpret_cast<f>(&ShrubberyCreationForm::create)};
	for (int i = 0; i < 3; i++)
		if (names[i] == name)
			return (creates[i](target));
	throw NoSuchFormException();
	return (0);
}

Intern::Intern(const Intern &intern)
{
	*this = intern;
}

Intern::Intern()
{

}

Intern& Intern::operator=(const Intern __attribute__((unused))&intern)
{
	return (*this);
}

Intern::~Intern()
{

}

char const *Intern::NoSuchFormException::what() const throw() {
	return ("!Exception!: No such form");
}
