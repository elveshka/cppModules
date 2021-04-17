#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>

template <typename T>
void	magic(T const & num) {
	if (num % 2)
		std::cout << 1 << std::endl;
	else
		std::cout << 0 << std::endl;
}

template <typename T>
void	magicf(T const & num) {
	if (num != floor(num))
		std::cout << num - floor(num) << std::endl;
	else
		std::cout << num << std::endl;
}

template <typename T>
void	magics(T const & str) {
	std::cout << str[0] << std::endl;
}

template <typename T>
void	iter(T * arr, int length, void(*f)(T const &)) {
	for (int i = 0; i < length; i++)
	{
		f(arr[i]);
	}
}

#endif
