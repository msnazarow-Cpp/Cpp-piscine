#pragma once
#include <string>
#include <ostream>
class Form;
class Bureaucrat
{
private:
	const std::string name;
	int grade;

public:
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat &);
	Bureaucrat &operator=(const Bureaucrat &);

	class GradeTooHighException : public std::exception
	{
		virtual char const *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		virtual char const *what() const throw();
	};
	int getGrade() const;
	void incGrade();
	void decGrade();
	std::string getName() const;
	void	signForm(Form &form) const;
};

std::ostream &operator<<(std::ostream &stream, Bureaucrat &);