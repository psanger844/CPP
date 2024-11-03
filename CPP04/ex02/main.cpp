/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:14:03 by psanger           #+#    #+#             */
/*   Updated: 2024/11/02 17:30:07 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	const Animal* cat = new Cat();


	std::cout << cat->getType() << std::endl;
	cat->makeSound();
	// cat->set_ideas(0, 50, "HelloWorld");
	// cat->printIdears();
	delete cat;

	// std::cout << "\n---------------------\n" << std::endl;

	// Dog basic;
	// Dog tmp = basic;
	// basic.makeSound();
	// basic.set_ideas(0, 50, "HelloWorld");
	// basic.printIdears();
	// tmp.makeSound();
	// tmp.printIdears();
	// return 0;

	// Animal test;
}