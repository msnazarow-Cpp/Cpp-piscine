#include "RobotomyRequestForm.hpp"
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: Form("RobotomyRequestForm", 72, 45)
{
	std::cout << '\a' << '\a' << '\a';
	std::cout << target << " has been robotimized successfully 50% of the time" << std::endl;
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
}
