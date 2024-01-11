/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:00:15 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/11 15:42:56 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
// #include <exception>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class	Intern
{
	public :
		Intern(void);
		Intern(const Intern &obj);
		~Intern(void);

		Intern&	operator=(const Intern &obj);
		AForm	*makeForm(std::string name, std::string target);

	private :
		AForm*	make_SCForm(std::string target);
		AForm*	make_RRForm(std::string target);
		AForm*	make_PPForm(std::string target);
		
};

#endif