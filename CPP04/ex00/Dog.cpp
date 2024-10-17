/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:39:45 by psanger           #+#    #+#             */
/*   Updated: 2024/09/23 20:32:23 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : _sound("bark")
{
	std::cout << "Dog got created\n";
	Animal::setType("Dog");
}

Dog::Dog(Dog &other) : _sound("bark")
{
	*this = other;
}

Dog Dog::operator= (Dog &other)
{
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog got destroyed\n";
}

void Dog::makeSound() const
{
	std::cout << this->_sound << std::endl;
}