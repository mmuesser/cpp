/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 13:44:41 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/11 15:53:34 by mmuesser         ###   ########.fr       */
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
		virtual ~AForm(void);

		AForm& 			operator=(const AForm &obj);
		void	beSigned(const Bureaucrat &obj);
		virtual	void	form_exec(void) const = 0;
		void			execute(Bureaucrat const &executor) const;

		virtual const std::string	getName(void) const;
		virtual bool				getSign(void) const;
		virtual int					getSignGrade(void) const;
		virtual int					getExecGrade(void) const;
	
	private :
		const std::string	_name;
		bool				_sign;
		const int					_sign_grade;
		const int					_exec_grade;

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

		class	WrongSign : public std::exception
		{
			public :
				WrongSign(void) throw() {}
				~WrongSign(void) throw() {}
				char	*what() const throw()
				{
					return (char *) "AForm: This form is not signed";
				}
		};

};

std::ostream & operator<<(std::ostream &ost, const AForm &obj);

#endif