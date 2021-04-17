//
// Created by esnowbal on 18.03.2021.
// With love and butthurt.
//
#include "Peon.hpp"

Peon::Peon(void) { this->name = ""; }

Peon::Peon(std::string name) : Victim(name) {
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon(void) {
	std::cout << "Bleuark..." << std::endl;
}

void	Peon::getPolymorphed( void ) const {
	std::cout
	<< this->name
	<< " has been turned into a pink pony!"
	<< std::endl;
}
