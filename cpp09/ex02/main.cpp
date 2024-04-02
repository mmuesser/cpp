/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:27:17 by mmuesser          #+#    #+#             */
/*   Updated: 2024/04/01 13:29:31 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//reste faire plus de tests

#include "PmergeMe.hpp"

int	check_nb(char *av)
{
	int	nb;
	int	i;

	if (av[0] == '-')
		return (1);
	nb = atoi(av);
	i = strlen(av) - 1;
	while (i >= 0)
	{
		if ((av[i] - 48) != (nb % 10))
			return (1);
		nb /= 10;
		i--;
	}
	return (0);
}

int	main(int ac, char **av)
{
	std::vector<unsigned int> vector_tab;
	int nb;
	struct timeval time;
	gettimeofday(&time, NULL);
	double t1 = 1.0e6 * time.tv_sec + time.tv_usec;
	for(int i = 1; i < ac; i++)
	{
		if (check_nb(av[i]) == 1)
			return (std::cout<< "Error: invalid arguments."<<std::endl, 0);
		nb = atoi(av[i]);
		vector_tab.push_back(nb);
	}
	std::cout<< "--------------------------------------"<<std::endl;
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
	std::cout<< "\n--------------------------------------"<<std::endl;
	std::cout<< "Time to process a range of " << ac - 1 << " elements with std::vector	: " << ((t2 - t1) / 1000) <<std::endl;
	
	std::list<unsigned int> list_tab;
	gettimeofday(&time, NULL);
	t1 = 1.0e6 * time.tv_sec + time.tv_usec;
	for(int i = 1; i < ac; i++)
	{
		nb = atoi(av[i]);
		list_tab.push_back(nb);
	}
	list_tab = list_sort(list_tab);
	gettimeofday(&time, NULL);
	t2 = 1.0e6 * time.tv_sec + time.tv_usec;
	std::cout<< "Time to process a range of " << ac - 1 << " elements with std::list : " << ((t2 - t1) / 1000) <<std::endl;
	std::cout<< "--------------------------------------"<<std::endl;
	return (0);
}