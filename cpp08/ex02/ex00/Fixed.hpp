/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 11:11:17 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/22 12:10:40 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	static const int	nbits = 8;
	int					value;
public:
	Fixed();
	Fixed(Fixed const & src);
	~Fixed();
	Fixed & operator=(Fixed const & rhs);

	int		getRawBits() const;
	void	setRawBits(int const raw);
};

#endif
