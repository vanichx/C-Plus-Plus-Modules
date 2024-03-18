/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:21:49 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/18 15:17:09 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

Animal::Animal() : _type("Unknown")
{
	std::cout << "Animal default constructor for " GR << _type << R " called" << std::endl;
}

Animal::Animal(const std::string type) : _type(type)
{
	std::cout << "Animal string constructor for " GR << _type << R " called" << std::endl;
}

Animal::Animal(const Animal &other) : _type(other._type)
{
	std::cout << "Animal copy constructor for " GR << this->_type << R " called" << std::endl;
}

Animal &Animal::operator=(const Animal& other) {
	std::cout << "Animal copy assignment operator for " << _type << " called" R << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

Animal::~Animal() {
	std::cout << "Animal destructor for " RD << _type << R " called" << std::endl;
}

void Animal::makeSound() const {
	std::cout << "No sound because im default type" << std::endl;
}

std::string Animal::getType() const {
	return (this->_type);
}
