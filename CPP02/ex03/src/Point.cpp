/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 15:06:14 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/08 16:53:33 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp"

Point::Point():_x(Fixed(0)), _y(Fixed(0)) {
	// std::cout << W "Default constructor called" R << std::endl;
}

Point::Point(float const x, float const y): _x(Fixed(x)), _y(Fixed(y)) {
	// std::cout << W "Floating-point numbers constructor called" R << std::endl;
}

Point::Point(const Point &otherClass):_x(otherClass._x), _y(otherClass._y) {
	// std::cout << BLD "Copy assignment operator called" R << std::endl;
}

Point::~Point() {
	// std::cout << RD "Destructor called" R << std::endl;
}

Fixed	Point::getX() const {
	return (_x);
}

Fixed	Point::getY() const {
	return (_y);
}


