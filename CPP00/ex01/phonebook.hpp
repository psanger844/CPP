/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 01:12:17 by psanger           #+#    #+#             */
/*   Updated: 2024/07/05 01:52:17 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdlib.h>
#include "contact.hpp"

class phonebook
{
private:
	int 	index;
	contact	contacts[8];
public:
	phonebook(/* args */);
	~phonebook();

	void addContact();
	void searchContact();
	void exitPhonebook();
};



