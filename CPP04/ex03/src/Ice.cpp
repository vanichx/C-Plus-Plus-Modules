/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:11:33 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/24 17:41:17 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Ice.hpp"

Ice::Ice() : AMateria("ice") {
	this->_type = "ice";
	// std::cout << GR "Ice" R " Default constructor called" << std::endl;
}

Ice::Ice(const Ice & otherMateria) : AMateria(otherMateria.getType()) {
	this->_type = otherMateria.getType();
	// std::cout << Y "Ice" R " Copy constructor called" << std::endl;
}

Ice& Ice::operator=(const Ice & other)
{
	// std::cout << M "Ice" R " Copy assigment operator called" << std::endl;
	if (this != &other)
	{
		_type = other.getType();
	}
	return *this;
}

Ice::~Ice() {
	// std::cout << RD "Ice" R " Default destructor called" << std::endl;
}

Ice *Ice::clone() const {
	return new Ice(*this);
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " GR << target.getName() <<  R " *" << std::endl;
}
