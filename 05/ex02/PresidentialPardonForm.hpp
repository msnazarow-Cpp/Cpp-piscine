#pragma once
#include "Form.hpp"

class PresidentialPardonForm: public Form
{
private:

public:
	PresidentialPardonForm(std::string const & target = "");
	PresidentialPardonForm(const PresidentialPardonForm &form);
	PresidentialPardonForm &operator=(const PresidentialPardonForm & form);
	~PresidentialPardonForm();

	void execute(Bureaucrat const & executor) const;
};