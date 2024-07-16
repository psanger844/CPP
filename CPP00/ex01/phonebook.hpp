/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 01:12:17 by psanger           #+#    #+#             */
/*   Updated: 2024/07/16 16:57:35 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdlib.h>
#include <cctype>
#include <iomanip>

#include "contact.hpp"

class phonebook
{
private:
	int 	index;
	contact	contacts[8];
public:
	phonebook();
	~phonebook();

	int	addContact();
	int searchContact();
};



