/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:48:35 by psanger           #+#    #+#             */
/*   Updated: 2024/08/15 16:50:33 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->hp = 100;
	this->ep = 50;
	this->dp = 20;
	std::cout << "Constructor : ScavTrap \"" << this->name << "\"\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor : ScavTrap \"" << this->name << "\"\n";
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	this->name = other.name;
	this->hp = other.hp;
	this->ep = other.ep;
	this->dp = other.dp;
	std::cout << "ScavTrap copy constructer called\n";
	return ;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
		this->name = other.name;
		this->hp = other.hp;
		this->ep = other.ep;
		this->dp = other.dp;
		std::cout << "ScavTrap copy assignment operator called\n";
	}
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->ep < 1) {
		std::cout << "ScavTrap " << this->name <<" is out of Energy\n";
		return ;
	}
	this->ep--;
	std::cout << target << " got hit by " << this->name << " he dealt " << this->dp  << " damage\n";
}

