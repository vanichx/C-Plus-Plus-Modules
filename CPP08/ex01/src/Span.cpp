/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:35:31 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/21 17:22:16 by ivanpetruni      ###   ########.fr       */
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

Span::Span(const Span &other) : _maxSize(other._maxSize), _span(other._span) {
	// std::cout << "Span Copy constructor called" << std::endl;
	*this = other;
}

Span &Span::operator=(const Span &other) {
	// std::cout << "Span Assigment operator called" << std::endl;
	if (this !=  &other)
	{
		_maxSize =  other._maxSize;
		_span = other._span;
	}
	return (*this);
}

Span::~Span() {
	_span.clear();
	// std::cout << "Span Destructor called" << std::endl;
}

void Span::addNumber(int number) {
	if (_span.size() ==  _span.capacity()) {
		throw std::runtime_error(RD"Span is alredy full , can't add number"R);
	} else {
		_span.push_back(number);
	}
}

void Span::addNumbers(int numbers) {
	if (_span.size() + numbers >  _span.capacity()) {
		throw std::runtime_error(RD"Span is alredy full , can't add number"R);
	} else {
		srand(time(NULL));
		for(int i = 0; i < numbers; i++) {
			_span.push_back(rand() % 201 - 100);
		}
	}
}

int Span::shortestSpan() {
	if (_span.size() < 2 || _span.empty())
		throw std::runtime_error(RD"Can't find any span , the span is too small or empty "R);
	std::sort(_span.begin(), _span.end());
	int ShortestSpan = _span[1] - _span[0];
	for (std::vector<int>::iterator it = _span.begin() + 1; it != _span.end(); it++) {
		int newShortestSpan = *it - *(it - 1);
		if (newShortestSpan < ShortestSpan)
			ShortestSpan = newShortestSpan;
	}
	return (ShortestSpan);
}

int Span::longestSpan() {
	if (_span.size() < 2 || _span.empty())
		throw std::runtime_error(RD"Can't find any span , the span is too small or empty"R);
	std::sort(_span.begin(), _span.end());
	return (*(_span.end() - 1) - *(_span.begin()));
}