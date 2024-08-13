/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 16:46:10 by psanger           #+#    #+#             */
/*   Updated: 2024/08/13 16:41:48 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

bool isPointInTriangle(Fixed const a_x, Fixed const b_x, Fixed const c_x, Fixed const p_x, Fixed const a_y, Fixed const b_y, Fixed const c_y, Fixed const p_y)
{
	Fixed		denominator;
	Fixed		alpha;
	Fixed		beta;
	Fixed		gamma;
	Fixed const one(1.0f);

	denominator = ((b_y - c_y) * (a_x - c_x) + (c_x - b_x) * (a_y - c_y));
	alpha = ((b_y - c_y) * (p_x - c_x) + (c_x - b_x) * (p_y - c_y))
		/ denominator;
	beta = ((c_y - a_y) * (p_x - c_x) + (a_x - c_x) * (p_y - c_y))
		/ denominator;
	gamma = one - alpha - beta;
	return ((alpha > 0) && (beta > 0) && (gamma > 0));
}

int main( void )
{
	Fixed const a_x(0);
	Fixed const a_y(0);
	Fixed const b_x(5);
	Fixed const b_y(0);
	Fixed const c_x(0);
	Fixed const c_y(5);

	Fixed const p_x(3);
	Fixed const p_y(3);

	if (isPointInTriangle(a_x, b_x, c_x, p_x, a_y, b_y, c_y, p_y) == true)
		std::cout << std::endl << "\033[34mPoint is in the Triangele\033[0m\n" << std::endl;
	else
		std::cout << std::endl << "\033[31mPoint is NOT in the Triangele\033[0m\n";
	return (0);
}
