/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 17:58:00 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/25 15:11:14 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_HPP
# define SCAV_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
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

};

#endif