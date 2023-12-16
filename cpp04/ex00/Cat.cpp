/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:40:37 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/16 18:46:29 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal(void)
{
	std::cout<< "Cat default constructor is called"<<std::endl;
}

Cat::Cat(const Cat &obj) : Animal(obj)
{
	std::cout<< "Cat copy constructor is called"<<std::endl;
	*this = obj;
}

Cat::~Cat(void)
{
	std::cout<< "Cat destructor is called"<<std::endl;
}

Cat&	Cat::operator=(const Cat &obj)
{

	return (*this);
}