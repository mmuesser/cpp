/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:36:17 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/21 16:55:00 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : virtual public Animal
{
	public :
		Cat(void);
		Cat(std::string str);
		Cat(const Cat &obj);
		~Cat(void);

		Cat&	operator=(const Cat& obj);

		void	makeSound(void) const;

		Brain*	getBrain(void) const;

	private :
		Brain	*brain;
};

#endif