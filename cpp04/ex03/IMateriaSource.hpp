//
// Created by esnowbal on 21.03.2021.
// With love and butthurt.
//
#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource {

public:
	virtual				~IMateriaSource() {}
	virtual void		learnMateria(AMateria * src) = 0;
	virtual AMateria*	createMateria(std::string const & type) = 0;
};

#endif //CPP04_IMATERIASOURCE_HPP
