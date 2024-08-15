/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 19:51:36 by psanger           #+#    #+#             */
/*   Updated: 2024/08/14 19:03:00 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ClapTrap Jan("Jan");
	ClapTrap Steven("Steven");
	ScavTrap Pasi("Pasi");
	ScavTrap test=Pasi;


	Pasi.attack("abc");
	Jan.attack("Steven");
	test.attack("abc");
	// Steven.takeDamage(2);
	// Steven.attack("Jan");
	// Jan.takeDamage(8);
	// Steven.beRepaired(2);
	// Jan.beRepaired(2);
	// std::cout << "Oii, that is not enough\n";
	// Steven.attack("Jan");
	// Jan.takeDamage(8);
	return (0);
}
