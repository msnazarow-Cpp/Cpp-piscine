#pragma once
#include <string>

class Victim
{
private:
	std::string name;

public:
	Victim(std::string name);
	Victim(const Victim &);
	virtual ~Victim();

	Victim & operator = (const Victim &a);

	std::string getName() const;
	void setName(const std::string &value);

	virtual void getPolymorphed() const;
};
std::ostream &operator << (std:: ostream &stream, Victim &a);