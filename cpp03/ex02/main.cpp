/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 12:33:53 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/25 15:21:15 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int			main( void )
{
	ClapTrap a("clap");
	FragTrap b("frag");
	ScavTrap c("scav");

	getchar();
	std::cout << a.getHitPoints() << std::endl;
	std::cout << a.getName() << std::endl;
	std::cout << a.getEnergyPoints() << std::endl;

	getchar();
	std::cout << b.getHitPoints() << std::endl;
	std::cout << b.getName() << std::endl;
	std::cout << b.getEnergyPoints() << std::endl;

	getchar();
	std::cout << c.getHitPoints() << std::endl;
	std::cout << c.getName() << std::endl;
	std::cout << c.getEnergyPoints() << std::endl;

	getchar();

	return 0;
}
