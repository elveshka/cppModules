//
// Created by esnowbal on 22.03.2021.
// With love and butthurt.
//

#ifndef FORM_HPP
#define FORM_HPP

class Bureaucrat;
#include <iostream>
#include "Bureaucrat.hpp"

class Form {
private:
	const std::string 	name;
	const int			gradeToSign;
	const int			gradeToExecute;
	bool				signa;
	Form();
	Form &operator=(Form const &rhs);
public:
//Coplien
	Form(std::string name, int gradeToSign, int gradeToExecute);
	virtual ~Form();
	Form(Form const &src);

	void		beSigned(Bureaucrat const & signer);
	virtual void execute(Bureaucrat const & executor) const = 0;
//getters
	std::string getName() const;
	int			getGradeToSign() const;
	int			getGradeToExec() const;
	bool		getSigna() const;

//exception classes
	class GradeTooHighException : public std::exception {
		private:
			std::string gradeKind;
		public:
			GradeTooHighException(std::string gradeKind);
			virtual ~GradeTooHighException() _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW;
			virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
		private:
			std::string gradeKind;
		public:
			GradeTooLowException(std::string gradeKind);
			virtual ~GradeTooLowException() _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW;
			virtual const char* what() const throw();
	};
	class AlreadySignedException : public std::exception {
		virtual const char* what() const throw();
	};
	class NoSignException : public std::exception {
		virtual const char* what() const throw();
	};
};

std::ostream & operator<<(std::ostream & stream, Form const & form);

#endif //CPP05_FORM_HPP
