//
// Created by esnowbal on 19.03.2021.
// With love and butthurt.
//
#include "Batman.hpp"

Batman::Batman(void) : Enemy(3000, "Batman") {
	std::cout << "I am Batman!" << std::endl;
}

Batman::~Batman(void) {
	std::cout << "I am still Batman!" << std::endl;
}

Batman &Batman::operator=(Batman const &rhs) {
	if ( this != &rhs)
		Enemy::operator=(rhs);
	return * this;
}

Batman::Batman(Batman const &src) : Enemy(src) {}

void	Batman::takeDamage(int dmg) {
	dmg = 0;
	std::cout << "Do you know who am I?" << std::endl;
	std::cout << "* enemy doesn't take damage *" << std::endl;
}