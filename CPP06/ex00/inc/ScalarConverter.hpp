/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:09:37 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/04 19:09:51 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cctype>
#include "Colors.h"

// Class which helps us to determine the input type
enum InputType
{
	CHAR = 1,
	INT,
	FLOAT,
	DOUBLE,
	INVALID
};
	
class ScalarConverter {
	// Constructors are private to avoid instantiation
	private:
		ScalarConverter(); // Default constructor
		ScalarConverter(ScalarConverter & other); // Copy constructor
		ScalarConverter &operator=(ScalarConverter & other); // Assigment operator

	// Public method to convert
	public:
		static void			convert(const std::string input); // Static method allows us to call the method without instantiating the class
		static InputType	defineTypeOfInput(const std::string input); // Method for defining the input 
};


#endif