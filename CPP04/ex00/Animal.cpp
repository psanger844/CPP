/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:09:33 by psanger           #+#    #+#             */
/*   Updated: 2024/09/12 21:45:06 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal got created\n";
}

Animal::Animal(Animal &other)
{
	*this = other;
	std::cout << "Copy constructor operator called\n";
}

Animal Animal::operator=(Animal &other)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &other)
		this->type = other.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal got destroyed\n";
}

void Animal::setType(std::string type)
{
	this->type = type;
}

std::string Animal::getType() const
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << "Animal Sound" << std::endl;
}
