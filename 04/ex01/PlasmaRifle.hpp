#pragma once
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle();
		PlasmaRifle(const PlasmaRifle &);
		PlasmaRifle &operator=(const PlasmaRifle &);
		~PlasmaRifle();

		void attack() const;
};