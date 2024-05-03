/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 10:28:45 by ipetruni          #+#    #+#             */
/*   Updated: 2024/05/03 13:54:18 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PmergeMe.hpp"

template <typename Type>
void PrintList(const std::list<Type> & lst) /* debug */
{
	for (typename std::list<Type>::const_iterator it = lst.cbegin(); it != lst.cend(); ++it)
	{
		std::cout << *it << "\t";
	}
	std::cout << std::endl;
}											/* debug */

PmergeMe::PmergeMe() {
	// std::cout << "PmergeMe default constructor called" << std::endl;
}

PmergeMe::PmergeMe(PmergeMe &other) {
	// std::cout << "PmergeMe copy constructor called" << std::endl;
	*this = other;
}

PmergeMe &PmergeMe::operator=(PmergeMe &other) {
	// std::cout << "PmergeMe assignment operator called" << std::endl;
	if (this != &other) {
		_myList.clear();
		for (std::list<int>::iterator it = _myList.begin(); it != _myList.end(); ++it) {
			_myList.push_back(*it);
		}
		_myVector = other._myVector;
	}
	return *this;
}

PmergeMe::~PmergeMe() {
	// std::cout << "PmergeMe destructor called" << std::endl;
}

// Methods for <vector> container

void PmergeMe::assignVector(char **argv) {
	
	int i = 1;
	
	while (argv[i]) {
		
		std::string str = argv[i];
		if (str.find_first_not_of("0123456789 ") != std::string::npos) {
			throw std::runtime_error("Error: invalid input");
			return;
		}
		
		int numToAssign = std::atoi(argv[i]);
		if (numToAssign < 0) {
			throw std::runtime_error("Error: invalid input");
			return;
		}
		else
			_myVector.push_back(numToAssign);
		++i;
	}
}


// Methods for <list> container

void PmergeMe::assignList(char **argv) {
	
	int i = 1;
	
	while (argv[i]) {
		
		std::string str = argv[i];
		if (str.find_first_not_of("0123456789 ") != std::string::npos) {
			throw std::runtime_error("Error: invalid input");
			return;
		}
		
		int numToAssign = std::atoi(argv[i]);
		if (numToAssign < 0) {
			throw std::runtime_error("Error: invalid input");
			return;
		}
		else
			_myList.push_back(numToAssign);
		++i;
	}
}