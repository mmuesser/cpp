/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 14:08:41 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/13 15:35:35 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

/*static cast*/

ScalarConverter::ScalarConverter(void){}

ScalarConverter::ScalarConverter(const ScalarConverter  &obj)
{
	(void) obj;
}

ScalarConverter::~ScalarConverter(void){}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter &obj)
{
	(void) obj;
	return (*this);
}

void	ScalarConverter::convert(std::string value)
{
	char test = static_cast <char> (value);
	std::cout<< "Char : " << test <<std::endl;
}