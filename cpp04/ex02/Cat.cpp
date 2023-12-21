/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:40:37 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/21 17:01:10 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	std::cout<< "Cat default constructor is called"<<std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(std::string str) : Animal(str)
{
	std::cout<< "Cat constructor is called"<<std::endl;
}

Cat::Cat(const Cat &obj) : Animal(obj)
{
	std::cout<< "Cat copy constructor is called"<<std::endl;
	*this = obj;
}

Cat::~Cat(void)
{
	std::cout<< "Cat destructor is called"<<std::endl;
	delete brain;
}

Cat&	Cat::operator=(const Cat &obj)
{
	Animal::operator=(obj);
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout<< "Meoooow !"<<std::endl;
}

Brain*	Cat::getBrain(void) const
{
	return (this->brain);
}