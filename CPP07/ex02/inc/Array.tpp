/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:34:29 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/10 18:13:42 by ipetruni         ###   ########.fr       */
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

// Array &Array::operator=(const Array & otherArray) {
// 	std::cout << "Assigment operator called" << std::endl;
// }

template <class Type>
Array<Type>::~Array() {
	// std::cout << "Destructor called" << std::endl;
}


template<class Type> 
Type &Array<Type>::operator[](unsigned int index) {
	if (index >= this->_size) {
		std::cout << Y BLD "Catched the Exception" R << std::endl;
		std::cout << "Current index is : " RD BLD << index << R <<std::endl;
		throw std::out_of_range("Index out of bounds");
	}
	return _array[index];
}