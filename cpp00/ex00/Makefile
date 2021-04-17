# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/08 16:03:21 by esnowbal          #+#    #+#              #
#    Updated: 2021/01/08 16:10:02 by esnowbal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= megaphone

CLASSES= megaphone.cpp

all: $(NAME)

$(NAME): $(CLASSES)
		clang++ -Wall -Wextra -Werror $(CLASSES) -o $(NAME)

clean:
		rm -rf $(NAME)

fclean: clean

re: fclean all

run1: $(NAME)
		./megaphone

run2: $(NAME)
		./megaphone "shhhhh... I think the students are asleep..."

run3: $(NAME)
		./megaphone  Damnit " ! " "Sorry students, I thought this thing was off."
