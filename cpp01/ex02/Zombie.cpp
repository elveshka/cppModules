/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 12:53:50 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/16 12:05:01 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type, int n): 
				name(name), type(type), number_of_teeth(n)
{
	std::cout << std::endl;
	std::cout << this->name << " (" << this->type << ")";
	std::cout << " with " << this->number_of_teeth;
	std::cout << (n != 1 ? " number of theeth" : " tooth") << " said: ";
	std::cout << " Braiiiiiiinnnssss..." << std::endl;
	std::cout << std::endl;
}

Zombie::~Zombie()
{
	std::cout << std::endl;
	std::cout << "Blessing GOD! Zombie named " << this->name;
	std::cout << " (" << this->type << ")" << " \"DIED\"" << std::endl;
	std::cout << std::endl;
}
