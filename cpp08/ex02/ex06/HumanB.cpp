/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 14:18:03 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/18 18:38:14 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
	this->weapon = new Weapon();
	std::cout << "humB" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "-humB" << std::endl;
}

void	HumanB::attack() const
{
	std::cout
	<< this->name
	<< " attack with his "
	<< this->weapon->getType()
	<< std::endl;
}

void	HumanB::setWeapon(Weapon& w)
{
	delete this->weapon;
	this->weapon = &w;
}
