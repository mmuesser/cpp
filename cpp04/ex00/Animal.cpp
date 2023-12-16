/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:26:11 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/16 18:53:53 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout<< "Animal default constructor is called"<<std::endl;
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
	return (*this);
}

void	makeSound(void)
{
	if (this->type == "Dog")
		std::cout<< "Waf Waf !"<<std::endl;
	else if (this->type == "Cat")
		std::cout<< "Meoooow !"<<std::endl;
}

std::string	getType(void) const {return (this->type);}
void		setType(std::string str) {this->type = str;}