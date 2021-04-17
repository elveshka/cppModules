/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 13:24:27 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/17 21:57:45 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BRAIN_HPP_
# define _BRAIN_HPP_
# include <iostream>
# include <cstdlib>
# include <sstream>
# include <cstdio>
# include <cstring>

class Brain
{
	private:
		std::string firstNeuron;
		std::string secondNeuron;
		std::string thirdNeuron;
	public:
		Brain();
		~Brain();
		std::string	randomName() const;
		std::string	identify() const;
		std::string	addressToUpper(std::string str) const;
};

#endif