/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 11:15:16 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/15 12:15:28 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PONY_HPP_
# define _PONY_HPP_
# include <iostream>

class Pony
{
	private:
		std::string	name;
		int			age;
		std::string	color;
		std::string	magic_skill;
	public:
		Pony(std::string name);
		Pony(std::string name, int age);
		Pony(std::string name, int age, std::string color);
		Pony(std::string name, int age, std::string color, std::string magic_skill);
		void	ponyName();
		void	ponyAge();
		void	ponyMagicSkill();
		void	ponyColor();
		~Pony();
};

#endif