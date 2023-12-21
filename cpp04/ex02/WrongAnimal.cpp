/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:15:55 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/17 19:04:56 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout<< "WrongAnimal default constructor called"<<std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(std::string str)
{
	std::cout<< "WrongAnimal constructor called"<<std::endl;
	this->type = str;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	std::cout<< "WrongAnimal copy constructor called"<<std::endl;
	*this = obj;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout<< "WrongAnimal destructor called"<<std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &obj)
{
	if (obj.type == "WrongCat")
		this->type = obj.type;
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout<< "*some weird wrong animal sound*"<<std::endl;
}

std::string	WrongAnimal::getType(void) const {return (this->type);}
void		WrongAnimal::setType(std::string str) {this->type = str;}