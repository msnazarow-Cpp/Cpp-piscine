#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
private:
	/* data */
public:
	PlasmaRifle();
	~PlasmaRifle();

	void attack() const;
};