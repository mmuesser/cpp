/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 18:48:50 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/08 14:10:58 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <exception>
#include <cstdlib>
#include <time.h>
#include "AForm.hpp"

class	RobotomyRequestForm : public AForm
{
	public :
		RobotomyRequestForm(void);
		RobotomyRequestForm(const std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &obj);
		virtual ~RobotomyRequestForm(void);

		RobotomyRequestForm&	operator=(const RobotomyRequestForm &obj);
		void					beSigned(const Bureaucrat &obj);
		void					form_exec(void) const;

		const std::string	getTarget(void) const;
		bool				getSign(void) const;
		int					getSignGrade(void) const;
		int					getExecGrade(void) const;

	private :
		const std::string	_target;
		bool				_sign;
		int					_sign_grade;
		int					_exec_grade;

		class	GradeTooHighException : public std::exception
		{
			public :
				GradeTooHighException(void) throw() {}
				~GradeTooHighException(void) throw() {}
				char	*what() const throw()
				{
					return (char *) "RobotomyRequestForm: This grade is to high";
				}
		};

		class	GradeTooLowException : public std::exception
		{
			public :
				GradeTooLowException(void) throw() {}
				~GradeTooLowException(void) throw() {}
				char	*what() const throw()
				{
					return (char *) "RobotomyRequestForm: This grade is to low";
				}
		};
};

#endif