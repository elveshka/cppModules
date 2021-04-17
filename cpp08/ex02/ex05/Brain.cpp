/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 13:28:08 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/17 21:57:24 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() :
				firstNeuron(randomName()),
				secondNeuron(randomName()),
				thirdNeuron(randomName())
{
	std::cout << "Brain added" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain removed" << std::endl;
}

std::string		Brain::randomName() const
{
	std::string name;

	name += rand() % 26 + 65;
	for (int size = rand () % 5 + 6 ; size != 1 ; size--)
	{
		name += rand() % 26 + 97;
	}

	return name;
}

std::string		Brain::identify() const
{
	std::stringstream  ss;
	ss << this;
	
	return addressToUpper(ss.str());
}

std::string		Brain::addressToUpper(std::string str) const
{
	int	size = str.size();

	for (long i = 2 ; i < size ; i++)
	{
		if (str[i] >= 97 && str[i] <= 102)
			str[i] = toupper(str[i]);
	}
	return str;
}
