//
// Created by esnowbal on 21.03.2021.
// With love and butthurt.
//

#include "Ice.hpp"

Ice::Ice() {
	AMateria::setType("ice");
}

Ice::~Ice() {
}

Ice &Ice::operator=(Ice const &rhs) {
	AMateria::operator=(rhs);
	return *this;
}

Ice::Ice(Ice const &src) : AMateria(src) {}

AMateria* Ice::clone() const {
	AMateria * newMateria = new Ice(*this);
	return newMateria;
}

void	Ice::use(ICharacter & target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}
