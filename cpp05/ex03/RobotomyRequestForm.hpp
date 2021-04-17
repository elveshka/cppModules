//
// Created by esnowbal on 22.03.2021.
// With love and butthurt.
//

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <cstdlib>

class RobotomyRequestForm : public Form {
private:
	std::string target;
	RobotomyRequestForm();
	RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
public:
//Coplien
	RobotomyRequestForm(std::string const & target);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm const &src);
	void	execute(Bureaucrat const & executor) const;
//getters

};

#endif //CPP05_ROBOTOMYREQUESTFORM_HPP
