/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 19:19:23 by psanger           #+#    #+#             */
/*   Updated: 2024/08/13 19:51:32 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name)
{
	this->name = name;
	this->hp = 10;
	this->ep = 10;
	this->dp = 0;
	std::cout << "Constructor : ClapTrap \"" << this->name << "\"\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor : ClapTrap \"" << this->name << "\"\n";
}

void ClapTrap::attack(const std::string& target)
{
	if (this->ep < 1) {
		std::cout << "No more energy left, sorry" << this->name <<", you gonna die now\n";
		return ;
	}
	this->ep--;
	std::cout << target << " got attacked by" << this->name << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hp < 1) {
		std::cout << this->name << "is dead\n";
	}
	if (this->ep < 1) {
		std::cout << "No more energy left, you gotta kill your enemy before he kills you\n";
		return ;
	}
	this->ep--;
	this->hp += amount;
	std::cout << this->name << "heals " << amount << "hit points\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > this->hp)
	{
		this->hp = 0;
		std::cout << this->name << " got hit by a big swing to the head... he died\n";
	}
	this->hp -= amount;
	std::cout << this->name << " got hit, -" << amount << "Hit Points left\n";
}
