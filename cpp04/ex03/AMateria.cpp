/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 15:12:04 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/06 16:35:25 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout<< "AMateria default constructor called"<<std::endl;
}

AMateria::AMateria(const AMateria &obj)
{
	std::cout<< "AMateria copy constructor called"<<std::endl;
	*this = obj;
}

AMateria::~AMateria(void)
{
	std::cout<< "AMateria destructor called"<<std::endl;
}

AMateria&	AMateria::operator=(const AMateria &obj)
{
	(void) obj;
	return (*this);
}

std::string	const & AMateria::getType() const
{
	return (this->type);
}

void	AMateria::use(ICharacter& target)
{
	(void) target;
	std::cout<< "But nothing happened..."<<std::endl;
}