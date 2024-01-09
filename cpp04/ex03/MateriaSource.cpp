/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 15:46:00 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/09 17:34:49 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout<< "MateriaSource default constructor called"<<std::endl;
	for (int i = 0; i < 4; i++)
	{
		this->_storage[i] = 0;
	}
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
	std::cout<< "MateriaSource copy constructor called"<<std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_storage[i])
			delete this->_storage[i];
		if (obj._storage[i])
			this->_storage[i] = obj._storage[i]->clone();
		else
			this->_storage[i] = 0;
	}
}

MateriaSource::~MateriaSource(void)
{
	std::cout<< "MateriaSource destructor called"<<std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_storage[i])
			delete this->_storage[i];
	}
}

MateriaSource&	MateriaSource::operator=(const MateriaSource &obj)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_storage[i])
			delete this->_storage[i];
		if (obj._storage[i])
			this->_storage[i] = obj._storage[i]->clone();
		else
			this->_storage[i] = 0;
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_storage[i] == 0)
		{
			this->_storage[i] = m;
			return ;
		}
	}
	delete m;
	std::cout<< "The storage is full"<<std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_storage[i] != 0 && this->_storage[i]->getType().compare(type) == 0)
			return (this->_storage[i]->clone());
	}
	std::cout<< "Sorry, I don't know this type"<<std::endl;
	return (NULL);
}