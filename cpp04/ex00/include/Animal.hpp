/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:23:26 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/16 18:53:02 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class	Animal
{
	public :
		Animal(void);
		Animal(const Animal &obj);
		~Animal(void);

		Animal&	operator=(const Animal &obj);

		void	makeSound(void);

		std::string	getType(void) const;
		void		setType(std::string str);

	protected :
		std::string type;
}

#endif