/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:19:06 by psanger           #+#    #+#             */
/*   Updated: 2024/09/03 20:57:14 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name)
{
	this->name = name;
	std::cout << "Zombie " << this->name << " got created\n";
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->name << " got destroyed\n";
}

void Zombie::announce(void)
{
	std::cout << this->name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}
