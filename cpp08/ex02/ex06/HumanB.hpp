/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 22:34:39 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/18 18:03:17 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANB_HPP_
# define _HUMANB_HPP_
# include "Weapon.hpp"

class HumanB
{
private:
	std::string name;
	Weapon*		weapon;	
public:
	HumanB(std::string name);
	~HumanB();
	void	setWeapon(Weapon& w);
	void	attack() const;
};

#endif