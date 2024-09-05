/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 16:46:10 by psanger           #+#    #+#             */
/*   Updated: 2024/08/13 16:23:18 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	// Fixed const a( 10 );
	// Fixed const b( 42.42f );
	// Fixed const c = a - b;
	// Fixed const d = a * b;
	// Fixed const e = b / a;
	// Fixed		f;


	// std::cout << std::endl << c << std::endl;
	// std::cout << std::endl << d << std::endl;
	// std::cout << std::endl << e << std::endl;


	// std::cout << std::endl << f << std::endl << std::endl;

	// std::cout << Fixed::min( a, b ) << std::endl << std::endl;

	// std::cout << f << std::endl;
	// std::cout << ++f << std::endl;
	// std::cout << f << std::endl;
	// // std::cout << f++ << std::endl;
	// std::cout << f << std::endl;

	// if (b > c)
	// 	std::cout << "\033[34mPasst!\033[0m\n";
	// if (b < c)
	// 	std::cout << "\033[34mPasstNicht!\033[0m\n";
	// return (0);

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}
