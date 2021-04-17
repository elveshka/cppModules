//
// Created by esnowbal on 18.03.2021.
// With love and butthurt.
//
#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion") {
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion(void) {
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion &RadScorpion::operator=(RadScorpion const &rhs) {
	if (this != &rhs)
		Enemy::operator=(rhs);
	return * this;
}

RadScorpion::RadScorpion(RadScorpion const &src) : Enemy(src) {}
