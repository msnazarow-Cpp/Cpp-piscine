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
	std::string _target;
public:
	Form(std::string  const & name = "",  int gradeToSign = 0, int gradeToExec = 0);
	Form(const Form &form);
	Form &operator=(const Form &form);
	virtual ~Form();

	std::string const & name() const;
	void beSigned(const Bureaucrat &crat);
	bool sign() const;

	int gradeToSign() const;

	int gradeToExec() const;

	class GradeTooHighException : public std::exception
	{
		virtual char const *what() const throw();
	};
	class UnsidnedException : public std::exception
	{
		virtual char const *what() const throw();
	};
	class AlreadySignedexecption : public std::exception
	{
		virtual char const *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		virtual char const *what() const throw();
	};
	virtual void execute(Bureaucrat const & executor) const = 0;

	std::string const & target() const;
	void setTarget(const std::string &value);
};

std::ostream &operator<<(std::ostream &stream, Form const & form);