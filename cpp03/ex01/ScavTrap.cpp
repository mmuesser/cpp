/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 17:54:20 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/15 19:21:06 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_ep = 50;
	this->_atk = 20;
	std::cout<< "ScavTrap " << this->_name << " is created"<<std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj)
{
	*this = obj;
	std::cout<< "ScavTrap " << this->_name << " copy is created"<<std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout<< "ScavTrap " << this->_name << " is destroyed"<<std::endl;
}

