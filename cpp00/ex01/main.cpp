/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:53:08 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/01 17:33:03 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/PhoneBook.hpp"

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
			if (i == 7)
				i = 0;
			my_phone.ADD(i);
			i++;
		}
		if (command == "SEARCH")
			my_phone.SEARCH();
	}
	return (0);
}