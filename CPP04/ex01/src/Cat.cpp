/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:21:52 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/16 15:47:02 by ipetruni         ###   ########.fr       */
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
	std::cout << "Cat copy constructor for " << this->_type << " called" << std::endl;
	_type = other._type;
	_brain = new Brain(*other._brain); // Deep copy of the Brain object
}

Cat& Cat::operator=(const Cat& cat) {
	if (this != &cat) 
	{
		delete _brain;
		_brain = new Brain(*cat._brain);
		_type = cat._type;
		std::cout << "Cat assignment operator called!" << std::endl;
	}
	return *this;
}


Cat::~Cat() {
	std::cout << "Cat destructor for " RD << _type << R " called" << std::endl;
	delete _brain;
}

void Cat::makeSound() const {
	std::cout << "Cat makes " BL "Meow!" R << std::endl;
}

// #include <cstdio>

// void Cat::printBrain() const {
// 	printf("Cat's brain address: %p\n", _brain);
// }