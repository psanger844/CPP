/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:14:03 by psanger           #+#    #+#             */
/*   Updated: 2024/10/17 23:02:54 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal* hund = new Dog();
	Animal* katze = new Cat();

	hund->makeSound();
	katze->makeSound();

	delete hund;
	delete katze;


	std::cout << "\n\n--------------------\n\n";

	// // this should give an error, cant initiate or create a Object of the Abstract class Animal
	// Animal* tier = new Animal;
	// Animal* hund = new Dog() -> Animal pointer can still be used, because this pointer points to the klass of the Dog


	// test Dog copie constructor
	Dog* test = new Dog();
	Dog* cp_test = new Dog(*test);

	cp_test->makeSound();

	delete test;
	delete cp_test;
	return 0;
}