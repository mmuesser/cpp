/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 11:51:15 by mmuesser          #+#    #+#             */
/*   Updated: 2024/03/20 18:43:33 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// https://www.maxicours.com/se/cours/utiliser-une-pile-pour-evaluer-une-notation-en-polonais-inverse/

#include "RPN.hpp"

int	in_str(std::string str, char c)
{
	for (size_t i = 0; i < str.size(); i++)
	{
		if (str[i] == c)
			return (i);
	}
	return (-1);
}

int	main(int ac, char **av)
{
	std::stack<unsigned int>	pile;
	std::string operande = "0123456789";
	std::string operateur = "+-/*";
	if (ac != 2)
		return (std::cout<< "Error 1" <<std::endl, 0);
	for (size_t i = 0; i < strlen(av[1]); i++)
	{
		if ((av[1][i] != ' ' && av[1][i + 1] != ' ') && (!in_str(operateur, av[1][i]) && !in_str(operande, av[1][i])))
			return (std::cout<< "Error 2" <<std::endl, 0);
		if (i > 2 && in_str(operande, av[1][i]) != -1 && in_str(operande, av[1][i + 2]) != -1)
		{
			unsigned int a = pile.top();
			pile.pop();
			unsigned int c = in_str(operateur, av[1][i + 6]);
			switch (c)
			{
				case 0: a = a + atoi(&av[1][i]); break;
				case 1: a = a - atoi(&av[1][i]); break;
				case 2: a = a / atoi(&av[1][i]); break;
				case 3: a = a * atoi(&av[1][i]); break;
			}
			pile.push(a);
			continue ;
		}
		else if (in_str(operande, av[1][i]) != -1)
			pile.push(atoi(&av[1][i]));
		else if (in_str(operateur, av[1][i]) != -1 && pile.size() != 2)
			return (std::cout<< "Error 3" <<std::endl, 0);
		else if (in_str(operateur, av[1][i]) != -1)
		{
			unsigned int a = pile.top();
			pile.pop();
			unsigned int b = pile.top();
			pile.pop();
			unsigned int c = in_str(operateur, av[1][i]);
			switch (c)
			{
				case 0: b = b + a; break;
				case 1: b = b - a; break;
				case 2: b = b / a; break;
				case 3: b = b * a; break;
			}
			pile.push(b);
		}
		std::cout<< pile.top() <<std::endl;
	}
	if (pile.size() != 1)
		return (std::cout<< "Error 4" <<std::endl, 0);
	std::cout<< pile.top() <<std::endl;
	return (0);
}