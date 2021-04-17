//
// Created by esnowbal on 21.03.2021.
// With love and butthurt.
//
#include "Character.hpp"

Character::Character() {
}

Character::Character(std::string name) : name(name) {
	for (int i = 0; i < 4; i++)
		this->materiaStack[i] = NULL;
}

Character::~Character() {
	int i = 0;
	while (this->materiaStack[i])
		delete this->materiaStack[i++];
}


Character &Character::operator=(Character const &rhs) {
	int	i = -1;
	if (this != &rhs){
		AMateria * newStack[4];
		for (int j = 0; j < 4; j++)
			newStack[j] = NULL;
		while (++i < 4)
			newStack[i] = rhs.materiaStack[i];
		while (--i >= 0)
			delete this->materiaStack[i];
		while (++i < 4)
			this->materiaStack[i] = newStack[i];
		this->name = rhs.name;
	}
	return *this;
}

Character::Character(Character const &src) {
	*this = src;
}

void	Character::equip(AMateria* m) {
	int		i = -1;
	while (++i < 4) {
		if (!this->materiaStack[i]) {
			this->materiaStack[i] = m;
			break;
		}
	}
}

void	Character::unequip(int idx) {
	if (idx >= 0 && idx <= 3 && this->materiaStack[idx]) {
		while (idx < 3) {
			this->materiaStack[idx] = this->materiaStack[idx + 1];
			idx++;
		}
		this->materiaStack[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target) {
	this->materiaStack[idx]->use(target);
}

void Character::takeDamage() const {
	std::cout << "Oof" << std::endl;
}

std::string const & Character::getName() const { return this->name; }
