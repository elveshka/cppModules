/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 21:27:19 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/26 22:11:59 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "NinjaTrap.hpp"
# include "FragTrap.hpp"

class SuperTrap : virtual public NinjaTrap , virtual public FragTrap
{
public:
	SuperTrap();
	SuperTrap(std::string name);
	~SuperTrap();
};

#endif
