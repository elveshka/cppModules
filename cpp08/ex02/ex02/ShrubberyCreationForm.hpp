//
// Created by esnowbal on 22.03.2021.
// With love and butthurt.
//

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>
#include <fcntl.h>

class ShrubberyCreationForm : public Form {
private:
	std::string const target;
	std::string const myTree;
	ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
public:
//Coplien
	ShrubberyCreationForm(std::string const & target);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm const &src);
	void	execute(Bureaucrat const & executor) const;
//getters

};


#endif //CPP05_SHRUBBERYCREATIONFORM_HPP
