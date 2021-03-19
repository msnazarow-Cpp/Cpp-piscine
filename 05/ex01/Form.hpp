#pragma once
#include <string>
#include "Bureaucrat.hpp"

class Form
{
private:
	const std::string _name;
	bool _sign;
	const int _gradeToSign;
	const int _gradeToExec;

public:
	Form(std::string name,  int gradeToSign, int gradeToExec);
	Form(const Form & form);
	Form &operator=(const Form & form);
	~Form();

	std::string name() const;
	void beSigned(const Bureaucrat & crat);
	bool sign() const;

	int gradeToSign() const;

	int gradeToExec() const;

	class GradeTooHighException : public std::exception
	{
		virtual char const *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		virtual char const *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &stream, Form & form);