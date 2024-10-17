/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 19:57:59 by psanger           #+#    #+#             */
/*   Updated: 2024/10/18 01:15:45 by psanger          ###   ########.fr       */
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
	Animal(const Animal &other);
	Animal& operator=(const Animal &other);
	virtual ~Animal();
	void	setType(std::string type);
	std::string getType() const;
	virtual void	makeSound() const;
};

#endif