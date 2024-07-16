/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 01:59:55 by psanger           #+#    #+#             */
/*   Updated: 2024/07/16 15:45:19 by psanger          ###   ########.fr       */
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

void phonebook::addContact()
{
	std::string input;

	std::cout << "Enter your First Name: " << std::endl;
	std::cin >> input;
	if (std::cin.eof())
		exit(1);
	this->contacts[index].setFirstName(input);

	std::cout << "Enter your Last Name: " << std::endl;
	std::cin >> input;
	if (std::cin.eof())
		exit(1);
	this->contacts[index].setLastName(input);

	std::cout << "Enter your Nick Name: " << std::endl;
	std::cin >> input;
	if (std::cin.eof())
		exit(1);
	this->contacts[index].setNickName(input);

	std::cout << "Enter your Phonenumber: " << std::endl;
	std::cin >> input;
	if (std::cin.eof())
		exit(1);
	this->contacts[index].setPhoneNumber(input);

	std::cout << "Enter your darkest secret: " << std::endl;
	std::cin >> input;
	if (std::cin.eof())
		exit(1);
	this->contacts[index].setDarkSecret(input);

	this->index++;

	if (this->index > 8)
		this->index = 0;
}

void phonebook::searchContact()
{
	std::cout << "search contact" << std::endl;
}

void phonebook::exitPhonebook()
{
	std::cout << "exit phonebook" << std::endl;
	exit(0);
}
