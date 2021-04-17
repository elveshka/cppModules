/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 22:01:22 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/18 18:07:20 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() : type("fists")
{
	std::cout << "weapon(" << this->type << ")" << std::endl;
}

Weapon::Weapon(std::string type) : type(type)
{
	std::cout << "weapon(" << this->type << ")" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "-weapon(" << this->type << ")" << std::endl;
}

const std::string&		Weapon::getType() const
{
	return this->type;
}

void					Weapon::setType(std::string str)
{
	this->type = str;
}
