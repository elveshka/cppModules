//
// Created by esnowbal on 22.03.2021.
// With love and butthurt.
//
#ifndef CPP05_INTERN_HPP
#define CPP05_INTERN_HPP

#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
private:
	typedef struct createForm {
		std::string 	formName;
		Form	*		(Intern::*createNewForm)(std::string const &);
	}					form;
	Form * newShurebbery(std::string const & target);
	Form * newRobotomic(std::string const & target);
	Form * newPresidential(std::string const & target);
	form	formList[3];

public:
//Coplien
	Intern();
	~Intern();
	Intern &operator=(Intern const &rhs);
	Intern(Intern const &src);

	Form * makeForm(std::string formName, std::string formTarget);
//getters

};


#endif //CPP05_INTERN_HPP
