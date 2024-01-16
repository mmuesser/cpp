/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 17:13:28 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/16 11:17:06 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("NoName"), _grade(150)
{
	std::cout<< "Bureaucrat default constructor called"<<std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
		if (grade > 150)
			throw GradeTooLowException();
		else if (grade < 1)
			throw GradeTooHighException();
		this->_grade = grade;
	std::cout<< "Bureaucrat constructor called"<<std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : _name(obj.getName())
{
		if (obj.getGrade() > 150)
			throw GradeTooLowException();
		else if (obj.getGrade() < 1)
			throw GradeTooHighException();
		this->_grade = obj.getGrade();
	std::cout<< "Bureaucrat copy constructor called"<<std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout<< "Bureaucrat destructor called"<<std::endl;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &obj)
{
	if (this != &obj)
		*this = obj;
	return (*this);
}

void	Bureaucrat::signForm(AForm &obj)
{
	try
	{
		if (obj.getSign() == true)
		{
			std::cout<< "This form is already signed"<<std::endl;
			return ;
		}
		obj.beSigned(*this);
		std::cout<< this->getName() << " signed " << obj.getName()<<std::endl;
	}
	catch (std::exception const &e)
	{
		std::cout<< this->getName() << " couldn't signed " << obj.getName() << " because " << e.what() <<std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const &form)
{
	try
	{
		form.execute(*this);
	}
	catch (std::exception const &e)
	{
		std::cout<< this->getName() << " couldn't executed " << form.getName() << " because " << e.what() <<std::endl;
		return ;
	}
	std::cout<< this->getName() << " executed " << form.getName()<<std::endl;
}

void	Bureaucrat::upGrade(void)
{
	if (this->_grade - 1 < 1)
		throw GradeTooHighException();
	this->_grade--;
}
void	Bureaucrat::lowGrade(void)
{
	if (this->_grade + 1 > 150)
		throw GradeTooLowException();
	this->_grade++;	
}

const std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}


std::ostream & operator<<(std::ostream &ost, const Bureaucrat &obj)
{
	ost << obj.getName() << ", bureaucrat grade " << obj.getGrade()<<std::endl;
	return ost;
}