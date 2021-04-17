//
// Created by esnowbal on 21.03.2021.
// With love and butthurt.
//
#ifndef AMATERIA_HPP
#define AMATERIA_HPP

class ICharacter;
#include <iostream>
#include "ICharacter.hpp"

class AMateria {
private:
	unsigned int _xp;
	std::string type;
public:
//Coplien
	AMateria();
	virtual ~AMateria();
	AMateria &operator=(AMateria const &rhs);
	AMateria(AMateria const &src);

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter & target);

//getters
	std::string const & getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia's XP

//setters
	void	setXP(unsigned int xp);
	void	setType(std::string const & type);
};


#endif //AMATERIA_HPP
