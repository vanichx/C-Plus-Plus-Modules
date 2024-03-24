/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:56:04 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/24 16:05:12 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AMateria.hpp"

AMateria::AMateria() : _type("Default") {
	// std::cout << GR "AMateria" R " Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type) {
	// std::cout << BL "AMateria" R " String constructor called" << std::endl;
}

AMateria::AMateria(const AMateria & other) : _type(other._type) {
	*this = other;
	// std::cout << Y "AMateria" R " Copy constructor called" << std::endl;
}


AMateria& AMateria::operator=(const AMateria & other)
{
	// std::cout << M "AMateria" R " Copy assigment operator called" << std::endl;
	if (this != &other)
	{
		_type = other._type;
	}
	return *this;
}

AMateria::~AMateria() {
	// std::cout << RD "AMateria" R " Default destructor called" << std::endl;
}

std::string const & AMateria::getType() const {
	return (this->_type);
}

void AMateria::use(ICharacter& target) {
	std::cout << Y "AMateria " R " use method called on target " << target.getName() << std::endl;
}