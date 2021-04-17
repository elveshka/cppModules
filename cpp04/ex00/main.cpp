//
// Created by esnowbal on 17.03.2021.
// With love and butthurt.
//
#include "Sorcerer.hpp"

#if DEFAULT
int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	return 0;
}
#else
int	main()
{
	Sorcerer Antonidas("Antonidas", "Archmage");
	Victim Arthas("Arthas");
	Victim * Thrall = new Orc("Thrall", "green");

	Antonidas.polymorph(Arthas);
	Antonidas.polymorph(* Thrall);

	std::cout << Thrall->getName() << std::endl;
	std::cout << Arthas.getName() << std::endl;
	delete(Thrall);
	return 0;
}
#endif