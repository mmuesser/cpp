/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:19:42 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/15 15:30:15 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public :
		Fixed(void);
		Fixed(const int i_nb);
		Fixed(const float f_nb);
		Fixed(const Fixed &obj);
		~Fixed(void);

		Fixed&	operator=(const Fixed &obj);
		bool	operator>(const Fixed &obj) const;
		bool	operator<(const Fixed &obj) const;
		bool	operator>=(const Fixed &obj) const;
		bool	operator<=(const Fixed &obj) const;
		bool	operator==(const Fixed &obj) const;
		bool	operator!=(const Fixed &obj) const;
		Fixed	operator+(const Fixed &obj) const;
		Fixed	operator-(const Fixed &obj) const;
		Fixed	operator*(const Fixed &obj) const;
		Fixed	operator/(const Fixed &obj) const;
		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);
		static Fixed&	min(Fixed& obj1, Fixed& obj2);
		static Fixed&	max(Fixed& obj1, Fixed& obj2);
		static Fixed const &	min(const Fixed& obj1, const Fixed& obj2);
		static Fixed const &	max(const Fixed& obj1, const Fixed& obj2);


		float 	toFloat(void) const;
		int 	toInt(void) const;

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private :
		int _nb;
		static const int _bits;
	
};

std::ostream &operator<<(std::ostream &ost, const Fixed &obj);

#endif