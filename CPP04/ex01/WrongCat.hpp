/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanger <psanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:42:51 by psanger           #+#    #+#             */
/*   Updated: 2024/09/23 20:41:38 by psanger          ###   ########.fr       */
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
	WrongCat(WrongCat &other);
	WrongCat operator= (WrongCat &other);
	~WrongCat();
	void	makeSound() const;
};


#endif // __WRONGCAT_H__