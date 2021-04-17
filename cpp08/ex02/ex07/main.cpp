/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowbal <esnowbal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 18:01:37 by esnowbal          #+#    #+#             */
/*   Updated: 2021/01/19 16:58:51 by esnowbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int		check_word(std::string str, std::string file, std::streampos i)
{
	std::ifstream 	fcheck(file.c_str());
	int				count = 0;
	int				size = str.size();
	std::string		word;

	fcheck.seekg(i);
	while (fcheck.peek() != -1 && count++ < size)
	{
		word += fcheck.get();
	}
	fcheck.close();
	if (str == word)
	{
		return 1;
	}
	return 0;
}

int 	main(int ac, char* av[])
{
	if (ac != 4 || !av[1][0] || !av[2][0] || !av[3][0])
	{
		std::cout << "Wrong parameters" << std::endl;
		return 0;
	}

	std::ifstream 	file(av[1]);

	if (!file.is_open())
	{
		std::cout << "Invalid file" << std::endl;
		return 0;
	}

	std::string 	s1(av[2]), s2(av[3]);
	std::string		outF(av[1]);
	outF += ".replace";
	std::ofstream	ofile(outF.c_str());
	char buf[s1.size()];

	if (!ofile.is_open())
	{
		std::cout << "Can't create a file: " << outF << std::endl;
		file.close();
		return 0;
	}

	while (file.peek() != -1)
	{
		if (check_word(s1, av[1], file.tellg()))
		{
			std::cout << "Hi!\n";
			ofile << s2;
			file.read(buf, s1.size());
		}
		else
		{
			char c;
			file.get(c);
			ofile << c;
		}
	}
	file.close();
	ofile.close();
	return 0;
}
