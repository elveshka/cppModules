/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 12:33:53 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/26 22:45:33 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

void            hitEnergyPointsScores(SuperTrap const & a, SuperTrap const & b)
{
	std::cout << std::endl << std::setw(12);
	std::cout << a.getName() << "|";
	std::cout << std::setw(10);
	std::cout << b.getName() << std::endl;
	std::cout << "hp";
	std::cout << std::setw(10);
	std::cout << a.getHitPoints() << "|";
	std::cout << std::setw(10);
	std::cout << b.getHitPoints() << std::endl;
	std::cout << "ep";
	std::cout << std::setw(10);
	std::cout << a.getEnergyPoints() << "|";
	std::cout << std::setw(10);
	std::cout << b.getEnergyPoints() << std::endl << std::endl;
}

void			diamondInheritDemostration(void)
{
	
}

int			main( void )
{
	SuperTrap a("first");
	SuperTrap b("second");

	hitEnergyPointsScores(a, b);

	return 0;
}
