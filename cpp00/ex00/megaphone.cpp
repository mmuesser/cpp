/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:56:06 by mmuesser          #+#    #+#             */
/*   Updated: 2023/11/30 17:34:07 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
		return (0);
	}
	for (int i = 1; i < ac; i++)
	{
		for (int y = 0; y < (int) std::strlen(av[i]); y++)
			av[i][y] = std::toupper(av[i][y]);
	}
	for (int i = 1; i < (ac - 1); i++)
		std::cout<<av[i];
	std::cout<<av[ac - 1]<<std::endl;
	return (0);
}