/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 21:02:12 by psanger           #+#    #+#             */
/*   Updated: 2024/10/01 22:19:43 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_H__
#define __BRAIN_H__

#include <iostream>

class Brain
{
private:
	std::string _ideas[100];
public:
	Brain(/* args */);
	~Brain();
	Brain(Brain &other);
	Brain operator=(Brain &other);
	void setBrain(std::string info);
	std::string getBrain( void );
};

#endif // __BRAIN_H__