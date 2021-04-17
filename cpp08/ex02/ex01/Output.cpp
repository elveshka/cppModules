/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Output.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 14:02:34 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/15 09:53:47 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Output.hpp"

void Output::contact_title(void)
{
	std::cout << std::endl;
	std::cout << std::setw(10);
	std::cout << "index"
			  << "|";

	std::cout << std::setw(10);
	std::cout << "1st name"
			  << "|";

	std::cout << std::setw(10);
	std::cout << "last name"
			  << "|";

	std::cout << std::setw(10);
	std::cout << "nickname"
			  << "|"
			  << std::endl
			  << std::endl;
}

void Output::contact_search(Sobaka book[8])
{
	for (int j = 0; j < 8 && !book[j].values_access(0).empty(); j++)
	{
		std::cout << std::setw(10);
		std::cout << j + 1 << "|";
		for (int i = 0; i < 3; i++)
		{
			if (book[j].values_access(i).length() > 10)
				std::cout << book[j].values_access(i).substr(0, 9) << ".|";
			else
			{
				std::cout << std::setw(10);
				std::cout << book[j].values_access(i) << "|";
			}
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void Output::contact_choice(Sobaka book[8])
{
	std::string str;

	Msg::msg_choose_index();
	std::getline(std::cin, str);
	std::getline(std::cin, str);
	if (str == "1" || str == "2" || str == "3" || str == "4" ||
		str == "5" || str == "6" || str == "7" || str == "8")
	{
		contact_output(book, str[0] - 48);
	}
	else
	{
		Msg::msg_nice_joke();
	}
}

void Output::contact_output(Sobaka book[8], int i)
{
	if (i < 1 || i > 8 || book[i - 1].values_access(0).empty())
	{
		Msg::msg_wrong_index();
	}
	else
	{
		for (int j = 0; j < 11; j++)
		{
			std::cout << std::setw(16);
			std::cout << book[i - 1].keys_access(j) << " -> ";
			std::cout << book[i - 1].values_access(j) << std::endl;
		}
	}
}
