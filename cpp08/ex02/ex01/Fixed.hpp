/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 11:11:17 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/23 20:09:49 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	static const int	fbits = 8;
	int					value;
public:
	Fixed();
	Fixed(int const		n);
	Fixed(float const	n);
	Fixed(Fixed const & src);
	~Fixed();

	float	toFloat(void) const;
	int		toInt(void) const;

	Fixed	&operator=(Fixed const & rhs);
	int		getRawBits() const;
};

std::ostream & operator<<(std::ostream & os, Fixed const & rhs);

#endif
