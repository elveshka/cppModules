#include <iostream>


int main(int ac, char **av) 
{
	if (ac > 1)
		for (int i = 1; av[i]; i++) {
			for (int j = 0; av[i][j]; j++) {
				char x = toupper(av[i][j]);
				std::cout << x;
			}
		}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return 0; 
}
