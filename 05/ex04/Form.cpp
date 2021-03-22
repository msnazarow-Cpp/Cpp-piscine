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

Form::~Form(){}

char const* Form::GradeTooLowException::what() const throw() {
	return ("!Exception!: The grade can't be that low");
}

char const* Form::GradeTooHighException::what() const throw() {
	return ("!Exception!: The grade can't be that high");
}

std::string const & Form::name() const {
	return _name;
}

void Form::beSigned(const Bureaucrat & crat) {
	if (_sign)
		throw AlreadySignedexecption();
	if (crat.getGrade() <= _gradeToSign)
		_sign = 1;
	else
		throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream & stream, Form const & a)
{
	stream << a.name() << ", form is " << (a.sign() ? "signed" : "unsigned") <<
	" and it has " << a.gradeToExec() << " grade to sxecute it and " << a.gradeToSign() << " grade to be signed " << std::endl;
	return (stream);
}

int Form::gradeToSign() const {
	return _gradeToSign;
}

int Form::gradeToExec() const {
	return _gradeToExec;
}

void Form::execute(Bureaucrat const & executor) const
{
	if(!sign())
		throw UnsidnedException();
	else if (executor.getGrade() > gradeToExec())
		throw GradeTooLowException();
}

char const *Form::UnsidnedException::what() const throw() {
	return ("!Exception!: Form is not signed yet");
}

std::string const & Form::target() const {
	return _target;
}

void Form::setTarget(const std::string &value) {
	_target = value;
}

char const *Form::AlreadySignedexecption::what() const throw() {
	return ("!Exception!: Form is already signed!");
}
