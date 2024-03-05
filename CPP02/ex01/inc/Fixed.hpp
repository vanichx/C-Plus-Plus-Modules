/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:06:02 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/05 15:41:57 by ipetruni         ###   ########.fr       */
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
		static const int _fractionalBits = 8;
	// Constructors
	public:
		Fixed(const int fixedValue); // int constr
		Fixed(const float floatValue); // float constr
		Fixed(); // deafult constr 
		Fixed(const Fixed& otherClass); //  Copy constructor called
		Fixed &operator=(const Fixed &other); // Copy assignment operator called
		
	// ~ Destructors
	public:
		~Fixed();
	// Public Methods
	public:
		int		toInt(void) const;
		float	toFloat(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

	std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
#endif