NAME= test

CLASSES= AWeapon.cpp PlasmaRifle.cpp PowerFist.cpp \
        Enemy.cpp SuperMutant.cpp RadScorpion.cpp Character.cpp \
        DryBrunch.cpp Batman.cpp

HEADERS= AWeapon.hpp PlasmaRifle.hpp PowerFist.hpp \
        Enemy.hpp SuperMutant.hpp RadScorpion.hpp Character.hpp \
        DryBrunch.hpp Batman.hpp

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
