/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 13:58:23 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/07 19:03:20 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("noForm"), _sign(false), _sign_grade(150), _exec_grade(150)
{
	std::cout<< "Form default constructor called"<<std::endl;
}

Form::Form(const std::string name, const int sign_grade, const int exec_grade) : _name(name), _sign(false)
{
	if (sign_grade < 1)
		throw GradeTooLowException();
	else if (sign_grade > 150)
		throw GradeTooHighException();
	this->_sign_grade = sign_grade;
	if (exec_grade < 1)
		throw GradeTooLowException();
	else if (exec_grade > 150)
		throw GradeTooHighException();
	this->_exec_grade = exec_grade;
	std::cout<< "Form constructor called"<<std::endl;
}

Form::Form(const Form &obj) : _name(obj.getName()), _sign(obj.getSign())
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
	std::cout<< "Form copy constructor called"<<std::endl;
}

Form::~Form(void)
{
	std::cout<< "Form destructor called"<<std::endl;
}

Form&	Form::operator=(const Form &obj)
{
	if (this != &obj)
	{
		this->_sign = obj.getSign();
		this->_sign_grade = obj.getSignGrade();
		this->_exec_grade = obj.getExecGrade();
	}
	return (*this);
}

void	Form::beSigned(const Bureaucrat &obj)
{
	if (obj.getGrade() <= this->getSignGrade())
		this->_sign = true;
	else
		throw GradeTooLowException();
}

const std::string	Form::getName(void) const
{
	return (this->_name);
}

bool	Form::getSign(void) const
{
	return (this->_sign);
}

int	Form::getSignGrade(void) const
{
	return (this->_sign_grade);
}

int	Form::getExecGrade(void) const
{
	return (this->_exec_grade);
}
