//
// Created by esnowbal on 19.03.2021.
// With love and butthurt.
//
#ifndef ISQUAD_HPP
#define ISQUAD_HPP

#include "TacticalMarine.hpp"

class ISquad {
public:
	virtual ~ISquad() {}
	virtual int getCount() const = 0;
	virtual ISpaceMarine* getUnit(int) const = 0;
	virtual int push(ISpaceMarine*) = 0;
};

#endif //CPP04_ISQUAD_HPP
