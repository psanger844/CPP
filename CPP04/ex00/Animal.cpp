/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:09:33 by psanger           #+#    #+#             */
/*   Updated: 2024/10/18 01:15:28 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal got created\n";
}

Animal::Animal(const Animal &other) : type(other.type)
{
	std::cout << "Copy constructor operator called\n";
}

Animal& Animal::operator=(const Animal &other)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &other) {
		this->type = other.type;
	}
	return *this;
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