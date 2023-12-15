/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:19:39 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/15 15:55:33 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed c(Fixed(10) + Fixed(2));
	Fixed d(Fixed(15) / Fixed(2.5f));
	std::cout<< "prefix incrementation : \n";
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;

	std::cout<< "\npostfix incrementation : \n";
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout<< "\nprefix decrementation : \n";
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;

	std::cout<< "\npostfix decrementation : \n";
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;

	std::cout<< "\nmultiplication 5.05 * 2 : \n";
	std::cout << b << std::endl;

	std::cout<< "\naddition 10 + 2 : \n";
	std::cout<< c <<std::endl;

	std::cout<< "\nsoustraction " << c << " - " << b << " : \n";
	std::cout<< c - b <<std::endl;

	std::cout<< "\ndivision  15 / 2.5 : \n";
	std::cout<< d <<std::endl;

	std::cout<<"\nmax " << a << " | " << d <<  " : \n";
	std::cout << Fixed::max(a, d) << std::endl;
	
	std::cout<<"\nmin " << c << " | " << b <<  " : \n";
	std::cout << Fixed::min(c, b) << std::endl;
	return 0;
}