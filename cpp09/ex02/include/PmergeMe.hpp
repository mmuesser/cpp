/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 15:02:41 by mmuesser          #+#    #+#             */
/*   Updated: 2024/03/30 18:53:51 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>
#include <stdlib.h>
#include <sys/time.h>

std::vector<unsigned int> vector_merge(std::vector<unsigned int> tab2, std::vector<unsigned int> p1, std::vector<unsigned int> p2);
std::vector<unsigned int> vector_sort(std::vector<unsigned int> tab);
std::list<unsigned int> list_sort(std::list<unsigned int> tab);

#endif