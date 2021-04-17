#include "Bureaucrat.hpp"
#include <stdio.h>
#include <cstdlib>
#include "Intern.hpp"
int main()
{
	Intern newbie;
	Form * form;
	Bureaucrat bure("Bill", 1);
	form = newbie.makeForm("sdsadsa", "heaven");
	// std::cout << *form << std::endl;
	form = newbie.makeForm("shrubbery creation", "heaven");
	std::cout << *form << std::endl;

	bure.signForm(*form);
	bure.executeForm(*form);
	delete form;
	return 0;
}
