/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:24:37 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/19 18:03:31 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <list>
#include <deque>
#include <iostream>
#include <string>
#include <algorithm>
#include <exception>
#include "Colors.h"

class Span {

	// Private attributes
	private:
		unsigned int _maxSize;
		std::vector<int> _span;
	// Constructors
	public:
		Span();// Default constructor
		Span(unsigned int numberOfIntegers); // unsigned Int constructor , required by subject
		Span(const Span & other); // Copy constructor
		Span &operator=(const Span & other); // Assigment operator
	// Destructor
	public:
		~Span();
	// Public methods
	public:
		void  addNumber(int number); // method for adding the numbers
		int shortestSpan(); // method to find shortest Span
		// int longestSpan(); // method to find longest Span
};



#endif