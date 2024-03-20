/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:21:49 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/20 14:07:03 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const std::string type) : _type(type)
{
	std::cout << "Animal string constructor called" << std::endl;
}

Animal::Animal(const Animal &other) : _type(other._type)
{
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal& other) {
	std::cout << "Animal copy assignment operator called" R << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

Animal::~Animal() {
	std::cout << "Animal default destructor called" << std::endl;
}



std::string Animal::getType() const {
	return (this->_type);
}
