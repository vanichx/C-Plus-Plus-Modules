/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 11:38:20 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/30 11:57:07 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RPN.hpp"

RPN::RPN() {
	std::cout << "RPN default constructor called" << std::endl;
}

RPN::RPN(const std::string values) {
	std::cout << "RPN string constructor called" << std::endl;
	std::cout << values << std::endl;
}

RPN::RPN(RPN & other) {
	std::cout << "RPN copy constructor called" << std::endl;
	*this = other;
}

RPN &RPN::operator=(RPN &other) {
	std::cout << "RPN assigment operator called" << std::endl;
	if (this != &other) {
		*this = other;
	}
	return *this;
}

RPN::~RPN() {
	// std::cout << "RPN destructor called" << std::endl;
}