/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 19:57:59 by psanger           #+#    #+#             */
/*   Updated: 2024/10/17 22:49:12 by psanger          ###   ########.fr       */
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
	Animal(Animal &other);
	Animal &operator=(Animal &other);
	virtual ~Animal();
	virtual void	makeSound() const = 0; // = 0 makes it a Abstract class so no Objects of only Animal can be created.
	void	setType(std::string type);
	std::string getType() const;
};

#endif