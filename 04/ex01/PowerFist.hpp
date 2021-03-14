#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
private:
	/* data */
public:
	PowerFist();
	~PowerFist();

	void attack() const;
};