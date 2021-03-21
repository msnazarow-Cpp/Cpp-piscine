#pragma once
#include "Victim.hpp"

class Yourmama : public Victim
{
	public:
		Yourmama(std::string const & name);
		Yourmama(const Yourmama &a);
		Yourmama &operator=(const Yourmama &a);
		void getPolymorphed() const;
		~Yourmama();
};