/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:28:49 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/24 14:52:36 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/MateriaSource.hpp"

MateriaSource::MateriaSource() : _numLearnedMaterias(0) {
	for (int i  = 0; i < 4; i++) {
		_learnedMaterias[i] = NULL;
	}
	std::cout << GR "MateriaSource" R " Default constructor called" << std::endl;
}


MateriaSource::MateriaSource(const MateriaSource & other) : _numLearnedMaterias(other._numLearnedMaterias) {
	for (int i = 0; i < _numLearnedMaterias; i++) {
		_learnedMaterias[i] = other._learnedMaterias[i]->clone();
	}
	std::cout << Y "MateriaSource" R " Copy constructor called" << std::endl;
}


MateriaSource& MateriaSource::operator=(const MateriaSource & other)
{
	std::cout << M "MateriaSource" R " Copy assigment operator called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < _numLearnedMaterias; i++) {
			delete _learnedMaterias[i];						// Deleting exsting materias before assigning
		}
		for (int i = 0; i < _numLearnedMaterias; i++) {
			_learnedMaterias[i] = other._learnedMaterias[i]; // Copy the learned materias
		}
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < _numLearnedMaterias; i++) {
		delete _learnedMaterias[i];
	}
	std::cout << RD "MateriaSource" R " Default destructor called" << std::endl;		
}

void MateriaSource::learnMateria(AMateria* materia) {

	if (materia) {
		if (_numLearnedMaterias <= 4) {
			_learnedMaterias[_numLearnedMaterias++] = materia->clone();
		} else {
			std::cout << "Cannot learn more Materias. MateriaSource is full." << std::endl;
			return;
		}
	} else {
		std::cout << "Your AMateria is empty , can't learn new Materia" << std::endl;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	if (type.compare("ice") == false || type.compare("cure") == false) {
		if (_numLearnedMaterias <= 4) {
			for (int i = 0; i < _numLearnedMaterias; i++) {
				if (_learnedMaterias[i]->getType() == type) {
					return (_learnedMaterias[i]->clone());
				}
			}
		} else {
			std::cout << "Too many materias , should be not more than 4" << std::endl;
			return 0;
		}
	} else {
		std::cout << RD "Unknown" R " type of Materia, try one more time" << std::endl;
		return 0;
	}
	return (NULL);
}