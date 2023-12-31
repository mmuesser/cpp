/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:19:32 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/17 15:28:44 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void){
	std::cout<<"Default constructor called"<<std::endl;
	_nb = 0;
}

Fixed::Fixed(const Fixed &obj){
	std::cout<<"Copy constructor called"<<std::endl;
	*this = obj;
}

Fixed&	Fixed::operator=(const Fixed& obj)
{
	std::cout<< "\nFixed operator = called"<<std::endl;
	this->_nb = obj._nb;
	return (*this);
}

Fixed::~Fixed(void){
	std::cout<<"Destructor called"<<std::endl;
}

int		Fixed::getRawBits(void) const
{
	std::cout<< "getRawBits member fonction called"<<std::endl;
	return(_nb);
}

void	Fixed::setRawBits(int const raw){_nb = raw;}

const int	Fixed::_bits = 8;