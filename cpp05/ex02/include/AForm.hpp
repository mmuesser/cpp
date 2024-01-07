/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 13:44:41 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/07 18:56:34 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
#define AForm_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class	AForm
{
	public :
		AForm(void);
		AForm(const std::string name, const int sign_grade, const int exec_grade);
		AForm(const AForm &obj);
		~AForm(void);

		AForm& operator=(const AForm &obj);
		virtual void	beSigned(const Bureaucrat &obj) = 0;
		void			execute(Bureaucrat const &executor) const;

		const std::string	getName(void) const;
		bool				getSign(void) const;
		int					getSignGrade(void) const;
		int					getExecGrade(void) const;
	
	private :
		const std::string	_name;
		bool				_sign;
		int			_sign_grade;
		int			_exec_grade;

		class	GradeTooHighException : public std::exception
		{
			public :
				GradeTooHighException(void) throw() {}
				~GradeTooHighException(void) throw() {}
				char	*what() const throw()
				{
					return (char *) "AForm: This grade is to high";
				}
		};

		class	GradeTooLowException : public std::exception
		{
			public :
				GradeTooLowException(void) throw() {}
				~GradeTooLowException(void) throw() {}
				char	*what() const throw()
				{
					return (char *) "AForm: This grade is to low";
				}
		};

};

std::ostream & operator<<(std::ostream &ost, const AForm &obj);

#endif