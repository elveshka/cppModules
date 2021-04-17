/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 12:33:51 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/24 17:28:50 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap( void )
{
	std::cout << "FR4G-TP, Default constructor called" << std::endl;
	std::cout << "I am nobody :-(" << std::endl;
	this->hitPoints = 100;
	this->hitPointsMax = 100;
	this->energyPoints = 100;
	this->energyPointsMax = 100;
	this->level = 1;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
	this->name = "unnamed";
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FR4G-TP bot " << name << " appear" << std::endl;
	std::cout << "\"Aaaaaaaawyeaaa, here i come!!\"" << std::endl;
	this->hitPoints = 100;
	this->hitPointsMax = 100;
	this->energyPoints = 100;
	this->energyPointsMax = 100;
	this->level = 1;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
	this->name = name;
}

FragTrap::~FragTrap( void )
{
	std::cout << "My robotic flesh! AAHH!" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
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

FragTrap::FragTrap(FragTrap const & copy)
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

int		FragTrap::rangedAttack(std::string const & target) const
{
	std::cout << "FR4G-TP " << this->name << " shooting " << target;
	std::cout << ", causing " << this->rangedAttackDamage << " damage" << std::endl;
	std::cout << "\"In yo' FACE!\"" << std::endl;

	return this->rangedAttackDamage;
}

int		FragTrap::meleeAttack(std::string const & target) const
{
	std::cout << "FR4G-TP " << this->name << " punching " << target;
	std::cout << ", causing " << this->meleeAttackDamage << " damage"<< std::endl;
	std::cout << "\"Meet professor punch!\"" << std::endl;

	return this->meleeAttackDamage;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	amount = 
	((int)amount - this->armorDamageReduction < 0) ? 0 : amount - this->armorDamageReduction;
	std::cout << "FR4G-TP " << this->name << " takes " << amount << " damage" << std::endl;
	std::cout << "\"Ow hohoho, that hurts! Yipes!\"" << std::endl;

	this->hitPoints = ((int)amount > this->hitPoints) ? 0 : this->hitPoints - amount;

}

void	FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "FR4G-TP " << this->name << " fixed by " << amount << " hit points" << std::endl;
	std::cout << "\"Good, I didn't want any spare parts!\"" << std::endl;
	this->hitPoints = 
	(this->hitPoints + (int)amount > this->hitPointsMax ? 100 : this->hitPoints + (int)amount);
	this->energyPoints = 
	(this->energyPoints + (int)amount > this->energyPointsMax ? 100 : this->energyPoints + (int)amount);
}

int		FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string	vaultHunterAttacks[5];
	int			vaultHunterDamage[5];
	srand (time(NULL));
	int 		attack = rand() % 5;

	vaultHunterAttacks[0] = "spoon";
	vaultHunterAttacks[1] = "mouthbyte";
	vaultHunterAttacks[2] = "divine rapier";
	vaultHunterAttacks[3] = "AWP";
	vaultHunterAttacks[4] = "lightsaber";

	vaultHunterDamage[0] = 1;
	vaultHunterDamage[1] = 6;
	vaultHunterDamage[2] = 50;
	vaultHunterDamage[3] = this->hitPointsMax;
	vaultHunterDamage[4] = 110;

	if ( this->energyPoints < 25)
	{
		std::cout << "Not enough mana... Eeemm, i mean energy" << std::endl;
		return 0;
	}
	std::cout << "FR4G-TP " << this->name << " activate \"vault_hunter mode\" " << std::endl;
	std::cout << "\"It's about to get magical!\"" << std::endl;
	std::cout << "The weapon is: \"" << vaultHunterAttacks[attack] << "\"";
	std::cout << " and it's do " << vaultHunterDamage[attack] << " damage to ";
	std::cout << target << " for 25 energy points" << std::endl;
	this->energyPoints -= 25;
	return vaultHunterDamage[attack];
}

int		FragTrap::getHitPoints( void ) const { return this->hitPoints; }
int 	FragTrap::getEnergyPoints( void ) const { return this->energyPoints; }
std::string	FragTrap::getName( void ) const {return this->name; }