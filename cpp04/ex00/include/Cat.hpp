/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:36:17 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/16 18:58:12 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class	Cat : public Animal
{
	public :
		Cat(void);
		Cat(const Cat &obj);
		~Cat(void);

		Cat&	operator=(const Cat& obj);

	private :

}

#endif