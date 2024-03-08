/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 15:00:49 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/08 16:54:09 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
	
	private:
	// A Fixed const attribute x.
		const Fixed _x;
	// A Fixed const attribute y.
		const Fixed _y;
	public:
	// A default constructor that initializes x and y to 0.
		Point();
	// A constructor that takes as parameters two constant floating-point numbers.
		Point(float const x, float const y);
	// A copy constructor.
		Point(const Point &otherClass);
	// A copy assignment operator overload.
		Point &operator=(Point &copy);
	// A destructor.
		~Point();
	
	public:
	// Getter for x.
		Fixed getX() const;
	// Getter for y.
		Fixed getY() const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif