/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 18:32:10 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/07 18:47:49 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm(), _target("SCF_default"), _sign(false), _sign_grade(145), _exec_grade(137)
{
	std::cout<< "ShrubberyCreationForm default constructor called"<<std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm(), _target(target), _sign(false), _sign_grade(145), _exec_grade(137)
{
	std::cout<< "ShrubberyCreationForm target constructor called"<<std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : AForm(), _target(obj.gettarget()), _sign(obj.getSign()), _sign_grade(obj.getSignGrade()), _exec_grade(obj.getExecGrade())
{
	std::cout<< "ShrubberyCreationForm copy constructor called"<<std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout<< "ShrubberyCreationForm destructor called"<<std::endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
	if (this != &obj)
		*this = obj;
	return (*this);
}

void	ShrubberyCreationForm::beSigned(const Bureaucrat &obj)
{
	if (obj.getGrade() <= this->getSignGrade())
		this->_sign = true;
	else
		throw GradeTooLowException();
}

const std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

bool	ShrubberyCreationForm::getSign(void) const
{
	return (this->_sign);
}

int	ShrubberyCreationForm::getSignGrade(void) const
{
	return (this->_sign_grade);
}

int	ShrubberyCreationForm::getExecGrade(void) const
{
	return (this->exec_grade);
}