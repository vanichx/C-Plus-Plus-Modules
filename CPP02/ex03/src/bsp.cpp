/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 15:00:26 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/08 17:02:41 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp"
#include "../inc/Fixed.hpp"

Fixed getArea(Point a, Point b, Point c) {

	Fixed area;

	area = ((a.getX() - c.getX()) * (b.getY() - c.getY())) - ((b.getX() - c.getX()) * (a.getY() - c.getY()));
	area = area / Fixed(2);
	
	if (area.toInt() < 0)
		area = area * Fixed(-1);

	return (area);
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {

	Fixed ganzArea = getArea(a, b, c);
	std::cout << "The full area: " << ganzArea << std::endl;

	Fixed firstArea = getArea(point, b, c);
	std::cout << "The A area: " << firstArea << std::endl;
	Fixed secondArea = getArea(a, point, c);
	std::cout << "The B area: " << secondArea << std::endl;
	Fixed thirdArea = getArea(a, b, point);
	std::cout << "The C area: " << thirdArea << std::endl;

	if (firstArea.getRawBits() + secondArea.getRawBits() + thirdArea.getRawBits() == ganzArea.getRawBits())
		return (std::cout << GR "Congratulations the point is inside of a triangle!" R << std::endl, true);
	else
		return (std::cout << RD "Unfortunatly the point is outside of a triangle!" R << std::endl, false);
}

