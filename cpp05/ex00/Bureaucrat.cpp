/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 17:13:28 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/06 18:17:30 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout<< "Bureaucrat default constructor called"<<std::endl;
	this->_name = "NoName";
	this->_grade = 150;
}

Bureaucrat::Bureaucrat(const std::string name, int grade)
{
	std::cout<< "Bureaucrat constructor called"<<std::endl;
	this->_name = name;
	try
	{
		if (grade > 150)
			throw GradeTooLowException();
		else if (grade < 1)
			throw GradeTooHighException();
		this->_grade = grade;
	}
	catch(std::exception const &e)
	{
		std::cerr<< "ERROR : " << e.what()<<std::endl;
	}
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout<< "Bureaucrat destructor called"<<std::endl;
}