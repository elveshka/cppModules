/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 11:11:19 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/23 20:13:13 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
	
	return;
}

Fixed::Fixed(int const		n)
{
	std::cout << "Integer constructor called" << std::endl;
	this->value = n * (1 << this->fbits);

	return;
}

Fixed::Fixed(float const	n)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = (int)roundf(n * (1 << this->fbits));

	return;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;

	return;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->value = rhs.getRawBits();

	return *this;
}

int		Fixed::getRawBits() const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

float	Fixed::toFloat(void) const
{
	return (float)this->value / (float)(1 << this->fbits);
}

int		Fixed::toInt(void) const
{
	return (int)(this->value >> this->fbits);
}

std::ostream & operator<<(std::ostream & os, Fixed const & rhs)
{
	os << rhs.toFloat();
	return os;
}
