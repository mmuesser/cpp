/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:36:02 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/16 17:58:56 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Default"), _hp(100), _ep(10), _atk(0)
{
	std::cout<< "ClapTrap " << this->_name << " is created"<<std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hp = 10;
	this->_ep = 10;
	this->_atk = 0;
	std::cout<< "ClapTrap " << this->_name << " is created"<<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	*this = obj;
	std::cout<< "ClapTrap " << this->_name << " copy is created"<<std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout<< "ClapTrap " << this->_name << " is destroyed"<<std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &obj)
{
	this->setName(obj.getName());
	this->setHp(obj.getHp());
	this->setEp(obj.getEp());
	this->setAtk(obj.getAtk());
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->getEp() > 0 && this->getHp() > 0)
	{
		std::cout<< "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_atk << " points of damage"<<std::endl;
		this->setEp(this->getEp() - 1);
	}
	else
		std::cout<< "ClapTrap " << this->_name << " ep is not suffisant" <<std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout<< "ClapTrap " << this->_name << " loose " << amount << " hp"<<std::endl;
	this->setHp(this->getHp() - amount);
	if (this->getHp() < 0)
	{
		std::cout<< "ClapTrap " << this->_name << " is dead"<<std::endl;
		this->setHp(0);
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getEp() > 0 && this->getHp() > 0)
	{
		std::cout<< "ClapTrap " << this->_name << " repair " << amount << " hp"<<std::endl;
		this->setHp(this->getHp() + amount);
		this->setEp(this->getEp() - 1);
	}
	else
		std::cout<< "ClapTrap " << this->_name << " ep or hp is not suffisant" <<std::endl;
}


std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}
void		ClapTrap::setName(std::string name)
{
	this->_name = name;
}
int			ClapTrap::getHp(void) const
{
	return (this->_hp);
}
void		ClapTrap::setHp(int hp)
{
	this->_hp = hp;
}
int			ClapTrap::getEp(void) const
{
	return (this->_ep);
}
void		ClapTrap::setEp(int ep)
{
	this->_ep = ep;
}
int			ClapTrap::getAtk(void) const
{
	return (this->_atk);
}
void		ClapTrap::setAtk(int atk)
{
	this->_atk = atk;
}