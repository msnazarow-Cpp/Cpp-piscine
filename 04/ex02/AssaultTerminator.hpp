#pragma once
#include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine
{
private:
	/* data */
public:
	AssaultTerminator();
	~AssaultTerminator();

	AssaultTerminator *clone() const;
	void	battleCry() const;
	void	rangedAttack() const;
	void	meleeAttack() const;

};