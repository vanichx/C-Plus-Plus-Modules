/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:56:04 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/21 16:50:59 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AMateria.hpp"

AMateria::AMateria() : _type("Default") {
	std::cout << GR "Default constructor for AMateria called" R << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type) {
	std::cout << BL "String constructor for AMateria called" R << std::endl;
}

AMateria::AMateria(const AMateria & other) : _type(other._type) {
	*this = other;
	std::cout << M "Copy constructor for AMateria called" R << std::endl;
}


AMateria &AMateria::operator=(const AMateria& other) {
	std::cout << "Copy assigment operator for AMateria called" << std::endl;
	if (this != &other) {
		this->_type = other._type;
	}
	return (*this);
}


AMateria::~AMateria() {
	std::cout << RD "Default destructor called" R << std::endl;
}