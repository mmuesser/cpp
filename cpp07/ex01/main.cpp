/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_main.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:12:43 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/27 16:37:10 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	const char	str[] = "Hello World";
	const int		tab[] = {0, 1, 2, 3, 4, 5, 42};

	std::cout<< "============STR============"<<std::endl;
	iter(str, 11, &print);
	std::cout<< "\n============INT============"<<std::endl;
	iter(tab, 7, &print);
}