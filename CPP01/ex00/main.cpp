/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:16:29 by psanger           #+#    #+#             */
/*   Updated: 2024/09/05 17:39:39 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv, char **envp)
{
	Zombie pascal("pascal");
	Zombie *jan = newZombie("jan");
	pascal.announce();
	randomChump("Maxus");
	delete (jan);
}
