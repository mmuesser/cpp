/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 19:23:54 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/03 20:02:52 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	
	std::cout<< "adresse str : " << &str<<std::endl;
	std::cout<< "adresse stringPTR : " << stringPTR<<std::endl;
	std::cout<< "adresse stringREF : " << &stringREF<<std::endl;
	std::cout<<std::endl;
	std::cout<< "valeur str : " << str<<std::endl;
	std::cout<< "valeur stringPTR : " << *stringPTR<<std::endl;
	std::cout<< "valeur strREF : " << stringREF<<std::endl;
	return (0);
}