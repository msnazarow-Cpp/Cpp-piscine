#include "ClapTrap.hpp"
#include <iostream>
#include <cstdlib>

ClapTrap::ClapTrap(std::string name):
	name(name),type("CL4P-TP "),hitpoints(100), maxhitpoints(100), energypoints(75),
	maxenegrypoints(75), level(1), melee(25), ranged(35), armor(10) {
	std::cout << "CL4P-TP " << name << " is Alive!\n";}

ClapTrap::ClapTrap(const ClapTrap &a)
{
	*this = a;
}

ClapTrap::~ClapTrap(){
	std::cout << "CL4P-TP " << name << " Dies and you can do Nothing!\n";}

ClapTrap &ClapTrap::operator=(const ClapTrap &a)
{
	this->hitpoints = a.hitpoints;
	this->maxenegrypoints = a.maxhitpoints;
	this->energypoints = a.energypoints;
	this->level = a.level;
	name = a.name;
	melee = a.melee;
	ranged = a.ranged;
	armor = a.armor;
	return (*this);
}

int ClapTrap::meleeAttack(std::string const &target){
	if(hitpoints > 0){ std::cout << type << name << " attacks " << target << " at melee, causing "<< melee << " points of damage!\n";
	return (melee);}
	std::cout << type << name << " can't attack cause he is dead!\n";
	return (0);
}

int ClapTrap::rangedAttack(std::string const &target){
	if (hitpoints > 0){
	std::cout << type << name << " attacks " << target << " at range, causing "<< ranged << " points of damage!\n";
	return (ranged);}
	std::cout << type << name << " can't attack cause he is dead!\n";
	return (0);
}

int	ClapTrap::takeDamage(unsigned int amount)
{
	if (hitpoints == 0)	{
		std::cout << type << name << " can't get damage, cause he's already dead!\n";
		amount = 0;
	} else if (amount > armor)	{
		amount -= armor;
		if (hitpoints > amount){
			std::cout << type << name << " gets " << amount << " damage!\n";
			hitpoints -= amount;}
		else {
			std::cout << type << name << " gets " << hitpoints << " damage and now he is dead!\n";
			amount = hitpoints;
			hitpoints = 0;}
	}	else	{
		amount = 0;
		std::cout << type << name << " is very strong, you can't hit him!\n";
	}
	return (amount);
}

int ClapTrap::beRepaired(unsigned int amount){
	if (hitpoints == 0)	{
		std::cout << type << name << " can't be rapaired, cause he's already dead!\n";
		amount = 0;
	} else if (hitpoints == maxhitpoints){
		std::cout << type << name << " can't be rapaired, cause he has maxhealth!\n";
	} else if (maxhitpoints - hitpoints > amount){
			std::cout << type << name << " repaired " << amount << " health!\n";
			hitpoints += amount;}
		else {
			std::cout << type << name << " gets " << maxhitpoints - hitpoints << " damage and now he is dead!\n";
			amount = maxhitpoints - hitpoints;
			hitpoints = maxhitpoints;}
	return (amount);
}

std::string &ClapTrap::getName()
{
	return (name);
}

void ClapTrap::setName(const std::string &value) {
	name = value;
}

std::string ClapTrap::getType() const {
	return type;
}

void ClapTrap::setType(const std::string &value) {
	type = value;
}

unsigned int ClapTrap::getHitpoints() const {
	return hitpoints;
}

void ClapTrap::setHitpoints(unsigned int value) {
	hitpoints = value;
}

unsigned int ClapTrap::getMaxhitpoints() const {
	return maxhitpoints;
}

void ClapTrap::setMaxhitpoints(unsigned int value) {
	maxhitpoints = value;
}

int ClapTrap::getEnergypoints() const {
	return energypoints;
}

void ClapTrap::setEnergypoints(int value) {
	energypoints = value;
}

int ClapTrap::getMaxenegrypoints() const {
	return maxenegrypoints;
}

void ClapTrap::setMaxenegrypoints(int value) {
	maxenegrypoints = value;
}

int ClapTrap::getLevel() const {
	return level;
}

void ClapTrap::setLevel(int value) {
	level = value;
}

int ClapTrap::getMelee() const {
	return melee;
}

void ClapTrap::setMelee(int value) {
	melee = value;
}

int ClapTrap::getRanged() const {
	return ranged;
}

void ClapTrap::setRanged(int value) {
	ranged = value;
}

unsigned int ClapTrap::getArmor() const {
	return armor;
}

void ClapTrap::setArmor(unsigned int value) {
	armor = value;
}
