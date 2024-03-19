/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:53:30 by mmuesser          #+#    #+#             */
/*   Updated: 2024/03/19 18:14:41 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::multimap<std::string, float>	make_data_map(void)
{
	std::ifstream data("data.csv");
	if (!data)
		throw ErrorOpenFile();
	std::string str;
	std::getline(data, str);
	std::multimap<std::string, float> data_map;
	while (!data.eof())
	{
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
	std::string str;
	std::getline(file, str);
	std::multimap<std::string, float> file_map;
	while (!file.eof())
	{
		std::getline(file, str);
		int pos = str.find(" | ", 0);
		std::stringstream	ss;
		if (!ss)
			throw ErrorOpenFile();
		float n = 0;
		ss << &str[pos + 2];
		ss >> n;
		str = str.substr(0, pos);
		file_map.insert(std::pair<std::string, float>(str, n));
	}
	return (file_map);
}

bool	check_date(std::multimap<std::string, float>::iterator it, std::multimap<std::string, std::string> date_map)
{
	if ((unsigned long) it->first.find("-") > it->first.size())
		return (std::cout<< "Error: bad date input => " << it->first <<std::endl, false);
	std::string year = ((std::string )it->first).erase(it->first.find("-"), 6);
	std::string month = it->first.substr(it->first.find("-") + 1);
	std::string day = month.substr(month.find("-") + 1);
	month.erase(it->first.find("-") - 2, 3);
	std::multimap<std::string, std::string>::iterator ite = date_map.begin();
	while (ite != date_map.end())
	{
		if (month == ite->first && (day >= "01" && day <= ite->second))
			return (true);
		ite++;
	}
	return (std::cout<< "Error: bad date input => " << it->first <<std::endl, false);
}

float	convert_value(std::multimap<std::string, float>::iterator it, std::multimap<std::string, float> data_map, std::multimap<std::string, std::string> date_map)
{
	std::multimap<std::string, float>::iterator ite = data_map.begin();

	std::string year = ((std::string) it->first).erase(it->first.find("-"), 6);
	std::string month = it->first.substr(it->first.find("-") + 1);
	std::string day = month.substr(month.find("-") + 1);
	month.erase(it->first.find("-") - 2, 3);
	std::string date = year + "-" + month + "-" + day;
	if (atoi(year.c_str()) < 2009 || (date == "2009-01-01"))
		return (0);
	while (1)
	{
		std::ostringstream s;
		while (ite != data_map.end())
		{
			if (date == ite->first)
				break ;
			ite++;
		}
		if (date == ite->first)
			break ;
		if (day == "01")
		{
			if (month == "01")
			{
				month = date_map.find("12")->first;
				day = date_map.find(month)->second;
				s << atoi(year.c_str()) - 1;
				year = s.str();
			}
			else
			{
				s << atoi(month.c_str()) - 1;
				if (s.str().size() < 2)
					month = "0" + s.str();
				else
					month = s.str();
				day = date_map.find(month)->second;
			}
		}
		else
		{
			s << atoi(day.c_str()) - 1;
			if (s.str().size() < 2)
				day = "0" + s.str();
			else
				day = s.str();
		}
		date = year + "-" + month + "-" + day;
		ite = data_map.begin();
	}
	float nb = ite->second * it->second;
	return (nb);
}