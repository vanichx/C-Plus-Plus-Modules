/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:35:31 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/22 18:15:28 by ipetruni         ###   ########.fr       */
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
		throw std::runtime_error("Span is alredy full , can't add number");
	} else {
		_span.push_back(number);
	}
}

void Span::addRange(std::vector<int> vector) {
	if (_span.size() + vector.size() >  _span.capacity())
		throw std::runtime_error("Span is alredy full , can't add number");
	_span.insert(_span.end(), vector.begin(), vector.end());
}

unsigned int Span::shortestSpan() {
	if (_span.size() < 2 || _span.empty())
		throw std::runtime_error("Can't find any span , the span is too small or empty ");
	std::sort(_span.begin(), _span.end());
	unsigned int ShortestSpan = static_cast<long int>(_span[1]) -  static_cast<long int>(_span[0]);
	for (std::vector<int>::iterator it = _span.begin() + 1; it != _span.end(); it++) {
		unsigned int newShortestSpan = static_cast<long int>(*it) - static_cast<long int>(*(it - 1));
		if (newShortestSpan < ShortestSpan)
			ShortestSpan = newShortestSpan;
	}
	return (ShortestSpan);
}

unsigned int Span::longestSpan() {
	if (_span.size() < 2 || _span.empty())
		throw std::runtime_error("Can't find any span , the span is too small or empty");
	long int max = *std::max_element(_span.begin(), _span.end());
	long int min = *std::min_element(_span.begin(), _span.end());
	long int res = max - min;
	return (res);
}