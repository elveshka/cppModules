//
// Created by esnowbal on 19.03.2021.
// With love and butthurt.
//
#ifndef BATMAN_HPP
#define BATMAN_HPP

#include "Enemy.hpp"

class Batman : public Enemy {
private:

public:
	Batman(void);
	virtual ~Batman(void);
	Batman &operator=(Batman const &rhs);
	Batman(Batman const &src);

	virtual void	takeDamage(int dmg);

};

#endif //CPP04_BATMAN_HPP
