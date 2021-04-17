/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Msg.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 20:45:52 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/15 09:54:13 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MSG_HPP
# define MSG_HPP
# include <iostream>

class Msg
{
	public:
		static void		msg_wait_a_command(void);
		static void		msg_book_is_full(void);
		static void		msg_wrong_input(void);
		static void		msg_exit(void);
		static void		msg_wrong_index(void);
		static void		msg_nice_joke(void);
		static void		msg_choose_index(void);
		static void		well_done(void);
};

#endif