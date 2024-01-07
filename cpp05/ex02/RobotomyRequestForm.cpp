/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 18:52:39 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/07 18:53:45 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm(), _target("SCF_default"), _sign(false), _sign_grade(145), _exec_grade(137)
{
	std::cout<< "RobotomyRequestForm default constructor called"<<std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm(), _target(target), _sign(false), _sign_grade(145), _exec_grade(137)
{
	std::cout<< "RobotomyRequestForm target constructor called"<<std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : AForm(), _target(obj.gettarget()), _sign(obj.getSign()), _sign_grade(obj.getSignGrade()), _exec_grade(obj.getExecGrade())
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
	if (obj.getGrade() <= this->getSignGrade())
		this->_sign = true;
	else
		throw GradeTooLowException();
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
	return (this->exec_grade);
}