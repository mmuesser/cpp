/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 17:13:39 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/16 11:40:27 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#define RESET "\033[0m"
#define BLACK "\033[0;30m"
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define BLUE "\033[0;34m"
#define PURPLE "\033[0;35m"
#define CYAN "\033[0;36m"
#define WHITE "\033[0;37m"
#include <iostream>
#include <exception>
#include "AForm.hpp"

class AForm;

class	Bureaucrat
{
	public :
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &obj);
		~Bureaucrat(void);

		Bureaucrat&	operator=(const Bureaucrat &obj);

		void				signForm(AForm &obj);
		void				executeForm(AForm const &form);
		void				upGrade(void);
		void				lowGrade(void);
		const std::string	getName(void) const;
		int					getGrade(void) const;
		
	private :
		const std::string	_name;
		int					_grade;

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