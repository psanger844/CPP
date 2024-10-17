/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:39:45 by psanger           #+#    #+#             */
/*   Updated: 2024/10/17 23:00:24 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : _sound("bark")
{
	std::cout << "Dog got created\n";
	this->brain = new Brain;
	Animal::setType("Dog");
}

Dog::Dog(Dog &other) : _sound(other._sound) {
	std::cout << "Copied" << std::endl;
	if (other.brain != nullptr) {
		this->brain = new Brain(*other.brain);
	} else {
		this->brain = nullptr;
	}
}

Dog Dog::operator= (Dog &other)
{
	if (this == &other)
		return (*this);
	if (this->brain) {
		delete this->brain;
	}
	if (other.brain)
		this->brain = new Brain(*other.brain);
	else
		this->brain = nullptr;
	return (*this);
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog got destroyed\n";
}

void Dog::makeSound() const
{
	std::cout << this->_sound << std::endl;
}