//
// Created by esnowbal on 18.03.2021.
// With love and butthurt.
//
#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>

class AWeapon {
protected:
	std::string name;
	int			damage;
	int			apcost;
	AWeapon(void);
public:
	virtual ~AWeapon(void);
	AWeapon &operator=(AWeapon const &rhs);
	AWeapon(AWeapon const &src);

	AWeapon(std::string const & name, int apcost, int damage);
	virtual void attack() const = 0;
	//getters
	std::string getName() const;
	int			getAPCost() const;
	int			getDamage() const;
};

#endif //CPP04_AWEAPON_HPP
