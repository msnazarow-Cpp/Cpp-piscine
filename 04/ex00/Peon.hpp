#pragma once
#include "Victim.hpp"

class Peon : public Victim
{
	public:
		Peon(std::string const & name);
		Peon(const Peon &);
		Peon &operator=(const Peon &);
		void getPolymorphed() const;
		~Peon();
};