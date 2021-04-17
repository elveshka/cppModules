//
// Created by esnowbal on 21.03.2021.
// With love and butthurt.
//

#define DEFAULT 0
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

#if DEFAULT
int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = NULL;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}
#else
int main()
{
	IMateriaSource* src = new MateriaSource();
	AMateria * ice = new Ice();
	AMateria * cure = new Cure();
	AMateria * cure2 = new Cure();
	AMateria * cure3 = new Cure();
	AMateria * cure4 = new Cure();
	src->learnMateria(ice);
	src->learnMateria(cure);
	src->learnMateria(cure2);
	src->learnMateria(cure3);
	src->learnMateria(cure4);
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = NULL;
	tmp = src->createMateria("noice");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	std::cout << std::endl;
	me->use(1, *bob);
	me->use(1, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	delete ice;
	delete cure;
	delete cure2;
	delete cure3;
	delete cure4;
	return 0;
}
#endif