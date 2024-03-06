/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:06:02 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/06 16:27:16 by ipetruni         ###   ########.fr       */
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
	
	// Increment / Decrement operators
	public:
	// Pre-increment Operator
		Fixed operator++();
	// Post-increment Operator
		Fixed operator++(int);
	// Pre-decrement Operator
		Fixed operator--();
	// Post-decrement Operator
		Fixed operator--(int);

	// Math operators
	public:
	// Addition operator
		Fixed operator+(const Fixed& other) const;
	// Deduction operator
		Fixed operator-(const Fixed& other) const;
	// Multiplication operator
		Fixed operator*(const Fixed& other) const;
	// Division operator
		Fixed operator/(const Fixed& other) const;

	// Comparison operators
	public:
	//
		Fixed operator>(const Fixed& other) const;
		Fixed operator<(const Fixed& other) const;



	

};

	std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
#endif