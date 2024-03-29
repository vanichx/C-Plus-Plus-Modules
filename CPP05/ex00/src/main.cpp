/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:25:45 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/29 15:20:05 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

int main() 
{
	std::cout << BLD Y "Test 1"R << std::endl;
	try	{
		Bureaucrat c("Kostya", 1523434);	
	}
	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << BLD Y "Test 2"R << std::endl;
	try	{
		Bureaucrat c("Jack", -3223);	
	}
	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl;

	// std::cout << BLD Y "Test 3"R << std::endl;
	// try {
	// 	Bureaucrat a("Rostik", 140);
	// 	for (int i = 0; i < 100; i++)
	// 	{
	// 		a.decrementGrade();
	// 	}
	// }
	// catch (std::exception & ex) {
	// 	std::cout << ex.what() << std::endl;
	// }
	// std::cout << std::endl;
	
	// std::cout << BLD Y "Test 4"R << std::endl;
	// try {
	// 	Bureaucrat b("Erik", 10);
	// 	for (int i = 0; i < 100; i++)
	// 	{
	// 		b.incrementGrade();
	// 	}
	// }	
	// catch (std::exception & ex) {
	// 	std::cout << ex.what() << std::endl;
	// }
	
	return 0;
}