/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 13:03:27 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/17 12:44:37 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIEHORDE_HPP_
# define _ZOMBIEHORDE_HPP_
# include "Zombie.hpp"

class ZombieHorde
{
	private:
		int size;
		Zombie* horde;
	public:
		ZombieHorde(int n);
		~ZombieHorde();
		void			announce();
};

#endif