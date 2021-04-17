//
// Created by esnowbal on 19.03.2021.
// With love and butthurt.
//
#include "DryBrunch.hpp"

DryBrunch::DryBrunch(void) : AWeapon("Wirt's leg", 30, 100) {}

DryBrunch::~DryBrunch(void) {}

DryBrunch &DryBrunch::operator=(DryBrunch const &rhs) {
	if (this != &rhs)
		AWeapon::operator=(rhs);
	return * this;
}

DryBrunch::DryBrunch(DryBrunch const &src) : AWeapon(src) {}

void	DryBrunch::attack() const {
	std::cout << "* skdischh! *" << std::endl;
}
