/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 12:33:55 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/24 15:49:42 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <cstdlib>
# include <iomanip>
# include <cstdio>

class FragTrap
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
	FragTrap( void );
	FragTrap(std::string name);
	~FragTrap( void );
	FragTrap & operator=(FragTrap const & rhs);
	FragTrap(FragTrap const & copy);

	int		rangedAttack(std::string const & target) const;
	int		meleeAttack(std::string const & target) const;
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	int		vaulthunter_dot_exe(std::string const & target);
	// some getters
	int			getHitPoints( void ) const;
	int 		getEnergyPoints( void ) const;
	std::string	getName( void ) const;

};

#endif