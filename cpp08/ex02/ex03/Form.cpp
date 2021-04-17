//
// Created by esnowbal on 22.03.2021.
// With love and butthurt.
//

#include "Form.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : \
name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute), signa(false) {
		if (this->gradeToExecute > 150) {
			this->~Form();
			throw Form::GradeTooLowException("To exec");
		}
		else if (this->gradeToExecute < 1) {
			this->~Form();
			throw Form::GradeTooHighException("To exec");
		}
		if (this->gradeToSign > 150) {
			this->~Form();
			throw Form::GradeTooLowException("To sign");
		}
		else if (this->gradeToSign < 1) {
			this->~Form();
			throw Form::GradeTooHighException("To sign");
		}
}

Form::~Form() {}

Form &Form::operator=(Form const &rhs) {
	if (this != &rhs) {
		this->signa = rhs.signa;
	}
	return *this;
}

Form::Form(Form const &src) : \
name(src.name), gradeToSign(src.gradeToSign), \
gradeToExecute(src.gradeToExecute), signa(src.signa) {}

std::ostream & operator<<(std::ostream & stream, Form const & form) {
		stream << form.getName()
				<< " is required "
				<< form.getGradeToSign() << " grade to sign it AND "
				<< form.getGradeToExec() << " grade to execute." << std::endl
				<< "Now this form signed = " << form.getSigna();
	return stream;
}

void		 Form::beSigned(Bureaucrat const & signer) {
	if (this->getSigna())
		throw AlreadySignedException();
	if (this->gradeToSign >= signer.getGrade())
		this->signa = true;
	else
		throw GradeTooLowException("To sign Bureauacrat's ");
}

std::string Form::getName() const { return this->name; }
int			Form::getGradeToSign() const { return this->gradeToSign; }
int			Form::getGradeToExec() const { return this->gradeToExecute; }
bool		Form::getSigna() const { return this->signa; }

Form::GradeTooHighException::GradeTooHighException(std::string gradeKind) : \
gradeKind(gradeKind) {}

Form::GradeTooHighException::~GradeTooHighException() \
_GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW {}

const char* Form::GradeTooHighException::what() const throw() {
	std::cerr << this->gradeKind;
	return " grade is too high";
}

Form::GradeTooLowException::GradeTooLowException(std::string gradeKind) : \
gradeKind(gradeKind) {}

Form::GradeTooLowException::~GradeTooLowException() _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW {}

const char* Form::GradeTooLowException::what() const throw() {
	std::cerr << this->gradeKind;
	return " grade is too low";
}

const char* Form::AlreadySignedException::what() const throw() {
	return "Form already signed.";
}

const char* Form::NoSignException::what() const throw() {
	return "Form NOT signed";
}
