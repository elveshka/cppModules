/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 12:54:22 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/16 15:01:28 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_HPP_
# define _ZOMBIE_HPP_

# include <iostream>
# include <cstdlib>
# include <cstdio>

class Zombie
{
	private:
		std::string name;
		std::string type;
		int			number_of_teeth;
		void		randomChump();

	public:
		Zombie();
		Zombie(std::string name, std::string type, int n);
		~Zombie();
		std::string		nameAccess();
		std::string		typeAccess();
		int				numtAccess();
};

#endif