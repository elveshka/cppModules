#include "iter.hpp"

int		main() {

	int	a[] = {0, 1, 2, 3, 4};
	iter(a, 5, magic);

	std::cout << "--------------------------" << std::endl;
	float f[] = {34.0, 11.3, 13.0, 14.7, 9.0};
	iter(f, 5, magicf);

	std::cout << "--------------------------" << std::endl;
	std::string s[] = {"first", "second", "third", "vier", "funf"};
	iter(s, 5, magics);
	return 0;
}
