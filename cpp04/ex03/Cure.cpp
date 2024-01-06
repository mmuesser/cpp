/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:40:48 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/06 16:28:42 by mmuesser         ###   ########.fr       */
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
	(void) obj;
	return (*this);
}

AMateria*	Cure::clone() const
{
	Cure *new_cure = new Cure();
	return (new_cure);
}

void	Cure::use(ICharacter &target)
{
	std::cout<< "* heals " << target.getName() << "'s wounds *"<<std::endl;
}