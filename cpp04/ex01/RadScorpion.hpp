//
// Created by esnowbal on 18.03.2021.
// With love and butthurt.
//
#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy {
private:

public:
	RadScorpion(void);
	virtual ~RadScorpion(void);
	RadScorpion &operator=(RadScorpion const &rhs);
	RadScorpion(RadScorpion const &src);


};


#endif //CPP04_RADSCORPION_HPP
