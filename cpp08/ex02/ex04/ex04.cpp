/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 13:02:35 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/17 13:15:27 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int			main()
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	sPtr = &str;
	std::string&	sRef = *sPtr;

	std::cout
	<< *sPtr
	<< std::endl
	<< sRef
	<< std::endl;

	return 0;
}
