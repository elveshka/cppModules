/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sobaka.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 10:51:51 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/13 20:51:46 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOBAKA_HPP
# define SOBAKA_HPP
# include <iostream>
# include "Msg.hpp"

class Sobaka
{
	public:
		Sobaka(void);
		std::string	values_access(int	i);
		std::string	keys_access(int i);
		void 		contact_add(void);

	private:
		std::string	keys[11];
		std::string	values[11];
};

#endif
