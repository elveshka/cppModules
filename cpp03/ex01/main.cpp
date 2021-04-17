/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 12:33:53 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/24 19:07:30 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void		hitEnergyPointsScores(ScavTrap const & a, ScavTrap const & b)
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

int			main( void )
{
	ScavTrap a("Vasya");
	ScavTrap b("Sanya");

	hitEnergyPointsScores(a, b);
	getchar();

	int damage = a.meleeAttack(b.getName());
	b.takeDamage(damage);
	hitEnergyPointsScores(a, b);
	getchar();

	a.takeDamage(b.rangedAttack(a.getName()));
	hitEnergyPointsScores(a, b);
	getchar();

	b.beRepaired(16);
	a.beRepaired(11);
	hitEnergyPointsScores(a, b);
	getchar();

	while (a.getEnergyPoints() != 0 && b.getEnergyPoints() != 0)
	{
		a.challengeNewComer(b.getName());
		b.challengeNewComer(a.getName());
		hitEnergyPointsScores(a, b);
		getchar();
	}
	return 0;
}
