/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 21:52:19 by psanger           #+#    #+#             */
/*   Updated: 2024/09/12 21:55:27 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "wrongAnimal got created\n";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "wrongAnimal got created\n";
}

WrongAnimal::WrongAnimal(WrongAnimal &other)
{

}

WrongAnimal WrongAnimal::operator=(WrongAnimal &other)
{

}

void WrongAnimal::makeSound()
{

}
