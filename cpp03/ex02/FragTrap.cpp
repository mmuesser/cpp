/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:52:41 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/16 17:55:32 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout<< "FragTrap " << this->_name << " is created"<<std::endl;
	this->_ep = 100;
	this->_atk = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout<< "FragTrap " << this->_name << " is created"<<std::endl;
	this->_ep = 100;
	this->_atk = 30;
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj)
{
	*this = obj;
	this->_ep = 100;
	this->_atk = 30;
	std::cout<< "FragTrap " << this->_name << " copy is created"<<std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout<< "FragTrap " << this->_name << " is destroyed"<<std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap &obj)
{
	this->_name = obj._name;
	this->_hp = obj._hp;
	this->_ep = obj._ep;
	this->_atk = obj._atk;
	return (*this);
}

void	FragTrap::attack(const std::string& target)
{
	if (this->getEp() > 0 && this->getHp() > 0)
	{
		std::cout<< "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_atk << " points of damage"<<std::endl;
		this->setEp(this->getEp() - 1);
	}
	else
		std::cout<< "FragTrap " << this->_name << " ep is not suffisant" <<std::endl;
}

void 	FragTrap::highFivesGuys(void)
{
	std::string str;
	std::cout<< "FragTrap " << this->_name << " is waiting for a highfive !"<<std::endl;
	do {
		std::cout<< "Give him one (*CLAP*)"<<std::endl;
		getline(std::cin, str);
		if (std::cin.eof())
            return ;
	} while (str.empty() || str != "*CLAP*");
	std::cout<< "YEAHHH !"<<std::endl;
}