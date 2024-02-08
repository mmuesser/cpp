/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:31:02 by mmuesser          #+#    #+#             */
/*   Updated: 2024/02/07 14:02:18 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void)
{
	{
		std::vector<int> vec;
		std::vector<int>::iterator it;

		for (int i = 0; i < 5; i++)
			vec.push_back(i);
		for (unsigned int i = 0; i < vec.size(); i++)
			std::cout<< vec[i] <<std::endl;
		it = easyfind(vec, 4);
		if (it == vec.end())
			std::cout<< "Error: this value (4) does not exist"<<std::endl;
		else
			std::cout<< "[4] Found at vec[" << it - vec.begin() << "]."<<std::endl;
	}
	std::cout<<"==============================================\n";
	{
		std::vector<int> vec;
		std::vector<int>::iterator it;

		for (int i = -6; i < 7; i++)
			vec.push_back(i);
		for (unsigned int i = 0; i < vec.size(); i++)
			std::cout<< vec[i] <<std::endl;
		it = easyfind(vec, -9);
		if (it == vec.end())
			std::cout<< "Error: this value (-9) does not exist"<<std::endl;
		else
			std::cout<< "[-9] Found at vec[" << it - vec.begin() << "]."<<std::endl;
	}
	std::cout<<"==============================================\n";
	{
		std::vector<char> vec;
		std::vector<char>::iterator it;

		for (int i = 33; i < 42; i++)
			vec.push_back(i);
		for (unsigned int i = 0; i < vec.size(); i++)
			std::cout<< vec[i] <<std::endl;
		it = easyfind(vec, 40);
		if (it == vec.end())
			std::cout<< "Error: this value ('(') does not exist"<<std::endl;
		else
			std::cout<< "['('] Found at vec[" << it - vec.begin() << "]."<<std::endl;
	}
	std::cout<<"==============================================\n";
	{
		std::vector<int> vec;
		std::vector<int>::iterator it;
		
		for (int i = 0; i < 5; i++)
			vec.push_back(i);
		for (unsigned int i = 0; i < vec.size(); i++)
			std::cout<< vec[i] <<std::endl;
		it = easyfind(vec, 9);
		if (it == vec.end())
			std::cout<< "Error: this value (12) does not exist"<<std::endl;
		else
			std::cout<< "[9] Found at vec[" << it - vec.begin() << "]."<<std::endl;
	}
	return (0);
}