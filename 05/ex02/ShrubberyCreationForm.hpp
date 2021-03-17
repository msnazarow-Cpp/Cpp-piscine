#pragma once
#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
private:

public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &form);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm & form);
	~ShrubberyCreationForm();

	void execute(Bureaucrat const & executor) const;
};