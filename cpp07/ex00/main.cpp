/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:48:42 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/24 17:20:22 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main(void)
{
	std::cout<< "=======STRING======="<<std::endl;
	std::string str1 = "hello";
	std::string str2 = "world";

	std::cout<< "Avant : "<<std::endl;
	std::cout<< "str1 : " << str1<<std::endl;
	std::cout<< "str2 : " << str2<<std::endl;
	swap(&str1, &str2);
	std::cout<< "\nApres : "<<std::endl;
	std::cout<< "str1 : " << str1<<std::endl;
	std::cout<< "str2 : " << str2<<std::endl;
	std::cout<< "\n";
	std::cout<< "min : " << min(&str1, &str2)<<std::endl;
	std::cout<< "max : " << max(&str1, &str2)<<std::endl;

	std::cout<< "\n=======INT======="<<std::endl;
	int i = 1;
	int y = 42;

	std::cout<< "Avant : "<<std::endl;
	std::cout<< "i : " << i<<std::endl;
	std::cout<< "y : " << y<<std::endl;
	swap(&i, &y);
	std::cout<< "\nApres : "<<std::endl;
	std::cout<< "i : " << i<<std::endl;
	std::cout<< "y : " << y<<std::endl;
	std::cout<< "\n";
	std::cout<< "min : " << min(&i, &y)<<std::endl;
	std::cout<< "max : " << max(&i, &y)<<std::endl;
	return (0);
}