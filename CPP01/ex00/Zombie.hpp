/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:14:45 by psanger           #+#    #+#             */
/*   Updated: 2024/09/03 20:49:49 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Zombie
{
private:
	std::string	name;
public:
	Zombie();
	Zombie( std::string name );
	~Zombie();
	void announce(void);
};
Zombie* newZombie( std::string name );
void randomChump( std::string name );
