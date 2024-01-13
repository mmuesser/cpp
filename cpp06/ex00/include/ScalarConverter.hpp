/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 14:04:25 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/13 15:26:52 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>

class	ScalarConverter
{
	public :
		static void			convert(std::string value);
	private :
		ScalarConverter(void);
		ScalarConverter(const ScalarConverter &obj);
		~ScalarConverter(void);

		ScalarConverter&	operator=(const ScalarConverter &obj);
};

#endif