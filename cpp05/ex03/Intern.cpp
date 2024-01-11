/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:04:41 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/11 15:43:13 by mmuesser         ###   ########.fr       */
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
	AForm* (Intern::*ptr[3])(std::string) = {&Intern::make_SCForm, &Intern::make_RRForm, &Intern::make_PPForm};
	std::string tab[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int i = -1;
	
	while (++i < 3)
	{
		if (name.compare(tab[i]) == 0)
		{
			switch(i)
			{
				case 0: return ((this->*ptr[i])(target));
				case 1: return ((this->*ptr[i])(target));
				case 2: return ((this->*ptr[i])(target));
			}
		}
	}
	std::cout<< "This form does not exist"<<std::endl;
	return (NULL);
}

AForm*	Intern::make_SCForm(std::string target)
{
	ShrubberyCreationForm	*new_sc = new ShrubberyCreationForm(target);
	return (new_sc);
}

AForm*	Intern::make_RRForm(std::string target)
{
	RobotomyRequestForm *new_rr = new RobotomyRequestForm(target);
	return (new_rr);
}

AForm*	Intern::make_PPForm(std::string target)
{
	PresidentialPardonForm *new_pp = new PresidentialPardonForm(target);
	return (new_pp);
}