/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 15:16:50 by psanger           #+#    #+#             */
/*   Updated: 2024/08/09 15:29:06 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl harl;

	std::cout << "[DEBUG]\n";

	harl.complain("INFO");

	harl.complain("WARNING");

	harl.complain("ERROR");

	harl.complain("TEST");
	
	return (0);
}
