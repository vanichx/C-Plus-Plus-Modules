/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:36:28 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/23 15:50:52 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Span.hpp"

int main()
{
	try {
		Span sp = Span(5);
		
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		
		// // Test with the min and max int's
		// sp.addNumber(2147483647);
		// sp.addNumber(-2147483648);
		
		// Test for addRange function
		// std::vector<int> vectorToAdd(5, 10); // First param amount of numbers that we want to init , second is value to set
		// sp.addRange(vectorToAdd.begin(), vectorToAdd.end());
		
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}
	catch (std::exception & ex) {
		std::cout << ex.what() << std::endl;
	}
	return 0;
}