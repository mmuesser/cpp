/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 14:04:25 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/16 16:37:01 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>

typedef struct	s_num
{

	int c;
	int i;
	int f;
	int d;

	bool c_ok;
	bool i_ok;
	bool f_ok;
	bool d_ok;

}	t_num;

class	ScalarConverter
{
	public :
		static void	convert(std::string const &value);
	private :
		ScalarConverter(void);
		ScalarConverter(const ScalarConverter &obj);
		~ScalarConverter(void);

		ScalarConverter&	operator=(const ScalarConverter &obj);
		int					getType(std::string const &value);
		char				charConvert(std::string const &value);
		int					intConvert(std::string const &value);
		float				floatConvert(std::string const &value);
		double				doubleConvert(std::string const &value);
};

#endif