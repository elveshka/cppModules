NAME= test

CLASSES= main.cpp

HEADERS= Array.hpp

all: $(NAME)

$(NAME): $(CLASSES) $(HEADERS)
		clang++ -Wall -Wextra -Werror --std=c++98 $(CLASSES) -o $(NAME)

clean:
		rm -rf $(NAME)

fclean: clean

re: fclean all

run: $(NAME) $(CLASSES) $(HEADERS)
		./$(NAME)

mem: $(NAME) $(CLASSES) $(HEADERS)
		valgrind ./$(NAME)
