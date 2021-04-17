//
// Created by esnowbal on 21.03.2021.
// With love and butthurt.
//
#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
private:
public:
//Coplien
	Cure();
	virtual ~Cure();
	Cure &operator=(Cure const &rhs);
	Cure(Cure const &src);

	AMateria*	clone() const;
	void		use(ICharacter & target);
};


#endif
