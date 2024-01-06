/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:40:48 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/06 12:32:05 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria()
{
	std::cout<< "Cure default constructor called"<<std::endl;
	this->type = "cure";
	
}

Cure::Cure(const Cure &obj) : AMateria(obj)
{
	std::cout<< "Cure copy constructor called"<<std::endl;
	this->type = "cure";
}

Cure::~Cure(void)
{
	std::cout<< "Cure destructor called"<<std::endl;
}

Cure&	Cure::operator=(const Cure &obj)
{
	*this = obj;
	return (*this);
}