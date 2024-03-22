/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 12:25:34 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/22 13:20:41 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Character.hpp"

Character::Character() {
	_nameCharacter = "Default";
	std::cout << GR "Character" R " default constructor called" << std::endl;
}

Character::Character(std::string const & name) {
	_nameCharacter = name;
	std::cout << Y "Character" R " string constructor called" << std::endl;
}

Character::Character(const Character & otherCharacter) {
	*this = otherCharacter;

	std::cout << "mem addres (*this) = " << this << std::endl;
	std::cout << "mem addres (otherChar) = " << &otherCharacter << std::endl;
	std::cout << Y "Character" R " copy constructor called" << std::endl;
}

Character &Character::operator=(const Character & other) {
	std::cout << M "Character" R " assigment operator called" << std::endl;
	if (this != &other)
	{
		_nameCharacter = other._nameCharacter;
	}
	return *this;
}

Character::~Character() {
	std::cout << RD "Character" R " default destructor called" << std::endl;
}

std::string const & Character::getName() const {
	return (this->_nameCharacter);
}

void Character::equip(AMateria* m) {
	/////// NEED TO DO
	(void)m;
}
void Character::unequip(int idx) {
	/////// NEED TO DO
	(void)idx;
}

void Character::use(int idx, ICharacter& target) {
	/////// NEED TO DO
	(void)idx;
	(void)target;
}

