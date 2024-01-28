/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 18:40:16 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/28 21:12:44 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <iostream>

template <typename T>
class	Array
{
	public :
		Array(void);
		Array(unsigned int n);
		Array(const Array<T> &obj);
		~Array(void);

		Array			&operator=(const Array<T> &obj);
		T				&operator[](int i);
		unsigned int	size(void);

	private :
		T	*_array;
		int	_array_size;

		class	OutOfBounds : public std::exception
		{
			public :
				OutOfBounds(void) throw() {};
				~OutOfBounds(void) throw() {};
				char	*what() const throw()
				{
					return (char *) "Array: Index out of bounds";
				}
		};
};

template <typename T>
Array<T>::Array(void)
{
	this->_array = new T[0];
	this->_array = 0;
	this->_array_size = 1;
	std::cout<< "Array default constructor called"<<std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	this->_array = new T[n];
	for (unsigned int i = 0; i < n; i++)
		this->_array[i] = T();
	this->_array_size = n;
	std::cout<< "Array size constructor called"<<std::endl;
}

template <typename T>
Array<T>::Array(const Array<T> &obj)
{
	this->_array = new T[obj._array_size];
	for (int i = 0; i < obj._array_size; i++)
		this->_array[i] = obj._array[i];
	this->_array_size = obj._array_size;
	std::cout<< "Array copy constructor called"<<std::endl;
}

template <typename T>
Array<T>::~Array(void)
{
	delete [] this->_array;
	std::cout<< "Array desctructor called"<<std::endl;
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array<T> &obj)
{
	if (this->_array)
		delete this->_array;
	this->_array = new T[obj._array_size];
	for (int i = 0; i < obj._array_size; i++)
		this->_array[i] = obj._array[i];
	return (*this);
}

template <typename T>
T&	Array<T>::operator[](int i)
{
	if (i < 0 || i >= this->_array_size)
		throw OutOfBounds();
	return (this->_array[i]);
}

template <typename T>
unsigned int	Array<T>::size(void)
{
	return (this->_array_size);
}

#endif