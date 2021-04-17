#include "whatever.hpp"

typedef struct a {
	std::string str;
	double		x;
}				t_a;

std::ostream & operator<<(std::ostream & stream, t_a const & t) {
	stream << &t << " " << t.str << " " << t.x;
	return stream;
}

int			main() {
	char c1 = '!', c2 = 'z';

	std::cout << c1 << " and " << c2 << std::endl;

	::swap(c1, c2);
	std::cout << c1 << " and " << c2 << std::endl;

	std::cout << ::max(c1, c2) << std::endl;
	getchar();
//-----------------------------------------------------------------
	double d1 = 42.42, d2 = 21.21;

	std::cout << d1 << " " << d2 << std::endl;
	std::cout << ::min(d1, d2) << std::endl;
	::swap(d1, d2);
	std::cout << d1 << " " << d2 << std::endl;
	getchar();
//-----------------------------------------------------------------

	t_a		t1 = {"abc", 42.42};
	t_a		t2 = {"cde", 21.21};

	std::cout << "Before swap" << std::endl;
	std::cout << t1 << std::endl;
	std::cout << t2 << std::endl;
	::swap(t1, t2);

	std::cout << "AFter swap" << std::endl;


	std::cout << ::max(&t1, &t2) << std::endl;
	std::cout << t1 << std::endl;
	std::cout << t2 << std::endl;
	return 0;
}
