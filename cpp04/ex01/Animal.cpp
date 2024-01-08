/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:26:11 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/08 15:38:19 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout<< "Animal default constructor is called"<<std::endl;
	this->type = "Animal";
}

Animal::Animal(std::string str)
{
	std::cout<< "Animal constructor is called"<<std::endl;
	this->type = str;
}

Animal::Animal(const Animal &obj)
{
	std::cout<< "Animal copy constructor is called"<<std::endl;
	*this = obj;
}

Animal::~Animal(void)
{
	std::cout<< "Animal destructor is called"<<std::endl;
}

Animal&	Animal::operator=(const Animal& obj)
{
	this->type = obj.type;
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout<< "*some weird animal sound*"<<std::endl;
}

void	Animal::learning(std::string idea, int i)
{
	this->getBrain()->setIdeas(idea, i);
}

void	Animal::thinking(int i)
{
	std::cout<< this->getBrain()->getIdeas(i)<<std::endl;
}

Brain*	Animal::getBrain(void) const
{
	return (NULL);
}

std::string	Animal::getType(void) const {return (this->type);}
void		Animal::setType(std::string str) {this->type = str;}