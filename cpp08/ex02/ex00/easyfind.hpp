#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <stdexcept>
#include <iostream>
#include <algorithm>
#include <vector>

template<typename T>
void	easyfind(T seq, int const & num) {

	typename T::iterator start = std::find(seq.begin(), seq.end(), num);
	if (start == seq.end())
		std::cerr << "No matches" << std::endl;
	else
		std::cout << "Find " << *start << std::endl;
}
#endif
