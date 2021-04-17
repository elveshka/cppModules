/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 12:54:22 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/16 11:23:06 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_HPP_
# define _ZOMBIE_HPP_

# include <iostream>
# include <cstdlib>

class Zombie
{
	private:
		std::string name;
		std::string type;
		int			number_of_teeth;

	public:
		Zombie(std::string name, std::string type, int n);
		~Zombie();
};

#endif