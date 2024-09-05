/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 19:00:11 by psanger           #+#    #+#             */
/*   Updated: 2024/09/05 17:58:24 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN!";
	std::string *str1 = &str;
	std::string &str2 = str;

	std::cout << &str << std::endl;
	std::cout << str1 << std::endl;
	std::cout << &str2 << std::endl;

	std::cout << str << std::endl;
	std::cout << *str1 << std::endl;
	std::cout << str2 << std::endl;
}
