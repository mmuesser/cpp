/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:53:30 by mmuesser          #+#    #+#             */
/*   Updated: 2024/02/19 16:59:53 by mmuesser         ###   ########.fr       */
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

bool	check_date(std::multimap<std::string, std::string>::iterator it)
{
	std::string month = it->first.substr(it->first.find("-") + 1);
	std::string day = month.substr(month.find("-") + 1);
	// if ()
	// 	return (std::cout<< "Error: bad input => " << it->first <<std::endl, false);
	return (true);
}

// float	convert_value(std::multimap<std::string, std::string>::iterator it, std::multimap<std::string, std::string>::iterator ite)
// {
// 	//find date en decrementant while pas une date qui passe
// 	return (0);
// }