//
// Created by esnowbal on 22.03.2021.
// With love and butthurt.
//
#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
private:
	std::string target;
	PresidentialPardonForm();
	PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
public:
//Coplien
	PresidentialPardonForm(std::string const & target);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm const &src);
	void	execute(Bureaucrat const & executor) const;
//getters

};

#endif //CPP05_PRESIDENTIALPARDONFORM_HPP
