/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 10:28:45 by ipetruni          #+#    #+#             */
/*   Updated: 2024/05/03 16:13:45 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PmergeMe.hpp"

// template <typename Type>
// void PrintList(const std::list<Type> & lst) /* debug */
// {
// 	for (typename std::list<Type>::const_iterator it = lst.cbegin(); it != lst.cend(); ++it)
// 	{
// 		std::cout << *it << "\t";
// 	}
// 	std::cout << std::endl;
// }											/* debug */

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


void PmergeMe::insertionSortVector() {
	
	int n = _myVector.size();

	if (n <= 1)
		return;
	
	for(int i = 1; i < n; ++i) {
		
		int key = _myVector[i];
		int j = i - 1;
		
		while (j >= 0 && _myVector[j] > key) {
			_myVector[j + 1] = _myVector[j];
			--j;
		}
		_myVector[j + 1] = key;
	}
	
}

void PmergeMe::mergeSortVector(int left, int right) {
	if (left < right) 
	{
		int mid = left + (right - left) / 2;
		mergeSortVector(left, mid);
		mergeSortVector(mid + 1, right);
		merge(_myVector, left, mid, right);
	}
}


void PmergeMe::merge(std::__1::vector<int> &arr, int left, int mid, int right) {
	int n1 = mid - left + 1;
	int n2 = right - mid;

	std::vector<int> leftArr(n1);
	std::vector<int> rightArr(n2);

	for (int i = 0; i < n1; ++i) {
		leftArr[i] = arr[left + i];
	}
	
	for (int i = 0; i < n2; ++i) {
		rightArr[i] = arr[mid + 1 + i];
	}

	int i = 0, j = 0, k = left;
	
	while (i < n1 && j < n2) {
		if (leftArr[i] <= rightArr[j]) {
			arr[k] = leftArr[i];
			++i;
		} else {
			arr[k] = rightArr[j];
			++j;
		}
		++k;
	}
	while (i < n1) {
		arr[k] = leftArr[i];
		++i;
		++k;
	}
	while (j < n2) {
		arr[k] = rightArr[j];
		++j;
		++k;
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

void PmergeMe::insertionSortList() {
	
	if (_myList.size() <= 1)
		return;
	
	std::list<int>::iterator iter = std::next(_myList.begin()); // Here is actual starting position of list container

	while (iter != _myList.end()) {
		int key = *iter;
		
		std::list<int>::iterator j = iter;
		std::list<int>::iterator prev = std::prev(j);

		while (j != _myList.begin() && *prev > key) {
			*j = *prev; // Here im moving the element to the right position
			--j;
			--prev;
		}
		// Here im placing key to correct position
		*j = key;

		++iter;
	}
}

void PmergeMe::mergeSortList(std::list<int>& _myList) {
	
	if (_myList.size() <= 1) 
		return;

	std::list<int> left, right;
	std::list<int>::iterator iter = _myList.begin();
	int middle = _myList.size() / 2;

	for (int i = 0; i < middle; ++i) {
		left.push_back(*iter);
		++iter;
	}
	while (iter != _myList.end()) {
		right.push_back(*iter);
		++iter;
	}

	mergeSortList(left);
	mergeSortList(right);

	_myList.clear();
	mergeList(left, right);
}

void PmergeMe::mergeList(std::__1::list<int> &left, std::__1::list<int> &right) {
	
	std::list<int>::iterator l = left.begin();
	std::list<int>::iterator r = right.begin();

	while (l != left.end() && r != right.end()) {
		if (*l <= *r) {
			_myList.push_back(*l);
			++l;
		} else {
			_myList.push_back(*r);
			++r;
		}
	}

	while (l != left.end()) {
		_myList.push_back(*l);
		++l;
	}
	while (r != right.end()) {
		_myList.push_back(*r);
		++r;
	}
}



// Main sorting method

void PmergeMe::sortAndPrint() {

	int vector_size = _myVector.size();
	int list_size = _myList.size();

	
	std::cout << "Before: ";
   	for (size_t i = 0; i < _myVector.size(); i++)
	{
		std::cout << _myVector[i] << " ";
	}
	std::cout << std::endl;
	
	clock_t startTime_vector = clock();
	if (vector_size <= 10)
		insertionSortVector();
	else
		mergeSortVector(0, vector_size - 1);
	clock_t endTime_vector = clock();
	double summaryTime_vector = (double)(endTime_vector - startTime_vector) / CLOCKS_PER_SEC * 100.0;
	std::cout << "After: ";
	for (size_t i = 0; i < _myVector.size(); i++)
	{
		std::cout << _myVector[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "Time to process a range of " << _myVector.size() << " elements with std::vector : " << summaryTime_vector << " us" << std::endl;

	// std::cout << "Before: ";
	// for (std::list<int>::iterator it = _myList.begin(); it != _myList.end(); it++)
	// {
	// 	std::cout << *it << " ";
	// }
	// std::cout << std::endl;
	
	clock_t startTime_list = clock();
	if (list_size <= 10)
		insertionSortList();
	else
		mergeSortList(_myList);
	clock_t endTime_list = clock();
	double summaryTime_list = (double)(endTime_list - startTime_list) / CLOCKS_PER_SEC * 100.0;
	
	// std::cout << "After: ";
	// for (std::list<int>::iterator it = _myList.begin(); it != _myList.end(); it++)
	// {
	// 	std::cout << *it << " ";
	// }
	// std::cout << std::endl;
	
	std::cout << "Time to process a range of " << _myList.size() << " elements with std::list : " << summaryTime_list << " us" << std::endl;
}