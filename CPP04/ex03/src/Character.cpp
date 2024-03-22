/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 12:25:34 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/22 16:24:47 by ipetruni         ###   ########.fr       */
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
	for (int i = 0; i < 4; i++) {
		if (_equipment[i] == NULL) {
			_equipment[i] = m->clone();
			return;
		}
	}
	std::cout << "Can't add new Materia to equipment , all slots are busy" << std::endl;
}

void Character::unequip(int idx) {
	/////// NEED TO DO
	(void)idx;
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 4) {
		if (_equipment[idx]->getType() == "ice") {
			std::cout << "* shoots an ice bolt at " RD << target.getName() << R " *" << std::endl;
		} else if (_equipment[idx]->getType() == "cure") {
			std::cout << "* heals " GR <<  target.getName()  << "'s" R " wounds *" << std::endl;
		}
	} else {
		std::cout << "Index should be in this range 0..3" << std::endl;
	}
}

