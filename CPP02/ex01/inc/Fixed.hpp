/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:06:02 by ipetruni          #+#    #+#             */
/*   Updated: 2024/01/18 14:28:38 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>
#include "Colors.h"

class Fixed {
	// Private variables 
	private:
		int _value;
		static const int _ffractionalBits = 8;
	// Constructors ~ Destructors
	public:
		Fixed();
		Fixed(const Fixed& otherClass);
		Fixed &operator=(const Fixed &other);
		Fixed(const int fixedValue);
		Fixed(const float floatValue);
		~Fixed();
	// Public Methods
	public:
		int		toInt(void) const;
		float	toFloat(void) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
};



#endif