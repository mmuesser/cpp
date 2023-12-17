/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:23:14 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/17 19:04:40 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class	WrongAnimal
{
	public :
		WrongAnimal(void);
		WrongAnimal(std::string str);
		WrongAnimal(const WrongAnimal &obj);
		virtual ~WrongAnimal(void);

		WrongAnimal&	operator=(const WrongAnimal &obj);

		void	makeSound(void) const;

		std::string	getType(void) const;
		void		setType(std::string str);

	protected :
		std::string type;
};

#endif