/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 17:34:20 by psanger           #+#    #+#             */
/*   Updated: 2024/09/11 21:10:54 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void	replaceStringRe(std::string buffer, std::string s1, std::string s2, std::ofstream &outfile)
{
	size_t pos = 0;
	pos = buffer.find(s1);
	if (pos != std::string::npos && !s1.empty())
	{
		outfile << buffer.substr(0, pos);
		outfile << s2;
		replaceStringRe(buffer.substr(pos + s1.length(), buffer.length()), s1, s2, outfile);
	}
	else
		outfile << buffer;
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
	std::string buffer;


	std::getline(infile, line);
	buffer = line;
	while (std::getline(infile, line))
	{
		buffer = buffer + "\n";
		buffer = buffer + line;
	}
	replaceStringRe(buffer, s1, s2, outfile);

	infile.close();
	outfile.close();
	return (0);
}
