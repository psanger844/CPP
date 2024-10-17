/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:42:51 by psanger           #+#    #+#             */
/*   Updated: 2024/10/18 01:18:36 by psanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGCAT_H__
#define __WRONGCAT_H__

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
	const std::string _wrongSound;
public:
	WrongCat();
	WrongCat(const WrongCat &other);
	WrongCat& operator=(const WrongCat &other);
	~WrongCat();
	void	makeSound() const;
};


#endif