/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:01:21 by psanger           #+#    #+#             */
/*   Updated: 2024/10/18 01:16:53 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_H__
#define __DOG_H__

#include "Animal.hpp"

class Dog : public Animal
{
private:
	const std::string _sound;
public:
	Dog();
	Dog(const Dog &other);
	Dog& operator=(const Dog &other);
	~Dog();
	void	makeSound() const;
};

#endif