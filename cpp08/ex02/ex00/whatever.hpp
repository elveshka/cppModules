#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <cstdio>

template <typename E>
void		swap (E & a, E & b) {
	E tmp = a;

	a = b;
	b = tmp;
};

template <typename E>
E const &	min(E const & a, E const & b) {
	return (a < b) ? a : b;
}

template <typename E>
E const &	max(E const & a, E const & b) {
	return (a > b) ? a : b;
}

#endif
