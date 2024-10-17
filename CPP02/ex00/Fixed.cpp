/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 16:17:33 by psanger           #+#    #+#             */
/*   Updated: 2024/09/17 21:13:24 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
	this->fixedPointNum = 0;
	std::cout << "Default constructor called\n";
}


Fixed::Fixed( const Fixed& other )
{
	std::cout << "Copy constructor called\n";
	this->setRawBits(other.getRawBits());
	// this->fixedPointNum = other.fixedPointNum;
}

Fixed& Fixed::operator=( const Fixed& other )
{
	std::cout << "Copy assignment operator called\n";
	if (this == &other)
		return (*this);
	this->fixedPointNum = other.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
	return (this->fixedPointNum);
}

void Fixed::setRawBits( int const raw )
{
	this->fixedPointNum = raw;
}
