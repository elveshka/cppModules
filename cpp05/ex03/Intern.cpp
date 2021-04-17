//
// Created by esnowbal on 22.03.2021.
// With love and butthurt.
//
#include "Intern.hpp"

Intern::Intern() {

	formList[0].formName = "shrubbery creation";
	formList[1].formName = "robotomy request";
	formList[2].formName = "presidential pardon";
	formList[0].createNewForm = &Intern::newShurebbery;
	formList[1].createNewForm = &Intern::newRobotomic;
	formList[2].createNewForm = &Intern::newPresidential;
}

Intern::~Intern() {}

Intern &Intern::operator=(Intern const &rhs) {
	if (this != &rhs) {
		this->formList[0] = rhs.formList[0];
		this->formList[1] = rhs.formList[1];
		this->formList[2] = rhs.formList[2];
	}
	return *this;
}

Intern::Intern(Intern const &src) {
	*this = src;
}

Form * Intern::makeForm(std::string formName, std::string formTarget) {
	for(int i = 0; i < 3; i++) {
		if (!formName.compare(formList[i].formName)) {
			std::cout << "Newbie intern finally create form "
					<< formName << std::endl;
			return (this->*formList[i].createNewForm)(formTarget);
		}
	}
	std::cout << "Intern says: \"I dunno this form: "
				<< formName << "\"" << std::endl;
	return NULL;
}

Form * Intern::newShurebbery(std::string const & target) {
	return new ShrubberyCreationForm(target);
}
Form * Intern::newRobotomic(std::string const & target) {
	return new RobotomyRequestForm(target);
}
Form * Intern::newPresidential(std::string const & target) {
	return new PresidentialPardonForm(target);
}
