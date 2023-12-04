/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:40:30 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/04 19:17:38 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int ac, char **av)
{
	ifstream	monFlux(av[0]);
	if (monFlux)
	{
		std::string str;
		do{
			std::getline(monFlux, str);
			
		}while(!str.empty());
	}
	else
		std::cout<< "Error, impossible d'ouvrir le fichier"<<std::endl;
	return (0);
}