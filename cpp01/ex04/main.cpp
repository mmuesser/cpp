/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:40:30 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/06 18:57:52 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int ac, char **av)
{
	if (ac != 4){
		std::cout<< "Error: not enough/to many arguments\n";
		return (0);
	}
	std::ifstream	f_entree(av[1]);
	if (f_entree)
	{
		std::string tmp = av[1];
		std::string tmp2 = ".replace";
		std::string sortie = tmp + tmp2;
		std::ofstream	f_sortie(sortie.c_str());
		if (!f_sortie)
			std::cout<< "Error: the file does no exist."<<std::endl;
		std::string str;
		size_t	pos = 0;
		do{
			size_t i = 0;
			std::getline(f_entree, str);
			while ((pos = str.find(av[2], i)) != std::string::npos){
				str.erase(pos, ((std::string) av[2]).size());
				str.insert(pos, av[3]);
				i += pos + 1;
			}
			f_sortie<< str<<std::endl;
		}while(!f_entree.eof());
	}
	else
		std::cout<< "Error: the file does not exist."<<std::endl;
	return (0);
}