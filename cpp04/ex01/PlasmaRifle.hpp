//
// Created by esnowbal on 18.03.2021.
// With love and butthurt.
//
#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
private:
public:
	PlasmaRifle(void);
	virtual ~PlasmaRifle(void);
	PlasmaRifle &operator=(PlasmaRifle const &rhs);
	PlasmaRifle(PlasmaRifle const &src);

	void attack() const;
};

#endif //CPP04_PLASMARIFLE_HPP
