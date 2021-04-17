#include <sys/time.h>
#include <cstdlib>
#include <exception>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

long			get_time()
{
		struct timeval time;

		gettimeofday(&time, NULL);
		return (time.tv_usec / 1000);
}

Base 			* generate() {
	Base * obj;
	switch (rand() % 3) {
		case 0:
			obj = new A();
			std::cout << "A obj created" << std::endl;
			break;
		case 1:
			obj = new B();
			std::cout << "B obj created" << std::endl;
			break;
		case 2:
			obj = new C();
			std::cout << "C obj created" << std::endl;
			break;
	}
	return obj;
}

void			identify_from_pointer(Base * p) {
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else
		std::cout << "C" << std::endl;
}

void			identify_from_reference(Base & p) {
	try
	{
		A & a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch(std::exception & e) {}

	try
	{
		B & b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch(std::exception & e) {}

	try
	{
		C & c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch(std::exception & e) {}
}

int				main()
{
	srand(get_time());
	Base * test = generate();
	identify_from_pointer(test);
	identify_from_reference(*test);
	return 0;
}
