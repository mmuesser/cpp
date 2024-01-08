/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 18:52:39 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/08 18:42:48 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("fr", 42, 45), _target("SCF_default"), _sign(false)
{
	std::cout<< "RobotomyRequestForm default constructor called"<<std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("fr", 72, 45), _target(target), _sign(false)
{
	std::cout<< "RobotomyRequestForm target constructor called"<<std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : AForm(obj.getName(), obj.getSignGrade(), obj.getExecGrade()), _target(obj.getTarget()), _sign(obj.getSign())
{
	std::cout<< "RobotomyRequestForm copy constructor called"<<std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout<< "RobotomyRequestForm destructor called"<<std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
	if (this != &obj)
		*this = obj;
	return (*this);
}

void	RobotomyRequestForm::beSigned(const Bureaucrat &obj)
{
	if (obj.getGrade() >= this->getSignGrade())
		this->_sign = true;
	else
		throw GradeTooLowException();
}

void	RobotomyRequestForm::form_exec(void) const
{
	srand(time(0));
	if (rand() % 2 == 0)
		std::cout<< this->getTarget() << " has been succesfully robotomized"<<std::endl;
	else
		std::cout<< "Sorry, the robotomization of " << this->getTarget() << " failed"<<std::endl;
}

const std::string	RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

bool	RobotomyRequestForm::getSign(void) const
{
	return (this->_sign);
}

int	RobotomyRequestForm::getSignGrade(void) const
{
	return (this->_sign_grade);
}

int	RobotomyRequestForm::getExecGrade(void) const
{
	return (this->_exec_grade);
}