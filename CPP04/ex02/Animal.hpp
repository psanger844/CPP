/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 19:57:59 by psanger           #+#    #+#             */
/*   Updated: 2024/11/02 17:22:35 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#pragma once
#include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(Animal const &other);
	Animal & operator=(Animal const &other);
	virtual ~Animal();

	virtual void printIdears() const;
	virtual void set_ideas(int start, int end, std::string input) const;

	void	setType(std::string type);
	std::string getType() const;
	virtual void	makeSound() const = 0;
};

#endif