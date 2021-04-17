/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 12:33:53 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/24 17:37:47 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void		hitEnergyPointsScores(FragTrap const & a, FragTrap const & b)
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
	FragTrap a;
	FragTrap b("Petya");

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

	while (a.getHitPoints() != 0 && b.getHitPoints() != 0)
	{
		a.takeDamage(b.vaulthunter_dot_exe(a.getName()));
		hitEnergyPointsScores(a, b);
		getchar();
	}
	return 0;
}
