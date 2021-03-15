#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
private:
	/* data */
public:
	PlasmaRifle();
	PlasmaRifle(const PlasmaRifle &);
	PlasmaRifle &operator=(const PlasmaRifle &);
	~PlasmaRifle();

	void attack() const;
};