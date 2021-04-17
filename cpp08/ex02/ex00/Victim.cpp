//
// Created by esnowbal on 17.03.2021.
// With love and butthurt.
//
#include "Victim.hpp"

Victim::Victim( void ) {};

Victim::Victim( std::string name) : name(name) {
	std::cout
	<< "Some random victim called "
	<< this->name
	<< " just appeared!"
	<< std::endl;
}

Victim::~Victim(void) {
	std::cout << "Victim "
	<< this->name
	<< " just died for no apparent reason!"
	<< std::endl;
}

Victim & Victim::operator=(Victim const &rhs) {
	if ( this != &rhs ) {
		std::cout << "ASSignation called" << std::endl;
		this->name = rhs.name;
	}
	return *this;
}

Victim::Victim(Victim const &src) {
		*this = src;
}

void	Victim::getPolymorphed( void ) const {
	std::cout
	<< this->name
	<< " has been turned into a cute little sheep!"
	<< std::endl;
}

std::string Victim::getName( void ) const { return this->name; }

std::ostream & operator<<(std::ostream & stream, Victim const & victim) {
	stream << "I'm "
	<< victim.getName()
	<< " and I like otters!"
	<< std::endl;
	return stream;
}
