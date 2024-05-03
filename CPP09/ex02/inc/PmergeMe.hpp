/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 10:28:33 by ipetruni          #+#    #+#             */
/*   Updated: 2024/05/03 16:09:53 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <list>
#include <ctime>
#include <vector>
#include <string>
#include <iostream>
#include <exception>
#include <algorithm>

class PmergeMe {

	// Containers which im allowed to use in this Ex.
	std::list<int> _myList;
	std::vector<int> _myVector; 

	// Constructors	
	public:
		PmergeMe(); // Default constructor
	private:
		PmergeMe(PmergeMe & other); // Copy constructor
		PmergeMe &operator=(PmergeMe & other); // Assigment operator
	// Destructors
	public:
		~PmergeMe();
		
	// Methods for std::vector container
	public:
		void assignVector(char **argv);
		void insertionSortVector();
		void mergeSortVector(int left, int right);
		void merge(std::vector<int>& arr, int left, int mid, int right);
	// Methods for std::list container
	public:
		void assignList(char **argv);
		void insertionSortList();
		void mergeSortList(std::list<int>& lst);
		void mergeList(std::list<int>& left, std::list<int>& right);
		
	
	// Main sorting method
		void sortAndPrint();
};

#endif