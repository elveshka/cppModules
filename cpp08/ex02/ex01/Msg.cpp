/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Msg.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 20:46:27 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/13 21:00:16 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Msg.hpp"

void	Msg::msg_wait_a_command(void)
{	
	std::cout << "I am wait your command (\"ADD\", \"SEARCH\" OR \"EXIT\" ONLY)"
				  << std::endl;
}	

void	Msg::msg_book_is_full(void)
{	
	std::cout << "Sobaka book is full" << std::endl
				  << std::endl;
}	

void	Msg::msg_wrong_input(void)
{	
	std::cout << std::endl;
	std::cout << "ONLY ADD, SEARCH OR EXIT INPUT" << std::endl;
	std::cout << "ARE YOU STUPID?" << std::endl
				  << std::endl;
}	

void	Msg::msg_exit(void)
{	
	std::cout << "YOU HAVE LOST YOUR SOBAKA BOOOK MUAHAAHA" << std::endl;
}	

void	Msg::msg_wrong_index(void)
{	
	std::cout << "Index is empty, are you blind? " << std::endl;
}	

void	Msg::msg_nice_joke(void)
{	
	std::cout << "Nice joke" << std::endl;
}	

void	Msg::msg_choose_index(void)
{
	std::cout << "Choose index from 1 to 8: ";
}

void	Msg::well_done(void)
{
	std::cout << "Well done! Contact succesfully created!" << std::endl << std::endl;
}
