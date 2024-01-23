/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:36:49 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/23 14:56:31 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <time.h>

Base	*generate(void)
{
	Base *ptr = NULL;

	int i = rand() % 3;
	if (i == 0)
	{
		ptr = new A();
		std::cout << "Create a A object"<<std::endl;
	}
	else if (i == 1)
	{
		ptr = new B();
		std::cout << "Create a B object"<<std::endl;
	}
	else if (i == 2)
	{
		ptr = new C();
		std::cout << "Create a C object"<<std::endl;
	}
	return (ptr);
}

void	identify(Base *p)
{
	A* pa = dynamic_cast<A *>(p);
	B* pb = dynamic_cast<B *>(p);
	C* pc = dynamic_cast<C *>(p);

	if (pa != 0)
		std::cout<< p << " is a A pointer" <<std::endl;
	else if (pb != 0)
		std::cout<< p << " is a B pointer" <<std::endl;
	else if (pc != 0)
		std::cout<< p << " is a C pointer" <<std::endl;
	else
		std::cout<< "Error"<<std::endl;
}

void	identify(Base &p)
{
	try
	{
		A &ra = dynamic_cast<A &>(p);
		std::cout<< &ra << " is a A reference"<<std::endl;
		return ;
	}
	catch(std::exception const &e)
	{
	}
	try
	{
		B &rb = dynamic_cast<B &>(p);
		std::cout<< &rb << " is a B reference"<<std::endl;
		return ;
	}
	catch(std::exception const &e)
	{
	}
	try
	{
		C &rc = dynamic_cast<C &>(p);
		std::cout<< &rc << " is a C reference"<<std::endl;
		return ;
	}
	catch(std::exception const &e)
	{
	}
	std::cout<< "Error"<<std::endl;
}

int	main(void)
{
	srand(time(0));
	for (int i = 0; i < 10; i++)
	{
		std::cout<< "====================================="<<std::endl;
		Base *p = generate();
		identify(p);
		identify(*p);
		delete p;
	}
	std::cout<< "====================================="<<std::endl;
	return (0);
}