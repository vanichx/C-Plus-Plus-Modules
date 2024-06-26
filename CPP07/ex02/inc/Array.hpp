/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:40:14 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/10 22:30:35 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template <class Type>
class Array {

	// Variables required by subject
	private:
		Type *_array; // Pointer to the array of T type members;
		unsigned int _size; // Size of the array
	// Constructors
	public:
		Array(); // Default constructor
		Array(unsigned int n); // Constructor with an unsigned int n as a parameter
		Array(const Array<Type> & otherArray); // Copy constructor
		Type &operator=(const Array & otherArray); // Assigment operator
		Type &operator[](unsigned int index); // Subscript operator: [ ] 
	// Destructor
	public:
		~Array();
	// Public methods
	public:
		unsigned int size();
		
};


#endif