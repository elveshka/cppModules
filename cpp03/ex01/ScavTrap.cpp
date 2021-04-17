/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 18:00:12 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/24 19:09:16 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "SC4V-TP, Default constructor called" << std::endl;
	std::cout << "I am nobody :-(" << std::endl;
	this->hitPoints = 100;
	this->hitPointsMax = 100;
	this->energyPoints = 50;
	this->energyPointsMax = 50;
	this->level = 1;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;
	this->name = "unnamed";
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "SC4V-TP bot " << name << " appear" << std::endl;
	std::cout << "\"You're the wub to my dub!\"" << std::endl;
	this->hitPoints = 100;
	this->hitPointsMax = 100;
	this->energyPoints = 50;
	this->energyPointsMax = 50;
	this->level = 1;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;
	this->name = name;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Why do I even feel pain?! *DYING SOUNDS*" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
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

	return *this;
}

ScavTrap::ScavTrap(ScavTrap const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	if (this != &copy)
	{
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
}

int ScavTrap::rangedAttack(std::string const &target) const
{
	std::cout << "\"Chk-chk, BOOM!\"" << std::endl;
	std::cout << "SC4V-TP " << this->name << " shooting " << target;
	std::cout << ", causing " << this->rangedAttackDamage << " damage" << std::endl;

	return this->rangedAttackDamage;
}

int ScavTrap::meleeAttack(std::string const &target) const
{
	std::cout << "\"Ready for the PUNCHline?!\"" << std::endl;
	std::cout << "SC4V-TP " << this->name << " punching " << target;
	std::cout << ", causing " << this->meleeAttackDamage << " damage" << std::endl;

	return this->meleeAttackDamage;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "\"Ow hohoho, that hurts! Yipes!\"" << std::endl;
	amount =
		((int)amount - this->armorDamageReduction < 0) ? 0 : amount - this->armorDamageReduction;
	std::cout << "SC4V-TP " << this->name << " takes " << amount << " damage" << std::endl;

	this->hitPoints = ((int)amount > this->hitPoints) ? 0 : this->hitPoints - amount;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "\"Good, I didn't want any spare parts!\"" << std::endl;
	std::cout << "SC4V-TP " << this->name << " fixed by " << amount << " hit points" << std::endl;
	this->hitPoints =
		(this->hitPoints + (int)amount > this->hitPointsMax
			 ? this->energyPointsMax
			 : this->hitPoints + (int)amount);
	this->energyPoints =
		(this->energyPoints + (int)amount > this->energyPointsMax
			 ? this->energyPointsMax
			 : this->energyPoints + (int)amount);
}

void ScavTrap::challengeNewComer(std::string const &target)
{

	srand(time(NULL));
	int challenge = rand() % 3;
	int challengesCosts[3];

	challengesCosts[0] = 11;
	challengesCosts[1] = 12;
	challengesCosts[2] = 13;
	if (this->energyPoints - challengesCosts[challenge] < 0)
	{
		std::cout
			<< this->name
			<< ": "
			<< "Not enough mana... Eeemm, i mean energy" << std::endl;
		this->energyPoints = 0;
		return;
	}
	std::cout
		<< "SC4V-TP "
		<< this->name
		<< " challenging "
		<< target
		<< std::endl
		<< "And it is..."
		<< std::endl;
	switch (challenge)
	{
	case 0:
		std::cout
			<< "\"Dance battle! You versus me! Me versus you! Either way!\""
			<< std::endl;
	case 1:
		std::cout
			<< "SC4V-TP " << this->name << " hides a knife behind his back "
			<< "and say: \"Care to have a friendly duel?\""
			<< std::endl;
	case 2:
		std::cout
			<< "Do you think that the machines do not have feelings? "
			<< "Right now I feel tired. Leave me alone"
			<< std::endl;
	}
	std::cout
		<< std::endl
		<< this->name
		<< " spent "
		<< challengesCosts[challenge]
		<< " energy points"
		<< std::endl
		<< std::endl;
	this->energyPoints -= challengesCosts[challenge];
}

int ScavTrap::getHitPoints(void) const { return this->hitPoints; }
int ScavTrap::getEnergyPoints(void) const { return this->energyPoints; }
std::string ScavTrap::getName(void) const { return this->name; }