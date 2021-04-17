/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 22:35:18 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/18 18:44:10 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANA_HPP_
# define _HUMANA_HPP_
# include "Weapon.hpp"

class HumanA
{
private:
	Weapon&		weapon;
	std::string name;
public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	void	attack() const;
};


#endif