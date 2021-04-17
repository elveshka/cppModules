NAME= test

CLASSES= AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

HEADERS= AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp \
		IMateriaSource.hpp MateriaSource.hpp
		
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
