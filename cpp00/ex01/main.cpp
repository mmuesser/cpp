/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:53:08 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/07 15:35:38 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	PhoneBook my_phone;
	std::string	command;
	int	i;

	i = 0;
	while (command != "EXIT")
	{
		std::cout<< "Enter command : ";
		std::getline(std::cin, command);
		if (command == "ADD")
		{
			my_phone.add(i % 8);
			i++;
		}
		if (command == "SEARCH")
			my_phone.search();
	}
	return (0);
}