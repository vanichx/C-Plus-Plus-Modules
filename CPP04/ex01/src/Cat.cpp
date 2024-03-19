/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:21:52 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/19 22:40:36 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat()
{
    _type = "Cat";
    _brain = new Brain;
	std::cout << "Cat default constructor for " GR << _type << R " called" << std::endl;
}

Cat::Cat(const std::string type)
{
    _type = type;
    _brain = new Brain;
	std::cout << "Cat string constructor for " GR << _type << R " called" << std::endl;
}

Cat::Cat(const Cat &other)
{
    *this = other;
    _brain = new Brain(*(other._brain));
	std::cout << "Cat copy constructor for " GR << this->_type << R " called" << std::endl;
}

Cat &Cat::operator=(const Cat& other) {
	std::cout << "Cat copy assignment operator for " << _type << " called" R << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
        delete this->_brain;
        this->_brain = new Brain(*(other._brain));
	}
	return (*this);
}

Cat::~Cat() {
	std::cout << "Cat destructor for " RD << _type << R " called" << std::endl;
    delete _brain;
}

void Cat::makeSound() const {
	std::cout << "Cat makes " BL "Meow!" R << std::endl;
}