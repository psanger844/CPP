/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 21:58:55 by psanger           #+#    #+#             */
/*   Updated: 2024/10/02 21:53:36 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain got created\n";
}

Brain::~Brain()
{
	std::cout << "Brain got destroyed\n";
}

Brain::Brain(Brain &other) {
	for (int i = 0; i < 100; ++i) {
		_ideas[i] = other._ideas[i];
	}
}

Brain Brain::operator=(Brain &other)
{
	if (this != &other) {
		for (size_t i = 0; i < 100; i++) {
			this->_ideas[i] = other._ideas[i];
		}
	}
	return (*this);
}

void Brain::setBrain(std::string info)
{
	for (size_t i = 0; i < 100; i++)
	{
		this->_ideas[i] = info[i];
	}
}

std::string Brain::getBrain(void)
{
	return (this->_ideas[0]);
}
