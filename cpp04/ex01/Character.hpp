//
// Created by esnowbal on 18.03.2021.
// With love and butthurt.
//
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#define DEFAULT 1

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "DryBrunch.hpp"
#include "Batman.hpp"

class Character {
private:
	std::string name;
	int			ap;
	AWeapon *	gun;
	Character();
public:
	~Character();
	Character &operator=(Character const &rhs);
	Character(Character const &src);

	Character(std::string const & name);
	void	recoverAP();
	void	equip(AWeapon * weapon);
	void	attack(Enemy * enemy);
	//getters
	std::string getName() const;
	int			getAP() const;
	std::string getGun() const;
	int			isEquiped() const;
};

std::ostream & operator<<(std::ostream & stream, Character const & character);

#endif //CPP04_CHARACTER_HPP
