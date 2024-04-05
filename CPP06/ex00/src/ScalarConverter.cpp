/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 15:09:57 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/05 19:15:56 by ipetruni         ###   ########.fr       */
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

int validInput( const std::string str ) {
	
	bool hasDecimalPoint = false;
	bool hasSuffix = false;

	if (!str.compare("nan") || !str.compare("nanf") ||
		!str.compare("+inf") || !str.compare("inf") ||
		!str.compare("-inf") ||
		!str.compare("-inff") || !str.compare("+inff")) {
			return (1);
	} else {
		for (size_t i = 0; i < str.length(); i++) {
			if (i == 0 && (str[i] == '-' || str[i] == '+')) {
				continue;
			}
			if (str[i] == '.') {
				if (hasDecimalPoint || hasSuffix) {
					return (0);
				}
				hasDecimalPoint = true;
			} else if (str[i] == 'f') {
				if (i != str.length() - 1 || !hasDecimalPoint) {
					return (0);
				}
				hasSuffix = true;
			} else if (!std::isdigit(str[i])) {
				return (0);
			}
		}
	}
	return (1);
}

void processChar(std::string string) {
	
	float f = 0.0f;

	if (string.size() == 1 && isprint(string[0]) && !isdigit(string[0])) {
		const char ch = static_cast<char>(string[0]);
		f = static_cast<float>(ch);
	} else {
		f = atof(string.c_str());
	}	
	if (isnan(f) || isinf(f)) {
		std::cout << "impossible" << std::endl;
		return ;
	}
	if ((static_cast<int>(f) >= std::numeric_limits<char>::min() && static_cast<int>(f) <= std::numeric_limits<char>::max()) && isprint(f)) {
		std::cout << "\'" << static_cast<char>(f) << "\'" << std::endl;
		return ;
	}
	else {
		std::cout << "Non displayable" << std::endl;
		return ;	
	}
}


void proccesInt(std::string string) {

	double f = 0.0f;
	
	f = std::stod(string);

	if (isnan(f) || isinf(f)) {
		std::cout << "impossible" << std::endl;
		return ;
	}
	if (f >= static_cast<double>(std::numeric_limits<int>::min()) && f <= static_cast<double>(std::numeric_limits<int>::max())) {
		std::cout << static_cast<int>(f) << std::endl;
		return ;
	}
	else {
		std::cout << "impossible" << std::endl;
		return ;
	}
}

void proccesFloat(std::string string) {
	
	float f = 0.0;

	f = atof(string.c_str());
	
	if (isnan(f)) {
		std::cout << "nanf" << std::endl;
		return ;
	}
	if (isinf(f)) {
		if (f > 0) {
			std::cout << "+inff" << std::endl;
			return ;
		} else if (f < 0) {
			std::cout << "-inff" << std::endl;
			return ;
		}
	}
	if (f < std::numeric_limits<float>::min() && f > std::numeric_limits<float>::max()) {
		std::cout << "impossible" << std::endl;
		return ;
	} else {
		std::cout << f << ".0f" << std::endl;
		return ;
	}
}

void proccesDouble(std::string string) {
	
	double d = 0.0;

	d = atof(string.c_str());

	if (isnan(d)) {
		std::cout << "nan" << std::endl;
		return ;
	}
	if (isinf(d)) {
		if (d > 0) {
			std::cout << "+inf" << std::endl;
			return ;
		} else if (d < 0) {
			std::cout << "-inf" << std::endl;
			return ;
		}
	}
	if (d < std::numeric_limits<double>::min() && d > std::numeric_limits<double>::max()) {
		std::cout << "impossible" << std::endl;
		return ;
	} else {
		std::cout << d << ".0" << std::endl;
		return ;
	}
}

void ScalarConverter::convert(const std::string input) {
	
	int flag = validInput(input);

	if (flag == 0) {
		std::cout << "char: Not displayable" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	} else {
		std::cout << "char: ", processChar(input);
		std::cout << "int: " , proccesInt(input);
		std::cout << "float: " , proccesFloat(input);
		std::cout << "double: " , proccesDouble(input);
	}
}

