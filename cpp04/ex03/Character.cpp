/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 14:58:34 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/09 17:35:30 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(void)
{
	std::cout<< "Character default constructor called"<<std::endl;
	this->_name = "NoName";
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = 0;
	}
}

Character::Character(std::string name)
{
	std::cout<< "Character name constructor called"<<std::endl;
	this->_name = name;
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = 0;
	}
}

Character::Character(const Character &obj)
{
	std::cout<< "Character copy constructor called"<<std::endl;
	this->_name = obj.getName();
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (obj._inventory[i])
			this->_inventory[i] = obj._inventory[i]->clone();
		else
			this->_inventory[i] = 0;
	}
}

Character::~Character(void)
{
	std::cout<< "Character destructor called"<<std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
}

Character&	Character::operator=(const Character &obj)
{
	this->_name = obj.getName();
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (obj._inventory[i])
			this->_inventory[i] = obj._inventory[i]->clone();
		else
			this->_inventory[i] = 0;
	}
	return (*this);
}

void	Character::equip(AMateria* m)
{
	int i;

	for(i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == 0)
		{
			this->_inventory[i] = m;
			return ;
		}
	}
	delete m;
	std::cout<< "Your inventory is full"<<std::endl;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cout<< "Wrong index"<<std::endl;
		return ;
	}
	this->_inventory[idx] = 0;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
	{
		std::cout<< "Wrong index"<<std::endl;
		return ;
	}
	if (this->_inventory[idx] != 0)
		this->_inventory[idx]->use(target);
}
std::string	const & Character::getName() const
{
	return (this->_name);
}
