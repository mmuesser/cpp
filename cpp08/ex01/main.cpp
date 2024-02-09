/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:29:50 by mmuesser          #+#    #+#             */
/*   Updated: 2024/02/08 18:04:41 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try
	{
		std::cout<< "Normal addNumber span test"<<std::endl;
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "shortest span sp: " << sp.shortestSpan() << std::endl;
		std::cout << "longest span sp: "<< sp.longestSpan() << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cout<< e.what() <<std::endl;
	}
	std::cout<< "=================================="<<std::endl;
	try
	{
		std::cout<< "Normal addRange span test"<<std::endl;
		std::vector<int> vektor (12000, 42);
		for (unsigned int i = 0;  i < vektor.size(); i++)
			vektor[i] = i;
		Span sp2 = Span(12001);
		sp2.addRange(vektor);
		std::cout << "shortest span sp2: " << sp2.shortestSpan() << std::endl;
		std::cout << "longest span sp2: "<< sp2.longestSpan() << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cout<< e.what() <<std::endl;
	}
	std::cout<< "=================================="<<std::endl;
	try
	{
		std::cout<< "Not enough numbers in Span test"<<std::endl;
		Span sp3 = Span(5);
		sp3.addNumber(6);
		std::cout << "shortest span sp3: " << sp3.shortestSpan() << std::endl;
		std::cout << "longest span sp3: "<< sp3.longestSpan() << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cout<< e.what() << std::endl;
	}
	std::cout<< "=================================="<<std::endl;
	try
	{
		std::cout<< "Full span test"<<std::endl;
		Span sp4 = Span(2);
		sp4.addNumber(4);
		sp4.addNumber(42);
		sp4.addNumber(6);
	}
	catch (std::exception const &e)
	{
		std::cout<< e.what() << std::endl;
	}
	return 0;
}