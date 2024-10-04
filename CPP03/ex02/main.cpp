/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 19:51:36 by psanger           #+#    #+#             */
/*   Updated: 2024/10/04 18:22:21 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap Jan("Jan");
	ClapTrap Steven("Steven");
	ScavTrap Pasi("Pasi");
	ScavTrap test("test");

	test = Pasi;

	FragTrap Frag("Hallo");

	Frag.highFivesGuys();
	Frag.attack("test");
	Frag.beRepaired(2);
	Pasi.attack("abc");
	Jan.attack("Steven");
	test.attack("abc");
	Jan.beRepaired(2);

	return (0);
}
