/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:01:38 by psanger           #+#    #+#             */
/*   Updated: 2024/09/23 20:31:39 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_H__
#define __CAT_H__
#include "Animal.hpp"

class Cat : public Animal
{
private:
	const std::string _sound;
public:
	Cat();
	Cat(Cat &other);
	Cat operator= (Cat &other);
	~Cat();
	void	makeSound() const;
};


#endif