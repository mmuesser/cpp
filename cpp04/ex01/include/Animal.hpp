/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:23:26 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/17 18:59:09 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class	Animal
{
	public :
		Animal(void);
		Animal(std::string str);
		Animal(const Animal &obj);
		virtual ~Animal(void);

		Animal&	operator=(const Animal &obj);

		virtual void	makeSound(void) const;

		std::string	getType(void) const;
		void		setType(std::string str);

	protected :
		std::string type;
};

#endif