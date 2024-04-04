/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 15:09:57 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/05 00:07:37 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
	std::cout << "ScalarConverter default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(ScalarConverter & other) {
	*this = other;
	std::cout << "ScalarConverter copy constructor called" << std::endl;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter & other) {
	std::cout << "ScalarConverter assigment operator called" << std::endl;
	(void)other;
	return (*this);
}


void processChar(std::string string) {
	
	float f = 0.0f;

	if (string.size() == 1 && isprint(string[0]) && !isdigit(string[0])) {
		const char ch = static_cast<char>(string[0]);
		f = static_cast<float>(ch);
	} else {
		f = atof(string.c_str());
	}	
	if (std::isnan(f) || std::isinf(f)) {
		std::cout << "impossible" << std::endl;
		return ;
	}
	if ((static_cast<int>(f) >= std::numeric_limits<char>::min() && static_cast<int>(f) <= std::numeric_limits<char>::max()) && isprint(f))
		std::cout << "\'" << static_cast<char>(f) << "\'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	
}

void proccesInt(std::string string) {
	float f = 0.0f;
	
	f = std::stof(string);

	std::cout << "float representation : " << f << std::endl;
	if (std::isnan(f) || std::isinf(f)) {
		std::cout << "impossible" << std::endl;
		return ;
	}

	// TO DO 
	// ivanpetrunin@MacBook-Air-Ivan ex00 % ./convert 433333333333333
	// char: Non displayable
	// int: float representation : 4.33333e+14
	// 2147483647
	// TO DO
	
	if (static_cast<int>(f) >= std::numeric_limits<int>::min() && static_cast<int>(f) <= std::numeric_limits<int>::max())
		std::cout << static_cast<int>(f) << std::endl;
	
}



void ScalarConverter::convert(const std::string input) {
	std::cout << "char: " , processChar(input);
	std::cout << "int: " , proccesInt(input);
	

	// std::cout << "float: " << proccesFloat(input);
	// std::cout << "double: " << proccesDouble(input);
}

