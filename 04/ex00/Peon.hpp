#pragma once
#include "Victim.hpp"

class Peon : public Victim
{
private:
	/* data */
public:
	Peon(std::string name);
	void getPolymorphed() const;
	~Peon();
};