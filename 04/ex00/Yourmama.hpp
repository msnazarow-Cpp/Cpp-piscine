#pragma once
#include "Victim.hpp"

class Yourmama : public Victim
{
private:
	/* data */
public:
	Yourmama(std::string name);
	void getPolymorphed() const;
	~Yourmama();
};