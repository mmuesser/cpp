/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:53:30 by mmuesser          #+#    #+#             */
/*   Updated: 2024/02/10 17:41:26 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::multimap<std::string, float>	make_data_map(void)
{
	std::ifstream data("data.csv");
	if (!data)
		throw ErrorOpenFile();
	std::multimap<std::string, float> data_map;
	while (!data.eof())
	{
		std::string str;
		std::getline(data, str);
		int pos = str.find(',', 0);
		std::stringstream	ss;
		if (!ss)
			throw ErrorOpenFile();
		float n;
		ss << &str[pos + 1];
		ss >> n;
		str = str.substr(0, pos);
		data_map.insert(std::pair<std::string, float>(str, n));
	}
	return (data_map);
}

std::multimap<std::string, float>	make_file_map(char *file_name)
{
	std::ifstream file(file_name);
	if (!file)
		throw ErrorOpenFile();
	std::multimap<std::string, float> file_map;
	while (!file.eof())
	{
		std::string str;
		std::getline(file, str);
		int pos = str.find(" | ", 0);
		std::stringstream	ss;
		if (!ss)
			throw ErrorOpenFile();
		float n = 0;
		if (pos > 0)
		{
			ss << &str[pos + 2];
			ss >> n;
			str = str.substr(0, pos);
		}
		file_map.insert(std::pair<std::string, float>(str, n));
	}
	return (file_map);
}

bool	check_date(std::multimap::iterator it)
{
	
	// if (/*date pas bonne*/)
	// 	return (std::cout<< "Error: bad input => " << /*date*/ <<std::endl, false);
	return (true);
}

float	convert_value(std::multimap::iterator it, std::multimap::iterator ite)
{
	//find date en decrementant while pas une date qui passe
	return (0);
}