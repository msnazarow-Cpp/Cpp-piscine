#pragma once
#include "Victim.hpp"

class Peon : public Victim
{
private:
	/* data */
public:
	Peon(std::string name);
	Peon(const Peon &);
	Peon &operator=(const Peon &);
	void getPolymorphed() const;
	~Peon();
};