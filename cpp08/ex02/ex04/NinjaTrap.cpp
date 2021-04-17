/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 16:15:00 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/25 17:41:54 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void)
{
	std::cout << "NINJA-TP, Default constructor called" << std::endl;
	std::cout << "A ninja has no name, he only has a path" << std::endl;
	this->hitPoints = 60;
	this->hitPointsMax = 60;
	this->energyPoints = 120;
	this->energyPointsMax = 120;
	this->level = 1;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armorDamageReduction = 0;
	this->name = "unnamed";
}

NinjaTrap::NinjaTrap(std::string name)
{
	std::cout << "NINJA-TP bot " << name << " appear" << std::endl;
	std::cout << "A ninja has no name, but i am " << name << std::endl;
	this->hitPoints = 60;
	this->hitPointsMax = 60;
	this->energyPoints = 120;
	this->energyPointsMax = 120;
	this->level = 1;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armorDamageReduction = 0;
	this->name = name;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << this->name << ": My path is over" << std::endl;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &rhs)
{
	if (this != &rhs)
	{
		std::cout << "Assignation operator called" << std::endl;
		this->hitPoints = rhs.hitPoints;
		this->hitPointsMax = rhs.hitPointsMax;
		this->energyPoints = rhs.energyPoints;
		this->energyPointsMax = rhs.energyPointsMax;
		this->level = rhs.level;
		this->meleeAttackDamage = rhs.meleeAttackDamage;
		this->rangedAttackDamage = rhs.rangedAttackDamage;
		this->armorDamageReduction = rhs.armorDamageReduction;
		this->name = rhs.name;
	}

	return *this;
}

NinjaTrap::NinjaTrap(NinjaTrap const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->hitPoints = copy.hitPoints;
	this->hitPointsMax = copy.hitPointsMax;
	this->energyPoints = copy.energyPoints;
	this->energyPointsMax = copy.energyPointsMax;
	this->level = copy.level;
	this->meleeAttackDamage = copy.meleeAttackDamage;
	this->rangedAttackDamage = copy.rangedAttackDamage;
	this->armorDamageReduction = copy.armorDamageReduction;
	this->name = copy.name;
}

int NinjaTrap::rangedAttack(std::string const &target) const
{
	std::cout << "\"Shuriken sounds\"" << std::endl;
	std::cout << "NINJA-TP " << this->name << " shooting " << target;
	std::cout << ", causing " << this->rangedAttackDamage << " damage" << std::endl;

	return this->rangedAttackDamage;
}

int NinjaTrap::meleeAttack(std::string const &target) const
{
	std::cout << "\"Katana blinking in sunshines\"" << std::endl;
	std::cout << "NINJA-TP " << this->name << " slicing " << target;
	std::cout << ", causing " << this->meleeAttackDamage << " damage" << std::endl;

	return this->meleeAttackDamage;
}

void NinjaTrap::takeDamage(unsigned int amount)
{
	std::cout << "\"Ooooosssss\"" << std::endl;
	amount =
		((int)amount - this->armorDamageReduction < 0) ? 0 : amount - this->armorDamageReduction;
	std::cout << "NINJA-TP " << this->name << " takes " << amount << " damage" << std::endl;

	this->hitPoints = ((int)amount > this->hitPoints) ? 0 : this->hitPoints - amount;
}

void NinjaTrap::beRepaired(unsigned int amount)
{
	std::cout << "\"Hajime\"" << std::endl;
	std::cout << "NINJA-TP " << this->name << " fixed by " << amount << " hit points" << std::endl;
	this->hitPoints =
		(this->hitPoints + (int)amount > this->hitPointsMax
			 ? this->energyPointsMax
			 : this->hitPoints + (int)amount);
	this->energyPoints =
		(this->energyPoints + (int)amount > this->energyPointsMax
			 ? this->energyPointsMax
			 : this->energyPoints + (int)amount);
}

void NinjaTrap::ninjaShoebox(ClapTrap &obj)
{
	std::cout << obj.getName() << " it's my parent. I cant hurt him" << std::endl;
	std::cout << "some repair will be useful: ";
	obj.beRepaired(1);
}

void NinjaTrap::ninjaShoebox(FragTrap &obj)
{
	std::cout << obj.getName() << " hmm, this bot have some funny functions" << std::endl;
	std::cout << "i'm sure there is nothing wrong with calling the function";
	std::cout << " \"takeDamage\"" << std::endl;
	obj.takeDamage(this->meleeAttack(obj.getName()));
}

void NinjaTrap::ninjaShoebox(ScavTrap &obj)
{
	std::cout << "This guy - challenger :D" << std::endl;
	std::cout << "Okay, challenging me" << std::endl;
	obj.challengeNewComer(this->name);
}

void NinjaTrap::ninjaShoebox(NinjaTrap &obj)
{
	if (this == &obj)
		std::cout << this->name << " ninja kill himself :-(" << std::endl;
	else
	{
		std::cout
			<< this->name
			<< " ninja meet other ninja named "
			<< obj.name
			<< std::endl;
	}
}
