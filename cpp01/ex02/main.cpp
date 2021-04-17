/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 13:12:42 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/16 12:51:49 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void	little_function(std::string name)
{
	std::cout << "Choose name for 3rd zombie -> ";
	std::cin >> name;
	Zombie zombie(name, ZombieEvent::setZombieType("would die immediately"), ZombieEvent::setZombieTeeth(1));
}

int main()
{
	std::string name;

	system("clear");
	std::cout << "\033[1;31mOkay, lets create some \"stack\" zombies\033[0m" << std::endl << std::endl;
	
	std::cout << "Press ENTER ..." << std::endl;
	getchar();

	std::cout << "\033[1;31mActually 2 (3)\033[0m" << std::endl << std::endl;
	
	std::cout << "Press ENTER ..." << std::endl;
	getchar();

	std::cout << "Choose name for 1st zombie -> ";
	std::cin >> name;
	Zombie zombie_one(name, ZombieEvent::setZombieType(), ZombieEvent::setZombieTeeth());
	
	std::cout << "Choose name for 2nd zombie -> ";
	std::cin >> name;
	Zombie zombie_two(name, ZombieEvent::setZombieType(), ZombieEvent::setZombieTeeth());
	
	std::cout << "\033[1;31mGood, 3rd will be create in \"little function\"\033[0m" << std::endl;
	little_function(name);
	
	std::cout << "\033[1;31mNow you can create only 1 \"heap\" zombie, because i'm tired :(\033[0m" << std::endl;
	std::cout << "-> ";
	std::cin >> name;
	Zombie* heapZ1 = ZombieEvent::newZombie(name);
	
	std::cout << "\033[1;31mAt the end i create some random zombies for YOU\033[0m" << std::endl;
	std::cout << "Zombies on stack:" << std::endl;
	ZombieEvent::randomChump("stack");
	ZombieEvent::randomChump("stack");
	
	std::cout << "Press ENTER ..." << std::endl;
	getchar();

	std::cout << "\033[1;31mZombies on heap:\033[0m" << std::endl;
	Zombie* heapZ2 = ZombieEvent::randomChump("heap");
	Zombie* heapZ3 = ZombieEvent::randomChump("heap");

	std::cout << "Press ENTER ..." << std::endl;
	getchar();

	std::cout << "\033[1;31mI'm not forget to clear memory after you\033[0m" << std::endl;
	delete(heapZ1);
	delete(heapZ2);
	delete(heapZ3);
	std::cout << "Press ENTER ..." << std::endl;
	getchar();
	
	return 0;
}
