//
// Created by esnowbal on 21.03.2021.
// With love and butthurt.
//
#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
private:
public:
//Coplien
	Ice();
	virtual ~Ice();
	Ice &operator=(Ice const &rhs);
	Ice(Ice const &src);

	AMateria*	clone() const;
	void		use(ICharacter & target);
};


#endif //CPP04_ICE_HPP
