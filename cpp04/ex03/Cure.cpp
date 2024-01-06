/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:40:48 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/06 13:10:38 by mmuesser         ###   ########.fr       */
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

Cure*	Cure::clone()
{
	Cure *new_cure = new Cure();
	return (new_cure);
}

void	Cure::cure_wounds(std::string name)
{
	std::cout<< "* heals " << name << "'s wounds *"<<std::endl;
}