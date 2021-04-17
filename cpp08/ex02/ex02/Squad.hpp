//
// Created by esnowbal on 19.03.2021.
// With love and butthurt.
//
#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"

class Squad : public ISquad {
private:
	int				count;
	ISpaceMarine ** squadron;
public:
//Coplien
	Squad(void);
	virtual ~Squad(void);
	Squad &operator=(Squad const &rhs);
	Squad(Squad const &src);

	int 			push(ISpaceMarine * newbie);

//getters
	int 			getCount() const;
	ISpaceMarine * 	getUnit(int index) const;

};


#endif //CPP04_SQUAD_HPP
