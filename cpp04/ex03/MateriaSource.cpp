//
// Created by esnowbal on 21.03.2021.
// With love and butthurt.
//

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	int i = 0;
	while (i < 4)
		this->source[i++] = NULL;
}

MateriaSource::~MateriaSource() {
	int i = 0;
	while (i < 4)
		delete this->source[i++];
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs) {
	int	i = -1;
	if (this != &rhs){
		AMateria * newSource[4];
		for (int j = 0; j < 4; j++)
			newSource[j] = NULL;
		while (++i < 4)
			newSource[i] = rhs.source[i];
		while (--i >= 0)
			delete this->source[i];
		while (++i < 4)
			this->source[i] = newSource[i];
	}
	return *this;
}

MateriaSource::MateriaSource(MateriaSource const &src) {
	*this = src;
}

void MateriaSource::learnMateria(AMateria * src) {
	int i = -1;
	while (++i < 4)
		if (!source[i]) {
			source[i] = src->clone();
			break;
		}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	int i = -1;
	while (++i < 4) { 
		if (!source[i]->getType().compare(type.c_str()))
			return source[i]->clone();
	}
	return NULL;
}
