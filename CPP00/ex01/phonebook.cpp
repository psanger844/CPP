/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 01:59:55 by psanger           #+#    #+#             */
/*   Updated: 2024/07/05 01:59:57 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

phonebook::phonebook(){}
phonebook::~phonebook(){}

void phonebook::addContact()
{
	std::cout << "add contact" << std::endl;

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
