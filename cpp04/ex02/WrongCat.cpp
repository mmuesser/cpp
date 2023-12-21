/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:27:38 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/17 19:06:03 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	std::cout<< "WrongCat default constructor called"<<std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal(obj)
{
	std::cout<< "WrongCat copy constructor called"<<std::endl;
	this->type = "WrongCat";
}

WrongCat::~WrongCat(void)
{
	std::cout<< "WrongCat destructor called"<<std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat &obj)
{
	if (obj.type == "WrongCat")
		*this = obj;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout<< "Wrong meoooow !"<<std::endl;
}