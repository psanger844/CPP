/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:16:29 by psanger           #+#    #+#             */
/*   Updated: 2024/09/03 20:55:55 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie pascal("pascal");
	Zombie *jan = newZombie("jan");
	pascal.announce();
	randomChump("Maxus");
	delete (jan);
}
