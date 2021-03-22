#pragma once
#include "Form.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern & intern);
		Intern &operator=(const Intern & intern);
		~Intern();
		Form *makeform(std::string const & name, std::string const & target);

		class NoSuchFormException : public std::exception
		{
			public : virtual char const *what() const throw();
		};
};