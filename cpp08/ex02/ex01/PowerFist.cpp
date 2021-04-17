//
// Created by esnowbal on 18.03.2021.
// With love and butthurt.
//
#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50) {}

PowerFist::~PowerFist(void) {}

void PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist & PowerFist::operator=(PowerFist const &rhs) {
	if (this != &rhs)
		AWeapon::operator=(rhs);
	return * this;
}

PowerFist::PowerFist(PowerFist const &src) : AWeapon(src) {}
