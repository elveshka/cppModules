//
// Created by esnowbal on 18.03.2021.
// With love and butthurt.
//
#include "Orc.hpp"

Orc::Orc(void) {
	std::cout << "Default constructor" << std::endl;
}

Orc::Orc(std::string name, std::string skinColor) : Victim(name), skinColor(skinColor) {
	std::cout
	<< this->name << " with " << this->skinColor
	<< " skin. rushing us and cry: FOR THE HORDE!"
	<< std::endl;
}

Orc::~Orc(void) {
	std::cout << this->getName() << " leave Azeroth (" << std::endl;
}
