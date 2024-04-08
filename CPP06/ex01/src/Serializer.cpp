/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:04:26 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/08 12:13:35 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Serializer.hpp"

Serializer::Serializer() {
	std::cout << "Serializer default constructor called" << std::endl;
}

Serializer::Serializer(const Serializer & other) {
	std::cout << "Serializer copy constructor called" << std::endl;
	*this = other;
}

Serializer &Serializer::operator=(const Serializer & other) {
	std::cout << "Serializer assigment operator was called" << std::endl;
	if (this != &other) {
		*this = other;
	}
	return (*this);
}

Serializer::~Serializer() {
	std::cout << "Serializer destructor was called" << std::endl;
}

uintptr_t Serializer::serialize(Data * ptr) {
	std::cout << "serialize method was called" << std::endl;
	
	uintptr_t customptr = reinterpret_cast<uintptr_t>(ptr);

	std::cout << "serialization value is : " GR << customptr << R << std::endl;
	return (customptr);
}

Data* Serializer::deserialize(uintptr_t raw) {
	std::cout << "deserialize method was called" << std::endl;
	
	Data *customptr = reinterpret_cast<Data *>(raw);

	std::cout << "deserialized address is : " BL << customptr << R << std::endl;
	return (customptr);
}