/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:28:49 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/22 15:56:25 by ipetruni         ###   ########.fr       */
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
		if (_numLearnedMaterias < 4) {
			_learnedMaterias[_numLearnedMaterias++] = materia;
		} else {
			std::cout << "Cannot learn more Materias. MateriaSource is full." << std::endl;
		}
	} else {
		std::cout << "Your AMateria is empty , can't learn new Materia" << std::endl;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < _numLearnedMaterias; i++) {
		if (_learnedMaterias[i]->getType() == type) {
			return (_learnedMaterias[i]->clone());
		}
	}
	std::cout << "Unknown type of Materia..." << std::endl;
	return (NULL);
}