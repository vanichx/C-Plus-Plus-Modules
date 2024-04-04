/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 15:09:57 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/04 19:13:32 by ipetruni         ###   ########.fr       */
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


InputType ScalarConverter::defineTypeOfInput(std::string input)
{
	if (input.empty()) {
		return INVALID;
	} else if (input.size() == 1 && !std::isdigit(input[0])) {
		std::cout << "Hi from the CHAR" << std::endl;
		return CHAR;
	} else {
		std::cout << "Need to to INT , FLOAT, DOUBLE" << std::endl;
	}
	return INVALID;
}

void ScalarConverter::convert(const std::string input) {
	int type = ScalarConverter::defineTypeOfInput(input);

	std::cout << "The type was returned: " BLD GR << type << R <<  std::endl;
}

