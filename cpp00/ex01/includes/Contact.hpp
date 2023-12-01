/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:01:57 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/01 18:22:19 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>

class	Contact
{
	public :
		Contact(void);
		~Contact(void);

		std::string	getFName(void) const;
		std::string	getLName(void) const;
		std::string	getNName(void) const;
		std::string	getPhoneNumber(void) const;
		std::string	getSecret(void) const;

		void	setFName(std::string);
		void	setLName(std::string);
		void	setNName(std::string);
		void	setPhoneNumber(std::string);
		void	setSecret(std::string);

	private :
		std::string	f_name;
		std::string	l_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	secret;
};

#endif