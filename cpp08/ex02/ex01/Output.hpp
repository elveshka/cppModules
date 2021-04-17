/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Output.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 12:06:05 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/13 20:44:34 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OUTPUT_HPP
# define OUTPUT_HPP

# include <iostream>
# include <iomanip>
# include "Sobaka.hpp"

class Output
{
	public:
		static void 	contact_title(void);
		static void 	contact_search(Sobaka book[8]);
		static void		contact_choice(Sobaka book[8]);

	private:
		static void		contact_output(Sobaka book[8], int i);
};

#endif
