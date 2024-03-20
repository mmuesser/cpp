/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:55:44 by mmuesser          #+#    #+#             */
/*   Updated: 2024/02/19 14:07:16 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>

template<typename T>
class	MutantStack : public std::stack<T>
{
	public :
		MutantStack(void);
		MutantStack(const MutantStack<T> &obj);
		~MutantStack(void);

		MutantStack<T>	&operator=(const MutantStack<T> &obj);
		
		typedef typename	std::stack<T>::container_type			container_type;
		typedef typename	container_type::iterator				iterator;
		typedef typename	container_type::reverse_iterator		reverse_iterator;

		iterator				begin(void) {return this->c.begin();};
		iterator				end(void) {return this->c.end();};
		reverse_iterator		rbegin(void) {return this->c.rbegin();};
		reverse_iterator		rend(void) {return this->c.rend();};
};

template<typename T>
MutantStack<T>::MutantStack(void): std::stack<T>()
{
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &obj): std::stack<T>(static_cast<std::stack<T> >(obj))
{
}

template<typename T>
MutantStack<T>::~MutantStack(void)
{
}

template<typename T>
MutantStack<T>&	MutantStack<T>::operator=(const MutantStack<T> &obj)
{
	if (this != &obj)
		static_cast<std::stack<T> >(*this) = static_cast<std::stack<T> >(obj);
	return (*this);
}

#endif