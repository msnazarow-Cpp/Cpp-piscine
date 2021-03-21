#pragma once
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
private:

public:
	PowerFist();
	PowerFist(const PowerFist &a);
	PowerFist &operator=(const PowerFist &a);
	~PowerFist();

	void attack() const;
};