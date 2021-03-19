#pragma once
#include <string>

class ClapTrap
{
private:
	std::string name;
	std::string type;
	unsigned int hitpoints;
	unsigned int maxhitpoints;
	int energypoints;
	int maxenegrypoints;
	int level;
	int melee;
	int ranged;
	unsigned int armor;

public:
	ClapTrap(std::string name);
	virtual ~ClapTrap();
	ClapTrap(const ClapTrap &);
	int rangedAttack(std::string const &);
	int meleeAttack(std::string const &);
	int takeDamage(unsigned int);
	int beRepaired(unsigned int);

	std::string &getName();
	void setName(const std::string &value);

	ClapTrap &operator=(const ClapTrap &);

	std::string getType() const;
	void setType(const std::string &value);

	unsigned int getHitpoints() const;
	void setHitpoints(unsigned int value);

	unsigned int getMaxhitpoints() const;
	void setMaxhitpoints(unsigned int value);

	int getEnergypoints() const;
	void setEnergypoints(int value);

	int getMaxenegrypoints() const;
	void setMaxenegrypoints(int value);

	int getLevel() const;
	void setLevel(int value);

	int getMelee() const;
	void setMelee(int value);

	int getRanged() const;
	void setRanged(int value);

	unsigned int getArmor() const;
	void setArmor(unsigned int value);
};
