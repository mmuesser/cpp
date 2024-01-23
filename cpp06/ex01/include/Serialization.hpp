/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:26:16 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/23 14:54:12 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include <stdint.h>
#include <iostream>

typedef struct s_data
{
	int			nb;
	std::string str;
}	Data;

class Serialization
{
	public :
		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);

	private :
		Serialization(void);
		Serialization(const Serialization &obj);
		~Serialization(void);

		Serialization&	operator=(const Serialization &obj);

};

#endif