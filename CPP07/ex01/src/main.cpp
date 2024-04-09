/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:35:59 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/09 18:11:34 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/iter.hpp"


void forCharArray(std::string & str) {

	for (size_t i = 0; i < str.length(); i++) {
		std::cout << (str[i]);
	}
	std::cout << std::endl;
}

void forIntArray(int & i) {
	std::cout << i << std::endl;
}

void forFloatArray(float & f) {
	std::cout << f << std::endl;
}



int main( void )
{ 
	std::cout << "\nFirst test with " GR BLD "array of std::string's" R << std::endl;
	int size = 5;
	std::string arrStr[] = {"Hello", "World", "42", "Wolfsburg", "C++"};
	::iter( arrStr, size, forCharArray);
	std::cout << "End of " Y BLD "First " R "test\n" << std::endl;
	
	std::cout << "Second test with " M BLD "array of int's" R << std::endl;
	int arrInt[] = {1, 2, 3, 4, 5};
	::iter( arrInt, size, forIntArray);
	std::cout << "End of " Y BLD "Second " R "test\n" << std::endl;
	
	std::cout << "Third test with " BL BLD "array of float's" R << std::endl;
	float arrFloat[] = {11.1, 22.2, 33.3, 44.4, 55.5};
	::iter( arrFloat, size, forFloatArray);
	std::cout << "End of " Y BLD "Third " R "test\n" << std::endl;
	
	return 0;
}