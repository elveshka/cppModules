//
// Created by esnowbal on 19.03.2021.
// With love and butthurt.
//
#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void) {
	this->type = "Tactical Marine";
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine(void) {
	std::cout << "Aaargh..."<< std::endl;
}

TacticalMarine &TacticalMarine::operator=(TacticalMarine const &rhs) {
	if (this != &rhs) {
		this->type = rhs.type;
	}
	return *this;
}

TacticalMarine::TacticalMarine(TacticalMarine const &src) {
		*this = src;
}

ISpaceMarine* TacticalMarine::clone() const {
	TacticalMarine *clone = new TacticalMarine(*this);
	return clone;
}

void TacticalMarine::battleCry() const {
	std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const {
	std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const {
	std::cout << "* attacks with a chainsword *" << std::endl;
}
