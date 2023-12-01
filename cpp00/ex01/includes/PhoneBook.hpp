/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:35:52 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/01 17:57:41 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONEBOOK_H
#define	PHONEBOOK_H

#include "Contact.hpp"

class	PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);

		void	ADD(int i);
		void	SEARCH();

	private:
		Contact	rep[8];
};

#endif