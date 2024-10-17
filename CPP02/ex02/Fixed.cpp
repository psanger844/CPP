/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 16:46:29 by psanger           #+#    #+#             */
/*   Updated: 2024/09/18 22:20:25 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
	std::cout << "Default constructor called\n";
	this->fixedPointNum = 0;
}

Fixed::Fixed( const int num_int )
{
	this->fixedPointNum = num_int << this->fractionalBits;
	// this->fixedPointNum = num_int * 256;
	// std::cout << "Int constructor called\n";
}

Fixed::Fixed( const float num_float )
{
	this->fixedPointNum = std::roundf(num_float * (1 << this->fractionalBits));
	// this->fixedPointNum = std::roundf(num_float * 256);
	// std::cout << "Float constructor called\n";
}

Fixed::Fixed( const Fixed& other )
{
	std::cout << "Copy constructor called\n";
	this->setRawBits(other.getRawBits());
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
	// std::cout << "Destructor called\n";
}

int Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called\n";
	return (this->fixedPointNum);
}

void Fixed::setRawBits( int const raw )
{
	this->fixedPointNum = raw;
}


float Fixed::toFloat( void ) const
{
	float num_float = (float)this->getRawBits() / (1 << this->fractionalBits);
	return (num_float);
}


int	Fixed::toInt( void ) const
{
	return (this->fixedPointNum >> this->fractionalBits);
}


std::ostream & operator<<( std::ostream & o, Fixed const & i ) {
	o << i.toFloat();
	return o;
}

//-------------

bool Fixed::operator<(const Fixed& other) const
{
	if (this->getRawBits() < other.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator>(const Fixed& other) const
{
	if (this->getRawBits() > other.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed& other) const
{
	if (this->getRawBits() <= other.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed& other) const
{
	if (this->getRawBits() >= other.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator==(const Fixed& other) const
{
	if (this->getRawBits() == other.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed& other) const
{
	if (this->getRawBits() != other.getRawBits())
		return (true);
	return (false);
}

//-------------

Fixed Fixed::operator+(const Fixed& other) const
{
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const
{
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const
{
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const
{
	return Fixed(this->toFloat() / other.toFloat());
}

//-------------

Fixed Fixed::operator++(void)
{
	setRawBits(this->getRawBits() + 1);
	return Fixed(this->toFloat());
}

Fixed Fixed::operator--(void)
{
	setRawBits(this->getRawBits() - 1);
	return Fixed(this->toFloat());
}

Fixed Fixed::operator++(int)
{
	float i = this->toFloat();
	setRawBits(this->getRawBits() + 1);
	return Fixed(i);
}

Fixed Fixed::operator--(int)
{
	int i = this->toFloat();
	setRawBits(this->getRawBits() - 1);
	return Fixed(i);
}

//-------------

Fixed& Fixed::max(Fixed& one, Fixed& two)
{
	if (one >= two)
		return (one);
	return (two);
}

Fixed& Fixed::min(Fixed& one, Fixed& two)
{
	if (one <= two)
		return (one);
	return (two);
}

const Fixed& Fixed::max(const Fixed& one, const Fixed& two)
{
	if (one >= two)
		return (one);
	return (two);
}

const Fixed& Fixed::min(const Fixed& one, const Fixed& two)
{
	if (one <= two)
		return (one);
	return (two);
}
