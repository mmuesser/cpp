/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 17:13:39 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/16 10:58:47 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class	Bureaucrat
{
	public :
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &obj);
		~Bureaucrat(void);

		Bureaucrat&	operator=(const Bureaucrat &obj);
		void	signForm(Form &obj);

		void				upGrade(void);
		void				lowGrade(void);
		const std::string	getName(void) const;
		int					getGrade(void) const;
		
	private :
		const std::string _name;
		int			_grade;

		class	GradeTooHighException : public std::exception
		{
			public :
				GradeTooHighException(void) throw() {}
				~GradeTooHighException(void) throw() {}
				char	*what() const throw()
				{
					return (char *) "BUREAUCRAT: This grade is to high";
				}
		};

		class	GradeTooLowException : public std::exception
		{
			public :
				GradeTooLowException(void) throw() {}
				~GradeTooLowException(void) throw() {}
				char	*what() const throw()
				{
					return (char *) "BUREAUCRAT: This grade is to low";
				}
		};
};

std::ostream & operator<<(std::ostream &ost, const Bureaucrat &obj);

#endif