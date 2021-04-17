/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 14:08:55 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/17 21:58:05 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"


Human::Human()
{
	std::cout << "Human created" << std::endl;
}

Human::~Human()
{
	std::cout << "Human deleted" << std::endl;
}

std::string		Human::identify()
{
	return brain.identify();
}

const Brain&		Human::getBrain() const
{
	return this->brain;
}
