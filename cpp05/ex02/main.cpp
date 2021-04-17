#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <stdio.h>
#include <cstdlib>
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat Bob("Bob",150);
	Bureaucrat Paul("Paul", 1);
	ShrubberyCreationForm formS("hell");
	RobotomyRequestForm formR("Fry");
	PresidentialPardonForm formP("Bilbo");
	std::cout << formS << std::endl;
	Bob.executeForm(formS);
	Paul.executeForm(formS);
	Paul.signForm(formS);
	Paul.signForm(formR);
	Paul.signForm(formP);
	std::cout << formS<< std::endl;
	Paul.executeForm(formS);
	Paul.executeForm(formR);
	Paul.executeForm(formP);
	return 0;
}
