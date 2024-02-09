/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:42:40 by mmuesser          #+#    #+#             */
/*   Updated: 2024/02/09 18:15:10 by mmuesser         ###   ########.fr       */
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