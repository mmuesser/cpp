/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:19:32 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/14 19:38:54 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	_nb = 0;
}

Fixed::Fixed(const Fixed &obj)
{
	*this = obj;
}

Fixed::Fixed(const int i_nb)
{
	_nb = i_nb << this->_bits;
}

Fixed::Fixed(const float f_nb)
{
	this->_nb  = (int)roundf(f_nb * (1 << this->_bits));
}

Fixed::~Fixed(void){
}


float 	Fixed::toFloat(void) const
{
	return ((float)this->_nb / (1 << this->_bits));
}

int Fixed::toInt( void ) const
{
	return (this->_nb >> this->_bits);
}


Fixed&	Fixed::operator=(const Fixed &obj)
{
	this->_nb = obj.getRawBits();
	return (*this);
}

bool	Fixed::operator>(const Fixed &obj) const
{
	return (this->_nb > obj._nb);
}

bool	Fixed::operator<(const Fixed &obj) const
{
	return (this->getRawBits() < obj.getRawBits());
}

bool	Fixed::operator>=(const Fixed &obj) const
{
	return (this->getRawBits() >= obj.getRawBits());
}

bool	Fixed::operator<=(const Fixed &obj) const
{
	return (this->getRawBits() <= obj.getRawBits());
}

bool	Fixed::operator==(const Fixed &obj) const
{
	return (this->getRawBits() == obj.getRawBits());
}

bool	Fixed::operator!=(const Fixed &obj) const
{
	return (this->getRawBits() != obj.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &obj) const
{
	Fixed tmp;
	tmp._nb = (this->_nb + obj._nb) / (1 << this->_bits);
	return (tmp);
}

Fixed	Fixed::operator-(const Fixed &obj) const
{
	Fixed tmp;
	tmp._nb = (this->_nb - obj._nb) / (1 << this->_bits);
	return (tmp);
}

Fixed	Fixed::operator*(const Fixed &obj) const
{
	Fixed tmp;
	tmp._nb = (this->_nb * obj._nb) / (1 << this->_bits);
	return (tmp);
}

Fixed	Fixed::operator/(const Fixed &obj) const
{
	Fixed tmp;
	tmp._nb = (this->_nb / obj._nb) / (1 << this->_bits);
	return (tmp);
}

Fixed&	Fixed::operator++()
{
	this->_nb = this->_nb + (1 << this->_bits);
	this->_nb = this->_nb >> this->_bits;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	this->_nb += 1;
	return (tmp);
}

Fixed&	Fixed::operator--()
{
	this->_nb = this->_nb - (1 << this->_bits);
	this->_nb = this->_nb >> this->_bits;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;
	this->_nb -= 1;
	return (tmp);
}

std::ostream& operator<<(std::ostream &ost, const Fixed &obj)
{
	ost << obj.toFloat();
	return ost;
}


int		Fixed::getRawBits(void) const
{
	return(_nb);
}

void	Fixed::setRawBits(int const raw)
{
	_nb = raw;
}


const int	Fixed::_bits = 8;