# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/06 10:47:13 by esnowbal          #+#    #+#              #
#    Updated: 2021/01/15 13:56:41 by esnowbal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= Zombie

CLASSES= Zombie.cpp ZombieEvent.cpp main.cpp

HEADERS= Zombie.hpp ZombieEvent.hpp

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