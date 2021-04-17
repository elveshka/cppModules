/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 13:19:31 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/16 12:32:56 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

std::string		ZombieEvent::setZombieType(void)
{
	std::string		buff;

	getline(std::cin, buff);
	std::cout << "Ok, lets choose zombie type-> ";
	getline(std::cin, buff);
	return buff;
}
std::string		ZombieEvent::setZombieType(std::string str)
{
	return str;
}

int				ZombieEvent::setZombieTeeth(void)
{
	std::string		buff;

	std::cout << "And now enter number of teeth :D -> ";
	getline(std::cin, buff);
	while (buff.find_first_not_of("0123456789") != std::string::npos)
	{
		std::cout << "And now enter number of teeth :D -> ";
		getline(std::cin, buff);
	}
	return atoi(buff.c_str());
}

int				ZombieEvent::setZombieTeeth(int i)
{
	return (i);
}

Zombie*			ZombieEvent::newZombie(std::string name)
{
	
	return (new Zombie(name, setZombieType(), setZombieTeeth()));
}

Zombie*		ZombieEvent::randomChump(std::string typeOfMemory)
{
	std::string name, type;
	int			numTeeth, size;

	size = rand () % 5 + 6;
	name += rand() % 26 + 65;
	for (; size != 1; size--)
	{
		name += rand() % 26 + 97;
	}

	size = rand () % 5 + 6;
	type += rand() % 26 + 65;
	for (; size != 1; size--)
	{
		type += rand() % 26 + 97;
	}
	numTeeth = rand() % 20 + 1;
	if (typeOfMemory == "stack")
	{
		Zombie newZ(name, type, numTeeth);
		return 0;
	}
	else
	{
		return (new Zombie(name, setZombieType(type), setZombieTeeth(numTeeth)));
	}
}
