/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:28:49 by ipetruni          #+#    #+#             */
/*   Updated: 2024/04/18 14:50:33 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i  = 0; i < 4; i++) {
		_learnedMaterias[i] = 0;
	}
	_numLearnedMaterias = 0;
	// std::cout << GR "MateriaSource" R " Default constructor called" << std::endl;
}


MateriaSource::MateriaSource(const MateriaSource & other) {
	for (int i = 0; i < 4; i++) {
		if (other._learnedMaterias[i])
			this->_learnedMaterias[i] = (other._learnedMaterias[i])->clone();
        else
            this->_learnedMaterias[i] = 0;
    }
	// std::cout << Y "MateriaSource" R " Copy constructor called" << std::endl;
}


MateriaSource& MateriaSource::operator=(const MateriaSource & other)
{
	// std::cout << M "MateriaSource" R " Copy assigment operator called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < _numLearnedMaterias; i++) {
			if (this->_learnedMaterias[i]) {
				delete this->_learnedMaterias[i];
                this->_learnedMaterias[i] = 0;
			}
			if (other._learnedMaterias[i])
				this->_learnedMaterias[i] = other._learnedMaterias[i]->clone();
			else
				this->_learnedMaterias[i] = 0;
		}
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	// std::cout << RD "MateriaSource" R " Default destructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (_learnedMaterias[i])
			delete _learnedMaterias[i];
		_learnedMaterias[i] = 0;
	}
}


void MateriaSource::learnMateria(AMateria* materia) {
	if (!materia) {
		std::cout << "Your AMateria is empty , can't learn new Materia" << std::endl;
		return;
	}
	for (int i = 0; i < 4; i++) {
		if (!this->_learnedMaterias[i]) {
			this->_learnedMaterias[i] = materia;
			// std::cout << _learnedMaterias[i]->getType() << " Materia learned" << std::endl;
			_numLearnedMaterias++;
			return;
		}
	}
	std::cout << "Cannot learn more than 4 Materias..." << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	if (type.compare("ice") == false || type.compare("cure") == false) {
		if (_numLearnedMaterias <= 4) {
			for (int i = 0; i < 4; i++) {
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
	return (0);
}