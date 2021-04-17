/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 12:53:50 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/17 13:12:19 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

Zombie::Zombie(std::string name, std::string type, int n): 
				name(name), type(type), number_of_teeth(n)
{
	std::cout << std::endl;
	std::cout << this->name << " (" << this->type << ")";
	std::cout << " with " << this->number_of_teeth;
	std::cout << (n != 1 ? " number of theeth" : " tooth") << " said: ";
	std::cout << " Braiiiiiiinnnssss..." << std::endl;
	std::cout << std::endl;
}

Zombie::Zombie()
{
	randomChump();
	std::cout << "Random Zombie named " << this->name << " created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << std::endl;
	std::cout << "Blessing GOD! Zombie named " << this->name;
	std::cout << " (" << this->type << ")" << " \"DIED\"" << std::endl;
	std::cout << std::endl;
}

void		Zombie::randomChump()
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

	numTeeth = rand() % 15 + 1;

	this->name = name;
	this->type = type;
	this->number_of_teeth = numTeeth;
}

std::string	Zombie::nameAccess()
{
	return this->name;
}

std::string	Zombie::typeAccess()
{
	return this->type;
}

int			Zombie::numtAccess()
{
	return this->number_of_teeth;
}
