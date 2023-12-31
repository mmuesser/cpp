/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 17:13:04 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/07 14:26:27 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat test("test", -1);
		Bureaucrat test2("test2", 155);

		test.upGrade(6);
		test2.lowGrade(63);
		std::cout<< test<<std::endl;
	}
	catch (std::exception const &e)
	{
		std::cout<< e.what()<<std::endl;
	}
	
	try
	{
		Bureaucrat bob("Bob", 15);
		Bureaucrat jean("Jean", 142);
		std::cout<<"\n";

		jean.lowGrade(10);
		std::cout<< jean;
		bob.upGrade(17);
		std::cout<< bob;
		std::cout<<"\n";

		bob.lowGrade(17);
		std::cout<< bob;
		jean.upGrade(10);
		std::cout<< jean;
		std::cout<<"\n";
	}
	catch (std::exception const &e)
	{
		std::cout<< e.what()<<std::endl;
	}
	return (0);
}