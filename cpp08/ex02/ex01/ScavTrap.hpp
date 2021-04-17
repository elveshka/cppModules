/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 17:58:00 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/24 18:20:56 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_HPP
# define SCAV_HPP

# include <iostream>
# include <cstdlib>
# include <iomanip>
# include <cstdio>

class ScavTrap
{
private:
	int 		hitPoints;
	int 		hitPointsMax;
	int			energyPoints;
	int 		energyPointsMax;
	int 		level;
	int 		meleeAttackDamage;
	int 		rangedAttackDamage;
	int			armorDamageReduction;
	std::string name;

public:
	ScavTrap( void );
	ScavTrap(std::string name);
	~ScavTrap( void );
	ScavTrap & operator=(ScavTrap const & rhs);
	ScavTrap(ScavTrap const & copy);

	int		rangedAttack(std::string const & target) const;
	int		meleeAttack(std::string const & target) const;
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	challengeNewComer(std::string const & target);
	// some getters
	int			getHitPoints( void ) const;
	int 		getEnergyPoints( void ) const;
	std::string	getName( void ) const;

};

#endif