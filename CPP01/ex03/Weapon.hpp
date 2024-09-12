/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 18:02:29 by psanger           #+#    #+#             */
/*   Updated: 2024/09/12 22:19:50 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Weapon
{
private:
	std::string _type;
public:
	Weapon();
	Weapon(std::string type);
	~Weapon();
	const std::string &getType();
	void setType(std::string type);
};

