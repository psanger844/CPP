/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 17:34:20 by psanger           #+#    #+#             */
/*   Updated: 2024/08/07 17:21:17 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void	replaceStrings(std::string line, std::string s1, std::string s2, std::ofstream &outfile)
{
	size_t pos = 0;
	pos = line.find(s1);
	if (pos != std::string::npos)
	{
		outfile << line.substr(0, pos);
		outfile << s2;
		replaceStrings(line.substr(pos + s2.length() - 2, line.length()), s1, s2, outfile);
	}
	else
		outfile << line;
}

int main(int argc, char **argv)
{
	if (argc != 4) {
		std::cout << "Wrong number of arguments!!\n";
		return (1);
	}
	std::string filename = argv[1];
	std::string replaceFile = filename + ".replace";
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::ifstream infile;
	std::ofstream outfile;

	infile.open(filename);
	if (!infile.is_open()) {
		std::cout << "Could not open file!!\n";
		return (1);
	}

	outfile.open(replaceFile.c_str());
	if (!outfile.is_open()) {
		std::cout << "Error outfile!!\n";
		return (1);
	}

	std::string line;

	while (std::getline(infile, line))
		replaceStrings(line + "\n", s1, s2, outfile);

	infile.close();
	outfile.close();
	return (0);
}
