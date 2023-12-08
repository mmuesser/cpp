/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:19:42 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/08 18:39:45 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	public :
		Fixed(void);
		Fixed(const int i_nb);
		Fixed(const float f_nb);
		Fixed(const Fixed &obj);
		~Fixed(void);

		Fixed&	operator=(Fixed&);

		float 	toFloat(void) const;
		int 	toInt(void) const;

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private :
		int _nb;
		static const int _bits;
	
};

#endif