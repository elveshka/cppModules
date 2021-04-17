//
// Created by esnowbal on 17.03.2021.
// With love and butthurt.
//

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include "Victim.hpp"
#include "Peon.hpp"
#include "Orc.hpp"

#define DEFAULT 1

class Sorcerer {
private:
	std::string name;
	std::string title;
	Sorcerer( void );
public:
	Sorcerer( std::string name, std::string title );
	~Sorcerer( void );
	Sorcerer & operator=(Sorcerer const &rhs);
	Sorcerer(Sorcerer const &src);
	void	polymorph(Victim const & victim) const;
	//getters
	std::string getName( void ) const;
	std::string getTitle( void ) const;
};

std::ostream & operator<<(std::ostream & stream, Sorcerer const & sorcerer);

#endif //CPP04_SORCERER_HPP
