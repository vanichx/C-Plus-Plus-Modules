/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:04:17 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/04 12:11:04 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"
#include <iostream>

Fixed::Fixed() {
	_value = 0;
	std::cout << GR "Default constructor called" R << std::endl;
}

Fixed::Fixed(int const  fixedValue) {
	this->_value = fixedValue << this->_fractionalBits;
	std::cout << BL "Int constructor called" R << std::endl;
}

Fixed::Fixed(float const floatValue) {
	this->_value = roundf(floatValue * (1 << _fractionalBits));
	std::cout << M "Float constructor called" R << std::endl;
}

Fixed::Fixed(const Fixed &otherClass) {
	*this = otherClass;
	std::cout << W "Copy constructor called" R << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other) {
	if (this != &other) {
		this->_value = other._value;
	}
	return (*this);
	std::cout << BLD "Copy assignment operator called" R << std::endl;
}

Fixed::~Fixed() {
	std::cout << RD "Destructor called" R << std::endl;
}

int Fixed::getRawBits() const {
	std::cout << M "getRawBits member function called" R << std::endl;
	return (this->_value);
}

void Fixed::setRawBits(int raw) {
	this->_value = raw;
}

int	Fixed::toInt(void) const {
	return (this->_value >> _fractionalBits);
}

float Fixed::toFloat(void) const {
	return ((float)this->_value / (float)(1 << this->_fractionalBits));
}

// std::ostream& operator<<(std::ostream& os, const Fixed& _value) {
// 	// os << 
// }