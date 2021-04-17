# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/06 10:47:13 by esnowbal          #+#    #+#              #
#    Updated: 2021/01/25 17:48:00 by esnowbal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= claptrap

CLASSES= ScavTrap.cpp FragTrap.cpp ClapTrap.cpp NinjaTrap.cpp main.cpp

HEADERS= ScavTrap.hpp FragTrap.hpp NinjaTrap.hpp ClapTrap.hpp

all: $(NAME)

$(NAME): $(CLASSES) $(HEADERS)
		clang++ -Wall -Wextra -Werror --std=c++98 $(CLASSES) -o $(NAME)

clean:
		rm -rf $(NAME)

fclean: clean

re: fclean all

run: $(NAME)
		./$(NAME)

mem: $(NAME)
		valgrind ./$(NAME)