/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 01:59:30 by psanger           #+#    #+#             */
/*   Updated: 2024/07/05 01:59:32 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"


int main()
{
	phonebook phonebook;
	std::string command;

	while (1)
	{
		std::cout << "Enter command: ";
		std::cin >> command;
		std::cout << std::endl;
		if (command == "ADD")
			phonebook.addContact();
		else if (command == "SEARCH")
			phonebook.searchContact();
		else if (command == "EXIT")
			phonebook.exitPhonebook();
		else
			std::cout << "Command not found\n Please enter ADD, SEARCH or EXIT" << std::endl;
	}
}
