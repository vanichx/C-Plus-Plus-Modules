/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:43:59 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/12 17:05:12 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap() {
	this->_name = "NoName";
    this->_hit_points = 100;
    this->_energypoints = 50;
    this->_attackpoints = 20;
    std::cout << GR "Default constructor for ScavTrap called" R << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
	_name = name;
    _hit_points = 100;
    _energypoints = 10;
    _attackpoints = 0;
    std::cout << GR BLD "String constructor for ScavTrap called" R << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) {
    *this = other;
    std::cout << Y "Copy constructor for ScavTrap called" R << std::endl;
}

ScavTrap::~ScavTrap() {
	 std::cout << RD BLD "Destructor for ScavTrap called" R << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << _name << " is now in" << BL " Gate keeper " R "mode" << std::endl;
}


void ScavTrap::attack(const std::string& target) {
    if (_hit_points <= 0){
        std::cout << "ScavTrap " << _name << RD " is dead" R << std::endl;
        return;
    } else if (_energypoints <= 0) {
        std::cout << "ScavTrap " << _name << RD " is out of energy points!" R << std::endl;
        return;
    } else {
        std::cout << "ScavTrap " GR << this->_name << R " attacks " RD << target << R ", causing " RD << _attackpoints << R " points of damage!" << std::endl;
        _energypoints--;
    }
}
