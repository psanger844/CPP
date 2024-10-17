/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:14:03 by psanger           #+#    #+#             */
/*   Updated: 2024/10/02 22:00:00 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	Cat jan;
	jan.setCatsBrain("TEST");
	std::cout << jan.getCatsBrain() << std::endl << std::endl;
	Cat j;
	j = jan;
	Cat i(jan);
	std::cout << std::endl << std::endl;

	std::cout << jan.getCatsBrain() << std::endl;
	std::cout << i.getCatsBrain() << std::endl;
	std::cout << j.getCatsBrain() << std::endl;


	jan.setCatsBrain("11");
	i.setCatsBrain("22");
	j.setCatsBrain("33");

	std::cout << jan.getCatsBrain() << std::endl;
	std::cout << i.getCatsBrain() << std::endl;
	std::cout << j.getCatsBrain() << std::endl;

	std::cout << std::endl << std::endl;

	Dog test;
	Dog hallo(test);
	Dog grr = hallo;

	

	std::cout << std::endl << std::endl;
	return 0;
}