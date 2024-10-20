/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 21:49:50 by psanger           #+#    #+#             */
/*   Updated: 2024/10/18 01:47:18 by psanger          ###   ########.fr       */
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
	virtual ~WrongAnimal();
	WrongAnimal(WrongAnimal &other);
	WrongAnimal operator=(WrongAnimal &other);
	void	setType(std::string _type);
	std::string getType() const;
	void	makeSound() const;
};


#endif // __WRONGANIMAL_H__