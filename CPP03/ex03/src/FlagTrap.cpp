/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 20:38:21 by ivanpetruni       #+#    #+#             */
/*   Updated: 2024/03/15 16:13:03 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FlagTrap.hpp"

FlagTrap::FlagTrap() {
	_name = "NoName";
	_hit_points = 100;
	_energypoints = 100;
	_attackpoints = 30;
	std::cout << "Default constructor for FlagTrap - " GR << _name << R " called" << std::endl;
}

FlagTrap::FlagTrap(const std::string& name) {
	_name = name;
	_hit_points = 100;
	_energypoints = 100;
	_attackpoints = 30;
	std::cout << "String  constructor for FlagTrap - " GR BLD << _name << R " called" << std::endl;
}

FlagTrap::FlagTrap(const FlagTrap &other) {
	*this = other;
	std::cout << "Copy constructor for FlagTrap - " GR << _name << R " called" << std::endl;
}

FlagTrap &FlagTrap::operator=(const FlagTrap& other) {
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energypoints = other._energypoints;
	this->_attackpoints = other._attackpoints;
	std::cout << "Copy assigment operator for FlagTrap called" << std::endl;
	return(*this);
}

FlagTrap::~FlagTrap() {
	std::cout << "Destructor for FlagTrap - " RD BLD << _name << R " called" << std::endl;
}

void FlagTrap::highFivesGuys(void) {
	std::cout << M "Give me some high fives! 🙌" R << std::endl;
}