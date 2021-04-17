/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 14:08:00 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/25 14:29:14 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
	std::cout << "CL4P-TP, Default constructor called" << std::endl;
	this->hitPoints = 1;
	this->hitPointsMax = 1;
	this->energyPoints = 1;
	this->energyPointsMax = 1;
	this->level = 1;
	this->meleeAttackDamage = 3;
	this->rangedAttackDamage = 2;
	this->armorDamageReduction = 1;
	this->name = "unnamed";
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "CL4P-TP bot " << name << " appear" << std::endl;
	this->hitPoints = 1;
	this->hitPointsMax = 1;
	this->energyPoints = 1;
	this->energyPointsMax = 1;
	this->level = 1;
	this->meleeAttackDamage = 3;
	this->rangedAttackDamage = 2;
	this->armorDamageReduction = 1;
	this->name = name;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "CL4P-TP " << this->name << " WAS DELETED" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
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

ClapTrap::ClapTrap(ClapTrap const & copy)
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

int		ClapTrap::rangedAttack(std::string const & target) const
{
	std::cout << "CL4P-TP " << this->name << " shooting " << target;
	std::cout << ", causing " << this->rangedAttackDamage << " damage" << std::endl;

	return this->rangedAttackDamage;
}

int		ClapTrap::meleeAttack(std::string const & target) const
{
	std::cout << "CL4P-TP " << this->name << " punching " << target;
	std::cout << ", causing " << this->meleeAttackDamage << " damage"<< std::endl;

	return this->meleeAttackDamage;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	amount = 
	((int)amount - this->armorDamageReduction < 0) ? 0 : amount - this->armorDamageReduction;
	std::cout << "CL4P-TP " << this->name << " takes " << amount << " damage" << std::endl;

	this->hitPoints = ((int)amount > this->hitPoints) ? 0 : this->hitPoints - amount;

}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "CL4P-TP " << this->name << " fixed by " << amount << " hit points" << std::endl;
	this->hitPoints = 
		(this->hitPoints + (int)amount > this->hitPointsMax
		? this->energyPointsMax
		: this->hitPoints + (int)amount);
	this->energyPoints = 
		(this->energyPoints + (int)amount > this->energyPointsMax
		? this->energyPointsMax
		: this->energyPoints + (int)amount);
}

int		ClapTrap::getHitPoints( void ) const { return this->hitPoints; }
int 	ClapTrap::getEnergyPoints( void ) const { return this->energyPoints; }
std::string	ClapTrap::getName( void ) const {return this->name; }