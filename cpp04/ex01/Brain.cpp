/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 19:38:07 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/17 19:46:30 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout<< "Brain default constructor called"<<std::endl;
	this->_ideas = new std::string[100];
}

Brain::Brain(const Brain &obj)
{
	std::cout<< "Brain copy constructor called"<<std::endl;
	*this = obj;
}

Brain::~Brain(void)
{
	std::cout<< "Brain destructor called"<<std::endl;
}

Brain&	Brain::operator=(const Brain &obj)
{
	if (!this->_ideas)
		this->_ideas = new std::string[100];
	for (int i = 0; i < 100; i++){
		this->_ideas[i] = obj._ideas[i];
	}
	return (*this);
}