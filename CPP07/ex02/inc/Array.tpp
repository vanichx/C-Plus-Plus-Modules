/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:34:29 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/10 22:36:12 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Colors.h"

template<class Type> 
Array<Type>::Array() : _array(NULL), _size(0) {
	// std::cout << "Default constructor called" << std::endl;
}

template<class Type> 
Array<Type>::Array(unsigned int n) : _size(n) {
	_array = new Type[_size]();
	// std::cout << "Int constructor called" << std::endl;
}

template<class Type> 
Array<Type>::Array(const Array<Type> &otherArray) : _size(otherArray._size) {
	_array = new Type[_size];
	for (unsigned int i = 0; i < _size; ++i) {
		_array[i] = otherArray._array[i];
	}
	// std::cout << "Copy constructor called" << std::endl;
}

template <class Type>
Type &Array<Type>::operator=(const Array<Type> & otherArray) {
	// std::cout << "Assigment operator called" << std::endl;
	if (*this != otherArray) {
		_size = otherArray.size();
		if (_array)
			delete[] _array;
		_array = new Type[otherArray.size()];
		for (unsigned int i = 0; i < otherArray.size(); ++i) {
			_array[i] = otherArray._array[i];
		}
	}
}

template<class Type> 
Type &Array<Type>::operator[](unsigned int index) {
	if (index >= this->size()) {
		std::cout << Y BLD "Catched the Exception" R << std::endl;
		std::cout << "Current index is : " RD BLD << index << R <<std::endl;
		throw std::out_of_range("Index out of bounds");
	}
	return _array[index];
}

template <class Type>
Array<Type>::~Array() {
	delete[] this->_array;
	// std::cout << "Destructor called" << std::endl;
}

template<class Type>
unsigned int Array<Type>::size() {
	return (this->_size);
}
