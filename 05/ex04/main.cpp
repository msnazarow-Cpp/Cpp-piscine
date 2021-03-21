#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"
#include <iostream>
#include <cstdlib>
int main(void)
{
	srand(time(NULL));
	{OfficeBlock myoffice;
	Form *myform = 0;
	try
	{
		myform = myoffice.doBureaucracy("Diploma", "Mark");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete myform;
	std::cout << "Continue ? ";
	std::cin.get();
	Intern *idiotOne = new Intern();
	Bureaucrat *hermes = new Bureaucrat("Hermes Conrad", 37);
	Bureaucrat *bob = new Bureaucrat("Bobby Bobson", 123);
	OfficeBlock ob;
	ob.setIntern(idiotOne);
	ob.setSigncrat(bob);
	ob.setExeccrat(hermes);
	try
	{
		myform = ob.doBureaucracy("mutant pig termination", "Pigley");
	}
	catch (Intern::NoSuchFormException & e)
	{
		std::cerr << e.what() << '\n';
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}
		delete myform;
	std::cout << "Continue ? ";
	std::cin.get();
	try
	{
		myform = ob.doBureaucracy("PresidentialPardonForm", "Pigley");
	}
	catch (Intern::NoSuchFormException & e)
	{
		std::cerr << e.what() << '\n';
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}
		delete myform;
	std::cout << "Continue ? ";
	std::cin.get();
	try
	{
		myform = ob.doBureaucracy("RobotomyRequestForm", "Pigley");
	}
	catch (Intern::NoSuchFormException & e)
	{
		std::cerr << e.what() << '\n';
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}
		delete myform;
	std::cout << "Continue ? ";
	std::cin.get();
	try
	{
		myform = ob.doBureaucracy("ShrubberyCreationForm", "Pigley");
	}
	catch (Intern::NoSuchFormException & e)
	{
		std::cerr << e.what() << '\n';
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}
		delete myform;}
	std::cout << "Continue ? ";
	std::cin.get();
	Form *myform = 0;
	Intern *idiotOne = new Intern();
	Bureaucrat *hermes = new Bureaucrat("Hermes Conrad", 1);
	Bureaucrat *bob = new Bureaucrat("Bobby Bobson", 1);
	OfficeBlock ob;
	ob.setIntern(idiotOne);
	ob.setSigncrat(bob);
	ob.setExeccrat(hermes);
	try
	{
		myform = ob.doBureaucracy("mutant pig termination", "Pigley");
	}
	catch (Intern::NoSuchFormException & e)
	{
		std::cerr << e.what() << '\n';
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}
		delete myform;
	std::cout << "Continue ? ";
	std::cin.get();
	try
	{
		myform = ob.doBureaucracy("PresidentialPardonForm", "Pigley");
	}
	catch (Intern::NoSuchFormException & e)
	{
		std::cerr << e.what() << '\n';
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}
		delete myform;
	std::cout << "Continue ? ";
	std::cin.get();
	try
	{
		myform = ob.doBureaucracy("RobotomyRequestForm", "Pigley");
	}
	catch (Intern::NoSuchFormException & e)
	{
		std::cerr << e.what() << '\n';
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}
		delete myform;
	std::cout << "Continue ? ";
	std::cin.get();
	try
	{
		myform = ob.doBureaucracy("ShrubberyCreationForm", "Pigley");
		myform->beSigned(*bob);
	}
	catch (Intern::NoSuchFormException & e)
	{
		std::cerr << e.what() << '\n';
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}

		delete myform;
	return 0;
}
