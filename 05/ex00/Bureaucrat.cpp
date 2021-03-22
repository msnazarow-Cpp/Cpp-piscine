#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const & name, int grade):name(name),grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(const Bureaucrat &a) : name(a.name), grade(a.grade)
{

}


std::string Bureaucrat::getName() const {
	return name;
}

std::ostream& operator<<(std::ostream & stream, Bureaucrat &a)
{
	stream << a.getName() << ", bureaucrat grade " << a.getGrade();
	return (stream);
}

Bureaucrat&Bureaucrat::operator=(const Bureaucrat&a) {
	grade = a.grade;
	return (*this);
}

int Bureaucrat::getGrade() const {
	return grade;
}

void Bureaucrat::incGrade() {
	grade--;
	if (grade < 1)
		throw GradeTooHighException();
}

void Bureaucrat::decGrade() {
	grade++;
	if (grade > 150)
		throw GradeTooLowException();
}

char const* Bureaucrat::GradeTooLowException::what() const throw() {
	return ("!Exception!: The grade can't be that low");
}

char const* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("!Exception!: The grade can't be that high");
}
