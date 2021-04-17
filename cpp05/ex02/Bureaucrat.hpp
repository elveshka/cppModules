//
// Created by esnowbal on 22.03.2021.
// With love and butthurt.
//

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

class Form;
#include <iostream>
#include "Form.hpp"

class Bureaucrat {
private:
	std::string const	name;
	int					grade;
	Bureaucrat();
	Bureaucrat &operator=(Bureaucrat const &rhs);
public:
//Coplien
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	Bureaucrat(Bureaucrat const &src);

	void gradeIncrement();
	void gradeDecrement();
	void signForm(Form & form) const;
	void executeForm(Form & form) const;

//getters
	std::string getName() const;
	int			getGrade() const;

//exception classes
	class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw();
	};
};

std::ostream & operator<<(std::ostream & stream, Bureaucrat const & bureaucrat);

#endif //CPP05_BUREAUCRAT_HPP
