/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:19:32 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/17 16:28:40 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout<<"Default constructor called"<<std::endl;
	_nb = 0;
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout<<"Copy constructor called"<<std::endl;
	*this = obj;
}

Fixed::Fixed(const int i_nb)
{
	std::cout<< "Int constructor called"<<std::endl;
	_nb = i_nb << this->_bits;
}

Fixed::Fixed(const float f_nb)
{
	std::cout<< "Float constructor called"<<std::endl;
	this->_nb  = (int)roundf(f_nb * (1 << this->_bits));
}

Fixed::~Fixed(void){
	std::cout<<"Destructor called"<<std::endl;
}


float 	Fixed::toFloat(void) const
{
	return (float)this->_nb / (1 << this->_bits);
}

int Fixed::toInt( void ) const
{
	return this->_nb >> this->_bits;
}


Fixed&	Fixed::operator=(const Fixed &obj)
{
	std::cout<< "Fixed operator = called"<<std::endl;
	this->_nb = obj._nb;
	return (*this);
}

std::ostream & operator<<(std::ostream &ost, const Fixed &obj)
{
	ost << obj.toFloat();
	return ost;
}


int		Fixed::getRawBits(void) const
{
	std::cout<< "getRawBits member fonction called"<<std::endl;
	return(_nb);
}

void	Fixed::setRawBits(int const raw){_nb = raw;}

const int	Fixed::_bits = 8;