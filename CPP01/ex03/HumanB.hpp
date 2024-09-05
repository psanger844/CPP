/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 18:08:22 by psanger           #+#    #+#             */
/*   Updated: 2024/09/05 18:42:51 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class HumanB
{
private:
	std::string _name;
	std::string _weapon;
public:
	HumanB();
	HumanB(std::string name);
	~HumanB();
	void attack();
};



