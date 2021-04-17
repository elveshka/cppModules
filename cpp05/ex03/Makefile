NAME= test

CLASSES= Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp \
RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp

HEADERS= Bureaucrat.hpp Form.hpp PresidentialPardonForm.hpp \
RobotomyRequestForm.hpp ShrubberyCreationForm.hpp Intern.hpp

all: $(NAME)

$(NAME): $(CLASSES) $(HEADERS) main.cpp
		clang++ -Wall -Wextra -Werror --std=c++98 main.cpp $(CLASSES) -o $(NAME)

clean:
		rm -rf $(NAME)
		rm -rf *_shrubbery

fclean: clean

re: fclean all

run: $(NAME) main.cpp
		./$(NAME)

mem: $(NAME) main.cpp
		valgrind ./$(NAME)
