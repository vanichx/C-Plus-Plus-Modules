/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:09:37 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/03 15:09:16 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>

class ScalarConverter {
	
	// Constructor
	public:
		ScalarConverter(); // Default constructor
		ScalarConverter(const ScalarConverter & other); // Copy constructor
		ScalarConverter &operator=(const ScalarConverter & other); // Assigment operator
			

	
	// Public method to convert
	public:
		static void convert(const std::string& input);
};


#endif