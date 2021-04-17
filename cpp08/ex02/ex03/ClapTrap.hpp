/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 14:07:50 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/25 15:10:02 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cstdio>

class ClapTrap
{
protected:
	int hitPoints;
	int hitPointsMax;
	int energyPoints;
	int energyPointsMax;
	int level;
	int meleeAttackDamage;
	int rangedAttackDamage;
	int armorDamageReduction;
	std::string name;

public:
	ClapTrap(void);
	ClapTrap(std::string name);
	~ClapTrap(void);
	ClapTrap &operator=(ClapTrap const &rhs);
	ClapTrap(ClapTrap const &copy);

	int rangedAttack(std::string const &target) const;
	int meleeAttack(std::string const &target) const;
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	// some getters
	int getHitPoints(void) const;
	int getEnergyPoints(void) const;
	std::string getName(void) const;

};
#endif
