/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:19:43 by ipetruni          #+#    #+#             */
/*   Updated: 2024/01/18 14:27:07 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed() {
	std::cout << W "Default constructor called" R << std::endl;
	this->_value = 0;
}

Fixed::Fixed(const Fixed &otherClass) {
	std::cout << GR "Copy constructor called" R << std::endl;
	*this = otherClass;
}

Fixed &Fixed::operator=(const Fixed &other) {
	std::cout << Y "Copy assignment operator called" R << std::endl;
	if (this != &other) {
		this->_value = other._value;
	}
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << RD "Destructor called" R << std::endl;
}

int Fixed::getRawBits() const {
	std::cout << M "getRawBits member function called" R << std::endl;
	return (this->_value);
}

void Fixed::setRawBits(int raw) {
	this->_value = raw;
}
