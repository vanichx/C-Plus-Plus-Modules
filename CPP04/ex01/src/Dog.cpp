/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:21:54 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/20 15:09:59 by ipetruni         ###   ########.fr       */
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
	std::cout << "Dog copy constructor for " << this->_type << " called" << std::endl;
	_type = other._type;
	_brain = new Brain(*other._brain); // Deep copy of the Brain object
}

Dog& Dog::operator=(const Dog& dog) {
	if (this != &dog) 
	{
		delete _brain; // Delete the old Brain
		_brain = new Brain(*dog._brain); // Deep copy of the Brain object
		_type = dog._type;
		std::cout << "Dog assignment operator called!" << std::endl;
	}
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog destructor for " RD << _type << R " called" << std::endl;
	delete _brain;
}

void Dog::makeSound() const {
	std::cout << "Dog makes " BL "Woof!" R << std::endl;
}

// #include <cstdio>

// void Dog::printBrain() const {
// 	printf("Dog's brain address: %p\n", _brain);
// }