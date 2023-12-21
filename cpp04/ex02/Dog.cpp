/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 15:08:25 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/21 17:01:21 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout<< "Dog default constructor is called"<<std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(std::string str) : Animal(str)
{
	std::cout<< "Dog constructor is called"<<std::endl;
}

Dog::Dog(const Dog &obj) : Animal(obj)
{
	std::cout<< "Dog copy constructor is called"<<std::endl;
	*this = obj;
}

Dog::~Dog(void)
{
	std::cout<< "Dog destructor is called"<<std::endl;
	delete brain;
}

Dog&	Dog::operator=(const Dog &obj)
{
	Animal::operator=(obj);
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout<< "Waf Waf !"<<std::endl;
}

Brain*	Dog::getBrain(void) const
{
	return (this->brain);
}