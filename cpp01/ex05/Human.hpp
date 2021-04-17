/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 14:05:34 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/17 21:57:34 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMAN_HPP_
# define _HUMAN_HPP_
# include "Brain.hpp"

class Human
{
	private:
		Brain const brain;
	public:
		Human();
		~Human();
		std::string			identify();
		const Brain&		getBrain() const;
};

#endif
