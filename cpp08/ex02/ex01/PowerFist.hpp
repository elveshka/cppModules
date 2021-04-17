//
// Created by esnowbal on 18.03.2021.
// With love and butthurt.
//
#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon {
private:
public:
	PowerFist(void);
	virtual ~PowerFist(void);
	PowerFist &operator=(PowerFist const &rhs);
	PowerFist(PowerFist const &src);

	void attack() const;
};


#endif //CPP04_POWERFIST_HPP
