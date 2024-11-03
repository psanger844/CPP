/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:45:41 by psanger           #+#    #+#             */
/*   Updated: 2024/11/02 17:09:06 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat got created\n";
	WrongAnimal::setType("WrongCat");
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	std::cout << "Copy constructor called\n";
}

WrongCat& WrongCat::operator=(const WrongCat &other)
{
	std::cout << "Assignment operator called\n";
	if (this != &other) {
		WrongAnimal::operator=(other);
	}
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat got destroyed\n";
}

void WrongCat::makeSound() const
{
	std::cout << "not miau" << std::endl;
}