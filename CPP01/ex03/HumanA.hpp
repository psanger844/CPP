/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 18:06:40 by psanger           #+#    #+#             */
/*   Updated: 2024/09/05 18:14:52 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class HumanA
{
private:
	std::string _name;
	std::string _weapon;
public:
	HumanA();
	HumanA(std::string name, std::string weapon);
	~HumanA();
	void attack();
};


