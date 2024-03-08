/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:10:57 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/08 14:41:46 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

int main( void ) 
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	
	return 0;
}

// int main(void) {
	
// 	int first = 20;
// 	int second = 10;
	
// 	std::cout << Y "\nMy tests" R << std::endl;
// 	std::cout << GR "Pre-increment Operator " << ++first << std::endl;
// 	std::cout << "Post-increment Operator " << first++ << std::endl;
// 	std::cout << "Checking the value after post incr operation " R << first << std::endl;
// 	std::cout << RD "Pre-decrement Operator " << --second << std::endl;
// 	std::cout << "Post-decrement Operator " << second-- << std::endl;
// 	std::cout << "Checking the value after post decr operation " R << second << std::endl;
// 	std::cout << GR "Addition operator " R << first + second << std::endl;
// 	std::cout << RD "Deduction operator " R << first - second << std::endl;
// 	std::cout << Y "Multiplication  operator " R << first * second << std::endl;
// 	std::cout << M "Division  operator " R << first / second << std::endl;
// 	std::cout << W "Comparison operator > " R << (first > second) << std::endl;
// 	std::cout << W "Comparison operator < " R << (first < second) << std::endl;
// 	std::cout << W "Comparison operator >= " R << (first >= second) << std::endl;
// 	std::cout << W "Comparison operator <= " R << (first <= second) << std::endl;
// 	std::cout << W "Comparison operator == " R << (first == second) << std::endl;
// 	std::cout << W "Comparison operator != " R << (first != second) << std::endl;

// 	return 0;
// }