/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:27:17 by mmuesser          #+#    #+#             */
/*   Updated: 2024/03/30 18:56:33 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//reste a parser les arguments qui sont pas des nombres, gerer le display plus proprement et faire plus de tests

#include "PmergeMe.hpp"

int	main(int ac, char **av)
{
	std::vector<unsigned int> vector_tab;
	int nb;
	struct timeval time;
	gettimeofday(&time, NULL);
	double t1 = 1.0e6 * time.tv_sec + time.tv_usec;
	for(int i = 1; i < ac; i++)
	{
		nb = atoi(av[i]);
		if (nb < 0)
			return (std::cout<< "Error : Please enter positif numbers only" <<std::endl, 0);
		vector_tab.push_back(nb);
	}
	std::cout<< "Before	: ";
	for(size_t i = 0; i < vector_tab.size(); i++)
	{
		std::cout<< vector_tab[i] << " ";
	}
	vector_tab = vector_sort(vector_tab);
	gettimeofday(&time, NULL);
	double t2 = 1.0e6 * time.tv_sec + time.tv_usec;
	std::cout<< "\nAfter	: ";
	for(size_t i = 0; i < vector_tab.size(); i++)
	{
		std::cout<< vector_tab[i] << " ";
	}
	std::cout<< "\ntime1	: " << ((t1 - t2) / 1000) <<std::endl;
	std::list<unsigned int> list_tab;
	gettimeofday(&time, NULL);
	t1 = 1.0e6 * time.tv_sec + time.tv_usec;
	for(int i = 1; i < ac; i++)
	{
		nb = atoi(av[i]);
		if (nb < 0)
			return (std::cout<< "Error : Please enter positif numbers only" <<std::endl, 0);
		list_tab.push_back(nb);
	}
	list_tab = list_sort(list_tab);
	gettimeofday(&time, NULL);
	t2 = 1.0e6 * time.tv_sec + time.tv_usec;
	std::cout<< "time2	: " << ((t1 - t2) / 1000) <<std::endl;
	return (0);
}