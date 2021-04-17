#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <iostream>

void		toChar(std::string str) {
	std::string res("");

	if (isinf(strtof(str.c_str(), NULL)) || isnan(strtof(str.c_str(), NULL)))
		res = "impossible";
	else if (str.length() == 1 && isalpha(str[0]))
		res = res + "\'" + str[0] + "\'";
	else if (isdigit(str[0]) && (strtol(str.c_str(), NULL, 10)) < 256) {
		if (isprint(strtol(str.c_str(), NULL, 10)))
			res = res + "\'" + static_cast<char>(strtol(str.c_str(), NULL, 10)) + "\'";
		else
			res = "Non displayable";
	}
	else
		res = "impossibru";
	std::cout << "char: " << res << std::endl;
}

void		toInt(std::string str) {
	std::cout << "int: ";
	if (str.length() == 1 && isalpha(str[0]))
		std::cout << static_cast<int>(str[0]) << std::endl;
	else if ((strtol(str.c_str(), NULL, 10) == \
	static_cast<long>(strtod(str.c_str(), NULL))) && \
	(strtol(str.c_str(), NULL, 10) == static_cast<int>((strtol(str.c_str(), NULL, 10)))))
		std::cout << strtol(str.c_str(), NULL, 10) << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void		toFloat(std::string str) {
	std::cout << "float: ";
	if (str.length() == 1 && isalpha(str[0])) {
		std::cout << static_cast<float>(str[0]) << ".0f" << std::endl;
	}
	else if (strtof(str.c_str(), NULL) == static_cast<float>(strtod(str.c_str(), NULL)))
	{
		float res = strtof(str.c_str(), NULL);
		std::cout << res;
		if (res - res == (float)(res - static_cast<int>(res)))
			std::cout << ".0f" << std::endl;
		else
			std::cout << "f" << std::endl;
	}
	else
		std::cout << strtof(str.c_str(), NULL) << "f" << std::endl;
}

void		toDouble(std::string str) {
	std::cout << "double: ";
	if (str.length() == 1 && isalpha(str[0]))
		std::cout << static_cast<double>(str[0]) << std::endl;
	else
	{
		double res = strtod(str.c_str(), NULL);
		std::cout << res;
		if (res - res == (double)(res - static_cast<long>(res)))
			std::cout << ".0" << std::endl;
		else
			std::cout << std::endl;
	}
}

int		main (int ac, char * av[])
{
	if (ac != 2)
		return 1;
	std::string str(av[1]);
	toChar(str);
	toInt(str);
	toFloat(str);
	toDouble(str);
	return 0;
}
