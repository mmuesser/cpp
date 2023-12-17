/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:57:14 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/17 18:58:24 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class	Dog : virtual public Animal
{
	public :
		Dog(void);
		Dog(std::string str);
		Dog(const Dog &obj);
		~Dog(void);

		Dog&	operator=(const Dog &obj);

		void	makeSound(void) const;

	private :

};

#endif