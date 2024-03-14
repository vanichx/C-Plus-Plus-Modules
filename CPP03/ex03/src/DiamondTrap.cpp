/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:52:03 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/14 15:56:25 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
    _name = "NoName_clap_name";
    _hit_points = FlagTrap::_hit_points;
    _energypoints = ScavTrap::_energypoints;
    _attackpoints = FlagTrap::_attackpoints;
    std::cout << GR "Default constructor for DiamondTrap called" R << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) {
    _name = name + "_clap_name";
    _hit_points = FlagTrap::_hit_points;
    _energypoints = ScavTrap::_energypoints;
    _attackpoints = FlagTrap::_attackpoints;
    std::cout << GR BLD "String constructor for DiamondTrap called" R << std::endl;
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
    std::cout << "Copy assigment operator for DiamondTrap called" << std::endl;
    return(*this);
}

DiamondTrap::~DiamondTrap() {
    std::cout << RD BLD "Destructor for DiamondTrap called" R << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name: "BL << _name << R " and: " BL << ClapTrap::_name << std::endl;
}
