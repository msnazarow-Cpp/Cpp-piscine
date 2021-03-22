#pragma once
#include "Intern.hpp"
class OfficeBlock
{
private:
	Intern *_intern;
	Bureaucrat *_signcrat;
	Bureaucrat *_execcrat;
public:
	OfficeBlock(Intern * const intern = 0, Bureaucrat * const signcrat = 0, Bureaucrat * const execcrat = 0);
	~OfficeBlock();
	Form *doBureaucracy(std::string const & name, std::string const & target);

	class NoInternException: public std::exception
	{
		char const *what() const throw();
	};

	class NoExecuteBureaucratException: public std::exception
	{
		char const *what() const throw();
	};

	class NoSignBureaucratException: public std::exception
	{
		char const *what() const throw();
	};

	Intern * intern() const;
	void setIntern(Intern * const value);

	Bureaucrat * signcrat() const;
	void setSigncrat(Bureaucrat * const value);

	Bureaucrat * execcrat() const;
	void setExeccrat(Bureaucrat * const value);
};