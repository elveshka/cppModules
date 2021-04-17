//
// Created by esnowbal on 19.03.2021.
// With love and butthurt.
//
#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void) {
	this->type = "ASSault Terminator";
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator(void) {
	std::cout << "I'll be back..."<< std::endl;
}

AssaultTerminator &AssaultTerminator::operator=(AssaultTerminator const &rhs) {
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &src) {
		*this = src;
}

ISpaceMarine* AssaultTerminator::clone() const {
	AssaultTerminator *clone = new AssaultTerminator(*this);
	return clone;
}

void AssaultTerminator::battleCry() const {
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const {
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const {
	std::cout << "* attacks with chainfists *" << std::endl;
}
