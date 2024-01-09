/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 18:53:47 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/09 17:41:55 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("fp", 25, 5), _target("SCF_default")
{
	std::cout<< "PresidentialPardonForm default constructor called"<<std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("fp", 25, 5), _target(target)
{
	std::cout<< "PresidentialPardonForm target constructor called"<<std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : AForm(obj.getName(), obj.getSignGrade(), obj.getExecGrade()), _target(obj.getTarget())
{
	std::cout<< "PresidentialPardonForm copy constructor called"<<std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout<< "PresidentialPardonForm destructor called"<<std::endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
	if (this != &obj)
		*this = obj;
	return (*this);
}

void	PresidentialPardonForm::form_exec(void) const
{
	std::cout<< "We inform you that " << this->getTarget() << " has been pardoned by Zaphod Beeblebrox"<<std::endl;
}

const std::string	PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}