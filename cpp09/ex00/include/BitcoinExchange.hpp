/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:42:40 by mmuesser          #+#    #+#             */
/*   Updated: 2024/02/10 14:08:50 by mmuesser         ###   ########.fr       */
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

std::multimap<std::string, std::string> date_map;
date_map[01] = "31";
date_map[02] = "28";
date_map[03] = "31";
date_map[04] = "30";
date_map[05] = "31";
date_map[06] = "30";
date_map[07] = "31";
date_map[08] = "31";
date_map[09] = "30";
date_map[10] = "31";
date_map[11] = "30";
date_map[12] = "31";

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

#endif