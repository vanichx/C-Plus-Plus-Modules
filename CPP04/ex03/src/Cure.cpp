/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:12:16 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/21 19:06:48 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cure.hpp"

Cure::Cure() {
	_type = "cure";
	std::cout << GR "Cure" R " Default constructor called" << std::endl;
}

Cure::Cure(std::string const & type) {
	_type = type;
	_type = "cure";
	std::cout << BL "Cure" R " String constructor called" << std::endl;
}

Cure::Cure(const Cure & other) {
	*this = other;
	std::cout << Y "Cure" R " Copy constructor called" << std::endl;
}


Cure& Cure::operator=(const Cure & other)
{
	std::cout << M "Cure" R " Copy assigment operator called" << std::endl;
	if (this != &other)
	{
		_type = other.getType();
	}
	return *this;
}

Cure::~Cure() {
	std::cout << RD "Cure" R " Default destructor called" << std::endl;
}

Cure *Cure::clone() const {
	return (new Cure(*this));
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals" GR << target.getName() << "'s" R " wounds *" << std::endl;
}