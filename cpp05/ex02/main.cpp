/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 17:13:04 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/08 14:50:24 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	bob("Bob", 1);
		RobotomyRequestForm fr1("Jean");
		ShrubberyCreationForm fs1("home1");
		PresidentialPardonForm fp1("Marc");

		std::cout<<"\n";
		bob.signForm(fr1);
		bob.signForm(fs1);
		bob.signForm(fp1);
		std::cout<<"\n";

		bob.executeForm(fr1);
		std::cout<<"\n";
		bob.executeForm(fs1);
		std::cout<<"\n";
		bob.executeForm(fp1);
		std::cout<<"\n";
	}
	catch (std::exception const &e)
	{
		std::cout<< e.what()<<std::endl;
	}
	try
	{
		Bureaucrat	jean("Jean", 150);
		RobotomyRequestForm fr1("Jean");
		ShrubberyCreationForm fs1("home2");
		PresidentialPardonForm fp1("Marc");

		std::cout<<"\n";
		jean.signForm(fr1);
		jean.signForm(fs1);
		jean.signForm(fp1);
		std::cout<<"\n";

		jean.executeForm(fr1);
		std::cout<<"\n";
		jean.executeForm(fs1);
		std::cout<<"\n";
		jean.executeForm(fp1);
		std::cout<<"\n";
	}
	catch (std::exception const &e)
	{
		std::cout<< e.what()<<std::endl;
	}
	try
	{
		Bureaucrat	marc("Marc", 42);
		RobotomyRequestForm fr1("Jean");
		ShrubberyCreationForm fs1("home3");
		PresidentialPardonForm fp1("Marc");

		std::cout<<"\n";
		marc.signForm(fr1);
		marc.signForm(fs1);
		marc.signForm(fp1);
		std::cout<<"\n";

		marc.executeForm(fr1);
		std::cout<<"\n";
		marc.executeForm(fs1);
		std::cout<<"\n";
		marc.executeForm(fp1);
		std::cout<<"\n";
	}
	catch (std::exception const &e)
	{
		std::cout<< e.what()<<std::endl;
	}
	return (0);
}