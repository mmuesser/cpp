/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:29:56 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/02 18:11:41 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/PhoneBook.hpp"


PhoneBook::PhoneBook(void){
}

PhoneBook::~PhoneBook(void){
}

Contact::Contact(void){
}

Contact::~Contact(void){
}

void	PhoneBook::add(int i)
{
	std::string	str;
	int	j;

	std::cout << "-------------------------"<<std::endl;
	do {
		std::cout<< "Enter first name : ";
		getline(std::cin, str);
	} while (str.empty());
	rep[i].setFName(str);
	do {
		std::cout<< "Enter last name : ";
		getline(std::cin, str);
	} while (str.empty());
	rep[i].setLName(str);
	do {
		std::cout<< "Enter nickname : ";
		getline(std::cin, str);
	} while (str.empty());
	rep[i].setNName(str);
	do
	{
		std::cout<< "Enter phone number : ";
		getline(std::cin, str);
	} while (str.empty() || !(std::istringstream(str) >> j));
	rep[i].setPhoneNumber(str);
	do {
		std::cout<< "Enter darkest secret : ";
		getline(std::cin, str);
	} while (str.empty());
	rep[i].setSecret(str);
	std::cout << "-------------------------"<<std::endl;
}

#include <string>

void	PhoneBook::search()
{
	std::string str;
	int	i = -1;

	std::cout << "--------------------------------------------------"<<std::endl;
	while (++i < 8 && !rep[i].getFName().empty())
	{
		std::cout<< std::setfill(' ') << std::setw(10);
		std::cout<< i << " | ";
		std::cout<< std::setfill(' ') << std::setw(10);
		int y = -1;
		str = rep[i].getFName();
		while (str[++y])
		{
			if (y == 9 && str[y + 1])
			{
				str[y] = '.';
				str = str.substr(0, y + 1);
				break ;
			}
		}
		std::cout<< str << " | ";
		std::cout<< std::setfill(' ') << std::setw(10);
		y = -1;
		str = rep[i].getLName();
		while (str[++y])
		{
			if (y == 9 && str[y + 1])
			{
				str[y] = '.';
				str = str.substr(0, y + 1);
				break ;
			}
		}
		std::cout<< str << " | ";
		std::cout<< std::setfill(' ') << std::setw(10);
		y = -1;
		str = rep[i].getNName();
		while (str[++y])
		{
			if (y == 9 && str[y + 1])
			{
				str[y] = '.';
				str = str.substr(0, y + 1);
				break ;
			}
		}
		std::cout<< str <<std::endl;
	}
	std::cout << "--------------------------------------------------"<<std::endl;
	std::cout<< "Enter index's contact : ";
	getline(std::cin, str);
	std::istringstream(str) >> i;
	if (str.size() > 1 || str[0] < '0' || str[0] > '7')
		std::cout<< "Wrong Index" <<std::endl;
	else
		display(i);
}

void	PhoneBook::display(int i)
{
	if (rep[i].getFName().empty())
	{
		std::cout<< "This contact doesn't exist." <<std::endl;
		return ;
	}
	std::cout << "-------------------------"<<std::endl;
	std::cout<< "First Name : " << rep[i].getFName()<<std::endl;
	std::cout<< "Last Name : " << rep[i].getLName()<<std::endl;
	std::cout<< "Nickname : " << rep[i].getNName()<<std::endl;
	std::cout<< "Phone Number : " << rep[i].getPhoneNumber()<<std::endl;
	std::cout<< "Darkest Secret : " << rep[i].getSecret()<<std::endl;
	std::cout << "-------------------------"<<std::endl;
}