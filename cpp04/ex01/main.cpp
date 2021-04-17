#include "Character.hpp"
#include <stdio.h>

#if DEFAULT
int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	return 0;
}
#else
int main()
{
	Character noOne("Deniska");
	std::cout << noOne;
	PowerFist fist;
	SuperMutant mutant;
	mutant.statusCheck();
	noOne.equip(&fist);
	std::cout << noOne;
	noOne.attack(&mutant);
	mutant.statusCheck();
	getchar();

	DryBrunch * brunch = new DryBrunch();
	noOne.equip(brunch);
	std::cout << noOne;
	Enemy * batman = new Batman();
	batman->statusCheck();
	noOne.attack(batman);
	batman->statusCheck();
	std::cout << noOne;
	getchar();

	noOne.attack(batman);
	batman->statusCheck();
	std::cout << noOne;
	getchar();

	noOne.recoverAP();
	noOne.recoverAP();
	noOne.recoverAP();
	noOne.recoverAP();
	noOne.recoverAP();
	noOne.recoverAP();
	noOne.attack(batman);
	batman->statusCheck();
	std::cout << noOne;
	getchar();

	delete(batman);
}

#endif