/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 11:15:28 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/15 12:15:25 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name)
{
	this->name = name;
}

Pony::Pony(std::string name, int age)
{
	this->name = name;
	this->age = age;
}

Pony::Pony(std::string name, int age, std::string color)
{
	this->name = name;
	this->age = age;
	this->color = color;
}

Pony::Pony(std::string name, int age, std::string color, std::string magic_skill)
{
	this->name = name;
	this->age = age;
	this->color = color;
	this->magic_skill = magic_skill;
}

void	Pony::ponyName()
{
	std::cout << "Pony's name is " << this->name << std::endl;
}

void	Pony::ponyAge()
{
	std::cout << "Pony's age is " << this->age << std::endl;
}

void	Pony::ponyMagicSkill()
{
	std::cout << "Pony's magic skill is " << this->magic_skill << std::endl;
}
void	Pony::ponyColor()
{
	std::cout << "Pony's color is " << this->color << std::endl;
}

Pony::~Pony()
{
	std::cout << "Omg Pony " << this->name << " is dead!" << std::endl;
}
