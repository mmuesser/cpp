/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 14:08:41 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/18 21:28:26 by mmuesser         ###   ########.fr       */
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

void	ScalarConverter::convert(std::string const &value)
{
	t_num	num = {0, 0, 0, 0, false, false, false, false};
	t_num	(ScalarConverter::*ptr[4]) (std::string const &value) = {&ScalarConverter::charConvert,
																	 &ScalarConverter::intConvert,
																	 &ScalarConverter::floatConvert,
																	 &ScalarConverter::doubleConvert};
	int type = getType(value);
	
}

int		ScalarConverter::getType(std::string const &value)
{
	if (value[0] >= 'a' && value[0] <= 'z' || value[0] >= 'A' && value[0] <= 'Z')
		return (0)
	if (std::stoi(value))
	if (value.size() > 1 && value[value.size() - 1] == 'f')
		return (2)
	return (-1);
}

char	ScalarConverter::charConvert(std::string const &value)
{
	char c;

	if (value.size() > 1)
	{
		std::cout<< "impossible"<<std::endl;
		return (0);
	}
	char c = static_cast<int> (value[0]);
	return (c);
}