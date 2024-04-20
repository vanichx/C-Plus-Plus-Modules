/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:24:37 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/20 23:13:59 by ivanpetruni      ###   ########.fr       */
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
		void  addNumber(int number); // method for adding the number
		void  addNumbers(int numbers); // improved addNumber method 
		int shortestSpan(); // method to find shortest Span
		int longestSpan(); // method to find longest Span
};

#endif