//
// Created by esnowbal on 19.03.2021.
// With love and butthurt.
//
#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {
private:

public:
//Coplien
	TacticalMarine(void);
	virtual ~TacticalMarine(void);
	TacticalMarine &operator=(TacticalMarine const &rhs);
	TacticalMarine(TacticalMarine const &src);

	ISpaceMarine *clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

#endif //CPP04_TACTICALMARINE_HPP
