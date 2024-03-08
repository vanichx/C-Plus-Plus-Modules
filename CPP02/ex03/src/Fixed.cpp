/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:04:17 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/08 14:24:46 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() {
	_value = 0;
	// std::cout << GR "Default constructor called" R << std::endl;
}

Fixed::Fixed(int const  fixedValue) {
	this->_value = fixedValue << this->_fractionalBits;
	// std::cout << BL "Int constructor called" R << std::endl;
}

Fixed::Fixed(float const floatValue) {
	this->_value = roundf(floatValue * (1 << _fractionalBits));
	// std::cout << M "Float constructor called" R << std::endl;
}

Fixed::Fixed(const Fixed &otherClass) {
	*this = otherClass;
	// std::cout << W "Copy constructor called" R << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other) {
	if (this != &other) {
		this->_value = other._value;
	}
	return (*this);
	// std::cout << BLD "Copy assignment operator called" R << std::endl;
}

Fixed::~Fixed() {
	// std::cout << RD "Destructor called" R << std::endl;
}

int Fixed::getRawBits() const {
	// std::cout << M "getRawBits member function called" R << std::endl;
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

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
	os << fixed.toFloat();
	return os;
}

// Increment / Decrement operators

Fixed Fixed::operator++() {
	++(this->_value);
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed temp(*this);
	++(*this);
	return (temp);
}

Fixed Fixed::operator--() {
	--(this->_value);
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed temp(*this);
	--(*this);
	return (temp);
}

// Math operators

Fixed Fixed::operator+(const Fixed& other) const {
	return (this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const {
	return (this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const {
	return (this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const {
	return (this->toFloat() / other.toFloat());
}

// Comparison operators

Fixed Fixed::operator>(const Fixed& other) const {
	return (this->getRawBits() > other.getRawBits());
}

Fixed Fixed::operator<(const Fixed& other) const {
	return (this->getRawBits() < other.getRawBits());
}

Fixed Fixed::operator<=(const Fixed& other) const {
	return (this->getRawBits() <= other.getRawBits());
}

Fixed Fixed::operator>=(const Fixed& other) const {
	return (this->getRawBits() >= other.getRawBits());
}

Fixed Fixed::operator==(const Fixed& other) const {
	return (this->getRawBits() == other.getRawBits());
}

Fixed Fixed::operator!=(const Fixed& other) const {
	return (this->getRawBits() != other.getRawBits());
}

// Functions
Fixed& Fixed::min(Fixed &a, Fixed &b) {
	return (a.getRawBits() < b.getRawBits() ? a : b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b) {
	return (a.getRawBits() < b.getRawBits() ? a : b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b) {
	return (a.getRawBits() > b.getRawBits() ? a : b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b) {
	return (a.getRawBits() > b.getRawBits() ? a : b);
}
