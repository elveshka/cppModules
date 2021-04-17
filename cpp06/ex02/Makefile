NAME= test

CLASSES= A.cpp B.cpp C.cpp Base.cpp

HEADERS= A.hpp B.hpp C.hpp Base.hpp

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
