/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 18:48:50 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/07 18:52:34 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class	RobotomyRequestForm : public Form
{
	public :
		RobotomyRequestForm(void);
		RobotomyRequestForm(const std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &obj);
		virtual ~RobotomyRequestForm(void);

		RobotomyRequestForm& operator=(const RobotomyRequestForm &obj);
		void	beSigned(const Bureaucrat &obj);

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