/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 11:38:20 by ipetruni          #+#    #+#             */
/*   Updated: 2024/05/03 10:25:41 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RPN.hpp"

bool RPN::doOperation(char c) {
	if (_myStack.size() < 2)
		return false;
	
	int a = _myStack.top(); // Returns to us the value of the latest element 
	_myStack.pop(); // Delete from container latest element
	
	int b = _myStack.top();
	_myStack.pop();
	
	switch (c)
	{
		case '+':
			_myStack.push(b + a);
			break;
		case '-':
			_myStack.push(b - a);
			break;
		case '*':
			_myStack.push(b * a);
			break;
		case '/':
			if (a == 0) {
				throw std::runtime_error("Error: Number in the stack can't be dividen by 0");
				return false;
			}
			else {
				_myStack.push(b / a);	
			}
			break;
	}
	return true;
}

void RPN::checkInput(std::string inputString) {
	try {
		size_t invalidChar = inputString.find_first_not_of("0123456789+-*/ ");
		if (invalidChar != std::string::npos) {
			throw std::invalid_argument("Error: Invalid input.");
		}
		std::string			token;
		std::istringstream	iss(inputString);
		while (iss >> token)
		{
			if (isdigit(token[0])) {
				int currentNumber = atoi(token.c_str());
				if (currentNumber > 9) {
					throw std::runtime_error("Error: All numbers in the input should be within 0 - 9 limits.");
				}
				_myStack.push(currentNumber);
			}
			else if (token.size() == 1 && std::string("+-*/").find(token) != std::string::npos) {
				if (!doOperation(token[0])) {
					throw std::runtime_error("Error: Failed to perform calculation.");
				}
			}
			else {
				throw std::runtime_error("Error: Invalid input.");				
			}
		}
		if (_myStack.size() != 1)
			throw (std::runtime_error("Error!"));
		std::cout << _myStack.top() << std::endl;
	}
	catch (std::exception & ex){
		std::cout << ex.what() << std::endl;
	}
}


RPN::RPN(const std::string values) {
	// std::cout << "String constructor called" << std::endl;
	try {
		checkInput(values);
	} 
	catch (std::exception & ex) {
		std::cout << ex.what() << std::endl;
	}
}

RPN::RPN() {
	// std::cout << "Default constructor called" << std::endl;
}

RPN::RPN(RPN & otherRPN) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = otherRPN;
}

RPN &RPN::operator=(RPN &otherRPN) {
	// std::cout << "Assigment operator called" << std::endl;
	if (this != &otherRPN) {
		_myStack = otherRPN._myStack;
		*this = otherRPN;
	}
	return *this;
}

RPN::~RPN() {
	// std::cout << "Destructor called" << std::endl;
}