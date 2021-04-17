#include "Bureaucrat.hpp"
#include <stdio.h>

int main()
{
	Bureaucrat b1("Jack", 30);

	std::cout << b1 << std::endl;
	getchar();

	try {
		Bureaucrat b2("test", 0);
	}
	catch (std::exception &exc) {
		std::cout << exc.what() << std::endl;
	}
	getchar();

	try {
		Bureaucrat b2("test", 1400);
	}
	catch (std::exception &exc) {
		std::cout << exc.what() << std::endl;
	}
	getchar();

	Bureaucrat b2 ("Paul", 10);
	std::cout << b2 << std::endl;
	getchar();

	for (int i = 0; i < 15; i++) {
		b2.gradeIncrement();
	}
	std::cout << b2 << std::endl;
	return 0;
}
