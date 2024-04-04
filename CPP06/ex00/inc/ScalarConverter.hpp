/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:09:37 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/05 00:06:55 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cctype>
#include "Colors.h"


class ScalarConverter {
	// Constructors are private to avoid instantiation
	private:
		ScalarConverter(); // Default constructor
		ScalarConverter(ScalarConverter & other); // Copy constructor
		ScalarConverter &operator=(ScalarConverter & other); // Assigment operator

	// Public method to convert
	public:
		static void		convert(const std::string input); // Static method allows us to call the method without instantiating the class
	public:
};


#endif