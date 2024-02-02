/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 14:02:58 by mmuesser          #+#    #+#             */
/*   Updated: 2024/02/02 17:02:06 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void)
{
	_size = 0;
}

Span::Span(unsigned int n)
{
	_size = n;
}

Span::Span(const Span &obj)
{
	if (this != &obj)
		*this = obj;
}

Span::~Span(void)
{
}

Span&	Span::operator=(const Span &obj)
{
	this->_vec.resize(obj._size);
	this->_size = obj._size;
	for (unsigned int i = 0; i < obj._size; i++)
		this->_vec[i] = obj._vec[i];
	return (*this);
}

void	Span::addNumber(int nb)
{
	if (this->_vec.size() >= this->_size)
	{
		std::cout<< "Error: the vector is already full"<<std::endl;
		return ;
	}
	this->_vec.push_back(nb);
}

int	Span::shortestSpan(void)
{
	int	min = 2147483647;
	std::sort(this->_vec.begin(), this->_vec.end());
	for (unsigned int i = 0; i < this->_vec.size() - 1; i++)
	{
		min = std::min(this->_vec[i + 1] - this->_vec[i], min);
	}
	return (min);
}

int	Span::longestSpan(void)
{
	int max = *std::max_element(_vec.begin(), _vec.end());
	int min = *std::min_element(_vec.begin(), _vec.end());
	return (max - min);
}

void	Span::addRange(std::vector<int> tab)
{
	if (_vec.size() + tab.size() >= this->_size)
	{
		std::cout<< "Error: There is not enough place in vec"<<std::endl;
		return ;
	}
	_vec.insert(_vec.end(), tab.begin(), tab.end());
}