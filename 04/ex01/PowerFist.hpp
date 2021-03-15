#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
private:
	/* data */
public:
	PowerFist();
	PowerFist(const PowerFist &a);
	PowerFist &operator=(const PowerFist &a);
	~PowerFist();

	void attack() const;
};