/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:25:58 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/24 15:18:25 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int	main(void)
{
	Data *ptr1 = new Data;
	Data *ptr2;
	uintptr_t raw1;

	std::cout<< "======================================\n";

	ptr1->nb = 0;
	ptr1->str = "Hello World";
	std::cout<< "ptr avant :"<<std::endl;
	std::cout<< ptr1->nb <<std::endl;
	std::cout<< ptr1->str <<std::endl;
	std::cout<< ptr1<<std::endl;
	std::cout<< "\n";
	raw1 = Serialization::serialize(ptr1);

	ptr2 = Serialization::deserialize(raw1);
	std::cout<< "\nptr apres :"<<std::endl;
	std::cout<< ptr2->nb <<std::endl;
	std::cout<< ptr2->str <<std::endl;
	std::cout<< ptr2<<std::endl;


	Data *ptr3 = new Data;
	Data *ptr4;
	uintptr_t raw2;

	std::cout<< "======================================\n";

	ptr3->nb = -2147483648;
	ptr3->str = "blabla";
	std::cout<< "ptr avant :"<<std::endl;
	std::cout<< ptr3->nb <<std::endl;
	std::cout<< ptr3->str <<std::endl;
	std::cout<< ptr3<<std::endl;
	std::cout<< "\n";
	raw2 = Serialization::serialize(ptr3);

	ptr4 = Serialization::deserialize(raw2);
	std::cout<< "\nptr apres :"<<std::endl;
	std::cout<< ptr4->nb <<std::endl;
	std::cout<< ptr4->str <<std::endl;
	std::cout<< ptr4<<std::endl;

	Data *ptr5 = new Data;
	Data *ptr6;
	uintptr_t raw3;

	std::cout<< "======================================\n";

	ptr5->nb = 42;
	ptr5->str = "test";
	std::cout<< "ptr avant :"<<std::endl;
	std::cout<< ptr5->nb <<std::endl;
	std::cout<< ptr5->str <<std::endl;
	std::cout<< ptr5<<std::endl;
	std::cout<< "\n";
	raw3 = Serialization::serialize(ptr5);
	
	ptr6 = Serialization::deserialize(raw3);
	std::cout<< "\nptr apres :"<<std::endl;
	std::cout<< ptr6->nb <<std::endl;
	std::cout<< ptr6->str <<std::endl;
	std::cout<< ptr6<<std::endl;

	std::cout<< "======================================\n";

	delete ptr1;
	delete ptr3;
	delete ptr5;

	return (0);
}
