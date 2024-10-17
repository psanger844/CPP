/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:06:59 by psanger           #+#    #+#             */
/*   Updated: 2024/10/02 21:53:08 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : _sound("miau")
{
	std::cout << "Cat got created\n";
	this->brain = new Brain;
	Animal::setType("Cat");
}

Cat::Cat(Cat &other) : _sound(other._sound) {
	if (other.brain != nullptr) {
		this->brain = new Brain(*other.brain);
	} else {
		this->brain = nullptr;
	}
}

Cat Cat::operator= (Cat &other)
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

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat got destroyed\n";
}

void Cat::makeSound() const
{
	std::cout << this->_sound << std::endl;
}

void Cat::setCatsBrain(std::string info)
{
	this->brain->setBrain(info);
}

std::string Cat::getCatsBrain(void)
{
	return (this->brain->getBrain());
}
