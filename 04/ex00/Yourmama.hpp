#pragma once
#include "Victim.hpp"

class Yourmama : public Victim
{
private:
	/* data */
public:
	Yourmama(std::string name);
	Yourmama(const Yourmama &a);
	Yourmama &operator=(const Yourmama &a);
	void getPolymorphed() const;
	~Yourmama();
};