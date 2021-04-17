#include "easyfind.hpp"

int		main() {
	std::vector<int> a;

	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);
	a.push_back(5);

	easyfind(a, 3);
	easyfind(a, 0);
	return 0;
}
