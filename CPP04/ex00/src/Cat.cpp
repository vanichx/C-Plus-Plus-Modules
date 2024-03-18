/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:21:52 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/18 20:34:44 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat()
{
    _type = "Cat";
	std::cout << "Cat default constructor for " GR << _type << R " called" << std::endl;
}

Cat::Cat(const std::string type)
{
    this->_type = type;
	std::cout << "Cat string constructor for " GR << _type << R " called" << std::endl;
}

Cat::Cat(const Cat &other)
{
    *this = other;
	std::cout << "Cat copy constructor for " GR << this->_type << R " called" << std::endl;
}

Cat &Cat::operator=(const Cat& other) {
	std::cout << "Cat copy assignment operator for " << _type << " called" R << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

Cat::~Cat() {
	std::cout << "Cat destructor for " RD << _type << R " called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Cat makes " BL "Meow!" R << std::endl;
}