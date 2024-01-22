/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:26:11 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/22 14:21:27 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

Serialization::Serialization(void) {}

Serialization::Serialization(const Serialization &obj) {(void) obj;}

Serialization::~Serialization(void) {}

Serialization&	Serialization::operator=(const Serialization &obj) 
{
	(void) obj;
	return (*this);
}

uintptr_t	Serialization::serialize(Data *ptr)
{
	uintptr_t raw;
	raw = reinterpret_cast<uintptr_t>(ptr);
	return raw;
}

Data*	Serialization::deserialize(uintptr_t raw)
{
	Data *ptr;

	ptr = reinterpret_cast<Data *>(raw);
	return (ptr);
}