/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:11:33 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/22 19:49:02 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Ice.hpp"

Ice::Ice() {
	_type = "ice";
	// std::cout << GR "Ice" R " Default constructor called" << std::endl;
}

Ice::Ice(std::string const & type) {
	_type = type;
	_type = "ice";
	// std::cout << BL "Ice" R " String constructor called" << std::endl;
}

Ice::Ice(const Ice & other) {
	*this = other;
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
	std::cout << "* shoots an ice bolt at " BL << target.getName() <<  R " *" << std::endl;
}
