/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 11:53:06 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/24 17:25:20 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
int main( void )
{


	Fixed a = Fixed( 1.1f );
	Fixed b = Fixed( -1234.4321f );
	Fixed c = Fixed( -1234.4321f );
	Fixed d = Fixed( -1234.4321f );

	std::cout << "a is " << a.getRawBits() << " as integer" << std::endl;
	std::cout << "b is " << b << " as integer" << std::endl;
	std::cout << "c is " << c << " as integer" << std::endl;
	std::cout << "d is " << d << " as integer" << std::endl;
	
	return 0;
}
