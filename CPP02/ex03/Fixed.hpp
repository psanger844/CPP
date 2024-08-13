/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 16:46:51 by psanger           #+#    #+#             */
/*   Updated: 2024/08/13 16:40:14 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int 				fixedPointNum;
	static const int	fractionalBits = 8;
public:
	Fixed();
	Fixed(const int num_int);
	Fixed(const float num_float);

	Fixed(const Fixed& other);

	Fixed& operator=(const Fixed& other);
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;

	bool operator<(const Fixed& other) const;
	bool operator<=(const Fixed& other) const;
	bool operator>(const Fixed& other) const;
	bool operator>=(const Fixed& other) const;
	bool operator==(const Fixed& other) const;
	bool operator!=(const Fixed& other) const;

	Fixed operator+(const Fixed& other) const;
	Fixed operator-(const Fixed& other) const;
	Fixed operator*(const Fixed& other) const;
	Fixed operator/(const Fixed& other) const;

	Fixed operator++(void);
	Fixed operator++(int);
	Fixed operator--(void);
	Fixed operator--(int);

	static Fixed& max(Fixed& one, Fixed& two);
	static Fixed& min(Fixed& one, Fixed& two);
	static const Fixed& max(const Fixed& one, const Fixed& two);
	static const Fixed& min(const Fixed& one, const Fixed& two);
};

std::ostream & operator<<( std::ostream & o, Fixed const & i );
