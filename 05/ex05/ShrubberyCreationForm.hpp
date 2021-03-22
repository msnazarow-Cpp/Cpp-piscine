#pragma once
#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	public:
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm(const ShrubberyCreationForm &form);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm & form);
		~ShrubberyCreationForm();

		void execute(Bureaucrat const & executor) const;
		static ShrubberyCreationForm *create(std::string const & target);
};