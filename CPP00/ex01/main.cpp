/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 01:59:30 by psanger           #+#    #+#             */
/*   Updated: 2024/07/16 16:58:26 by psanger          ###   ########.fr       */
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
		std::getline(std::cin, command);
		if (std::cin.eof())
			return (1);
		if (command == "ADD"){
			if (phonebook.addContact() == 1)
				return (1);
		}
		else if (command == "SEARCH")
		{
			if (phonebook.searchContact() == 1)
				return (1);
		}
		else if (command == "EXIT")
			return (0);
		else
			std::cout << "Command not found\n Please enter ADD, SEARCH or EXIT" << std::endl;
	}
}
