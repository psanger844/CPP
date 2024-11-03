/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:01:21 by psanger           #+#    #+#             */
/*   Updated: 2024/11/02 17:15:00 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __Dog_H__
#define __Dog_H__
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *brain;
public:
	Dog();
	Dog(Dog &other);
	Dog & operator=(Dog &other);
	~Dog();

	void makeSound() const;
	void printIdears() const;
	void set_ideas(int start, int end, std::string input) const;
};


#endif