/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 21:38:00 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/26 22:28:54 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : NinjaTrap(), FragTrap()
{
	this->hitPoints = FragTrap::hitPoints;
	this-> hitPointsMax = FragTrap::hitPointsMax;
	this->energyPoints = NinjaTrap::energyPoints;
	this->energyPointsMax = NinjaTrap::energyPointsMax;
	this->level = 1;
	this->meleeAttackDamage = NinjaTrap::meleeAttackDamage;
	this->rangedAttackDamage = FragTrap::rangedAttackDamage;
	this->armorDamageReduction = FragTrap::armorDamageReduction;
	this->name = "unnamed";

}

SuperTrap::SuperTrap(std::string name) : NinjaTrap(name), FragTrap(name)
{
	this->hitPoints = FragTrap::hitPoints;
	this-> hitPointsMax = FragTrap::hitPointsMax;
	this->energyPoints = NinjaTrap::energyPoints;
	this->energyPointsMax = NinjaTrap::energyPointsMax;
	this->level = 1;
	this->meleeAttackDamage = NinjaTrap::meleeAttackDamage;
	this->rangedAttackDamage = FragTrap::rangedAttackDamage;
	this->armorDamageReduction = FragTrap::armorDamageReduction;
	this->name = name;

}

SuperTrap::~SuperTrap()
{

}
