//
// Created by esnowbal on 21.03.2021.
// With love and butthurt.
//

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
private:
	AMateria *source[4];
public:
//Coplien
	MateriaSource();
	virtual ~MateriaSource();
	MateriaSource &operator=(MateriaSource const &rhs);
	MateriaSource(MateriaSource const &src);

	void		learnMateria(AMateria * src);
	AMateria*	createMateria(std::string const & type);
};

#endif //CPP04_MATERIASOURCE_HPP
