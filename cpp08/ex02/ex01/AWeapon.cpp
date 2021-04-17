//
// Created by esnowbal on 18.03.2021.
// With love and butthurt.
//
#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) {
	this->name = name;
	this->apcost = apcost;
	this->damage = damage;
}

AWeapon::~AWeapon(void) {}

AWeapon & AWeapon::operator=(AWeapon const &rhs) {
	if ( this != &rhs) {
		this->name = rhs.name;
		this->apcost = rhs.apcost;
		this->damage = rhs.damage;
	}
	return *this;
}

AWeapon::AWeapon(AWeapon const &src) {
		*this = src;
}

std::string AWeapon::getName() const { return this->name; }

int			AWeapon::getAPCost() const { return this->apcost; }

int			AWeapon::getDamage() const { return this->damage; }
