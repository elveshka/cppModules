//
// Created by esnowbal on 19.03.2021.
// With love and butthurt.
//
#ifndef DRYBRUNCH_HPP
#define DRYBRUNCH_HPP

#include "AWeapon.hpp"

class DryBrunch : public AWeapon {
private:
public:
//Coplien
	DryBrunch(void);
	virtual ~DryBrunch(void);
	DryBrunch &operator=(DryBrunch const &rhs);
	DryBrunch(DryBrunch const &src);

	void attack() const;
//getters
};


#endif //CPP04_DRYBRUNCH_HPP
