/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 01:14:34 by psanger           #+#    #+#             */
/*   Updated: 2024/07/05 01:22:46 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class contact
{
private:
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string dark_secret;
public:
	contact(/* args */);
	~contact();

	void setFirstName(std::string first);
	void setLastName(std::string last);
	void setNickName(std::string nick);
	void setPhoneNumber(std::string num);
	void setDarkSecret(std::string dark);

	std::string getFirstName();
	std::string getLastName();
	std::string getNickName();
	std::string getPhoneNumber();
	std::string getDarkSecret();
};
