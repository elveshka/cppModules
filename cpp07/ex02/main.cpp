#include "Array.hpp"

int		main() {

	Array<int> a(3); a[0] = 0; a[1] = 1; a[2] = 2;
	Array<int> b(1);

	std::cout << b[0] << std::endl;
	b = a;
	std::cout << b << std::endl;
	Array<int> c(a);
	std::cout << c << std::endl;

	Array<double> d(4);
	for (size_t i = 0; i < d.size(); i++)
	{
		d[i] = (double)10 / i;
	}
	try
	{
		for (size_t i = 0; i < d.size() + 1; i++)
		{
			std::cout << d[i] << " ";
		}
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
