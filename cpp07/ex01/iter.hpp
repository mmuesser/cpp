/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:07:20 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/27 16:12:42 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void	print(T arg)
{
	std::cout<< arg << std::endl;
}


template <typename T>
void	iter(T *array, size_t l_array, void	(*print)(T))
{
	for (size_t i = 0; i < l_array; i++)
		print(array[i]);
}

#endif