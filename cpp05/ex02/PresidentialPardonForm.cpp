//
// Created by esnowbal on 22.03.2021.
// With love and butthurt.
//
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) \
: Form("Presidential Pardon Form", 25, 5), target(target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) \
: Form(src.getName(), src.getGradeToSign(), src.getGradeToExec()), target(src.target) {}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	std::cout << this->target
			<< " has been pardoned by Zafod Beeblebrox. " << std::endl;
	(void)executor;
}
