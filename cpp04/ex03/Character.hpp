//
// Created by esnowbal on 21.03.2021.
// With love and butthurt.
//
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {
private:
	AMateria * materiaStack[4];
	std::string name;
	Character(void);
public:
//Coplien
	Character(std::string name);
	virtual ~Character(void);
	Character &operator=(Character const &rhs);
	Character(Character const &src);

	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	void takeDamage() const;

//getters
	std::string const & getName() const;
};


#endif //CPP04_CHARACTER_HPP
