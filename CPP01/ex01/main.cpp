/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 21:53:11 by psanger           #+#    #+#             */
/*   Updated: 2024/09/03 22:13:02 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int num = 5;
	Zombie pascal("pascal");
	pascal.announce();
	Zombie *testZombieHorde = zombieHorde(5, "testZombieHorde");
	for (int i = 0; i < num; i++)
	{
		testZombieHorde[i].announce();
	}
	delete [] (testZombieHorde);
}
