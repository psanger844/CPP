/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 18:14:30 by psanger           #+#    #+#             */
/*   Updated: 2024/08/07 18:19:49 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl harl;
	std::cout << "[DEBUG]\n";
	harl.complain("DEBUG");
	std::cout << "\n";

	std::cout << "[INFO]\n";
	harl.complain("INFO");
	std::cout << "\n";

	std::cout << "[Warning]\n";
	harl.complain("WARNING");
	std::cout << "\n";

	std::cout << "[ERROR]\n";
	harl.complain("ERROR");
	std::cout << "\n";

	std::cout << "[TEST]\n";
	harl.complain("TEST");
	std::cout << "\n";
	return (0);
}
