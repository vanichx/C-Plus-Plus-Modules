/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:43:59 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/13 21:06:53 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap() {
	_name = "NoName";
    _hit_points = 100;
    _energypoints = 50;
    _attackpoints = 20;
    std::cout << GR "Default constructor for ScavTrap called" R << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
	_name = name;
    _hit_points = 100;
    _energypoints = 50;
    _attackpoints = 20;
    std::cout << GR BLD "String constructor for ScavTrap called" R << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) {
    *this = other;
    std::cout << Y "Copy constructor for ScavTrap called" R << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& other) {
    this->_name = other._name;
    this->_hit_points = other._hit_points;
    this->_energypoints = other._energypoints;
    this->_attackpoints = other._attackpoints;
    std::cout << M "Copy assignment operator for ScavTrap called" R << std::endl;
    return(*this);
}

ScavTrap::~ScavTrap() {
	std::cout << RD BLD "Destructor for ScavTrap called" R << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " BL << _name << R " is now in" << BL " Gate keeper " R "mode" << std::endl;
}


void ScavTrap::attack(const std::string& target) {
    if (_hit_points <= 0){
        std::cout << "ScavTrap " BL << _name << RD " is dead" R << std::endl;
        return;
    } else if (_energypoints <= 0) {
        std::cout << "ScavTrap " BL << _name << RD " is out of energy points!" R << std::endl;
        return;
    } else {
        std::cout << "ScavTrap " BL << _name << R " attacks " RD << target << R ", causing " RD << _attackpoints << R " points of damage!" << std::endl;
        _energypoints--;
    }
}
