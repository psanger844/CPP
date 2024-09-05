/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 18:06:40 by psanger           #+#    #+#             */
/*   Updated: 2024/09/05 20:06:34 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Weapon.hpp"

class Weapon;

class HumanA
{
private:
	std::string _name;
	Weapon &_weapon;
public:
	// HumanA();
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void attack();
};


