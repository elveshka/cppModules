/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 13:19:32 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/16 12:32:04 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIEEVENT_HPP_
# define _ZOMBIEEVENT_HPP_
# include "Zombie.hpp"
# include <cstdio>

class ZombieEvent
{
	private:

	public:
		static std::string	setZombieType(void);
		static std::string	setZombieType(std::string str);
		static int			setZombieTeeth(void);
		static int			setZombieTeeth(int i);
		static Zombie*		newZombie(std::string name);
		static Zombie*		randomChump(std::string typeOfMemory);
};

#endif
