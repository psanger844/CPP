/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 19:51:36 by psanger           #+#    #+#             */
/*   Updated: 2024/08/15 16:58:25 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap Jan("Jan");
	ClapTrap Steven("Steven");
	ScavTrap Pasi("Pasi");
	ScavTrap test=Pasi;
	FragTrap Frag("Frag");

	Frag.highFivesGuys();
	Frag.attack("test");
	Frag.beRepaired(2);
	Pasi.attack("abc");
	Jan.attack("Steven");
	test.attack("abc");
	Jan.beRepaired(2);

	return (0);
}
