/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:06:59 by psanger           #+#    #+#             */
/*   Updated: 2024/09/23 20:32:05 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : _sound("miau")
{
	std::cout << "Cat got created\n";
	Animal::setType("Cat");
}

Cat::Cat(Cat &other) : _sound("miau")
{
	*this = other;
}

Cat Cat::operator= (Cat &other)
{
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat got destroyed\n";
}

void Cat::makeSound() const
{
	std::cout << this->_sound << std::endl;
}
