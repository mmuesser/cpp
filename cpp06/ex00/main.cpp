/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 14:03:48 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/13 15:26:42 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

#include <iostream>

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout<< "Please enter one number" <<std::endl;
		return (0);
	}
	ScalarConverter::convert(av[1]);
	return (0);
}