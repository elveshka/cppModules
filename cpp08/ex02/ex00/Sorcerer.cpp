//
// Created by esnowbal on 17.03.2021.
// With love and butthurt.
//
#include "Sorcerer.hpp"

Sorcerer::Sorcerer( void ) : name(""), title("") {}

Sorcerer::Sorcerer( std::string name, std::string title ) : name(name), title(title) {
	std::cout << this->name ;
	std::cout << ", ";
	std::cout << this->title;
	std::cout << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer( void ) {
	std::cout << this->name ;
	std::cout << ", ";
	std::cout << this->title;
	std::cout << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer & Sorcerer::operator=(Sorcerer const &rhs) {
	if ( this != &rhs) {
		std::cout << "ASSignation called" << std::endl;
		this->name = rhs.name;
		this->title = rhs.title;
	}
	return *this;
}

std::ostream & operator<<(std::ostream & stream, Sorcerer const & sorcerer) {
	stream << "I am ";
	stream << sorcerer.getName();
	stream << ", ";
	stream << sorcerer.getTitle();
	stream << ", and I like ponies!" << std::endl;
	return stream;
}

Sorcerer::Sorcerer (Sorcerer const & src ) {
		*this = src;
}

void	Sorcerer::polymorph(Victim const & victim) const {
	victim.getPolymorphed();
}

std::string Sorcerer::getName() const { return this->name; }
std::string Sorcerer::getTitle() const { return this->title; }
