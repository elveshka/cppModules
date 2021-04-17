//
// Created by esnowbal on 20.03.2021.
// With love and butthurt.
//
#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {
private:

public:
//Coplien
	AssaultTerminator(void);
	virtual ~AssaultTerminator(void);
	AssaultTerminator &operator=(AssaultTerminator const &rhs);
	AssaultTerminator(AssaultTerminator const &src);

	ISpaceMarine *clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

#endif //CPP04_ASSAULTTERMINATOR_HPP
