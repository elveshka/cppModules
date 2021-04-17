//
// Created by esnowbal on 18.03.2021.
// With love and butthurt.
//
#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim {
private:
	Peon(void);
public:
	Peon(std::string name);
	virtual ~Peon(void);
	virtual void	getPolymorphed( void ) const;
};

#endif //CPP04_PEON_HPP
