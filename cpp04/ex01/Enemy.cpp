//
// Created by esnowbal on 18.03.2021.
// With love and butthurt.
//
#include "Enemy.hpp"

Enemy::Enemy(void) {
	std::cout << "Default constructor" << std::endl;
}

Enemy::~Enemy(void) {}

Enemy::Enemy(int hp, std::string const & type) {
	this->hp = hp;
	this->type = type;
}

Enemy &Enemy::operator=(Enemy const &rhs) {
	if ( this != &rhs ) {
		this->hp = rhs.hp;
		this->type = rhs.type;
	}
	return *this;
}

Enemy::Enemy(Enemy const &src) {
		*this = src;
}

void	Enemy::takeDamage(int dmg) {
	if (dmg >= 0)
		this->hp -= dmg;
	if (this->hp < 0)
		this->hp = 0;
}

int			Enemy::getHP( void ) const { return this->hp; }

std::string Enemy::getType( void ) const { return this->type; }

void			Enemy::statusCheck() {
	std::cout << this->type << " has " << this->hp << " HP " << std::endl;
}
