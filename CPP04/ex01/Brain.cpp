/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 21:58:55 by psanger           #+#    #+#             */
/*   Updated: 2024/11/03 13:22:10 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain got created\n";
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = "idea";
	}
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain copy constructor called\n";
	*this = other;
}

Brain::~Brain()
{
	std::cout << "Brain got destroyed\n";
}

Brain &Brain::operator=(const Brain &other)
{
	std::cout << "Brain assignation operator called\n";
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = other.ideas[i];
	}
	return *this;
}

void	Brain::set_idea(int i, std::string input)
{
	this->ideas[i] = input;
}

std::string Brain::get_idea(int i)
{
	return (this->ideas[i]);
}