/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sobaka.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 11:21:17 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/13 21:00:10 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sobaka.hpp"

Sobaka::Sobaka(void)
{
	this->keys[0] = "first name";
	this->keys[1] = "last name";
	this->keys[2] = "nickname";
	this->keys[3] = "login";
	this->keys[4] = "postal address";
	this->keys[5] = "email address";
	this->keys[6] = "phone number";
	this->keys[7] = "birthday date";
	this->keys[8] = "favorite meal";
	this->keys[9] = "underwear color";
	this->keys[10] = "darkest secret";
}

void 	Sobaka::contact_add(void)
{
	std::string		buff;

	std::getline(std::cin, buff);
	for (int i = 0; i < 11; i++)
	{
		std::cout << "Type " << this->keys[i] << " : ";
		std::getline(std::cin, buff);
		if (buff.empty())
		{
			i--;
			continue;
		}
		this->values[i] = buff;
	}
	Msg::well_done();
}

std::string		Sobaka::values_access(int i)
{
	return this->values[i];
}

std::string		Sobaka::keys_access(int i)
{
	return this->keys[i];
}
