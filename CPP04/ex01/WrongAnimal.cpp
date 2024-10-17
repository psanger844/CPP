/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 21:52:19 by psanger           #+#    #+#             */
/*   Updated: 2024/09/23 20:42:16 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "wrongAnimal got created\n";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "wrongAnimal got destroyed\n";
}

WrongAnimal::WrongAnimal(WrongAnimal &other)
{
	std::cout << "WrongAnimal copy constructor\n";
	*this = other;
}

WrongAnimal WrongAnimal::operator=(WrongAnimal &other)
{
	std::cout << "WrongAnimal copy assignment operaor\n";
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

void WrongAnimal::setType(std::string _type)
{
	this->_type = _type;
}

std::string WrongAnimal::getType() const
{
	return (this->_type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal Sound" << std::endl;
}
