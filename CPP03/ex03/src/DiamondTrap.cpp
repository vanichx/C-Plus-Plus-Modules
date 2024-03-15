/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:52:03 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/15 16:12:58 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	_name = "NoName";
	_hit_points = FlagTrap::_hit_points;
	_energypoints = ScavTrap::_energypoints;
	_attackpoints = FlagTrap::_attackpoints;
	ClapTrap::_name = _name + "_clap_name";
	std::cout << "Default constructor for DiamondTrap - " GR << _name << R " called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) {
	_name = name;
	_hit_points = FlagTrap::_hit_points;
	_energypoints = ScavTrap::_energypoints;
	_attackpoints = FlagTrap::_attackpoints;
	ClapTrap::_name = name + "_clap_name";
	std::cout << "String  constructor for DiamondTrap - " GR BLD << _name << R " called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) {
	*this = other;
	std::cout << GR "Copy constructor for DiamondTrap called" R << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energypoints = other._energypoints;
	this->_attackpoints = other._attackpoints;
	ClapTrap::_name = _name + "_clap_name";
	std::cout << "Copy assigment operator for DiamondTrap called" << std::endl;
	return(*this);
}

DiamondTrap::~DiamondTrap() {
	std::cout << R "Destructor for DiamondTrap - " RD BLD  << _name << R " called" << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap name: " BL << _name << R " and: " BL << ClapTrap::_name << std::endl;
}
