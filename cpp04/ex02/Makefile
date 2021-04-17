NAME= test

CLASSES= Squad.cpp TacticalMarine.cpp AssaultTerminator.cpp


HEADERS= ISpaceMarine.hpp ISquad.hpp Squad.hpp TacticalMarine.hpp AssaultTerminator.hpp

all: $(NAME)

$(NAME): $(CLASSES) $(HEADERS) main.cpp
		clang++ -Wall -Wextra -Werror --std=c++98 main.cpp $(CLASSES) -o $(NAME)

clean:
		rm -rf $(NAME)

fclean: clean

re: fclean all

run: $(NAME) main.cpp
		./$(NAME)

mem: $(NAME) main.cpp
		valgrind ./$(NAME)
