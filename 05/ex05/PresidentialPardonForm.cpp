#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(std::string const & target)
	: Form("PresidentialPardonForm", 25, 5)
{
	setTarget(target);

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &form):Form(form)
{

}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm & form)
{
	Form::operator=(form);
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(){}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	Form::execute(executor);
	std::cout << target() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

PresidentialPardonForm *PresidentialPardonForm::create(std::string const & target) {
	return (new PresidentialPardonForm(target));
}
