#include "Form.hpp"
#include <fstream>

Form::Form(std::string const & name, int gradeToSign, int gradeToExec)
	: _name(name),
	  _sign(0),
	  _gradeToSign(gradeToSign),
	  _gradeToExec(gradeToExec)
{
	if (gradeToExec < 1 || gradeToSign < 1)
		throw GradeTooHighException();
	else if (gradeToExec > 150 || gradeToSign > 150)
		throw GradeTooLowException();
}

Form::Form(const Form & form)
	: _name(form._name),
	  _sign(0),
	  _gradeToSign(form._gradeToSign),
	  _gradeToExec(form._gradeToExec)
{
	if (_gradeToExec < 1 || _gradeToSign < 1)
		throw GradeTooHighException();
	else if (_gradeToExec > 150 || _gradeToSign > 150)
		throw GradeTooLowException();
}

Form &Form::operator=(const Form & form) {
	_sign = form._sign;
	return (*this);
}

bool Form::sign() const {
	return _sign;
}

Form::~Form()
{

}

char const* Form::GradeTooLowException::what() const throw() {
	return ("!Exception!: The grade can't be that low");
}

char const* Form::GradeTooHighException::what() const throw() {
	return ("!Exception!: The grade can't be that high");
}

std::string Form::name() const {
	return _name;
}

void Form::beSigned(const Bureaucrat & crat) {
	if (crat.getGrade() <= _gradeToSign)
		_sign = 1;
	else
		throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream & stream, Form const &a)
{
	stream << a.name() << ", form is " << (a.sign() ? "signed" : "unsigned") <<
	" and it has " << a.gradeToExec() << " grade to execute it and " << a.gradeToSign() << " grade to be signed " << std::endl;
	return (stream);
}

int Form::gradeToSign() const {
	return _gradeToSign;
}

int Form::gradeToExec() const {
	return _gradeToExec;
}
