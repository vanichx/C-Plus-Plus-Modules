/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 10:28:33 by ipetruni          #+#    #+#             */
/*   Updated: 2024/05/03 11:54:13 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <list>
#include <ctime>
#include <vector>
#include <iostream>
#include <exception>
#include <algorithm>

class PmergeMe {

	// Containers which im allowed to use
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
	// Methods
	public:
		void assignVector(char **argv);
		void assignList(char **argv);
		
};

#endif