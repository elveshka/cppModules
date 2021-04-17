/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 11:25:47 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/15 12:24:38 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap()
{
	Pony	*pony = new Pony("Catrina", 3, "rainbow", "making rainbow poops");
	std::cout << "---------------" << std::endl;
	std::cout << "Hello from heap" << std::endl;
	std::cout << "---------------" << std::endl;
	pony->ponyName();
	pony->ponyAge();
	pony->ponyColor();
	pony->ponyMagicSkill();
	delete(pony);
}

void	ponyOnTheStack()
{
	Pony	pony("Kate");
	std::cout << "----------------" << std::endl;
	std::cout << "Hello from stack!" << std::endl;
	std::cout << "----------------" << std::endl;
	pony.ponyName();
}

int		main()
{
	ponyOnTheStack();
	ponyOnTheHeap();
	return 0;
}
