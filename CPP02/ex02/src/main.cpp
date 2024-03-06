/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:10:57 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/06 16:25:20 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

int main( void ) 
{
	Fixed a;

	Fixed b;

	///////////////////////////////////
	std::cout << b << std::endl;
	std::cout << ++b << std::endl;
	std::cout << b << std::endl;
	std::cout << b++ << std::endl;
	std::cout << b << std::endl;
	///////////////////////////////////
	
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	// std::cout << b << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;
	
	
	
	std::cout << "Addition operator " << a + b << std::endl;
	std::cout << "Deduction operator " << a - b << std::endl;
	std::cout << "a = "<< a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "Multiplication  operator " << a * b << std::endl;
	std::cout << "Division  operator " << a / b << std::endl;
	std::cout << "Comparison operator > " << (a > b) << std::endl;
	

	
	
	
	
	
	
	return 0;

}
