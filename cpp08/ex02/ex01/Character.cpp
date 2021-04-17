//
// Created by esnowbal on 18.03.2021.
// With love and butthurt.
//
#include "Character.hpp"

Character::Character(void) {
	std::cout << "Character constructor" << std::endl;
}

Character::Character(std::string const & name) : name(name) {
	this->ap = 40;
	this->gun = NULL;
}

Character::~Character(void) {
	std::cout << "Character destructor" << std::endl;
}

Character &Character::operator=(Character const &rhs) {
	if (this != &rhs) {
		this->name = rhs.name;
		this->ap = rhs.ap;
		this->gun = rhs.gun;
	}
	return *this;
}

Character::Character(Character const &src) {
		*this = src;
}

void	Character::recoverAP() {
	this->ap += 10;
	if (this->ap > 40)
		this->ap = 40;
	std::cout << this->ap << " AP now" << std::endl;
}

void	Character::equip(AWeapon * weapon) {
	this->gun = weapon;
}

void	Character::attack(Enemy * enemy) {
	if ((this->ap - this->gun->getAPCost() >= 0) && this->gun) {
		std::cout << this->name
				  << " attacks " << enemy->getType() << " with a "
				  << this->gun->getName() << std::endl;
		this->ap = (this->ap - this->gun->getAPCost() >= 0) ? this->ap - this->gun->getAPCost() : 0;
		this->gun->attack();
		enemy->takeDamage(this->gun->getDamage());
		if (!enemy->getHP())
			delete(enemy);
	}
}

std::string Character::getName() const { return this->name; }

int			Character::getAP() const { return this->ap; }

std::string Character::getGun() const { return this->gun->getName(); }

int			Character::isEquiped() const {
	if (this->gun)
		return 1;
	return 0;
}

std::ostream & operator<<(std::ostream & stream, Character const & character) {
	if (character.isEquiped()) {
		stream << character.getName()
			   << " has " << character.getAP() << " AP and wields a " << character.getGun()
			   << std::endl;
	}
	else {
		stream << character.getName()
			   << " has " << character.getAP() << " AP and is unarmed"
			   << std::endl;
	}
	return stream;
}
