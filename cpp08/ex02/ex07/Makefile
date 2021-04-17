# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/06 10:47:13 by esnowbal          #+#    #+#              #
#    Updated: 2021/01/20 10:49:27 by esnowbal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= replace

CLASSES= main.cpp

all: $(NAME)

$(NAME): $(CLASSES)
		clang++ -Wall -Wextra -Werror --std=c++98 $(CLASSES) -o $(NAME)

clean:
		rm -rf $(NAME)

fclean: clean

re: fclean all

run1: $(NAME)
		./$(NAME) test aa xx

run2: $(NAME)
		./$(NAME) test2 aa xx

run3: $(NAME)
		./$(NAME) test "" a

run4: $(NAME)
		./$(NAME) test " " "!"