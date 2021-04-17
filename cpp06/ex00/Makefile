NAME= convert

CLASSES= 

HEADERS= 

all: $(NAME)

$(NAME): $(CLASSES) $(HEADERS) main.cpp
		clang++ -Wall -Wextra -Werror --std=c++98 main.cpp $(CLASSES) -o $(NAME)

clean:
		rm -rf $(NAME)

fclean: clean

re: fclean all

run: $(NAME) main.cpp
		./$(NAME) 0
		@echo "--------------------------------------------"
		./$(NAME) nan
		@echo "--------------------------------------------"
		./$(NAME) +inf
		@echo "--------------------------------------------"
		./$(NAME) -inf
		@echo "--------------------------------------------"
		./$(NAME) 42
		@echo "--------------------------------------------"
		./$(NAME) 42.3
		@echo "--------------------------------------------"
		./$(NAME) 3000000000

mem: $(NAME) main.cpp
		valgrind ./$(NAME)
