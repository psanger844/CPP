/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:01:38 by psanger           #+#    #+#             */
/*   Updated: 2024/11/02 17:15:36 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_H__
#define __CAT_H__
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *brain;
public:
	Cat();
	Cat(Cat &other);
	Cat & operator= (Cat &other);
	~Cat();

	void	makeSound() const;
	void printIdears() const;
	void set_ideas(int start, int end, std::string input) const;
};


#endif