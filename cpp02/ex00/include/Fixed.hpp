/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:19:42 by mmuesser          #+#    #+#             */
/*   Updated: 2023/12/14 16:51:21 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	public :
		Fixed(void);
		Fixed(const Fixed &obj);
		~Fixed(void);

		Fixed&	operator=(const Fixed &obj);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private :
		int _nb;
		static const int _bits;
	
};

#endif