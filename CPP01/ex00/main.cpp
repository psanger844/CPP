/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:16:29 by psanger           #+#    #+#             */
/*   Updated: 2024/09/12 22:05:40 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie pascal("pascal");
	pascal.announce();


	Zombie *jan = newZombie("jan");
	jan->announce();

	randomChump("Maxus");
	delete (jan);
}
