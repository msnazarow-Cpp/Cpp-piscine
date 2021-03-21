#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include <iostream>

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	Ice *ice = new Ice;
	src->learnMateria(ice);
	ICharacter* me = new Character("me");
	me->use(0, *me);
	me->use(1, *me);
	std::cout << "Continue ? ";
	std::cin.get();
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("Notexist");
	me->equip(tmp);
	me->use(0, *me);
	me->use(1, *me);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(-1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}