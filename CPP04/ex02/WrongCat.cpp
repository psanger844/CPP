/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:45:41 by psanger           #+#    #+#             */
/*   Updated: 2024/09/23 20:32:32 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : _wrongSound("not Miau")
{
	std::cout << "WrongCat got created\n";
	WrongAnimal::setType("WrongCat");
}

WrongCat::WrongCat(WrongCat &other): _wrongSound("not Miau")
{
	*this = other;
}

WrongCat WrongCat::operator= (WrongCat &other)
{
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat got destroyed\n";
}

void WrongCat::makeSound() const
{
	std::cout << this->_wrongSound << std::endl;
}
