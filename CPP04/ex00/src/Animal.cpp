/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:21:49 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/18 20:42:53 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << "Animal " GR << _type << R " default constructor called" << std::endl;
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
	std::cout << "Animal makes" BL " no " R "sound"  << std::endl;
}

std::string Animal::getType() const {
	return (this->_type);
}
