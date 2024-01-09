/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 09:27:06 by ipetruni          #+#    #+#             */
/*   Updated: 2024/01/09 10:23:15 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define GREEN   "\033[32m"
#define RESET   "\033[0m"

int main() {
	std::string myString = "HI THIS IS BRAIN";
	std::string *stringPTR = &myString;
	std::string& stringREF = myString;

	std::cout << "Memory address of the string variable: " << GREEN << &myString << RESET << std::endl;
	std::cout << "Memory address held by stringPTR: " << GREEN << stringPTR << RESET << std::endl;
	std::cout << "Memore address held by stringREF: " << GREEN << &stringREF << RESET << std::endl;

	std::cout << "The value of the string variable: " << GREEN << myString << RESET << std::endl;
	std::cout << "The value pointed to by stringPTR: " << GREEN << *stringPTR << RESET << std::endl;
	std::cout << "The value pointed to by stringREF: " << GREEN << stringREF << RESET << std::endl;
}