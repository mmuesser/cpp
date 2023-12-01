/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:29:56 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/01 18:34:13 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/PhoneBook.hpp"


PhoneBook::PhoneBook(void)
{
	std::cout<< "Phonebook constructor called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout<< "Phonebook destructor called" << std::endl;
	return ;
}

Contact::Contact(void)
{
	std::cout<< "Contact constructor called" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	std::cout<< "Contact destructor called" << std::endl;
	return ;
}

void	PhoneBook::ADD(int i)
{
	std::string	str;

	std::cout << "-------------------------"<<std::endl;
	std::cout<< "Enter first name : ";
	getline(std::cin, str);
	rep[i].setFName(str);
	std::cout<< "Enter last name : ";
	getline(std::cin, str);
	rep[i].setLName(str);
	std::cout<< "Enter nickname : ";
	getline(std::cin, str);
	rep[i].setNName(str);
	// std::cout<< "Enter phone number : ";
	// getline(std::cin, rep.phone_number);
	std::cout<< "Enter darkest secret : ";
	getline(std::cin, str);
	rep[i].setSecret(str);
	std::cout << "-------------------------"<<std::endl;
}

void	PhoneBook::SEARCH()
{
	int	i = -1;
	while (!rep[++i].getFName().empty())
		std::cout<< i << " | " << rep[i].getFName() << " | " << rep[i].getLName() << " | " << rep[i].getNName() <<std::endl;
	
// std::string index;
// getline(std::cin, index);
// line -= 48;
}
