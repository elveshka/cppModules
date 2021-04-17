/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 13:03:25 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/17 12:54:06 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : size(n), horde(new Zombie[size]) {}

ZombieHorde::~ZombieHorde()
{
	delete [] horde;
}

void		ZombieHorde::announce()
{
	for (int i = 0 ; i < size ; i++)
	{
		std::cout 
		<< "My name is "
		<< horde[i].nameAccess()
		<< "("
		<< horde[i].typeAccess()
		<< ") and i have "
		<< horde[i].numtAccess()
		<< (horde[i].numtAccess() != 1 ? " teeth " : " tooth ")
		<< "GRaaaaaaargh!"
		<< std::endl;
	}
}
