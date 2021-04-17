//
// Created by esnowbal on 20.03.2021.
// With love and butthurt.
//

#include "Squad.hpp"
#include "AssaultTerminator.hpp"

#define DEFAULT 0

#if DEFAULT
int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	return 0;
}

#else
int main()
{
	TacticalMarine * marine1 = new TacticalMarine();
	TacticalMarine * marine2 = new TacticalMarine();
	TacticalMarine * marine3 = new TacticalMarine();

	AssaultTerminator * terminator1 = new AssaultTerminator();
	AssaultTerminator * terminator2 = new AssaultTerminator();

	Squad * mariners = new Squad();
	Squad * terminators = new Squad();
	Squad * tmp = new Squad;

	std::cout << " mariners squad now have " << mariners->push(marine1) << " troopers" << std::endl;
	std::cout << " mariners squad now have " << mariners->push(marine1) << " troopers" << std::endl;
	std::cout << " mariners squad now have " << mariners->push(marine2) << " troopers" << std::endl;
	std::cout << " mariners squad now have " << mariners->push(marine3) << " troopers" << std::endl;

	terminators->push(terminator1);
	terminators->push(terminator2);

	*mariners = *terminators;

	std::cout << mariners->getCount() << std::endl;
	mariners->getUnit(1)->rangedAttack();
	mariners->getUnit(1)->meleeAttack();

	tmp->push(new TacticalMarine());
	tmp->push(new TacticalMarine());
	tmp->push(new TacticalMarine());
	Squad * another = new Squad(*tmp);

	std::cout << another->getCount() << std::endl;

	another->getUnit(0)->rangedAttack();
	another->getUnit(2)->meleeAttack();

	delete mariners;
	std::cout << std::endl;
	delete terminators;
	std::cout << std::endl;
	delete tmp;
	std::cout << std::endl;
	delete another;
	return 0;
}

#endif
