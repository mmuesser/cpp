/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:31:02 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/30 15:03:39 by mmuesser         ###   ########.fr       */
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
	std::cout<<"\n==============================================\n";
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
	std::cout<<"\n==============================================\n";
	{
		std::vector<int> vec;
		std::vector<int>::iterator it;

		for (int i = 12; i < 42; i++)
			vec.push_back(i);
		for (unsigned int i = 0; i < vec.size(); i++)
			std::cout<< vec[i] <<std::endl;
		it = easyfind(vec, 12);
		if (it == vec.end())
			std::cout<< "Error: this value (12) does not exist"<<std::endl;
		else
			std::cout<< "[12] Found at vec[" << it - vec.begin() << "]."<<std::endl;
	}
	std::cout<<"\n==============================================\n";
	{
		std::vector<int> vec;
		std::vector<int>::iterator it;
		
		for (int i = 0; i < 5; i++)
			vec.push_back(i);
		for (unsigned int i = 0; i < vec.size(); i++)
			std::cout<< vec[i] <<std::endl;
		it = easyfind(vec, 9);
		if (it == vec.end())
			std::cout<< "Error: this value (9) does not exist"<<std::endl;
		else
			std::cout<< "[9] Found at vec[" << it - vec.begin() << "]."<<std::endl;
	}
	return (0);
}