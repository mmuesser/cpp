/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 17:54:20 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/07 14:56:10 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout<< "ScavTrap " << this->_name << " is created"<<std::endl;
	this->_hp = 100;
	this->_ep = 50;
	this->_atk = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout<< "ScavTrap " << this->_name << " is created"<<std::endl;
	this->_hp = 100;
	this->_ep = 50;
	this->_atk = 20;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj)
{
	std::cout<< "ScavTrap " << this->_name << " copy is created"<<std::endl;
	*this = obj;
	this->_hp = 100;
	this->_ep = 50;
	this->_atk = 20;
}

ScavTrap::~ScavTrap(void)
{
	std::cout<< "ScavTrap " << this->_name << " is destroyed"<<std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &obj)
{
	this->_name = obj._name;
	this->_hp = obj._hp;
	this->_ep = obj._ep;
	this->_atk = obj._atk;
	return (*this);
}

void	ScavTrap::attack(std::string target)
{
	if (this->getEp() > 0 && this->getHp() > 0)
	{
		std::cout<< "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_atk << " points of damage"<<std::endl;
		this->setEp(this->getEp() - 1);
	}
	else if (this->getEp() <= 0)
		std::cout<< "ScavTrap " << this->_name << " ep is not suffisant" <<std::endl;
	else
		std::cout<< "ScavTrap " << this->_name << " is dead" <<std::endl;
}

void	ScavTrap::guardGate()
{
	if (this->getHp() > 0)
		std::cout<< "ScavTrap " << this->_name << " is in Gate keeper mode" <<std::endl;
	else
		std::cout<< "ScavTrap " << this->_name << " is dead" <<std::endl;
}
