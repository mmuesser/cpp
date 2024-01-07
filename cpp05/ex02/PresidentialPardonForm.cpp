/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 18:53:47 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/07 18:54:21 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm(), _target("SCF_default"), _sign(false), _sign_grade(145), _exec_grade(137)
{
	std::cout<< "PresidentialPardonForm default constructor called"<<std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm(), _target(target), _sign(false), _sign_grade(145), _exec_grade(137)
{
	std::cout<< "PresidentialPardonForm target constructor called"<<std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : AForm(), _target(obj.gettarget()), _sign(obj.getSign()), _sign_grade(obj.getSignGrade()), _exec_grade(obj.getExecGrade())
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

void	PresidentialPardonForm::beSigned(const Bureaucrat &obj)
{
	if (obj.getGrade() <= this->getSignGrade())
		this->_sign = true;
	else
		throw GradeTooLowException();
}

const std::string	PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

bool	PresidentialPardonForm::getSign(void) const
{
	return (this->_sign);
}

int	PresidentialPardonForm::getSignGrade(void) const
{
	return (this->_sign_grade);
}

int	PresidentialPardonForm::getExecGrade(void) const
{
	return (this->exec_grade);
}