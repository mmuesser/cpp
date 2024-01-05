/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 15:12:04 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/02 16:27:57 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia.hpp"

AMateria::AMateria(void)
{
	std::cout<< "Materia default constructor called"<<std::endl;
}

AMateria::AMateria(const AMateria &obj)
{
	std::cout<< "Materia copy constructor called"<<std::endl;
	*this = obj;
}

AMateria::AMateria(std::string const &type)
{

}

AMateria::~AMateria(void)
{
	std::cout<< "Materia destructor called"<<std::endl;
}

AMateria&	AMateria::operator=(const AMateria &obj)
{
	*this = obj;
	return (*this);
}

std::string	const & getType() const
{
	return (this->type);
}