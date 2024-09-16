/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:06:59 by psanger           #+#    #+#             */
/*   Updated: 2024/09/12 21:06:15 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : _sound("miau")
{
	std::cout << "Cat got created\n";
	Animal::setType("Cat");
}

Cat::~Cat()
{
	std::cout << "Cat got destroyed\n";
}

void Cat::makeSound()
{
	std::cout << this->_sound << std::endl;
}
