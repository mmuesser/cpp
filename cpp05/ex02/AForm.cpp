/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 13:58:23 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/07 17:49:48 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) : _name("noAForm"), _sign(false), _sign_grade(150), _exec_grade(150)
{
	std::cout<< "AForm default constructor called"<<std::endl;
}

AForm::AForm(const std::string name, const int sign_grade, const int exec_grade) : _name(name), _sign(false)
{
	if (sign_grade < 1)
		throw GradeTooHighException();
	else if (sign_grade > 150)
		throw GradeTooLowException();
	this->_sign_grade = sign_grade;
	if (exec_grade < 1)
		throw GradeTooHighException();
	else if (exec_grade > 150)
		throw GradeTooLowException();
	this->_exec_grade = exec_grade;
	std::cout<< "AForm constructor called"<<std::endl;
}

AForm::AForm(const AForm &obj) : _name(obj.getName()), _sign(obj.getSign())
{
	if (obj.getSignGrade() < 1)
		throw GradeTooHighException();
	else if (obj.getSignGrade() > 150)
		throw GradeTooLowException();
	this->_sign_grade = obj.getSignGrade();
	if (obj.getExecGrade() < 1)
		throw GradeTooHighException();
	else if (obj.getExecGrade() > 150)
		throw GradeTooLowException();
	this->_exec_grade = obj.getExecGrade();
	std::cout<< "AForm copy constructor called"<<std::endl;
}

AForm::~AForm(void)
{
	std::cout<< "AForm destructor called"<<std::endl;
}

AForm&	AForm::operator=(const AForm &obj)
{
	if (this != &obj)
	{
		this->_sign = obj.getSign();
		this->_sign_grade = obj.getSignGrade();
		this->_exec_grade = obj.getExecGrade();
	}
	return (*this);
}

// void	AForm::beSigned(const Bureaucrat &obj)
// {
// 	if (obj.getGrade() <= this->getSignGrade())
// 		this->_sign = true;
// 	else
// 		throw GradeTooLowException();
// }

void	AForm::execute(Bureaucrat const &executor) const
{
	// if (!this->getSign())
		// throw new exception for sign
}

const std::string	AForm::getName(void) const
{
	return (this->_name);
}

bool	AForm::getSign(void) const
{
	return (this->_sign);
}

int	AForm::getSignGrade(void) const
{
	return (this->_sign_grade);
}

int	AForm::getExecGrade(void) const
{
	return (this->_exec_grade);
}
