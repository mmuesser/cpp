/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:35:52 by mmuesser          #+#    #+#             */
/*   Updated: 2023/11/30 18:53:50 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONEBOOK_H
#define	PHONEBOOK_H

class	Contact
{
	std::string	f_name;
	std::string	l_name;
	std::string	nickname;
	//int	phone_number;
	std::string	secret;
}

class	PhoneBook
{
	public:
	

	private:
		Contact	rep[8];
}
#endif