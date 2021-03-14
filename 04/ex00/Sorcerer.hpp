#pragma once
#include <string>
#include "Victim.hpp"

class Sorcerer
{
private:
	std::string name;
	std::string title;
public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer &);
	~Sorcerer();

	Sorcerer & operator = (Sorcerer &a);

	std::string getName() const;
	void setName(const std::string &value);

	std::string getTitle() const;
	void setTitle(const std::string &value);

	void polymorph(Victim const &) const;
};
std::ostream &operator << (std:: ostream &stream, Sorcerer &a);