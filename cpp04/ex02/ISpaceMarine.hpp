//
// Created by esnowbal on 19.03.2021.
// With love and butthurt.
//
#ifndef ISPACEMARINE_HPP
#define ISPACEMARINE_HPP

#include <iostream>

class ISpaceMarine {
protected:
	std::string type;
public:
	virtual ~ISpaceMarine() {}
	virtual ISpaceMarine* clone() const = 0;
	virtual void battleCry() const = 0;
	virtual void rangedAttack() const = 0;
	virtual void meleeAttack() const = 0;
};

#endif //CPP04_ISPACEMARINE_HPP
