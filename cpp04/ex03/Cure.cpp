//
// Created by esnowbal on 21.03.2021.
// With love and butthurt.
//
#include "Cure.hpp"

Cure::Cure() {
	AMateria::setType("cure");
}

Cure::~Cure() {
}

Cure &Cure::operator=(Cure const &rhs) {
	AMateria::operator=(rhs);
	return *this;
}

Cure::Cure(Cure const &src) : AMateria(src) {}

AMateria* Cure::clone() const {
	AMateria * newMateria = new Cure(*this);
	return newMateria;
}

void	Cure::use(ICharacter & target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	AMateria::use(target);
}
