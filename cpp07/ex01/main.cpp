/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:12:43 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/30 15:20:39 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	char	str[] = "Hello World";
	int	tab[] = {0, 1, 2, 3, 4, 5, 42};
	std::string str2[] = {"balbal", "test"};

	std::cout<< "============CHAR *============"<<std::endl;
	iter(str, 11, print<char>);
	std::cout<< "\n============INT============"<<std::endl;
	iter(tab, 7, print<int>);
	std::cout<< "\n============STRING============"<<std::endl;
	iter(str2, 2, print<std::string>);
}