# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/06 10:47:13 by esnowbal          #+#    #+#              #
#    Updated: 2021/01/15 09:35:36 by esnowbal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= sobakabook

CLASSES= Sobaka.cpp Output.cpp Msg.cpp main.cpp

HEADERS= Sobaka.hpp Output.hpp Msg.hpp

all: $(NAME)

$(NAME): $(CLASSES) $(HEADERS)
		clang++ -Wall -Wextra -Werror --std=c++98 $(CLASSES) -o $(NAME)

clean:
		rm -rf $(NAME)

fclean: clean

re: fclean all

run: $(NAME)
		./sobakabook

mem: $(NAME)
		valgrind ./sobakabook