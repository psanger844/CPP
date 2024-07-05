/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 02:00:24 by psanger           #+#    #+#             */
/*   Updated: 2024/07/05 02:00:26 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

contact::contact() {}
contact::~contact() {}


void contact::setFirstName(std::string first)
{
	this->first_name = first;
}
void contact::setLastName(std::string last)
{
	this->last_name = last;
}
void contact::setNickName(std::string nick)
{
	this->nick_name = nick;
}
void contact::setPhoneNumber(std::string num)
{
	this->phone_number = num;
}
void contact::setDarkSecret(std::string dark)
{
	this->dark_secret = dark;
}



std::string contact::getFirstName()
{
	return (this->first_name);
}
std::string contact::getLastName()
{
	return (this->last_name);
}
std::string contact::getNickName()
{
	return (this->nick_name);
}
std::string contact::getPhoneNumber()
{
	return (this->phone_number);
}
std::string contact::getDarkSecret()
{
	return (this->dark_secret);
}
