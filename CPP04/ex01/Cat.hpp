/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:01:38 by psanger           #+#    #+#             */
/*   Updated: 2024/10/01 22:20:03 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_H__
#define __CAT_H__
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	const std::string _sound;
	Brain *brain;
public:
	Cat();
	Cat(Cat &other);
	Cat operator= (Cat &other);
	~Cat();
	void	makeSound() const;
	void setCatsBrain(std::string info);
	std::string getCatsBrain( void );
};


#endif