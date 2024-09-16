/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:14:03 by psanger           #+#    #+#             */
/*   Updated: 2024/09/12 21:47:36 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

int main()
{
	Animal* meta = new Animal();
	Animal* cat = new Cat();

	std::cout << cat->getType() << std::endl;
	cat->makeSound();

	delete cat;
	delete meta;
	return (0);
}