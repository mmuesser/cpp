/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:26:11 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/17 17:53:25 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout<< "Animal default constructor is called"<<std::endl;
	this->type = "Animal";
}

Animal::Animal(std::string str)
{
	std::cout<< "Animal constructor is called"<<std::endl;
	this->type = str;
}

Animal::Animal(const Animal &obj)
{
	std::cout<< "Animal copy constructor is called"<<std::endl;
	*this = obj;
}

Animal::~Animal(void)
{
	std::cout<< "Animal destructor is called"<<std::endl;
}

Animal&	Animal::operator=(const Animal& obj)
{
	if ((this->type == "Cat" && obj.type == "Cat")
		|| (this->type == "Dog" && obj.type == "Dog"))
		this->type = obj.type;
	else
		std::cout<< "Both are not the same animal"<<std::endl;
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout<< "*some weird animal sound*"<<std::endl;
}

std::string	Animal::getType(void) const {return (this->type);}
void		Animal::setType(std::string str) {this->type = str;}