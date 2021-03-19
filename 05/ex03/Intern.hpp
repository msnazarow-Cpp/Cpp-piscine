#pragma once
#include "Form.hpp"

class Intern
{
private:
	/* data */
public:
	Intern();
	Intern(const Intern &intern);
	Intern &operator=(const Intern &intern);
	~Intern();
	Form *makeform(std::string name, std::string target);
};