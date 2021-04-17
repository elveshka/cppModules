/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 11:00:46 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/13 20:51:07 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sobaka.hpp"
#include "Output.hpp"
#include "Msg.hpp"
#include <cstdlib>

int main()
{
	Sobaka book[8];
	std::string command;

	system("clear");
	while (command != "EXIT")
	{
		Msg::msg_wait_a_command();
		std::cin >> command;
		if (command == "ADD")
		{
			int i = 0;
			while (i < 8 && !book[i].values_access(0).empty())
				i++;
			if (i == 8)
				Msg::msg_book_is_full();
			else
				book[i].contact_add();
		}
		else if (command == "SEARCH")
		{
			system("clear");
			Output::contact_title();
			Output::contact_search(book);
			Output::contact_choice(book);
		}
		else if (command != "EXIT")
		{
			Msg::msg_wrong_input();
		}
	}
	system("clear");
	Msg::msg_exit();
	return 0;
}
