#pragma once
#include "Intern.hpp"
class OfficeBlock
{
private:
	Intern *_intern;
	Bureaucrat *_signcrat;
	Bureaucrat *_execcrat;
public:
	OfficeBlock(Intern *intern, Bureaucrat *signcrat, Bureaucrat *execcrat);
	OfficeBlock();
	~OfficeBlock();
	Form *doBureaucracy(std::string name, std::string target);

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

	Intern *intern() const;
	void setIntern(Intern *value);

	Bureaucrat *signcrat() const;
	void setSigncrat(Bureaucrat *value);

	Bureaucrat *execcrat() const;
	void setExeccrat(Bureaucrat *value);
};