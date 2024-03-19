/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:42:40 by mmuesser          #+#    #+#             */
/*   Updated: 2024/03/19 16:57:01 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <string>
#include <sstream>
#include <exception>
#include <stdlib.h>

class	ErrorOpenFile : public std::exception
{
	public :
		char *what() const throw()
		{
			return (char *) "Error: Cannot open this file.";
		}
};

std::multimap<std::string, float>	make_data_map(void);
std::multimap<std::string, float>	make_file_map(char *file_name);
bool								check_date(std::multimap<std::string, float>::iterator it, std::multimap<std::string, std::string> date_map);
float								convert_value(std::multimap<std::string, float>::iterator it, std::multimap<std::string, float> data_map, std::multimap<std::string, std::string> date_map);

#endif