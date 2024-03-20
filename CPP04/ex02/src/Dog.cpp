/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:21:54 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/19 22:40:41 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	_brain = new Brain;
	std::cout << "Dog default constructor for " GR << _type << R " called" << std::endl;
}

Dog::Dog(const std::string type)
{
	_type = type;
	_brain = new Brain;
	std::cout << "Dog string constructor for " GR << _type << R " called" << std::endl;
}

Dog::Dog(const Dog &other)
{
	*this = other;
	_brain = new Brain(*(other._brain));
	std::cout << "Dog copy constructor for " GR << this->_type << R " called" << std::endl;
}

Dog &Dog::operator=(const Dog& other) {
	std::cout << "Dog copy assignment operator for " << _type << " called" R << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
        delete this->_brain;
        this->_brain = new Brain(*(other._brain));
	}
	return (*this);
}

Dog::~Dog() {
	std::cout << "Dog destructor for " RD << _type << R " called" << std::endl;
	delete _brain;
}

void Dog::makeSound() const {
	std::cout << "Dog makes " BL "Woof!" R << std::endl;
}
