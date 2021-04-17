//
// Created by esnowbal on 18.03.2021.
// With love and butthurt.
//
#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy {
private:

public:
	SuperMutant(void);
	virtual ~SuperMutant(void);
	SuperMutant &operator=(SuperMutant const &rhs);
	SuperMutant(SuperMutant const &src);

	virtual void	takeDamage(int dmg);

};


#endif //CPP04_SUPERMUTANT_HPP
