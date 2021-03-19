#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: Form("RobotomyRequestForm", 72, 45)
{
	setTarget(target);
	std::cout << '\a' << '\a' << '\a';

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &form):Form(form)
{

}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm & form)
{
	Form::operator=(form);
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	Form::execute(executor);
	if (rand() % 2)
		std::cout << target() << " has been robotimized successfully" << std::endl;
	else
		std::cout << target() << " failed during robotimizing" << std::endl;
}
RobotomyRequestForm *RobotomyRequestForm::create(std::string target) {
	return (new RobotomyRequestForm(target));
}
