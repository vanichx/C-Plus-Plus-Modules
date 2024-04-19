/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:35:31 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/19 18:02:31 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Span.hpp"

Span::Span() : _maxSize(0), _span(0) {
	// std::cout << "Span Default constructor called" << std::endl;
}

Span::Span(unsigned int numberOfIntegers) : _maxSize(numberOfIntegers) {
	_span.reserve(_maxSize);
	// std::cout << "Span Int constructor called" << std::endl;
	
}

Span::Span(const Span &other) {
	std::cout << "Span Copy constructor called" << std::endl;
	*this = other;
}

Span &Span::operator=(const Span &other) {
	std::cout << "Span Assigment operator called" << std::endl;
	if (*this !=  other)
	{
		_maxSize =  other._maxSize;
		_span = other._span;
	}
}

Span::~Span() {
	_span.clear();
	// std::cout << "Span Destructor called" << std::endl;
}

void Span::addNumber(int number) {
	if (_span.size() ==  _span.capacity()) {
		throw std::runtime_error(RD"Span is alredy full , can't add number"R);
	} else {
		std::cout << GR << number << R " added to Span" << std::endl;
		_span.push_back(number);
	}
}

int Span::shortestSpan() {
	if (_span.size() < 2)
		throw std::runtime_error(RD"Can't find any span , the span is too small"R);
	// std::vector<int>::iterator it =
	return (1);
}

int Span::longestSpan() {
	if (_span.size() < 2)
		throw std::runtime_error(RD"Can't find any span , the span is too small"R);
	// std::vector<int>::iterator it =
	return (1);
}