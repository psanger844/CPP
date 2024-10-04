/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 19:51:36 by psanger           #+#    #+#             */
/*   Updated: 2024/10/04 17:55:11 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap Jan("Jan");
	ClapTrap Steven("Steven");

	Jan.attack("Steven");
	Steven.takeDamage(2);
	Steven.attack("Jan");
	Jan.takeDamage(8);
	Steven.beRepaired(2);
	Jan.beRepaired(2);
	std::cout << "Oii, that is not enough\n";
	Steven.attack("Jan");
	Jan.takeDamage(8);
	return (0);
}
