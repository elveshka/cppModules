/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 18:35:14 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/18 18:43:49 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon), name(name)
{
	std::cout << "humA" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "-humA" << std::endl;
}

void	HumanA::attack() const
{
	std::cout
	<< this->name
	<< " attack with his "
	<< this->weapon.getType()
	<< std::endl;
}
