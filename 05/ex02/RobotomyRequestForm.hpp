#pragma once
#include "Form.hpp"

class RobotomyRequestForm: public Form
{
private:

public:
	RobotomyRequestForm(std::string const & target = "");
	RobotomyRequestForm(const RobotomyRequestForm &form);
	RobotomyRequestForm &operator=(const RobotomyRequestForm & form);
	~RobotomyRequestForm();

	void execute(Bureaucrat const & executor) const;
};