/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 19:19:23 by psanger           #+#    #+#             */
/*   Updated: 2024/10/04 18:04:31 by psanger          ###   ########.fr       */
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

ClapTrap::ClapTrap(const ClapTrap& other)
{
	*this = other;
	std::cout << "ClapTrap Copy constructer called\n";
	return ;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	this->name = other.name;
	this->hp = other.hp;
	this->ep = other.ep;
	this->dp = other.dp;
	std::cout << "Copy assignment operator called\n";
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->ep < 1) {
		std::cout << "No more energy left, sorry" << this->name <<", you gonna die now\n";
		return ;
	}
	this->ep--;
	std::cout << target << " got attacked by  " << this->name << " with " << this->dp  << " damage \n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hp < 1) {
		std::cout << this->name << "is dead\n";
		return ;
	}
	if (this->ep < 1) {
		std::cout << "No more energy left\n";
		return ;
	}
	this->ep--;
	if (amount > UINT_MAX - this->hp)
		this->hp = UINT_MAX;
	else
		this->hp += amount;
	std::cout << this->name << " Healing..........\n";
	std::cout << this->name << " heals " << amount << " hit points\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > (unsigned)this->hp)
	{
		this->hp = 0;
		std::cout << this->name << " got hit by a big swing to the head... he died\n";
		return ;
	}
	this->hp -= amount;
	std::cout << this->name << " got hit, -" << amount << " Hit Points, " << this->hp << " hp left\n";
}
