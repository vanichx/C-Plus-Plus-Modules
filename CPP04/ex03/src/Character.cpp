/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 12:25:34 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/22 12:45:00 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Character.hpp"

Character::Character() {
	_nameCharacter = "Default";
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string const & name) {
	_nameCharacter = name;
	std::cout << "Character string constructor called" << std::endl;
}

Character::Character(const Character & otherCharacter) {
	*this = otherCharacter;

	std::cout << "mem addres (*this) = " << this << std::endl;
	std::cout << "mem addres (otherChar) = " << &otherCharacter << std::endl;
	std::cout << "Character copy constructor called" << std::endl;
}

Character &Character::operator=(const Character & other) {
	std::cout << "Character assigment operator called" << std::endl;
	if (this != &other)
	{
		_nameCharacter = other._nameCharacter;
	}
	return *this;
}

Character::~Character() {
	std::cout << "Character default constructor called" << std::endl;
}

