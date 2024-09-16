/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 21:49:50 by psanger           #+#    #+#             */
/*   Updated: 2024/09/12 21:52:06 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_H__
#define __WRONGANIMAL_H__

#include <iostream>

class WrongAnimal
{
protected:
	std::string _type;
public:
	WrongAnimal();
	~WrongAnimal();
	WrongAnimal(WrongAnimal &other);
	WrongAnimal operator=(WrongAnimal &other);
	void	makeSound();
};


#endif // __WRONGANIMAL_H__