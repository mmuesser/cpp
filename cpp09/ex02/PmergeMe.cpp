/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 15:16:18 by mmuesser          #+#    #+#             */
/*   Updated: 2024/04/01 14:01:21 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

std::vector<unsigned int> vector_merge(std::vector<unsigned int> tab2, std::vector<unsigned int> p1, std::vector<unsigned int> p2)
{
	if (p1.size() > 0 && ((p1.size() > 0 && p2.size() == 0) || p1[0] < p2[0]))
	{
		tab2.push_back(p1[0]);
		p1.erase(p1.begin());
		tab2 = vector_merge(tab2, p1, p2);
	}
	else if (p2.size() > 0 && ((p2.size() > 0 && p1.size() == 0) || p2[0] <= p1[0]))
	{
		tab2.push_back(p2[0]);
		p2.erase(p2.begin());
		tab2 = vector_merge(tab2, p1, p2);
	}
	return (tab2);
}

std::vector<unsigned int> vector_sort(std::vector<unsigned int> tab)
{
	if (tab.size() > 2)
	{
		std::vector<unsigned int> p1, p2, tab2;
		p1.insert(p1.begin(), tab.begin(), tab.begin() + (tab.size() / 2));
		p2.insert(p2.begin(), tab.begin() + p1.size(), tab.end());
		p1 = vector_sort(p1);
		p2 = vector_sort(p2);
		tab = vector_merge(tab2, p1, p2);
	}
	else
	{
		if (tab.size() == 2 && tab[0] > tab[1])
		{
			unsigned int nb = tab[0];
			tab[0] = tab[1];
			tab[1] = nb;
		}
	}
	return (tab);
}

std::list<unsigned int> list_sort(std::list<unsigned int> tab)
{
	if (tab.size() > 2)
	{
		std::list<unsigned int> p1, p2, tab2;
		std::list<unsigned int>::iterator it = tab.begin();
		std::advance(it, tab.size() / 2);
		p1.insert(p1.begin(), tab.begin(), it);
		p2.insert(p2.begin(), it, tab.end());
		p1 = list_sort(p1);
		p2 = list_sort(p2);
		p1.merge(p2);
		tab2.merge(p1);
		p1.clear();
		p2.clear();
		tab = tab2;
	}
	else
	{
		if (tab.size() == 2)
			tab.sort();
	}
	return (tab);
}