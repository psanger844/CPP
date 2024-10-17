/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:14:03 by psanger           #+#    #+#             */
/*   Updated: 2024/10/01 20:39:42 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal* cat1 = new Cat();
	cat1->makeSound();
	Cat cat;
	cat.makeSound();
	delete cat1;


	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;


	const Animal* meta = new Animal();
	const Animal* i = new Cat();
	const Animal* j = new Dog();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	delete j;


	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;



	WrongCat wrongCat;
	std::cout << wrongCat.getType() << std::endl;
	wrongCat.makeSound();

	WrongAnimal wrongAnimal;
	std::cout << wrongAnimal.getType() << "test" << std::endl;
	wrongAnimal.makeSound();

	std::cout << std::endl;
	return 0;
}