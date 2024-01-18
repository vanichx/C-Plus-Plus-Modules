/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:04:17 by ipetruni          #+#    #+#             */
/*   Updated: 2024/01/18 14:34:50 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed() {}

// Fixed::Fixed(int fixedValue) {
	
// }

// Fixed::Fixed(float floatValue) {
	
// }

Fixed::Fixed(const Fixed &otherClass) {
	*this = otherClass;
}

Fixed &Fixed::operator=(const Fixed &other) {
	if (this != &other) {
		this->_value = other._value;
	}
	return (*this);
}

Fixed::~Fixed() {}
