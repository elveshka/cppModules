//
// Created by esnowbal on 21.03.2021.
// With love and butthurt.
//
#include "AMateria.hpp"

AMateria::AMateria() {
	this->_xp = 0;
}

AMateria::~AMateria() {}

AMateria &AMateria::operator=(AMateria const &rhs) {
	if (this != &rhs) {
		this->_xp = rhs._xp;
		this->type = rhs.type;
	}
	return *this;
}

AMateria::AMateria(AMateria const &src) {
	*this = src;
}

void	AMateria::use(ICharacter & target) {
	this->_xp += 10;
	target.getName();
}

std::string const & AMateria::getType() const { return this->type; }

unsigned int 		AMateria::getXP() const { return this->_xp; }

void	AMateria::setXP(unsigned int xp) { this->_xp = xp; }
void	AMateria::setType(std::string const & type) { this->type = type; }
