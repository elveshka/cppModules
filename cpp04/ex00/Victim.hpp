//
// Created by esnowbal on 17.03.2021.
// With love and butthurt.
//
#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>

class Victim {
protected:
	std::string name;
	Victim( void );
public:
	Victim( std::string name);
	virtual ~Victim( void );
	Victim & operator=( Victim const &rhs );
	Victim( Victim const &src );
	virtual void	getPolymorphed( void ) const;
	//getters
	std::string getName( void ) const;
};

std::ostream & operator<<(std::ostream & stream, Victim const & victim);

#endif //CPP04_VICTIM_HPP
