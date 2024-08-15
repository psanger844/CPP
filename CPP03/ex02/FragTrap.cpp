/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:43:44 by psanger           #+#    #+#             */
/*   Updated: 2024/08/15 16:52:03 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->hp = 100;
	this->ep = 100;
	this->dp = 30;
	std::cout << "Constructor : FragTrap \"" << this->name << "\"\n";
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor : FragTrap \"" << this->name << "\"\n";
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	this->name = other.name;
	this->hp = other.hp;
	this->ep = other.ep;
	this->dp = other.dp;
	std::cout << "FragTrap copy constructer called\n";
	return ;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
		this->name = other.name;
		this->hp = other.hp;
		this->ep = other.ep;
		this->dp = other.dp;
		std::cout << "FragTrap copy assignment operator called\n";
	}
	return (*this);
}

void FragTrap::highFivesGuys()
{
	std::cout << "Nice, give me a high five bro\n";
}

