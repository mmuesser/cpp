/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:21:45 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/02 16:32:34 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria()
{
	std::cout<< "Ice default constructor called"<<std::endl;
	this->type = "ice";
}

Ice::Ice(const Ice &obj) : AMateria(obj)
{
	std::cout<< "Ice copy constructor called"<<std::endl;
	this->type = "ice";
}

Ice::~Ice(void)
{
	std::cout<< "Ice destructor called"<<std::endl;
}

Ice&	Ice::operator=(const Ice &obj)
{
	*this = obj;
	return (*this);
}

Ice*	Ice::clone()
{
	Ice *new_ice = new Ice();
	return (new_ice);
}