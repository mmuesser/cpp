/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:19:32 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/08 18:40:36 by mmuesser         ###   ########.fr       */
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
	_nb = obj.getRawBits();
}

Fixed::Fixed(const int i_nb)
{
	std::cout<< "Int constructor called"<<std::endl;
	_nb = i_nb;
}

Fixed::Fixed(const float f_nb)
{
	std::cout<< "Float constructor called"<<std::endl;
	_nb = f_nb;
}

Fixed&	Fixed::operator=(Fixed& other)
{
	std::cout<< "Fixed::operator=(Fixed&) called"<<std::endl;
	this->_nb = other.getRawBits();
	return (*this);
};

Fixed::~Fixed(void){
	std::cout<<"Destructor called"<<std::endl;
}

/*--------------------------------------------------------*/

float 	toFloat(void) const
{
	
}

int toInt( void ) const
{

}

/*--------------------------------------------------------*/

int		Fixed::getRawBits(void) const{
	std::cout<< "getRawBits member fonction called"<<std::endl;
	return(_nb);}
void	Fixed::setRawBits(int const raw){_nb = raw;}

const int	Fixed::_bits = 8;