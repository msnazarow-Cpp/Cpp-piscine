#include "OfficeBlock.hpp"
#include <iostream>

OfficeBlock::OfficeBlock(Intern * const intern, Bureaucrat * const signcrat, Bureaucrat * const execcrat)
	: _intern(intern),
	  _signcrat(signcrat),
	  _execcrat(execcrat){}
	  
OfficeBlock::~OfficeBlock()
{
	delete _signcrat;
	delete _execcrat;
	delete _intern;
}

Form *OfficeBlock::doBureaucracy(std::string const & name, std::string const & target) {
	if (!_intern)
		throw NoInternException();
	else if (!_signcrat)
		throw NoSignBureaucratException();
	else if (!_execcrat)
		throw NoExecuteBureaucratException();

	Form *form = 0;
	form = _intern->makeform(name, target);
	std::cout << "Intern creates a " << name << " (s.grade " << form->gradeToSign() << ", ex.grade " << form->gradeToExec()  << ") targeted on " << target << " (Unsigned)" << std::endl;
	if (form)
	{
		_signcrat->signForm(*form);
		_execcrat->executeForm(*form);
	}
	return (form);
}

Intern * OfficeBlock::intern() const {
	return _intern;
}


void OfficeBlock::setIntern(Intern * const value) {
	_intern = value;
}

Bureaucrat * OfficeBlock::signcrat() const {
	return _signcrat;
}

void OfficeBlock::setSigncrat(Bureaucrat * const value) {
	_signcrat = value;
}

Bureaucrat * OfficeBlock::execcrat() const {
	return _execcrat;
}

void OfficeBlock::setExeccrat(Bureaucrat * const value) {
	_execcrat = value;
}

char const *OfficeBlock::NoExecuteBureaucratException::what() const throw() {
	return ("!Exception!: There is no intern to make form!");
}

char const *OfficeBlock::NoInternException::what() const throw() {
	return ("!Exception!: There is no bureaucrat to execute form!");
}

char const *OfficeBlock::NoSignBureaucratException::what() const throw() {
	return ("!Exception!: There is no bureaucrat to sign form!");
}
