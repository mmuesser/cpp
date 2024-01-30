/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:46:47 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/30 13:41:56 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void	swap(T &x, T &y)
{
	T z;

	z = x;
	x = y;
	y = z;
}

template <typename T>
T	min(T &x, T &y)
{
	return (x < y) ? x : y;
}

template <typename T>
T	max(T &x, T &y)
{
	return (x > y) ? x : y;
}

#endif