/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:36:28 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/21 17:20:24 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Span.hpp"

int main()
{
	try {
		Span sp = Span(100);
		
		// sp.addNumber(6);
		// sp.addNumber(3);
		// sp.addNumber(17);
		// sp.addNumber(9);
		// sp.addNumber(11);
		sp.addNumbers(95);
		
		std::cout << RD "Shortest span: " R << sp.shortestSpan() << std::endl;
		std::cout << GR "Longest span: " R << sp.longestSpan() << std::endl;
	}
	catch (std::exception & ex) {
		std::cout << ex.what() << std::endl;
	}
	return 0;
}