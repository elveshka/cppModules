//
// Created by esnowbal on 18.03.2021.
// With love and butthurt.
//
#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant") {
	std::cout << "Gaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant(void) {
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant &SuperMutant::operator=(SuperMutant const &rhs) {
	if (this != &rhs)
		Enemy::operator=(rhs);
	return * this;
}

SuperMutant::SuperMutant(SuperMutant const &src) : Enemy(src) {}

void SuperMutant::takeDamage(int dmg) {
	dmg -= 3;
	if (dmg >= 0)
		this->hp -= dmg;
	if (this->hp < 0)
		this->hp = 0;
}
