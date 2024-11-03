/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:06:59 by psanger           #+#    #+#             */
/*   Updated: 2024/11/03 13:32:30 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat got created\n";
	this->brain = new Brain;
	this->type = "Cat";
}

Cat::Cat(Cat &other): Animal(other) {
	std::cout << "Cat copy constructor called\n";
	*this = other;
}

Cat & Cat::operator= (Cat &other)
{
	std::cout << "Cat assignation operator called\n";
	if (this != &other)
	{
		this->type = other.type;
		this->brain = new Brain(*other.brain);
	}
	return *this;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat got destroyed\n";
}

void Cat::makeSound() const
{
	std::cout << "Miau\n";
}

void Cat::set_ideas(int start, int end, std::string input) const
{
	while (start < end) {
		this->brain->set_idea(start, input);
		start++;
	}
}

void Cat::printIdears() const
{
	for (int i = 0; i < 100; i++)
		std::cout << this->brain->get_idea(i) << std::endl;
}