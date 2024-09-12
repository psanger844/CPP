/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 18:46:02 by psanger           #+#    #+#             */
/*   Updated: 2024/09/12 22:21:02 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{

}

Weapon::Weapon(std::string type)
{
	this->setType(type);
}

Weapon::~Weapon()
{

}

const std::string& Weapon::getType()
{
	return (this->_type);
}

void Weapon::setType(std::string type)
{
	this->_type = type;
	std::cout << this->_type << std::endl;
}
