//
// Created by esnowbal on 22.03.2021.
// With love and butthurt.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade) {
		if (this->grade > 150) {
			this->~Bureaucrat();
			throw Bureaucrat::GradeTooLowException();
		}
		else if (this->grade < 1) {
			this->~Bureaucrat();
			throw Bureaucrat::GradeTooHighException();
		}
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(Bureaucrat const &src) \
: name(src.name), grade(src.grade) {}

std::ostream & operator<<(std::ostream & stream, Bureaucrat const & bureaucrat) {
	stream << bureaucrat.getName()
			<< " is another buredfhucart with "
			<< bureaucrat.getGrade()
			<< " grade.";
	return stream;
}

std::string Bureaucrat::getName() const { return this->name; }

int			Bureaucrat::getGrade() const { return this->grade; }

void Bureaucrat::gradeIncrement() {
	try
	{
		if (this->grade - 1 < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			this->grade--;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void Bureaucrat::gradeDecrement(){
	try
	{
		if (this->grade + 1 > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			this->grade++;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void Bureaucrat::signForm(Form & form) const {
	try
	{
		form.beSigned(*this);
		std::cout << this->name << " signs " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->name << " cannot sign " << form.getName()
					<< " because " << e.what() << std::endl;
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade is too low";
}