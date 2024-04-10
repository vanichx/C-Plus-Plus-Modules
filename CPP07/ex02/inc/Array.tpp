/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:34:29 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/10 16:50:18 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <class Type>
Array<Type>::Array() : _array(NULL), _size(0) {
	std::cout << "Default constructor called" << std::endl;
}

template <class Type>
Array<Type>::Array(unsigned int n) : _size(n) {
	_array = new Type[_size]();
	std::cout << "Int constructor called" << std::endl;
}

template <class Type>
Array<Type>::Array(const Array<Type> & otherArray) {
	*this = otherArray;
	std::cout << "Copy constructor called" << std::endl;
}

// Array &Array::operator=(const Array & otherArray) {
// 	std::cout << "Assigment operator called" << std::endl;
// }

template <class Type>
Array<Type>::~Array() {
	std::cout << "Destructor called" << std::endl;
}