/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:29:50 by mmuesser          #+#    #+#             */
/*   Updated: 2024/02/07 14:13:41 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "shortest span sp: " << sp.shortestSpan() << std::endl;
	std::cout << "longest span sp: "<< sp.longestSpan() << std::endl;
	std::cout<< "=================================="<<std::endl;
	std::vector<int> vektor (12000, 42);
	for (unsigned int i = 0;  i < vektor.size(); i++)
		vektor[i] = i;
	Span sp2 = Span(12001);
	sp2.addRange(vektor);
	std::cout << "shortest span sp2: " << sp2.shortestSpan() << std::endl;
	std::cout << "longest span sp2: "<< sp2.longestSpan() << std::endl;
	return 0;
}