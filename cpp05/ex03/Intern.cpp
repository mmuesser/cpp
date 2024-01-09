/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:04:41 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/09 21:04:48 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout<< "Intern default constructor called"<<std::endl;
}

Intern::Intern(const Intern &obj)
{
	(void) obj;
	std::cout<< "Intern copy constructor called"<<std::endl;
}

Intern::~Intern(void)
{
	std::cout<< "Intern destructor called"<<std::endl;
}

Intern&	Intern::operator=(const Intern &obj)
{
	(void) obj;
	return (*this);
}

AForm*	Intern::makeForm(std::string name, std::string target)
{
	/*Creer en private des make pour chaque form*/
	
	std::cout<< "This form does not exist"<<std::endl;
	return (NULL);
}