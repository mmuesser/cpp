/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 18:32:10 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/09 17:42:09 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("fs", 145, 137), _target("SCF_default")
{
	std::cout<< "ShrubberyCreationForm default constructor called"<<std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("fs", 145, 137), _target(target)
{
	std::cout<< "ShrubberyCreationForm target constructor called"<<std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : AForm(obj.getName(), obj.getSignGrade(), obj.getExecGrade()), _target(obj.getTarget())
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

void	ShrubberyCreationForm::form_exec(void) const
{
	std::string tmp = this->getTarget() + "_shrubbery";
	std::ofstream	f_sortie(tmp.c_str());
	if (!f_sortie)
		return ;
	f_sortie<< "ASCII TREES"<<std::endl;
}

const std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}
