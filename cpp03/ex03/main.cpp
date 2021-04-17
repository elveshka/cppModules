/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 12:33:53 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/25 17:56:30 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

int			main( void )
{
	ClapTrap a("clap");
	FragTrap b("frag");
	ScavTrap c("scav");
	NinjaTrap n1("Petya");
	NinjaTrap n2;

	n1.ninjaShoebox(a);
	getchar();
	n1.ninjaShoebox(b);
	getchar();
	n1.ninjaShoebox(c);
	getchar();
	n1.ninjaShoebox(n2);
	getchar();
	n1.ninjaShoebox(n1);
	getchar();

	return 0;
}
