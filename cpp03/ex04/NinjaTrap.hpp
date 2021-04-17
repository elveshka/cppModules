/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 16:06:40 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/26 22:21:47 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{

public:
	NinjaTrap( void );
	NinjaTrap(std::string name);
	~NinjaTrap( void );
	NinjaTrap & operator=(NinjaTrap const & rhs);
	NinjaTrap(NinjaTrap const & copy);

	int		rangedAttack(std::string const & target) const;
	int		meleeAttack(std::string const & target) const;
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	ninjaShoebox(ClapTrap & obj);
	void	ninjaShoebox(FragTrap & obj);
	void	ninjaShoebox(ScavTrap & obj);
	void	ninjaShoebox(NinjaTrap & obj);

};

#endif
