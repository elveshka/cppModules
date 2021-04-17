//
// Created by esnowbal on 18.03.2021.
// With love and butthurt.
//
#ifndef ORC_HPP
#define ORC_HPP

#include "Victim.hpp"

class Orc : public Victim {
private:
	Orc(void);
	std::string skinColor;
public:
	Orc(std::string name, std::string skinColor);
	virtual ~Orc(void);
	Orc &operator=(Orc const &rhs);
	Orc(Orc const &src);
};


#endif
