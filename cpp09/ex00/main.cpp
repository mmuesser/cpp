/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:53:53 by mmuesser          #+#    #+#             */
/*   Updated: 2024/02/10 14:14:45 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
		return (std::cout<< "Error: Please enter one argument."<<std::endl, 0);
	try
	{
		std::multimap<std::string, float> data_map = make_data_map();
		std::multimap<std::string, float> file_map = make_file_map(av[1]);
		std::multimap<std::string, float>::iterator it = file_map.begin();
		std::multimap<std::string, float>::iterator ite = data_map.begin();
		while (it != file_map.end())
		{
			bool b = check_date(it); //check validite date
			if (!b)
			{
				it++;
				continue ;
			}
			float i = convert_value(it, ite);//res value conversion
			if (i)
				std::cout<< it->first << " => " << it->second << i<<std::endl;
			it++;
		}
	}
	catch (std::exception const &e)
	{
		std::cout<< e.what()<<std::endl;
	}
	return (0);
}