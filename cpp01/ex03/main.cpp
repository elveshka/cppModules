/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 13:02:17 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/17 12:51:52 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main()
{
	std::string		buff;

	std::cout << "How much zombies do you want??? -> ";
	getline(std::cin, buff);
	while (buff.find_first_not_of("0123456789") != std::string::npos)
	{
		std::cout << "How much zombies do you want??? -> ";
		getline(std::cin, buff);
	}
	ZombieHorde* aHorde = new ZombieHorde(atoi(buff.c_str()));
	getchar();

	aHorde->announce();

	getchar();
	
	delete(aHorde);
	return 0;
}
