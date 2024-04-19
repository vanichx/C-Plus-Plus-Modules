/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:04:51 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/19 13:03:28 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/easyfind.hpp"

template <typename Type>
void printContainer(Type someContainer)
{
	typename Type::iterator it = someContainer.begin();
	for(; it != someContainer.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout << std::endl;
}

int main()
{
	/*		Test with std::vector container		*/
	std::cout << GR BLD "\nTest with std::vector container" R << std::endl;
	
	try {
		std::vector<int> myVector;

		myVector.push_back(1);
		myVector.push_back(2);
		myVector.push_back(3);
		myVector.push_back(4);
		myVector.push_back(5);
		easyfind(myVector, 2);
		printContainer(myVector);
	}
	catch (std::out_of_range & ex) {
		std::cout << ex.what() << std::endl;
	}
	
	/*		Test with std::list container		*/
	std::cout << Y BLD "Test with std::list container" R << std::endl;
	try {
		std::list<int> myList;

		myList.push_back(10);
		myList.push_back(20);
		myList.push_back(30);
		myList.push_back(40);
		myList.push_back(50);
		easyfind(myList, 40);
		printContainer(myList);
	}
	catch (std::out_of_range & ex) {
		std::cout << ex.what() << std::endl;
	}

	/*		Test with std::deque container		*/
	std::cout << M BLD "Test with std::deque container" R << std::endl;
	try {
		std::deque<int> myDeque;

		myDeque.push_back(100);
		myDeque.push_back(200);
		myDeque.push_back(300);
		myDeque.push_back(400);
		myDeque.push_back(500);
		easyfind(myDeque, 200);
		printContainer(myDeque);
	}
	catch (std::out_of_range & ex) {
		std::cout << ex.what() << std::endl;
	}
}