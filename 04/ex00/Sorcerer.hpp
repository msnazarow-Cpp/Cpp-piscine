#pragma once
#include <string>
#include "Victim.hpp"

class Sorcerer
{
private:
	std::string name;
	std::string title;
public:
	Sorcerer(std::string const & name, std::string const & title);
	Sorcerer(const Sorcerer &);
	~Sorcerer();

	Sorcerer & operator = (const Sorcerer &a);

	std::string getName() const;
	void setName(const std::string &value);

	std::string getTitle() const;
	void setTitle(const std::string &value);

	void polymorph(Victim const &) const;
};
std::ostream &operator << (std:: ostream &stream, Sorcerer &a);