/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:53:53 by mmuesser          #+#    #+#             */
/*   Updated: 2024/02/09 18:42:45 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

//utiliser multimap

int	main(int ac, char **av)
{
	if (ac != 2)
		return (std::cout<< "Error: Please enter one argument."<<std::endl, 0);
	try
	{
		std::multimap<std::string, float> data_map = make_data_map();
		std::multimap<std::string, float> file_map = make_file_map(av[1]);
		std::multimap<std::string, float>::iterator it = file_map.begin();
		while (it != file-map.end())
		{
			bool b = //check validite date
			if (!b)
			{
				it++;
				continue ;
			}
			float i = //res value conversion
			if (b && i)
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