/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 01:59:55 by psanger           #+#    #+#             */
/*   Updated: 2024/07/16 16:59:44 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

phonebook::phonebook()
{
	this->index = 0;
	std::cout << "Phonebook created, can store up to 8 contacts\n";
}

phonebook::~phonebook()
{
	std::cout << "Phonebook destroyed\n";
}

int phonebook::addContact()
{
	std::string input;

	std::cout << "Enter your First Name:		";
	std::getline(std::cin, input);
	if (std::cin.eof())
		return (1);
	this->contacts[index].setFirstName(input);

	std::cout << "Enter your Last Name:		";
	std::getline(std::cin, input);
	if (std::cin.eof())
		return (1);
	this->contacts[index].setLastName(input);

	std::cout << "Enter your Nick Name:		";
	std::getline(std::cin, input);
	if (std::cin.eof())
		return (1);
	this->contacts[index].setNickName(input);

	std::cout << "Enter your Phonenumber:		";
	std::getline(std::cin, input);
	if (std::cin.eof())
		return (1);
	this->contacts[index].setPhoneNumber(input);

	std::cout << "Enter your darkest secret:	";
	std::getline(std::cin, input);
	if (std::cin.eof())
		return (1);
	this->contacts[index].setDarkSecret(input);

	this->index++;

	if (this->index > 8)
		this->index = 0;
	return (0);
}

int phonebook::searchContact()
{
	std::string input;
	int i = 0;
	while (true)
	{
		std::cout << "Enter a Number between 0 and 9	";
		std::getline(std::cin, input);
		if (std::cin.eof())
			return (1);
		i = atoi(input.c_str());
		if (i < 9 && i > 0)
			break ;
	}
	i--;

	std::string first = this->contacts[i].getFirstName();
	std::string last = this->contacts[i].getLastName();
	std::string nick = this->contacts[i].getNickName();

	if (first.size() >= 10)
		first = first.substr(0, 9) + ".";
	if (last.size() >= 10)
		last = last.substr(0, 9) + ".";
	if (nick.size() >= 10)
		nick = nick.substr(0, 9) + ".";

	std::cout << std::right << "|" \
				<< std::setw(10) << "index" << "|" \
				<< std::setw(10) << "first name" << "|" \
				<< std::setw(10) << "last name" << "|" \
				<< std::setw(10) << "nick name" << "|" \
				<< std::endl;


	std::cout << std::right << "|" \
				<< std::setw(10) << i + 1 << "|" \
				<< std::setw(10) << first << "|" \
				<< std::setw(10) << last << "|" \
				<< std::setw(10) << nick << "|" \
				<< std::endl;
	return (0);
}
