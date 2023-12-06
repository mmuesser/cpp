/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:19:38 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/06 18:47:42 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl harl;

	if (ac != 2){
		std::cout<< "There is to many/not enough arguments."<<std::endl;
		return (0);
	}
	harl.complain(av[1]);
	return (0);
}