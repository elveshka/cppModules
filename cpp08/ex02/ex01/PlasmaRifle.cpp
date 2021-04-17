//
// Created by esnowbal on 18.03.2021.
// With love and butthurt.
//
#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21) {}

PlasmaRifle::~PlasmaRifle(void) {}

void PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const &rhs) {
	if (this != &rhs)
		AWeapon::operator=(rhs);
	return * this;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &src) : AWeapon(src) {}
