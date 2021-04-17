#include "Span.hpp"

int		main() {

	Span a (100000);

	Span b (100000);

	for (int i = 0; i < 100000; i++)
	{
		b.addNumber(i);
	}
	try
	{
		a.addNumber(b.getSeq().begin(), b.getSeq().end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << a.getSeq()[1] << std::endl;
	std::cout << a.getSeq()[99999] << std::endl;
	std::cout << a.shortestSpan() << std::endl;
	std::cout << a.longestSpan() << std::endl;
	return 0;
}
