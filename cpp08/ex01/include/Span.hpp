/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:30:03 by mmuesser          #+#    #+#             */
/*   Updated: 2024/02/08 18:04:15 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <algorithm>
#include <exception>

class Span
{
	public :
		Span(void);
		Span(unsigned int n);
		Span(const Span &obj);
		~Span(void);

		Span&	operator=(const Span &obj);
		void	addNumber(int nb);
		int		shortestSpan(void);
		int		longestSpan(void);
		void	addRange(std::vector<int> tab);
	
	private :
		std::vector<int>	_vec;
		unsigned int		_size;

};

class	SpanFull : public std::exception
{
	public :
		char	*what() const throw()
		{
			return (char *) "Error: This Span is already full";
		}
};

class	NotEnoughNumber : public std::exception
{
	public :
		char	*what() const throw()
		{
			return (char *) "Error: There is not enough numbers in the span";
		}
};

#endif