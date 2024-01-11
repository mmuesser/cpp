/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 18:32:10 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/11 17:39:49 by mmuesser         ###   ########.fr       */
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
	std::ofstream	f_sortie(tmp.c_str(), std::ios::out | std::ios::trunc);
	if (!f_sortie)
		return ;
	f_sortie << "                ,@@@@@@@,\n ";
	f_sortie << "       ,,,.   ,@@@@@@/@@,  .oo8888o.\n ";
	f_sortie << "    ,&\%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n ";
	f_sortie << "   ,%&\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n ";
	f_sortie << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n ";
	f_sortie << "   %&&%/ %&\%%&&@@\\ V /@@' `88\\8 `/88'\n ";
	f_sortie << "   `&%\\ ` /%&'    |.|        \\ '|8'\n ";
	f_sortie << "       |o|        | |         | |\n ";
	f_sortie << "       |.|        | |         | |\n ";
	f_sortie << "jgs \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/\n ";
	f_sortie.close();
}

const std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}
