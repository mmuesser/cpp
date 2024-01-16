/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 17:13:04 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/16 10:48:15 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		std::cout<< "1er test :"<<std::endl;
		Bureaucrat test("test", -1);

		std::cout<< test<<std::endl;
	}
	catch (std::exception const &e)
	{
		std::cout<< e.what()<<std::endl;
	}
	try
	{
		std::cout<< "\n2eme test :"<<std::endl;
		Bureaucrat test2("test2", 155);
		std::cout<< test2 <<std::endl;
	}
	catch (std::exception const &e)
	{
		std::cout<< e.what()<<std::endl;
	}
	try
	{
		std::cout<< "\n3eme test :"<<std::endl;
		Bureaucrat bob("Bob", 15);
		Bureaucrat jean("Jean", 142);
		std::cout<<"\n";

		jean.lowGrade();
		std::cout<< jean;
		bob.upGrade();
		std::cout<< bob;
		std::cout<<"\n";

		for (int i = 0; i < 18; i++){
			bob.upGrade();
		}
		std::cout<< bob;
		jean.lowGrade();
		std::cout<< jean;
		std::cout<<"\n";
	}
	catch (std::exception const &e)
	{
		std::cout<< e.what()<<std::endl;
	}
	return (0);
}