//
// Created by esnowbal on 22.03.2021.
// With love and butthurt.
//

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) \
: Form("Robotomy Request Form", 72, 45), target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) \
: Form(src.getName(), src.getGradeToSign(), src.getGradeToExec()), target(src.target) {}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (rand() % 2) {
		std::cout << "Bzz bzzzz, woooooooom" << std::endl
					<< this->target << " is succesfully robotomized!"
					<< std::endl;
	}
	else
		std::cout << "Oh no! Robotomize failing. " << std::endl;
	(void)executor;
}
