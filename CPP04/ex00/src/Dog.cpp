/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:21:54 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/18 20:40:58 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog()
{
    _type = "Dog";
	std::cout << "Dog default constructor for " GR << _type << R " called" << std::endl;
}

Dog::Dog(const std::string type)
{
    this->_type = type;
	std::cout << "Dog string constructor for " GR << _type << R " called" << std::endl;
}

Dog::Dog(const Dog &other)
{
    *this = other;
	std::cout << "Dog copy constructor for " GR << this->_type << R " called" << std::endl;
}

Dog &Dog::operator=(const Dog& other) {
	std::cout << "Dog copy assignment operator for " << _type << " called" R << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

Dog::~Dog() {
	std::cout << "Dog destructor for " RD << _type << R " called" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Dog makes " BL "Woof!" R << std::endl;
}
