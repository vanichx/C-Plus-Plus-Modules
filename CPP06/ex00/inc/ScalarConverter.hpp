/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:09:37 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/05 18:17:05 by ipetruni         ###   ########.fr       */
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
};


#endif