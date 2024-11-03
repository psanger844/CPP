/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:39:45 by psanger           #+#    #+#             */
/*   Updated: 2024/11/02 17:15:49 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog got created\n";
	this->brain = new Brain;
	this->type = "Dog";
}

Dog::Dog(Dog &other): Animal(other) {
	std::cout << "Dog copy constructor called\n";
	*this = other;
}

Dog & Dog::operator= (Dog &other)
{
	std::cout << "Dog assignation operator called\n";
	if (this != &other)
	{
		this->type = other.type;
		this->brain = new Brain(*other.brain);
	}
	return *this;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog got destroyed\n";
}

void Dog::makeSound() const
{
	std::cout << "Woof\n";
}

void Dog::set_ideas(int start, int end, std::string input) const {
	while (start < end) {
		this->brain->set_idea(start, input);
		start++;
	}
}

void Dog::printIdears() const {
	for (int i = 0; i < 100; i++) {
		std::cout << this->brain->get_idea(i) << std::endl;
	}
}