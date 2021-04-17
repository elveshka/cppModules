/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 12:33:55 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/26 22:00:07 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
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
	
};

#endif
