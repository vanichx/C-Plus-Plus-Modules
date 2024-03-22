/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 12:25:34 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/22 19:42:00 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Character.hpp"

Character::Character() {
	_nameCharacter = "Default";
	initEquipment(NULL);
	// std::cout << GR "Character" R " default constructor called" << std::endl;
}

Character::Character(std::string const & name) {
	_nameCharacter = name;
	initEquipment(NULL);
	// std::cout << Y "Character" R " string constructor called" << std::endl;
}

Character::Character(const Character & otherCharacter) {
	*this = otherCharacter;

	// std::cout << Y "Character" R " copy constructor called" << std::endl;
}

Character &Character::operator=(const Character & other) {
	// std::cout << M "Character" R " assigment operator called" << std::endl;
	if (this != &other)
	{
		int i = 0;
		_nameCharacter = other.getName();
		while (i < 4)
		{
			if (_equipment[i])
				delete _equipment[i];
			_equipment[i] = other._equipment[i]->clone();
			i++;
		}
	}
	return *this;
}

Character::~Character() {
	for(int i = 0; i < 4; i++) {
		if (_equipment[i])
			delete _equipment[i];
		_equipment[i] = NULL;
	}
	// std::cout << RD "Character" R " default destructor called" << std::endl;
}

std::string const & Character::getName() const {
	return (this->_nameCharacter);
}




	// int i = 0;

	// if (!m)
    // {
    //     std::cout << "empty Materia. Check MateriaSource.\n";
    //     return ;
    // }
	// while (i < 4)
	// {
	// 	if (_inventory[i] == m)
	// 	{
	// 		std::cout << "That materia is already in character u can not add it!" << std::endl;
	// 		return ;
	// 	}
	// 	if (_inventory[i] == NULL)
	// 	{
	// 		_inventory[i] = m;
	// 		return ;
	// 	}
	// 	i++;
	// }
	// std::cout << "Inventory is already full" << std::endl




void Character::equip(AMateria* m) {
	
	int i = 0;

	if (!m)
    {
        std::cout << "empty Materia. Check MateriaSource.\n";
        return ;
    }
	while (i < 4)
	{
		if (_equipment[i] == NULL)
		{
			_equipment[i] = m;
			return ;
		}
		if (_equipment[i] == m)
		{
			std::cout << "That materia is already in character u can not add it!" << std::endl;
			return ;
		}
		i++;
	}
	std::cout << "equipment_equipment is already full" << std::endl;
	
	// if (m) {
	// 	for (int i = 0; i < 4; i++) {
	// 		if (_equipment[i] == NULL) {
	// 			if (_equipment[i])
	// 				delete _equipment[i];
	// 			_equipment[i] = m->clone();
	// 			std::cout << "Equiped with " Y << _equipment[i]->getType() << R " Materia" << std::endl;
	// 			return;
	// 		}
	// 	}
	// 	std::cout << "Can't equip new Materia to equipment , " Y "all slots are busy" R << std::endl;
	// 	return;
	// } else {
	// 	std::cout << "Can't equip unknown Materia" << std::endl;
	// }
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < 4) {
		for (int i = 0; i < 4; i++) {
			if (i == idx) {
				_equipment[i] = NULL;
			}
		}
	} else {
		std::cout << "Failed to unequip the Materia. Wrong index. Please enter valid index (0..3)" << std::endl;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 4) {
		if (_equipment[idx]->getType() == "ice") {
			_equipment[idx]->use(target);
		} else if (_equipment[idx]->getType() == "cure") {
			_equipment[idx]->use(target);
		}
	} else {
		std::cout << "Failed to use this " RD "Materia" R << std::endl;
		std::cout << "Index should be in this range" Y " 0..3" R << std::endl;
	}
}

void	Character::setName(std::string name)
{
	this->_nameCharacter = name;
}

void Character::initEquipment(AMateria* materia) {
	if (materia) {
		for (int i = 0; i < 4; i++) {
		_equipment[i] = materia;
		}
	} else {
		for (int i = 0; i < 4; i++) {
			_equipment[i] = NULL;
		}
	}
}
